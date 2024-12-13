# Copyright (c) 2024 Bartosz Szostak
# This software is released under the MIT License.
# See the LICENSE file for more details.

MAINTAINER = "Bartosz Szostak <bartosz.szostak@xware.pl>"

DISTRO = "xware"
DISTRO_NAME = "xWare Linux"
DISTRO_VERSION = "1.0"
DISTRO_CODENAME = "New Horizons"
DISTRO_FEATURES = "${DISTRO_FEATURES_DEFAULT} opengl ptest multiarch wayland vulkan pam"

SDK_NAME = "${DISTRO}-${TCLIBC}-${SDKMACHINE}-${IMAGE_BASENAME}-${TUNE_PKGARCH}-${MACHINE}"
SDK_VERSION = "${DISTRO_VERSION}"
SDK_VERSION[vardepvalue] = "${SDK_VERSION}"
SDK_VENDOR = "-xwaresdk"
SDKPATHINSTALL = "/opt/${DISTRO}/${SDK_VERSION}"

INHERIT = "buildhistory"
USER_CLASSES = "buildstats buildstats-summary"

TARGET_VENDOR = "-xware"
PACKAGE_CLASSES = "package_rpm"
BUILDHISTORY_COMMIT = "1"

BB_SIGNATURE_HANDLER = "OEEquivHash"
BB_HASHSERVE = "auto"
BB_GIT_SHALLOW = "1"
BB_GIT_SHALLOW_DEPTH = "1"
BB_GENERATE_SHALLOW_TARBALLS = "1"

require conf/distro/include/no-static-libs.inc
require conf/distro/include/security_flags.inc
