/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Tue Aug 14 17:46:31 2018. */

#ifndef PB_ETHEREUM_PROTO_ETHEREUM_PB_H_INCLUDED
#define PB_ETHEREUM_PROTO_ETHEREUM_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _ethereum_get_address_req_parameter_t {
    char key_path[51];
/* @@protoc_insertion_point(struct:ethereum_get_address_req_parameter_t) */
} ethereum_get_address_req_parameter_t;

typedef struct _ethereum_get_address_res_parameter_t {
    char address[43];
/* @@protoc_insertion_point(struct:ethereum_get_address_res_parameter_t) */
} ethereum_get_address_res_parameter_t;

typedef PB_BYTES_ARRAY_T(32) ethereum_transaction_begin_req_parameter_t_nonce_t;
typedef PB_BYTES_ARRAY_T(32) ethereum_transaction_begin_req_parameter_t_gas_price_t;
typedef PB_BYTES_ARRAY_T(32) ethereum_transaction_begin_req_parameter_t_gas_limit_t;
typedef PB_BYTES_ARRAY_T(20) ethereum_transaction_begin_req_parameter_t_to_address_t;
typedef PB_BYTES_ARRAY_T(32) ethereum_transaction_begin_req_parameter_t_value_t;
typedef PB_BYTES_ARRAY_T(7000) ethereum_transaction_begin_req_parameter_t_init_data_blk_t;
typedef struct _ethereum_transaction_begin_req_parameter_t {
    ethereum_transaction_begin_req_parameter_t_nonce_t nonce;
    ethereum_transaction_begin_req_parameter_t_gas_price_t gas_price;
    ethereum_transaction_begin_req_parameter_t_gas_limit_t gas_limit;
    char to_address_str[43];
    ethereum_transaction_begin_req_parameter_t_to_address_t to_address;
    ethereum_transaction_begin_req_parameter_t_value_t value;
    uint32_t total_data_len;
    ethereum_transaction_begin_req_parameter_t_init_data_blk_t init_data_blk;
    uint32_t chain_id;
    char key_path[51];
/* @@protoc_insertion_point(struct:ethereum_transaction_begin_req_parameter_t) */
} ethereum_transaction_begin_req_parameter_t;

typedef PB_BYTES_ARRAY_T(1) ethereum_transaction_finish_res_parameter_t_sign_v_t;
typedef PB_BYTES_ARRAY_T(32) ethereum_transaction_finish_res_parameter_t_sign_r_t;
typedef PB_BYTES_ARRAY_T(32) ethereum_transaction_finish_res_parameter_t_sign_s_t;
typedef struct _ethereum_transaction_finish_res_parameter_t {
    ethereum_transaction_finish_res_parameter_t_sign_v_t sign_v;
    ethereum_transaction_finish_res_parameter_t_sign_r_t sign_r;
    ethereum_transaction_finish_res_parameter_t_sign_s_t sign_s;
/* @@protoc_insertion_point(struct:ethereum_transaction_finish_res_parameter_t) */
} ethereum_transaction_finish_res_parameter_t;

typedef PB_BYTES_ARRAY_T(8000) ethereum_transaction_update_data_req_parameter_t_data_blk_t;
typedef struct _ethereum_transaction_update_data_req_parameter_t {
    uint32_t data_blk_idx;
    ethereum_transaction_update_data_req_parameter_t_data_blk_t data_blk;
/* @@protoc_insertion_point(struct:ethereum_transaction_update_data_req_parameter_t) */
} ethereum_transaction_update_data_req_parameter_t;

/* Default values for struct fields */

/* Initializer values for message structs */
#define ethereum_transaction_begin_req_parameter_t_init_default {{0, {0}}, {0, {0}}, {0, {0}}, "", {0, {0}}, {0, {0}}, 0, {0, {0}}, 0, ""}
#define ethereum_transaction_update_data_req_parameter_t_init_default {0, {0, {0}}}
#define ethereum_transaction_finish_res_parameter_t_init_default {{0, {0}}, {0, {0}}, {0, {0}}}
#define ethereum_get_address_req_parameter_t_init_default {""}
#define ethereum_get_address_res_parameter_t_init_default {""}
#define ethereum_transaction_begin_req_parameter_t_init_zero {{0, {0}}, {0, {0}}, {0, {0}}, "", {0, {0}}, {0, {0}}, 0, {0, {0}}, 0, ""}
#define ethereum_transaction_update_data_req_parameter_t_init_zero {0, {0, {0}}}
#define ethereum_transaction_finish_res_parameter_t_init_zero {{0, {0}}, {0, {0}}, {0, {0}}}
#define ethereum_get_address_req_parameter_t_init_zero {""}
#define ethereum_get_address_res_parameter_t_init_zero {""}

/* Field tags (for use in manual encoding/decoding) */
#define ethereum_get_address_req_parameter_t_key_path_tag 2
#define ethereum_get_address_res_parameter_t_address_tag 1
#define ethereum_transaction_begin_req_parameter_t_nonce_tag 1
#define ethereum_transaction_begin_req_parameter_t_gas_price_tag 2
#define ethereum_transaction_begin_req_parameter_t_gas_limit_tag 3
#define ethereum_transaction_begin_req_parameter_t_to_address_str_tag 4
#define ethereum_transaction_begin_req_parameter_t_to_address_tag 5
#define ethereum_transaction_begin_req_parameter_t_value_tag 6
#define ethereum_transaction_begin_req_parameter_t_total_data_len_tag 7
#define ethereum_transaction_begin_req_parameter_t_init_data_blk_tag 8
#define ethereum_transaction_begin_req_parameter_t_chain_id_tag 9
#define ethereum_transaction_begin_req_parameter_t_key_path_tag 10
#define ethereum_transaction_finish_res_parameter_t_sign_v_tag 1
#define ethereum_transaction_finish_res_parameter_t_sign_r_tag 2
#define ethereum_transaction_finish_res_parameter_t_sign_s_tag 3
#define ethereum_transaction_update_data_req_parameter_t_data_blk_idx_tag 2
#define ethereum_transaction_update_data_req_parameter_t_data_blk_tag 3

/* Struct field encoding specification for nanopb */
extern const pb_field_t ethereum_transaction_begin_req_parameter_t_fields[11];
extern const pb_field_t ethereum_transaction_update_data_req_parameter_t_fields[3];
extern const pb_field_t ethereum_transaction_finish_res_parameter_t_fields[4];
extern const pb_field_t ethereum_get_address_req_parameter_t_fields[2];
extern const pb_field_t ethereum_get_address_res_parameter_t_fields[2];

/* Maximum encoded size of messages (where known) */
#define ethereum_transaction_begin_req_parameter_t_size 7271
#define ethereum_transaction_update_data_req_parameter_t_size 8009
#define ethereum_transaction_finish_res_parameter_t_size 71
#define ethereum_get_address_req_parameter_t_size 53
#define ethereum_get_address_res_parameter_t_size 45

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTO_ETHEREUM_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
