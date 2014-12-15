from django.db import models
from django.core.validators import MaxValueValidator, MinValueValidator
from orm.models import Project, ProjectLayer, ProjectVariable, ProjectTarget, Build

# a BuildEnvironment is the equivalent of the "build/" directory on the localhost
class BuildEnvironment(models.Model):
    SERVER_STOPPED = 0
    SERVER_STARTED = 1
    SERVER_STATE = (
        (SERVER_STOPPED, "stopped"),
        (SERVER_STARTED, "started"),
    )

    TYPE_LOCAL = 0
    TYPE_SSH   = 1
    TYPE = (
        (TYPE_LOCAL, "local"),
        (TYPE_SSH, "ssh"),
    )

    LOCK_FREE = 0
    LOCK_LOCK = 1
    LOCK_RUNNING = 2
    LOCK_STATE = (
        (LOCK_FREE, "free"),
        (LOCK_LOCK, "lock"),
        (LOCK_RUNNING, "running"),
    )

    address     = models.CharField(max_length = 254)
    betype      = models.IntegerField(choices = TYPE)
    bbaddress   = models.CharField(max_length = 254, blank = True)
    bbport      = models.IntegerField(default = -1)
    bbtoken     = models.CharField(max_length = 126, blank = True)
    bbstate     = models.IntegerField(choices = SERVER_STATE, default = SERVER_STOPPED)
    sourcedir   = models.CharField(max_length = 512, blank = True)
    builddir    = models.CharField(max_length = 512, blank = True)
    lock        = models.IntegerField(choices = LOCK_STATE, default = LOCK_FREE)
    created     = models.DateTimeField(auto_now_add = True)
    updated     = models.DateTimeField(auto_now = True)


    def get_artifact_type(self, path):
        if self.betype == BuildEnvironment.TYPE_LOCAL:
            try:
                import magic

                # fair warning: this is a mess; there are multiple competeing and incompatible
                # magic modules floating around, so we try some of the most common combinations

                try:    # we try ubuntu's python-magic 5.4
                    m = magic.open(magic.MAGIC_MIME_TYPE)
                    m.load()
                    return m.file(path)
                except AttributeError:
                    pass

                try:    # we try python-magic 0.4.6
                    m = magic.Magic(magic.MAGIC_MIME)
                    return m.from_file(path)
                except AttributeError:
                    pass

                try:    # we try pip filemagic 1.6
                    m = magic.Magic(flags=magic.MAGIC_MIME_TYPE)
                    return m.id_filename(path)
                except AttributeError:
                    pass

                return "binary/octet-stream"
            except ImportError:
                return "binary/octet-stream"

    def get_artifact(self, path):
        if self.betype == BuildEnvironment.TYPE_LOCAL:
            return open(path, "r")
        raise Exception("FIXME: not implemented")

# a BuildRequest is a request that the scheduler will build using a BuildEnvironment
# the build request queue is the table itself, ordered by state

class BuildRequest(models.Model):
    REQ_CREATED = 0
    REQ_QUEUED = 1
    REQ_INPROGRESS = 2
    REQ_COMPLETED = 3
    REQ_FAILED = 4
    REQ_DELETED = 5

    REQUEST_STATE = (
        (REQ_CREATED, "created"),
        (REQ_QUEUED, "queued"),
        (REQ_INPROGRESS, "in progress"),
        (REQ_COMPLETED, "completed"),
        (REQ_FAILED, "failed"),
        (REQ_DELETED, "deleted"),
    )

    project     = models.ForeignKey(Project)
    build       = models.OneToOneField(Build, null = True)     # TODO: toasterui should set this when Build is created
    environment = models.ForeignKey(BuildEnvironment, null = True)
    state       = models.IntegerField(choices = REQUEST_STATE, default = REQ_CREATED)
    created     = models.DateTimeField(auto_now_add = True)
    updated     = models.DateTimeField(auto_now = True)


# These tables specify the settings for running an actual build.
# They MUST be kept in sync with the tables in orm.models.Project*

class BRLayer(models.Model):
    req         = models.ForeignKey(BuildRequest)
    name        = models.CharField(max_length = 100)
    giturl      = models.CharField(max_length = 254)
    commit      = models.CharField(max_length = 254)
    dirpath     = models.CharField(max_length = 254)

class BRBitbake(models.Model):
    req         = models.ForeignKey(BuildRequest, unique = True)    # only one bitbake for a request
    giturl      = models.CharField(max_length =254)
    commit      = models.CharField(max_length = 254)
    dirpath     = models.CharField(max_length = 254)

class BRVariable(models.Model):
    req         = models.ForeignKey(BuildRequest)
    name        = models.CharField(max_length=100)
    value       = models.TextField(blank = True)

class BRTarget(models.Model):
    req         = models.ForeignKey(BuildRequest)
    target      = models.CharField(max_length=100)
    task        = models.CharField(max_length=100, null=True)

class BRError(models.Model):
    req         = models.ForeignKey(BuildRequest)
    errtype     = models.CharField(max_length=100)
    errmsg      = models.TextField()
    traceback   = models.TextField()
