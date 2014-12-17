PACKAGECONFIG_MULTIMEDIA = ""
PACKAGECONFIG_DEFAULT = "-no-dbus -no-udev evdev widgets tools libs"
PACKAGECONFIG += "freetype jpeg libpng zlib gles2 tslib openssl widgets"

QT_CONFIG_FLAGS = "-no-glib -no-linuxfb -no-sql-sqlite \
			-no-rpath -no-compile-examples -nomake examples -nomake tools -DQT_NO_QWS_CURSOR -DQT_QWS_CLIENTBLIET \
			-DQT_QPA_PLATFORM=eglfs -DQT_QPA_EGLFS_DEPTH=24 -DEGL_API_FB=1 \
			"

DEPENDS += "libgles-omap3"
RDEPENDS_${PN} += "libgles-omap3"

