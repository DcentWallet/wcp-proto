/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Tue Aug 14 17:46:24 2018. */

#ifndef PB_BWALLET_PROTO_PB_H_INCLUDED
#define PB_BWALLET_PROTO_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _bwallet_cointype_t {
    bwallet_cointype_t_device = 0,
    bwallet_cointype_t_coin = 1,
    bwallet_cointype_t_bitcoin = 4096,
    bwallet_cointype_t_bitcoin_testnet = 4097,
    bwallet_cointype_t_monacoin = 4352,
    bwallet_cointype_t_monacoin_testnet = 4353,
    bwallet_cointype_t_ethereum = 8192,
    bwallet_cointype_t_erc20 = 8224,
    bwallet_cointype_t_ripple = 12288,
    bwallet_cointype_t_eos = 16384,
    bwallet_cointype_t_invalid = 65535
} bwallet_cointype_t;
#define _bwallet_cointype_t_MIN bwallet_cointype_t_device
#define _bwallet_cointype_t_MAX bwallet_cointype_t_invalid
#define _bwallet_cointype_t_ARRAYSIZE ((bwallet_cointype_t)(bwallet_cointype_t_invalid+1))

typedef enum _bwallet_error_code_t {
    bwallet_error_code_t_none = 0,
    bwallet_error_code_t_invalid_access = 1,
    bwallet_error_code_t_internal_process = 2,
    bwallet_error_code_t_memory_access = 3,
    bwallet_error_code_t_invalid_format = 4,
    bwallet_error_code_t_not_support = 5,
    bwallet_error_code_t_invalid_command = 6,
    bwallet_error_code_t_wrong_length = 7,
    bwallet_error_code_t_wrong_number = 8,
    bwallet_error_code_t_lowlevel_protocol = 65532,
    bwallet_error_code_t_user_cancel = 65533,
    bwallet_error_code_t_device_busy = 65534,
    bwallet_error_code_t_unknown = 65535
} bwallet_error_code_t;
#define _bwallet_error_code_t_MIN bwallet_error_code_t_none
#define _bwallet_error_code_t_MAX bwallet_error_code_t_unknown
#define _bwallet_error_code_t_ARRAYSIZE ((bwallet_error_code_t)(bwallet_error_code_t_unknown+1))

typedef enum _bwallet_command_t_device_t {
    bwallet_command_t_device_t_get_info = 160,
    bwallet_command_t_device_t_set_label = 162,
    bwallet_command_t_device_t_init_wallet = 208
} bwallet_command_t_device_t;
#define _bwallet_command_t_device_t_MIN bwallet_command_t_device_t_get_info
#define _bwallet_command_t_device_t_MAX bwallet_command_t_device_t_init_wallet
#define _bwallet_command_t_device_t_ARRAYSIZE ((bwallet_command_t_device_t)(bwallet_command_t_device_t_init_wallet+1))

typedef enum _bwallet_command_t_coin_t {
    bwallet_command_t_coin_t_sync_account_info = 176,
    bwallet_command_t_coin_t_get_account_info = 177,
    bwallet_command_t_coin_t_extract_pubkey = 178
} bwallet_command_t_coin_t;
#define _bwallet_command_t_coin_t_MIN bwallet_command_t_coin_t_sync_account_info
#define _bwallet_command_t_coin_t_MAX bwallet_command_t_coin_t_extract_pubkey
#define _bwallet_command_t_coin_t_ARRAYSIZE ((bwallet_command_t_coin_t)(bwallet_command_t_coin_t_extract_pubkey+1))

typedef enum _bwallet_command_t_bitcoin_t {
    bwallet_command_t_bitcoin_t_btc_transaction_begin = 160,
    bwallet_command_t_bitcoin_t_btc_transaction_update_script = 161,
    bwallet_command_t_bitcoin_t_btc_transaction_update_prevtx = 162,
    bwallet_command_t_bitcoin_t_btc_transaction_finish = 163,
    bwallet_command_t_bitcoin_t_btc_transaction_retrieve = 164,
    bwallet_command_t_bitcoin_t_btc_get_address = 176
} bwallet_command_t_bitcoin_t;
#define _bwallet_command_t_bitcoin_t_MIN bwallet_command_t_bitcoin_t_btc_transaction_begin
#define _bwallet_command_t_bitcoin_t_MAX bwallet_command_t_bitcoin_t_btc_get_address
#define _bwallet_command_t_bitcoin_t_ARRAYSIZE ((bwallet_command_t_bitcoin_t)(bwallet_command_t_bitcoin_t_btc_get_address+1))

typedef enum _bwallet_command_t_ethereum_t {
    bwallet_command_t_ethereum_t_eth_transaction_begin = 160,
    bwallet_command_t_ethereum_t_eth_transaction_update_data = 161,
    bwallet_command_t_ethereum_t_eth_transaction_finish = 163,
    bwallet_command_t_ethereum_t_eth_get_address = 176
} bwallet_command_t_ethereum_t;
#define _bwallet_command_t_ethereum_t_MIN bwallet_command_t_ethereum_t_eth_transaction_begin
#define _bwallet_command_t_ethereum_t_MAX bwallet_command_t_ethereum_t_eth_get_address
#define _bwallet_command_t_ethereum_t_ARRAYSIZE ((bwallet_command_t_ethereum_t)(bwallet_command_t_ethereum_t_eth_get_address+1))

typedef enum _bwallet_command_t_erc20_t {
    bwallet_command_t_erc20_t_erc20_transaction = 160
} bwallet_command_t_erc20_t;
#define _bwallet_command_t_erc20_t_MIN bwallet_command_t_erc20_t_erc20_transaction
#define _bwallet_command_t_erc20_t_MAX bwallet_command_t_erc20_t_erc20_transaction
#define _bwallet_command_t_erc20_t_ARRAYSIZE ((bwallet_command_t_erc20_t)(bwallet_command_t_erc20_t_erc20_transaction+1))

typedef enum _bwallet_command_t_ripple_t {
    bwallet_command_t_ripple_t_xrp_transaction = 160,
    bwallet_command_t_ripple_t_xrp_get_address = 176
} bwallet_command_t_ripple_t;
#define _bwallet_command_t_ripple_t_MIN bwallet_command_t_ripple_t_xrp_transaction
#define _bwallet_command_t_ripple_t_MAX bwallet_command_t_ripple_t_xrp_get_address
#define _bwallet_command_t_ripple_t_ARRAYSIZE ((bwallet_command_t_ripple_t)(bwallet_command_t_ripple_t_xrp_get_address+1))

typedef enum _bwallet_command_t_eos_t {
    bwallet_command_t_eos_t_eos_transaction = 160,
    bwallet_command_t_eos_t_eos_get_pubkey = 176
} bwallet_command_t_eos_t;
#define _bwallet_command_t_eos_t_MIN bwallet_command_t_eos_t_eos_transaction
#define _bwallet_command_t_eos_t_MAX bwallet_command_t_eos_t_eos_get_pubkey
#define _bwallet_command_t_eos_t_ARRAYSIZE ((bwallet_command_t_eos_t)(bwallet_command_t_eos_t_eos_get_pubkey+1))

/* Struct definitions */
typedef struct _bwallet_command_t {
    uint32_t value;
/* @@protoc_insertion_point(struct:bwallet_command_t) */
} bwallet_command_t;

typedef struct _bwallet_error_t {
    bwallet_error_code_t code;
    char message[21];
/* @@protoc_insertion_point(struct:bwallet_error_t) */
} bwallet_error_t;

typedef struct _bwallet_req_header_t {
    uint32_t version;
    bwallet_cointype_t request_to;
/* @@protoc_insertion_point(struct:bwallet_req_header_t) */
} bwallet_req_header_t;

typedef struct _bwallet_res_header_t {
    uint32_t version;
    bwallet_cointype_t response_from;
    bool is_error;
/* @@protoc_insertion_point(struct:bwallet_res_header_t) */
} bwallet_res_header_t;

typedef PB_BYTES_ARRAY_T(8080) bwallet_req_body_t_parameter_t;
typedef struct _bwallet_req_body_t {
    bwallet_command_t command;
    bool has_parameter;
    bwallet_req_body_t_parameter_t parameter;
/* @@protoc_insertion_point(struct:bwallet_req_body_t) */
} bwallet_req_body_t;

typedef PB_BYTES_ARRAY_T(8080) bwallet_res_body_t_parameter_t;
typedef struct _bwallet_res_body_t {
    bwallet_command_t command;
    bool has_parameter;
    bwallet_res_body_t_parameter_t parameter;
    bool has_error;
    bwallet_error_t error;
    bool has_more;
/* @@protoc_insertion_point(struct:bwallet_res_body_t) */
} bwallet_res_body_t;

typedef struct _bwallet_request {
    bwallet_req_header_t header;
    bwallet_req_body_t body;
/* @@protoc_insertion_point(struct:bwallet_request) */
} bwallet_request;

typedef struct _bwallet_response {
    bwallet_res_header_t header;
    bwallet_res_body_t body;
/* @@protoc_insertion_point(struct:bwallet_response) */
} bwallet_response;

/* Default values for struct fields */

/* Initializer values for message structs */
#define bwallet_command_t_init_default           {0}
#define bwallet_req_header_t_init_default        {0, (bwallet_cointype_t)0}
#define bwallet_req_body_t_init_default          {bwallet_command_t_init_default, false, {0, {0}}}
#define bwallet_request_init_default             {bwallet_req_header_t_init_default, bwallet_req_body_t_init_default}
#define bwallet_error_t_init_default             {(bwallet_error_code_t)0, ""}
#define bwallet_res_header_t_init_default        {0, (bwallet_cointype_t)0, 0}
#define bwallet_res_body_t_init_default          {bwallet_command_t_init_default, false, {0, {0}}, false, bwallet_error_t_init_default, 0}
#define bwallet_response_init_default            {bwallet_res_header_t_init_default, bwallet_res_body_t_init_default}
#define bwallet_command_t_init_zero              {0}
#define bwallet_req_header_t_init_zero           {0, (bwallet_cointype_t)0}
#define bwallet_req_body_t_init_zero             {bwallet_command_t_init_zero, false, {0, {0}}}
#define bwallet_request_init_zero                {bwallet_req_header_t_init_zero, bwallet_req_body_t_init_zero}
#define bwallet_error_t_init_zero                {(bwallet_error_code_t)0, ""}
#define bwallet_res_header_t_init_zero           {0, (bwallet_cointype_t)0, 0}
#define bwallet_res_body_t_init_zero             {bwallet_command_t_init_zero, false, {0, {0}}, false, bwallet_error_t_init_zero, 0}
#define bwallet_response_init_zero               {bwallet_res_header_t_init_zero, bwallet_res_body_t_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define bwallet_command_t_value_tag              1
#define bwallet_error_t_code_tag                 1
#define bwallet_error_t_message_tag              2
#define bwallet_req_header_t_version_tag         1
#define bwallet_req_header_t_request_to_tag      2
#define bwallet_res_header_t_version_tag         1
#define bwallet_res_header_t_response_from_tag   2
#define bwallet_res_header_t_is_error_tag        3
#define bwallet_req_body_t_command_tag           1
#define bwallet_req_body_t_parameter_tag         2
#define bwallet_res_body_t_command_tag           1
#define bwallet_res_body_t_parameter_tag         2
#define bwallet_res_body_t_error_tag             3
#define bwallet_res_body_t_has_more_tag          4
#define bwallet_request_header_tag               1
#define bwallet_request_body_tag                 2
#define bwallet_response_header_tag              1
#define bwallet_response_body_tag                2

/* Struct field encoding specification for nanopb */
extern const pb_field_t bwallet_command_t_fields[2];
extern const pb_field_t bwallet_req_header_t_fields[3];
extern const pb_field_t bwallet_req_body_t_fields[3];
extern const pb_field_t bwallet_request_fields[3];
extern const pb_field_t bwallet_error_t_fields[3];
extern const pb_field_t bwallet_res_header_t_fields[4];
extern const pb_field_t bwallet_res_body_t_fields[5];
extern const pb_field_t bwallet_response_fields[3];

/* Maximum encoded size of messages (where known) */
#define bwallet_command_t_size                   6
#define bwallet_req_header_t_size                10
#define bwallet_req_body_t_size                  8091
#define bwallet_request_size                     8106
#define bwallet_error_t_size                     27
#define bwallet_res_header_t_size                12
#define bwallet_res_body_t_size                  8122
#define bwallet_response_size                    8139

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTO_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
