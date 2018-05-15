
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

build: _common _proto_device _proto_coin _proto_bitcoin _proto_ethereum _export _export_nanopb

device: clean _proto_device _proto_coin _common _export

bitcoin: clean _proto_bitcoin _common _export

ethereum: clean _proto_ethereum _common _export

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

_proto_coin:
	protoc -o./bin/proto_coin.pb --proto_path=$(_PROTO_PATH)/coin --proto_path=$(_PATH_NANOPB)/generator/proto $(_PROTO_PATH)/coin/*.proto
	python $(_NANOPB_BIN_PATH)/nanopb_generator.py --source-extension=.code ./bin/proto_coin.pb

_proto_bitcoin:
	protoc -o./bin/proto_bitcoin.pb --proto_path=$(_PROTO_PATH)/bitcoin --proto_path=$(_PATH_NANOPB)/generator/proto $(_PROTO_PATH)/bitcoin/*.proto
	python $(_NANOPB_BIN_PATH)/nanopb_generator.py --source-extension=.code ./bin/proto_bitcoin.pb

_proto_ethereum:
	protoc -o./bin/proto_ethereum.pb --proto_path=$(_PROTO_PATH)/ethereum --proto_path=$(_PATH_NANOPB)/generator/proto $(_PROTO_PATH)/ethereum/*.proto
	python $(_NANOPB_BIN_PATH)/nanopb_generator.py --source-extension=.code ./bin/proto_ethereum.pb

_export_nanopb:
	cp $(_PATH_NANOPB)/pb_common.c ./export/include/pb_common.code
	cp $(_PATH_NANOPB)/pb_encode.c ./export/include/pb_encode.code
	cp $(_PATH_NANOPB)/pb_decode.c ./export/include/pb_decode.code
	cp $(_PATH_NANOPB)/pb_common.h ./export/include/
	cp $(_PATH_NANOPB)/pb_encode.h ./export/include/
	cp $(_PATH_NANOPB)/pb_decode.h ./export/include/

_export_pb_h:
	echo "#define PB_FIELD_16BIT 1\n" > ./export/include/pb.h
	cat $(_PATH_NANOPB)/pb.h >> ./export/include/pb.h

_export: _export_pb_h
	cp ./bin/*.h ./export/include/
	cp ./bin/*.code ./export/include/

clean:
	\rm -f $(MOD_DIR)/export/include/*
	\rm -f $(MOD_DIR)/bin/*

## ############################################################ ##
## //////////////////////////////////////////////////////////// ##
## ##
## //////////////////////////////////////////////////////////// ##
## ############################################################ ##

noconsole: _clean_nocons _nocons_common _nocons_device _nocons_coin _nocons_bitcoin _nocons_ethereum

_clean_nocons: 
	\rm -f $(MOD_DIR)/export-no-console-env/include/*.h
	\rm -f $(MOD_DIR)/export-no-console-env/include/*.code
	\rm -f $(MOD_DIR)/export-no-console-env/include/device/*
	\rm -f $(MOD_DIR)/export-no-console-env/include/bitcoin/*
	\rm -f $(MOD_DIR)/export-no-console-env/include/ethereum/*
	\rm -f $(MOD_DIR)/bin/*

_nocons_common: _common
	cp ./bin/*.h ./export-no-console-env/include/
	cp ./bin/*.code ./export-no-console-env/include/
	echo "#define PB_FIELD_16BIT 1\n" > ./export-no-console-env/include/pb.h
	cat $(_PATH_NANOPB)/pb.h >> ./export-no-console-env/include/pb.h
	\rm -f $(MOD_DIR)/bin/*

_nocons_device: _proto_device 
	cp ./bin/*.h ./export-no-console-env/include/device/
	cp ./bin/*.code ./export-no-console-env/include/device/
	\rm -f $(MOD_DIR)/bin/*

_nocons_coin: _proto_coin
	cp ./bin/*.h ./export-no-console-env/include/coin/
	cp ./bin/*.code ./export-no-console-env/include/coin/
	\rm -f $(MOD_DIR)/bin/*

_nocons_bitcoin: _proto_bitcoin
	cp ./bin/*.h ./export-no-console-env/include/bitcoin/
	cp ./bin/*.code ./export-no-console-env/include/bitcoin/
	\rm -f $(MOD_DIR)/bin/*

_nocons_ethereum: _proto_ethereum
	cp ./bin/*.h ./export-no-console-env/include/ethereum/
	cp ./bin/*.code ./export-no-console-env/include/ethereum/
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

