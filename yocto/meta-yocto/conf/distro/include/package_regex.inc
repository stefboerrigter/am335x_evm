# package_regex.inc - This file contains data that tracks
# upstream project associated with a given recipe. This list is needed
# for recipes that version information can not be automagically discovered.
# As we automate this checking, this file will slowly be reduced.
#"
# This data is used by the package reporting system (packages.yoctoproject.org)
#"
# The format is as a bitbake variable override for each recipe
#"
#       REGEX_URI_pn-<recipe name> = "recipe_url"
#	 - This is the url used by the package checking system to
#	   get the latest version of the package
#       REGEX_pn-<recipe name> = "package_regex"
#	 - This is the regex the package checking system uses to
#	   parse the page found at REGEX_URI_pn-<recipe name>
#
COMMON_REGEX = "((\d+[\.\-_]*)+)"
#This will need to be changed a little bit when versions are bigger than 9.
REGEX_URI_pn-acpid = "http://sourceforge.net/projects/acpid2/files/"
REGEX_pn-acpid = "/projects/acpid2/files/(acpid\-)?(?P<pver>(\d\.(\d+[\.\-_]*)+)).tar.xz/"
REGEX_URI_pn-adt-installer = "http://code.google.com/p/opkg/downloads/list"
REGEX_URI_pn-arptables = "http://sourceforge.net/projects/ebtables/files/arptables/"
REGEX_pn-arptables = "/projects/ebtables/files/arptables/arptables-v(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-beecrypt = "http://sourceforge.net/projects/beecrypt/files/beecrypt/"
REGEX_pn-beecrypt = "/projects/beecrypt/files/beecrypt/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-beecrypt-native = "http://sourceforge.net/projects/beecrypt/files/beecrypt/"
REGEX_pn-beecrypt-native = "/projects/beecrypt/files/beecrypt/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-bdwgc = "http://www.hboehm.info/gc/gc_source/"
REGEX_pn-bdwgc = "gc\-(?P<pver>((\d+[a-z]?[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-bind = "ftp://ftp.isc.org/isc/bind9/"
REGEX_pn-bind = "(?P<pver>((P?\d+[\.\-_]*)+))/"
REGEX_URI_pn-bjam-native = "http://sourceforge.net/projects/boost/files/boost/"
REGEX_pn-bjam-native = "/projects/boost/files/boost/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_pn-blktool = "blktool_(?P<pver>((\d+[\.\-_]*)+))\.(diff|orig\.tar)\.gz"
REGEX_URI_pn-boost = "http://sourceforge.net/projects/boost/files/boost/"
REGEX_pn-boost = "/projects/boost/files/boost/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_pn-btrfs-tools = "(?P<pver>(\d+(\.\d+)*(\-rc\d+)*))"
REGEX_pn-build-appliance-image = "(?P<pver>([0-9][\.|_]?)+)$"
REGEX_URI_pn-bzip2 = "http://www.bzip.org/downloads.html"
REGEX_pn-chkconfig-alternatives-native = "chkconfig\-(?P<pver>((\d+[\.\-_]*)+))"
REGEX_URI_pn-chrpath = "http://alioth.debian.org/frs/?group_id=31052"
REGEX_pn-chrpath = "/frs/download.php/file/\d+/chrpath-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_pn-cmake = "cmake\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_pn-cmake-native = "cmake\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_pn-nativeesdk-cmake = "cmake\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-console-tools = "http://sourceforge.net/projects/lct/files/console-tools-devel/"
REGEX_pn-console-tools = "/projects/lct/files/console-tools-devel/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-cracklib = "http://sourceforge.net/projects/cracklib/files/cracklib/"
REGEX_pn-cracklib = "/projects/cracklib/files/cracklib/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-createrepo = "http://createrepo.baseurl.org/download/"
REGEX_pn-createrepo = "createrepo\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-createrepo-native = "http://createrepo.baseurl.org/download/"
REGEX_pn-createrepo-native = "createrepo\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-cups = "http://www.cups.org/software.php"
REGEX_pn-cups = "cups\-(?P<pver>((\d+[\.\-_]*)+))\-source\.tar\.gz"
REGEX_URI_pn-curlpp = "http://code.google.com/p/curlpp/downloads/list"
REGEX_URI_pn-cwautomacros = "http://sourceforge.net/projects/cwautomacros.berlios/files/"
REGEX_pn-cwautomacros = "http://sourceforge.net/projects/cwautomacros.berlios/files/cwautomacros\-(?P<pver>(\d+))\.tar\.bz2\/download"
REGEX_URI_pn-cwautomacros-native = "http://sourceforge.net/projects/cwautomacros.berlios/files/"
REGEX_pn-cwautomacros-native = "http://sourceforge.net/projects/cwautomacros.berlios/files/cwautomacros\-(?P<pver>(\d+))\.tar\.bz2\/download"
REGEX_URI_pn-db = "http://www.oracle.com/technetwork/products/berkeleydb/downloads/index-082944.html"
REGEX_pn-db = "http://download.oracle.com/otn/berkeley-db/db-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-db-native = "http://www.oracle.com/technetwork/products/berkeleydb/downloads/index-082944.html"
REGEX_pn-db-native = "http://download.oracle.com/otn/berkeley-db/db-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-nativesdk-db = "http://www.oracle.com/technetwork/products/berkeleydb/downloads/index-082944.html"
REGEX_pn-nativesdk-db = "http://download.oracle.com/otn/berkeley-db/db-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-distcc = "http://code.google.com/p/distcc/downloads/list"
REGEX_pn-distcc = "//distcc.googlecode.com/files/distcc-(?P<pver>((\d+[\.\-_]*)+))\.tar\.bz2"
REGEX_URI_pn-docbook-dsssl-stylesheets-native = "http://sourceforge.net/projects/docbook/files/docbook-dsssl/"
REGEX_pn-docbook-dsssl-stylesheets-native = "/projects/docbook/files/docbook-dsssl/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-docbook-sgml-dtd-3.1-native = "http://docbook.org/sgml/3.1/"
REGEX_URI_pn-docbook-sgml-dtd-4.1-native = "http://docbook.org/sgml/4.1/"
REGEX_URI_pn-docbook-sgml-dtd-4.5-native = "http://docbook.org/sgml/4.5/"
REGEX_URI_pn-e2fsprogs = "http://sourceforge.net/projects/e2fsprogs/files/e2fsprogs/"
REGEX_pn-e2fsprogs = "/projects/e2fsprogs/files/e2fsprogs/v(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_pn-elfutils = "(elfutils\-)?(?P<pver>((\d+[\.\-_]*)+))(/|\.tar\.bz2)"
REGEX_URI_pn-expat = "http://sourceforge.net/projects/expat/files/expat/"
REGEX_pn-expat-native = "/projects/expat/files/expat/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-expat-native = "http://sourceforge.net/projects/expat/files/expat/"
REGEX_pn-expat = "/projects/expat/files/expat/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-nativesdk-expat = "http://sourceforge.net/projects/expat/files/expat/"
REGEX_pn-nativesdk-expat = "/projects/expat/files/expat/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-fetchmail = "http://sourceforge.net/projects/fetchmail.berlios/files/"
REGEX_URI_pn-flex = "http://sourceforge.net/projects/flex/files/"
REGEX_pn-flex = "http://sourceforge.net/projects/flex/files/flex-(?P<pver>((\d+[\.\-_]*)+)).tar.gz/download"
REGEX_pn-foomatic-filters = "foomatic-filters-(?P<pver>((\d|\d\d)\.*)+)\.tar\.gz"
REGEX_URI_pn-fotowall = "https://code.google.com/p/fotowall/downloads/list"
REGEX_pn-fotowall = "//fotowall.googlecode.com/files/[F|f]otowall\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.bz2"
REGEX_URI_pn-freetype = "http://sourceforge.net/projects/freetype/files/freetype2"
REGEX_pn-freetype = "/projects/freetype/files/freetype\d/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-freetype-native = "http://sourceforge.net/projects/freetype/files/freetype2"
REGEX_pn-freetype-native = "/projects/freetype/files/freetype\d/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-glew = "http://sourceforge.net/projects/glew/files/glew"
REGEX_pn-glew  = "/projects/glew/files/glew/(?P<pver>((\d+[\.\-_]*)+))/"
#REGEX_pn-gnutls = "ftp://ftp.gnutls.org/gcrypt/gnutls/"
REGEX_pn-gstreamer = "gstreamer\-(?P<pver>(0\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gstreamer1.0 = "gstreamer\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gst-ffmpeg = "gst-ffmpeg\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gst-fluendo-mpegdemux = "gst-fluendo-mpegdemux\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gst-fluendo-mp3 = "gst-fluendo-mp3\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gstreamer1.0-plugins-base = "gst\-plugins\-base\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gst-plugins-base = "gst\-plugins\-base\-(?P<pver>(0\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gstreamer1.0-plugins-bad = "gst\-plugins\-bad\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gst-plugins-bad = "gst\-plugins\-bad\-(?P<pver>(0\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gst-plugins-gl = "gst\-plugins\-gl\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gstreamer1.0-plugins-good = "gst\-plugins\-good\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gst-plugins-good = "gst\-plugins\-good\-(?P<pver>(0\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gstreamer1.0-libav = "gst\-libav\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gstreamer1.0-omx = "gst\-omx\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gst-openmax = "gst\-openmax\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gstreamer1.0-plugins-ugly = "gst\-plugins\-ugly\-(?P<pver>(\d+\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gst-plugins-ugly = "gst\-plugins\-ugly\-(?P<pver>(0\.\d*[0|2|4|6|8]\.\d+))\.tar\.(gz|xz|bz2)"
REGEX_pn-gtk+ = "gtk\+\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.xz"
REGEX_pn-gtk+3 = "gtk\+\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.xz"
REGEX_pn-gtk-update-icon-cache-native = "gtk\+\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.xz"
REGEX_pn-webkit-gtk = "webkitgtk\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.xz"
REGEX_URI_pn-hdparm = "http://sourceforge.net/projects/hdparm/files/hdparm/"
REGEX_pn-hdparm = "http://sourceforge.net/projects/hdparm/files/hdparm/hdparm-(?P<pver>((\d+[\.\-_]*)+)).tar.gz/download"
REGEX_URI_pn-intltool = "https://launchpad.net/intltool/+download"
REGEX_pn-intltool = "https://launchpad.net/intltool/trunk/(?P<pver>((\d+[\.\-_]*)+))/\+download/intltool\-(\d+[\.\-_]*)+\.tar\.gz"
REGEX_URI_pn-intltool-native = "https://launchpad.net/intltool/+download"
REGEX_pn-intltool-native = "https://launchpad.net/intltool/trunk/(?P<pver>((\d+[\.\-_]*)+))/\+download/intltool\-(\d+[\.\-_]*)+\.tar\.gz"
REGEX_URI_pn-irda-utils = "http://sourceforge.net/projects/irda/files/irda-utils/"
REGEX_pn-irda-utils = "/projects/irda/files/irda-utils/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_pn-iputils = "iputils\-(?P<pver>(s\d+))\.tar\.bz2"
REGEX_URI_pn-jpeg = "http://www.ijg.org/files/"
REGEX_pn-jpeg = "jpegsrc.v(?P<pver>((\d+[a-z]*\d*)+))\.tar\.gz"
REGEX_URI_pn-js = "http://ftp.mozilla.org/pub/mozilla.org/js/"
REGEX_pn-js = "js-?(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-json-c = "https://github.com/json-c/json-c/releases"
REGEX_pn-json-c = "json-c-(?P<pver>(\d+[\.\-_]*)+)-\d\d\d\d\d\d\d\d\.tar\.gz"
REGEX_URI_pn-lame = "http://sourceforge.net/projects/lame/files/lame/"
REGEX_pn-lame = "/projects/lame/files/lame/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-less  = "http://www.greenwoodsoftware.com/less/download.html"
REGEX_pn-less = "less\-(?P<pver>(\d+))\.tar\.gz"
REGEX_URI_pn-liba52 = "http://liba52.sourceforge.net/downloads.html"
REGEX_pn-liba52 = "/files/a52\w*\-(?P<pver>((\d+[a-z]?[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-libacpi = "http://www.ngolde.de/libacpi.html"
REGEX_URI_pn-libaio = "http://ftp.debian.org/debian/pool/main/liba/libaio/"
REGEX_pn-libaio = "libaio_(?P<pver>((\d+[\.\-_]*)+)).orig.tar.gz"
REGEX_URI_pn-libarchive = "http://www.libarchive.org/"
REGEX_pn-libarchive = "downloads/libarchive\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-libcgroup = "http://sourceforge.net/projects/libcg/files/libcgroup/"
#REGEX_pn-libcgroup = "/projects/libcg/files/libcgroup/v?(?P<pver>((\.?\d+[\.\-_]*)+(rc\d?)*)+)/"
REGEX_pn-libcgroup = "/projects/libcg/files/libcgroup/v?(?P<pver>((\.?\d+[\.\-_]*))+)/"
REGEX_URI_pn-libcheck = "http://sourceforge.net/projects/check/files/check/"
REGEX_pn-libcheck = "/projects/check/files/check/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-libdnet = "http://code.google.com/p/libdnet/downloads/list"
#REGEX_URI_pn-libevent = "http://sourceforge.net/projects/levent/files/libevent/libevent-2.0/"
REGEX_URI_pn-libevent = "http://libevent.org/"
#REGEX_pn-libevent = "http://sourceforge.net/projects/levent/files/libevent/libevent-2.0/libevent-(?P<pver>((\d+[\.\-_]*)+))\-stable\.tar\.gz/download"
REGEX_pn-libevent = "https://github.com/downloads/libevent/libevent/libevent-(?P<pver>((\d+[\.\-_]*)+))\-stable\.tar\.gz"
REGEX_URI_pn-libexif = "http://sourceforge.net/projects/libexif/files/libexif/"
REGEX_pn-libexif = "/projects/libexif/files/libexif/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_pn-libffi = "libffi\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_pn-libffi-native = "ftp://sourceware.org:21/pub/libffi/libffi\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_pn-nativesdk-libffi = "ftp://sourceware.org:21/pub/libffi/libffi\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-libfm = "http://sourceforge.net/projects/pcmanfm/files/PCManFM%20%2B%20Libfm%20%28tarball%20release%29/PCManFM/"
REGEX_pn-libfm = "pcmanfm-(?P<pver>((\d+[\.\-_]*)+)).tar.xz/download$"
REGEX_URI_pn-libical = "https://github.com/libical/libical/releases"
REGEX_pn-libical = "/releases/tag/v(?P<pver>((\d+[\.\-_]*)+))"
REGEX_URI_pn-libid3tag = "http://sourceforge.net/projects/mad/files/libid3tag/"
REGEX_pn-libid3tag = "/projects/mad/files/libid3tag/(?P<pver>((\d+[\.\-_]*)+([a-z]?)))/"
REGEX_URI_pn-libmad = "http://sourceforge.net/projects/mad/files/libmad/"
REGEX_pn-libmad = "/projects/mad/files/libmad/(?P<pver>((\d+[\.\-_]*)+([a-z]?)))/"
REGEX_URI_pn-libogg = "http://downloads.xiph.org/releases/ogg/"
REGEX_pn-libogg = "libogg\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-libmpc = "http://www.multiprecision.org/index.php?prog=mpc&page=download"
REGEX_URI_pn-libomxil = "http://sourceforge.net/projects/omxil/files/omxil/"
REGEX_pn-libomxil = "/projects/omxil/files/omxil/Bellagio.20(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-libpcap = "http://www.tcpdump.org/release/"
REGEX_pn-libpcap = "libpcap-(?P<pver>((\d+[\.\-_]*)+)).tar.gz"
REGEX_URI_pn-libpcre = "http://sourceforge.net/projects/pcre/files/pcre/"
REGEX_pn-libpcre = "/projects/pcre/files/pcre/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-libpcre-native = "http://sourceforge.net/projects/pcre/files/pcre/"
REGEX_pn-libpcre-native = "/projects/pcre/files/pcre/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-libpfm4 = "http://sourceforge.net/projects/perfmon2/files/libpfm4/"
REGEX_URI_pn-libpng = "http://sourceforge.net/projects/libpng/files/libpng16/"
REGEX_pn-libpng = "/projects/libpng/files/libpng16/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-libpng-native = "ftp://ftp.simplesystems.org/pub/libpng/png/src/"
REGEX_pn-libpng-native = "ftp://ftp.simplesystems.org:21/pub/libpng/png/src/libpng-(?P<pver>((\d+[\.\-_]*)+)).tar.gz"
REGEX_URI_pn-libpng12 = "http://sourceforge.net/projects/libpng/files/libpng12/"
REGEX_pn-libpng12 = "/projects/libpng/files/libpng12/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-libproxy = "http://code.google.com/p/libproxy/downloads/list"
REGEX_pn-libtheora = "libtheora\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-libsamplerate0 = "http://www.mega-nerd.com/SRC/download.html"
REGEX_pn-libsamplerate0 = "libsamplerate\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-libtirpc = "http://sourceforge.net/projects/libtirpc/files/libtirpc/"
REGEX_pn-libtirpc = "/projects/libtirpc/files/libtirpc/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-libusb-compat = "http://sourceforge.net/projects/libusb/files/libusb-compat-0.1/"
REGEX_pn-libusb-compat = "/projects/libusb/files/libusb-compat-0.1/libusb-compat-(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-libusb1 = "http://sourceforge.net/projects/libusb/files/libusb-1.0/"
REGEX_pn-libusb1 = "/projects/libusb/files/libusb-1.0/libusb-(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-libvorbis = "http://downloads.xiph.org/releases/vorbis/"
REGEX_pn-libvorbis = "libvorbis-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_pn-libxslt = "libxslt\-(?P<pver>((\d+\.*)+))\.tar\.gz"
REGEX_pn-linux-libc-headers-yocto = "v((?P<pver>((\d+[\.\-_]*)+)))"
REGEX_URI_pn-lrzsz = "http://ohse.de/uwe/software/lrzsz.html"
REGEX_URI_pn-lsb = "http://sourceforge.net/projects/lsb/files/lsb_release/"
REGEX_pn-lsb = "/projects/lsb/files/lsb_release/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-lsbinitscripts = "http://pkgs.fedoraproject.org/repo/pkgs/initscripts/"
REGEX_pn-lsbinitscripts = "initscripts\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.bz2/"
REGEX_URI_pn-ltp = "http://sourceforge.net/projects/ltp/files/LTP%20Source"
REGEX_pn-ltp = "/projects/ltp/files/LTP%20Source/ltp\-(?P<pver>(\d+))/"
REGEX_URI_pn-lzop = "http://www.lzop.org/download/"
REGEX_pn-lzop = "lzop\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-lzop-native = "http://www.lzop.org/download/"
REGEX_pn-lzop-native = "lzop\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-nativesdk-lzop = "http://www.lzop.org/download/"
REGEX_pn-nativesdk-lzop = "lzop\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-memcached = "http://code.google.com/p/memcached/downloads/list"
REGEX_URI_pn-menu-cache = "http://sourceforge.net/projects/lxde/files/menu-cache/"
REGEX_pn-menu-cache = "/projects/lxde/files/menu\-cache/menu-cache%20(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_pn-mesa = "MesaLib-(?P<pver>((\d+[\.\-_]*)+))(\-rc\d+)*.tar.gz"
REGEX_URI_pn-mesa-glsl-native = "ftp://ftp.freedesktop.org/pub/mesa/"
REGEX_pn-mesa-glsl-native = "ftp://ftp.freedesktop.org:21/pub/mesa/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-minicom = "https://alioth.debian.org/frs/?group_id=30018"
REGEX_pn-minicom = "/frs/download.php/file/\d+/minicom\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-mingetty = "http://sourceforge.net/projects/mingetty/files/mingetty"
REGEX_pn-mingetty = "/projects/mingetty/files/mingetty/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-mpeg2dec = "http://libmpeg2.sourceforge.net/downloads.html"
REGEX_pn-mpeg2dec = "/files/mpeg2dec-(?P<pver>((\d+[\.\-_]*)+)).tar.gz"
REGEX_URI_pn-mpfr = "http://ftp.gnu.org/gnu/mpfr/"
REGEX_pn-mpfr = "mpfr-(?P<pver>((\d+[\.\-_]*)+)).tar.gz"
REGEX_URI_pn-mpfr-native = "http://ftp.gnu.org/gnu/mpfr/"
REGEX_pn-mpfr-native = "mpfr-(?P<pver>((\d+[\.\-_]*)+)).tar.gz"
REGEX_URI_pn-msmtp = "http://sourceforge.net/projects/msmtp/files/msmtp/"
REGEX_pn-msmtp = "/projects/msmtp/files/msmtp/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-nativesdk-mpfr = "http://ftp.gnu.org/gnu/mpfr/"
REGEX_pn-nativesdk-mpfr = "mpfr-(?P<pver>((\d+[\.\-_]*)+)).tar.gz"
REGEX_URI_pn-net-snmp = "http://sourceforge.net/projects/net-snmp/files/net-snmp/"
REGEX_pn-net-snmp = "/projects/net-snmp/files/net-snmp/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-netcat = "http://sourceforge.net/projects/netcat/files/netcat/"
REGEX_pn-netcat = "/projects/netcat/files/netcat/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-nfs-utils = "http://sourceforge.net/projects/nfs/files/nfs-utils/"
REGEX_pn-nfs-utils = "/projects/nfs/files/nfs-utils/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-ocf-linux = "http://sourceforge.net/projects/ocf-linux/files/ocf-linux/"
REGEX_pn-ocf-linux = "/projects/ocf-linux/files/ocf-linux/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-openjade-native = "http://sourceforge.net/projects/openjade/files/openjade/"
REGEX_pn-openjade-native = "/projects/openjade/files/openjade/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-opensp = "http://sourceforge.net/projects/openjade/files/opensp/"
REGEX_pn-opensp = "/projects/openjade/files/opensp/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-opensp-native = "http://sourceforge.net/projects/openjade/files/opensp/"
REGEX_pn-opensp-native = "/projects/openjade/files/opensp/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-oprofile = "http://sourceforge.net/projects/oprofile/files/oprofile/"
REGEX_pn-oprofile = "/projects/oprofile/files/oprofile/oprofile-(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-ossp-uuid = "http://code.google.com/p/gnome-build-stage-1/downloads/list"
REGEX_URI_pn-pcmanfm = "http://sourceforge.net/projects/pcmanfm/files/PCManFM%20%2B%20Libfm%20%28tarball%20release%29/PCManFM/"
REGEX_pn-pcmanfm = "http://sourceforge.net/projects/pcmanfm/files/PCManFM.20.2B.20Libfm.20.28tarball.20release.29/PCManFM/pcmanfm-(?P<pver>((\d+[\.\-_]*)+)).tar.gz/download"
REGEX_URI_pn-procps = "http://procps.sourceforge.net/download.html"
REGEX_pn-procps = "procps\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-powertop = "https://01.org/powertop/downloads"
REGEX_URI_pn-pptp-linux = "http://sourceforge.net/projects/pptpclient/files/pptp/"
REGEX_pn-pptp-linux = "/projects/pptpclient/files/pptp/pptp-(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_pn-prelink = "(?P<pver>cross_prelink)"
REGEX_URI_pn-psmisc = "http://sourceforge.net/projects/psmisc/files/psmisc/"
REGEX_pn-psmisc = "http://sourceforge.net/projects/psmisc/files/psmisc/psmisc\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz/download"
REGEX_URI_pn-ptpd = "http://sourceforge.net/projects/ptpd/files/ptpd/"
REGEX_pn-ptpd = "/projects/ptpd/files/ptpd/(?P<pver>((\d+[\.\-_]*)+))/stats/timeline"
REGEX_URI_pn-python-argparse = "https://code.google.com/p/argparse/downloads/list"
REGEX_URI_pn-python-docutils = "http://sourceforge.net/projects/docutils/files/docutils/"
REGEX_pn-python-docutils = "/projects/docutils/files/docutils/(?P<pver>((\d+[\.\-_]*)+)).*/"
REGEX_URI_pn-python-numpy = "http://sourceforge.net/projects/numpy/files/NumPy/"
REGEX_pn-python-numpy = "/projects/numpy/files/NumPy/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-python-pycurl = "http://pycurl.sourceforge.net/download/"
REGEX_pn-python-pycurl = "pycurl-(?P<pver>((\d+[\.\-_]*)+)).tar.gz"
REGEX_URI_pn-python-scons = "http://sourceforge.net/projects/scons/files/scons/"
REGEX_pn-python-scons = "/projects/scons/files/scons/(?P<pver>((\d+[\.\-_]*)+)).*/"
REGEX_URI_pn-python-scons-native = "http://sourceforge.net/projects/scons/files/scons/"
REGEX_pn-python-scons-native = "/projects/scons/files/scons/(?P<pver>((\d+[\.\-_]*)+)).*/"
REGEX_pn-python-setuptools = "setuptools\-(?P<pver>((\d+([a-z]\d+)?[\.\-_]*)+))\.(tar\.gz|\.zip)"
REGEX_URI_pn-quota = "http://sourceforge.net/projects/linuxquota/files/quota-tools/"
REGEX_pn-quota = "/projects/linuxquota/files/quota-tools/(?P<pver>((\d+[\.\-_]*)+([-\w\d]+)))/"
REGEX_pn-remake = "(?P<pver>(\d+\.(\d+\.)*\d*(\+dbg\-\d+(\.\d+)*)*))"
REGEX_URI_pn-rpcbind = "http://sourceforge.net/projects/rpcbind/files/rpcbind/"
REGEX_pn-rpcbind = "/projects/rpcbind/files/rpcbind/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_pn-rpm = "rpm\-(?P<pver>((\d+[\.\-_]*)+)\-(\d+[\.]*)+)\.src\.rpm"
REGEX_pn-rpm-native = "rpm\-(?P<pver>((\d+[\.\-_]*)+)\-(\d+[\.]*)+)\.src\.rpm"
REGEX_URI_pn-setserial = "http://sourceforge.net/projects/setserial/files/setserial/"
REGEX_pn-setserial = "/projects/setserial/files/setserial/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_pn-shared-mime-info = "shared\-mime\-info\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.(bz2|gz|xz)"
REGEX_pn-shared-mime-info-native = "shared\-mime\-info\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.(bz2|gz|xz)"
REGEX_URI_pn-socat = "http://www.dest-unreach.org/socat/download/"
REGEX_pn-socat = "socat\-(?P<pver>((\d+[\.\-]*)+))\.tar\.bz2"
REGEX_URI_pn-speex = "http://downloads.us.xiph.org/releases/speex/"
REGEX_pn-speex = "speex\-(?P<pver>((\d+\.*)+)(rc\d)?)\.tar\.gz"
REGEX_URI_pn-sqlite3 = "http://www.sqlite.org/download.html"
REGEX_pn-sqlite3 = "sqlite-autoconf-(?P<pver>(\d+)).tar.gz"
REGEX_URI_pn-sqlite3-native = "http://www.sqlite.org/download.html"
REGEX_pn-sqlite3-native = "/sqlite-autoconf-(?P<pver>(\d+)).tar.gz"
REGEX_URI_pn-nativesdk-sqlite3 = "http://www.sqlite.org/download.html"
REGEX_pn-nativesdk-sqlite3 = "/sqlite-autoconf-(?P<pver>(\d+)).tar.gz"
REGEX_URI_pn-squashfs-tools = "http://sourceforge.net/projects/squashfs/files/squashfs/"
REGEX_pn-squashfs-tools = "/projects/squashfs/files/squashfs/squashfs(?P<pver>((\d+[\.\-_]*)+)).*/"
REGEX_URI_pn-strace = "http://sourceforge.net/projects/strace/files/strace/"
REGEX_pn-strace = "/projects/strace/files/strace/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-strace-native = "http://sourceforge.net/projects/strace/files/strace/"
REGEX_pn-strace-native = "/projects/strace/files/strace/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-stunnel = "http://www.stunnel.org/downloads.html"
REGEX_pn-stunnel = "downloads/stunnel-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-sysfsutils = "http://sourceforge.net/projects/linux-diag/files/sysfsutils/"
REGEX_pn-sysfsutils = "/projects/linux-diag/files/sysfsutils/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-sysstat = "http://sebastien.godard.pagesperso-orange.fr/download.html"
REGEX_pn-sysstat = "http://pagesperso-orange.fr/sebastien.godard/sysstat\-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-taglib = "http://github.com/taglib/taglib/releases/"
REGEX_URI_pn-tcl = "http://sourceforge.net/projects/tcl/files/Tcl/"
REGEX_pn-tcl = "/projects/tcl/files/Tcl/(?P<pver>((\d+(b\d+)?[\.\-_]*)+))/"
REGEX_URI_pn-tcl-native = "http://sourceforge.net/projects/tcl/files/Tcl/"
REGEX_pn-tcl-native = "/projects/tcl/files/Tcl/(?P<pver>((\d+(b\d+)?[\.\-_]*)+))/"
REGEX_URI_pn-tcpreplay = "http://sourceforge.net/projects/tcpreplay/files/tcpreplay/"
REGEX_pn-tcpreplay = "/projects/tcpreplay/files/tcpreplay/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-tiff-native = "ftp://ftp.remotesensing.org/pub/libtiff/"
REGEX_pn-tiff-native = "ftp://ftp.remotesensing.org:21/pub/libtiff/tiff-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-tslib = "https://github.com/kergoth/tslib/releases"
REGEX_pn-tslib = "/releases/tag/(?P<pver>((\d+[\.\-_]*)+))"
REGEX_URI_pn-traceroute = "http://sourceforge.net/projects/traceroute/files/traceroute/"
REGEX_pn-traceroute = "/projects/traceroute/files/traceroute/traceroute-(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-tunctl = "http://sourceforge.net/projects/tunctl/files/tunctl/"
REGEX_pn-tunctl = "/projects/tunctl/files/tunctl/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_pn-tzdata = "tzdata(?P<pver>((\d+[a-z])+))\.tar\.gz"
REGEX_URI_pn-unzip = "http://sourceforge.net/projects/infozip/files/UnZip%206.x%20%28latest%29/UnZip%206.0/"
REGEX_pn-unzip = "http://sourceforge.net/projects/infozip/files/UnZip%206.x%20%28latest%29/UnZip%206.0/unzip(?P<pver>(\d+))\.tar\.gz/download"
REGEX_URI_pn-unzip-native = "http://sourceforge.net/projects/infozip/files/UnZip%206.x%20%28latest%29/UnZip%206.0/"
REGEX_pn-unzip-native = "http://sourceforge.net/projects/infozip/files/UnZip%206.x%20%28latest%29/UnZip%206.0/unzip(?P<pver>(\d+))\.tar\.gz/download"
#REGEX_URI_pn-v86d = "http://dev.gentoo.org/~spock/projects/uvesafb/archive/"
REGEX_pn-v86d = "v86d\-(?P<pver>((\d+[\.]*)+))\.tar\.bz2"
REGEX_URI_pn-vblade = "http://sourceforge.net/projects/aoetools/files/vblade/"
REGEX_pn-vblade = "/projects/aoetools/files/vblade/vblade-(?P<pver>((\d+[\.\-_]*)+))\.tgz/stats/timeline"
REGEX_URI_pn-vsftpd = "https://security.appspot.com/vsftpd.html"
REGEX_pn-vsftpd = "https://security.appspot.com/downloads/vsftpd-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-watchdog = "http://sourceforge.net/projects/watchdog/files/watchdog/"
REGEX_pn-watchdog = "/projects/watchdog/files/watchdog/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-wireless-tools = "http://www.hpl.hp.com/personal/Jean_Tourrilhes/Linux/Tools.html"
REGEX_pn-wireless-tools = "wireless_tools\.(?P<pver>(\d+))\.tar\.gz"
REGEX_URI_pn-x11vnc = "http://sourceforge.net/projects/libvncserver/files/x11vnc/"
REGEX_pn-x11vnc = "/projects/libvncserver/files/x11vnc/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_pn-xdg-utils = "xdg\-utils\-(?P<pver>((\d+[\.\-_]*)+))\.(tar\.gz|tgz)"
REGEX_pn-xf86-video-omap = "(?P<pver>(\d+\.(\d\.?)*))"
REGEX_URI_pn-zip = "http://sourceforge.net/projects/infozip/files/Zip%203.x%20%28latest%29/3.0/"
REGEX_pn-zip = "http://sourceforge.net/projects/infozip/files/Zip%203.x%20%28latest%29/3.0/zip(?P<pver>(\d+))\.tar\.gz/download"
REGEX_URI_pn-zip-native = "http://sourceforge.net/projects/infozip/files/Zip%203.x%20%28latest%29/3.0/"
REGEX_pn-zip-native = "http://sourceforge.net/projects/infozip/files/Zip%203.x%20%28latest%29/3.0/zip(?P<pver>(\d+))\.tar\.gz/download"
REGEX_URI_pn-zisofs-tools-native ="http://pkgs.fedoraproject.org/repo/pkgs/zisofs-tools/"
REGEX_pn-qt-mobility-embedded="qt-mobility-opensource-src-(?P<pver>((\d+[\.\-_]*)+)).*\.tar\.xz"
REGEX_URI_pn-qt-mobility-embedded="http://pkgs.fedoraproject.org/repo/pkgs/qt-mobility/"
REGEX_pn-qt-mobility-x11="qt-mobility-opensource-src-(?P<pver>((\d+[\.\-_]*)+)).*\.tar\.xz"
REGEX_URI_pn-qt-mobility-x11="http://pkgs.fedoraproject.org/repo/pkgs/qt-mobility/"
REGEX_pn-expect="/projects/expect/files/Expect/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-expect="http://sourceforge.net/projects/expect/files/Expect/"
REGEX_pn-gnu-efi="/projects/gnu-efi/files/gnu-efi_(?P<pver>((\d+[\.\-_]*)+).)\.orig\.tar\.gz/"
REGEX_URI_pn-gnu-efi="http://sourceforge.net/projects/gnu-efi/files/"
REGEX_pn-python-smartpm="/smart/\+milestone/(?P<pver>((\d+[\.\-_]*)+))"
REGEX_URI_pn-python-smartpm="https://launchpad.net/smart/trunk/"
REGEX_URI_pn-libatomics-ops="http://www.hpl.hp.com/research/linux/atomic_ops/download.php4"
REGEX_URI_pn-sudo="http://www.sudo.ws"
REGEX_pn-sudo="sudo-(?P<pver>((\d+[\.\-_]*)+))\.tar\.gz"
REGEX_URI_pn-docbook-xsl-stylesheets="http://sourceforge.net/projects/docbook/files/docbook-xsl/"
REGEX_pn-docbook-xsl-stylesheets="/projects/docbook/files/docbook-xsl/(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-waffle="http://www.waffle-gl.org/releases.html"
REGEX_URI_pn-qt4-x11-free="http://download.qt-project.org/official_releases/qt/4.8/"
REGEX_pn-qt4-x11-free="(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-qt4-embedded="http://download.qt-project.org/official_releases/qt/4.8/"
REGEX_pn-qt4-embedded="(?P<pver>((\d+[\.\-_]*)+))/"
REGEX_URI_pn-dosfstools="http://daniel-baumann.ch/software/dosfstools/"
REGEX_pn-midori="midori_(?P<pver>((\d+[\.\-_]*)+))_all_\.tar\.bz2"
REGEX_URI_pn-midori="http://midori-browser.org/download/source/"
REGEX_pn-icu="(?P<pver>((\d+[\.\-_]*)+))"
REGEX_URI_pn-icu="http://download.icu-project.org/files/icu4c/"
REGEX_URI_pn-pcmciautils="http://mirror.linux.org.au/linux/utils/kernel/pcmcia/"

# Regex used to parse tags and extract version
GITTAGREGEX_pn-build-appliance-image = "(?P<pver>(([0-9][\.|_]?)+[0-9]))"
GITTAGREGEX_pn-chkconfig-alternatives-native = "chkconfig\-(?P<pver>((\d+[\.\-_]*)+))"
GITTAGREGEX_pn-remake = "(?P<pver>(\d+\.(\d+\.)*\d*(\+dbg\d+(\.\d+)*)*))"
GITTAGREGEX_pn-xf86-video-omap = "(?P<pver>(\d+\.(\d\.?)*))"