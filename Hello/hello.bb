SUMMARY = " a recipe for the hello world driver module"

LICENSE = "CLOSED"

SRC_URI = " file://Hello.c\
	   file ://Makefile\ "

S ="${WORKDIR}"

inherit module

RPROVIDES_${PN} += "hello-kernel-module-driver" 
