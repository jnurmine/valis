FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

KTYPE = "tiny"
KERNEL_FEATURES = ""

SRC_URI_append += "file://cmdline.cfg"

SRC_URI_append_dev += "file://ikconfig.cfg"
