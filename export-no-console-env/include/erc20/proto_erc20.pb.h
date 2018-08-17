/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Fri Aug 17 21:03:17 2018. */

#ifndef PB_ERC20_PROTO_ERC20_PB_H_INCLUDED
#define PB_ERC20_PROTO_ERC20_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef PB_BYTES_ARRAY_T(20) erc20_contract_info_t_contract_address_t;
typedef PB_BYTES_ARRAY_T(20) erc20_contract_info_t_to_address_t;
typedef PB_BYTES_ARRAY_T(32) erc20_contract_info_t_value_t;
typedef struct _erc20_contract_info_t {
    char name[33];
    char symbol[33];
    erc20_contract_info_t_contract_address_t contract_address;
    char contract_address_str[43];
    erc20_contract_info_t_to_address_t to_address;
    char to_address_str[43];
    uint32_t decimals;
    erc20_contract_info_t_value_t value;
/* @@protoc_insertion_point(struct:erc20_contract_info_t) */
} erc20_contract_info_t;

typedef PB_BYTES_ARRAY_T(8000) erc20_transaction_res_parameter_t_signed_tx_t;
typedef PB_BYTES_ARRAY_T(1) erc20_transaction_res_parameter_t_sign_v_t;
typedef PB_BYTES_ARRAY_T(32) erc20_transaction_res_parameter_t_sign_r_t;
typedef PB_BYTES_ARRAY_T(32) erc20_transaction_res_parameter_t_sign_s_t;
typedef struct _erc20_transaction_res_parameter_t {
    erc20_transaction_res_parameter_t_signed_tx_t signed_tx;
    erc20_transaction_res_parameter_t_sign_v_t sign_v;
    erc20_transaction_res_parameter_t_sign_r_t sign_r;
    erc20_transaction_res_parameter_t_sign_s_t sign_s;
/* @@protoc_insertion_point(struct:erc20_transaction_res_parameter_t) */
} erc20_transaction_res_parameter_t;

typedef PB_BYTES_ARRAY_T(32) erc20_transaction_req_parameter_t_nonce_t;
typedef PB_BYTES_ARRAY_T(32) erc20_transaction_req_parameter_t_gas_price_t;
typedef PB_BYTES_ARRAY_T(32) erc20_transaction_req_parameter_t_gas_limit_t;
typedef struct _erc20_transaction_req_parameter_t {
    erc20_transaction_req_parameter_t_nonce_t nonce;
    erc20_transaction_req_parameter_t_gas_price_t gas_price;
    erc20_transaction_req_parameter_t_gas_limit_t gas_limit;
    uint32_t chain_id;
    erc20_contract_info_t contract;
    char key_path[51];
/* @@protoc_insertion_point(struct:erc20_transaction_req_parameter_t) */
} erc20_transaction_req_parameter_t;

/* Default values for struct fields */

/* Initializer values for message structs */
#define erc20_transaction_req_parameter_t_init_default {{0, {0}}, {0, {0}}, {0, {0}}, 0, erc20_contract_info_t_init_default, ""}
#define erc20_transaction_res_parameter_t_init_default {{0, {0}}, {0, {0}}, {0, {0}}, {0, {0}}}
#define erc20_contract_info_t_init_default       {"", "", {0, {0}}, "", {0, {0}}, "", 0, {0, {0}}}
#define erc20_transaction_req_parameter_t_init_zero {{0, {0}}, {0, {0}}, {0, {0}}, 0, erc20_contract_info_t_init_zero, ""}
#define erc20_transaction_res_parameter_t_init_zero {{0, {0}}, {0, {0}}, {0, {0}}, {0, {0}}}
#define erc20_contract_info_t_init_zero          {"", "", {0, {0}}, "", {0, {0}}, "", 0, {0, {0}}}

/* Field tags (for use in manual encoding/decoding) */
#define erc20_contract_info_t_name_tag           1
#define erc20_contract_info_t_symbol_tag         2
#define erc20_contract_info_t_contract_address_tag 3
#define erc20_contract_info_t_contract_address_str_tag 4
#define erc20_contract_info_t_to_address_tag     5
#define erc20_contract_info_t_to_address_str_tag 6
#define erc20_contract_info_t_decimals_tag       7
#define erc20_contract_info_t_value_tag          8
#define erc20_transaction_res_parameter_t_signed_tx_tag 1
#define erc20_transaction_res_parameter_t_sign_v_tag 2
#define erc20_transaction_res_parameter_t_sign_r_tag 3
#define erc20_transaction_res_parameter_t_sign_s_tag 4
#define erc20_transaction_req_parameter_t_nonce_tag 1
#define erc20_transaction_req_parameter_t_gas_price_tag 2
#define erc20_transaction_req_parameter_t_gas_limit_tag 3
#define erc20_transaction_req_parameter_t_chain_id_tag 4
#define erc20_transaction_req_parameter_t_contract_tag 5
#define erc20_transaction_req_parameter_t_key_path_tag 10

/* Struct field encoding specification for nanopb */
extern const pb_field_t erc20_transaction_req_parameter_t_fields[7];
extern const pb_field_t erc20_transaction_res_parameter_t_fields[5];
extern const pb_field_t erc20_contract_info_t_fields[9];

/* Maximum encoded size of messages (where known) */
#define erc20_transaction_req_parameter_t_size   408
#define erc20_transaction_res_parameter_t_size   8074
#define erc20_contract_info_t_size               244

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTO_ERC20_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
