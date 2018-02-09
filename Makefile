
## ############################################################ ##
## //////////////////////////////////////////////////////////// ##
## ##
## //////////////////////////////////////////////////////////// ##
## ############################################################ ##

MOD_DIR = .
#include $(MOD_DIR)/Makefile.configuration

## ############################################################ ##
## //////////////////////////////////////////////////////////// ##
## ##
## //////////////////////////////////////////////////////////// ##
## ############################################################ ##

default: build

all: clean build

## ############################################################ ##
## //////////////////////////////////////////////////////////// ##
## ##
## //////////////////////////////////////////////////////////// ##
## ############################################################ ##

build: _common _proto_device _export _export_nanopb

device: clean _proto_device _common _export

## ############################################################ ##
## //////////////////////////////////////////////////////////// ##
## ##
## //////////////////////////////////////////////////////////// ##
## ############################################################ ##

_PATH_NANOPB = $(MOD_DIR)/../../tools/nanopb/nanopb-0.3.9-linux-x86

_PROTO_PATH=$(MOD_DIR)/src
_NANOPB_BIN_PATH=$(_PATH_NANOPB)/generator
_common:
	protoc -o./bin/proto.pb --proto_path=$(_PROTO_PATH) --proto_path=$(_PATH_NANOPB)/generator/proto $(_PROTO_PATH)/*.proto
	python $(_NANOPB_BIN_PATH)/nanopb_generator.py --source-extension=.code ./bin/proto.pb

_proto_device:
	protoc -o./bin/proto_device.pb --proto_path=$(_PROTO_PATH)/device --proto_path=$(_PATH_NANOPB)/generator/proto $(_PROTO_PATH)/device/*.proto
	python $(_NANOPB_BIN_PATH)/nanopb_generator.py --source-extension=.code ./bin/proto_device.pb

_export_nanopb:
	cp $(_PATH_NANOPB)/pb_common.c ./export/include/pb_common.code
	cp $(_PATH_NANOPB)/pb_encode.c ./export/include/pb_encode.code
	cp $(_PATH_NANOPB)/pb_decode.c ./export/include/pb_decode.code
	cp $(_PATH_NANOPB)/pb_common.h ./export/include/
	cp $(_PATH_NANOPB)/pb_encode.h ./export/include/
	cp $(_PATH_NANOPB)/pb_decode.h ./export/include/

_export: 
	cp ./bin/*.h ./export/include/
	cp ./bin/*.code ./export/include/
	cp $(_PATH_NANOPB)/pb.h ./export/include/

clean:
	\rm -f $(MOD_DIR)/export/include/*
	\rm -f $(MOD_DIR)/bin/*

## ############################################################ ##
## //////////////////////////////////////////////////////////// ##
## ##
## //////////////////////////////////////////////////////////// ##
## ############################################################ ##

# General rule

.SUFFIXES : .o .c .asm
%.o: %.asm $(INCLUDE)
	$(ASM) $(ASMFLAGS) $(foreach incluede, $(INCLUDE), -I $(incluede)) $<

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) $(foreach incluede, $(INCLUDE), -I $(incluede)) $<

## ############################################################ ##
## //////////////////////////////////////////////////////////// ##
## ##
## //////////////////////////////////////////////////////////// ##
## ############################################################ ##

