inherit core-image

DESCRIPTION = "A small image for the AM335x development kit."

IMAGE_INSTALL = "packagegroup-core-boot libstdc++ \
				qtbase qtbase-plugins qtbase-fonts-ttf-dejavu qtdeclarative \
				qtdeclarative-plugins \
				"
IMAGE_FEATURES += "dev-pkgs debug-tweaks tools-debug ssh-server-openssh"

