inherit core-image

DESCRIPTION = "A small image for the AM335x development kit."

PREFERRED_PROVIDER_virtual/jpeg = "jpeg"
PREFERRED_PROVIDER_virtual/jpeg-native = "jpeg-native"
PREFERRED_PROVIDER_virtual/libgles1 = "libgles-omap3_5.01.01.01"
PREFERRED_PROVIDER_virtual/libgles2 = "libgles-omap3_5.01.01.01"
PREFERRED_PROVIDER_virtual/egl = "libgles-omap3_5.01.01.01"
PREFERRED_PROVIDER_virtual/libgles-omap3 = "libgles-omap3"

IMAGE_INSTALL = "libgles-omap3 packagegroup-core-boot libstdc++ \
				qtbase qtbase-plugins qtbase-fonts-ttf-dejavu \
				qtdeclarative qtdeclarative-plugins \
				"
IMAGE_FEATURES += "dev-pkgs debug-tweaks tools-debug ssh-server-openssh"
