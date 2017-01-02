#############################################################################################
#                                                                                           #
#     This is Makefile.                                                                     #
#     Copyleft, 2016, <feedback@7cats.biz>, cats7.                                          #
#                                                                                           #
#     This program is free software; you can redistribute it and/or modify it under the     #
#  terms of the GNU General Public License as published by the Free Software Foundation;    #
#  either version 3 of the License, or (at your option) any later version.                  #
#                                                                                           #
#     This program is distributed in the hope that it will be useful, but WITHOUT ANY       #
#  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A          #
#  PARTICULAR PURPOSE.  See the GNU General Public License for more details.                #
#                                                                                           #
#############################################################################################

VERSION   := 0.01
PROJECT   := pn-tools-linux

TARGET01  := pn-gen
TARGETS   := $(TARGET01)
OBJECTS01 := pn-gen.o

CFLAGS    := -std=gnu99
AFLAGS    :=

.PHONY: help gnu-gpl license warranty copying clean cleanall

#############################################################################################
#                  Make all the top-level targets the makefile knows about.                 #
#############################################################################################
all:        $(TARGETS)

$(TARGET1): $(OBJECTS01)
	@echo Linking $@ ...
	$(CC) $(CFLAGS) -o $@ $^

pn-gen.o:   pn-gen.c pn-gen.h pn-common.h
	@echo Compiling $< ...
	$(CC) $(CFLAGS) -c -o $@ $<

#############################################################################################
#                                                                                           #
#############################################################################################
help:
	@cat README.md

gnu-gpl:
	@cat LICENSE

license:
	@cat LICENSE

warranty:
	@cat COPYING

copying:
	@cat COPYING

#############################################################################################
#                Delete all files that are normally created by running make.                #
#############################################################################################
clean:
	@echo Cleaning...
	-rm --verbose --force *~ .fuse* *.o *.code *.lst

cleanall: clean
	-rm --verbose --force $(TARGETS) *.log *.dat

#############################################################################################
#                                                                                 - EOF -   #
#############################################################################################

