KBRANCH ?= "standard/tiny/base"

require recipes-kernel/linux/linux-yocto.inc

LINUX_KERNEL_TYPE = "tiny"
KCONFIG_MODE = "--allnoconfig"

LINUX_VERSION ?= "3.10.55"

KMETA = "meta"

SRCREV_machine ?= "3677ea7f9476458aa6dec440243de3a6fb1343a9"
SRCREV_meta ?= "f79a00265eefbe2fffc2cdb03f67235497a9a87e"

PV = "${LINUX_VERSION}+git${SRCPV}"

SRC_URI = "git://git.yoctoproject.org/linux-yocto-3.10.git;bareclone=1;branch=${KBRANCH},meta;name=machine,meta"

COMPATIBLE_MACHINE = "(qemux86)"

# Functionality flags
KERNEL_FEATURES = ""
