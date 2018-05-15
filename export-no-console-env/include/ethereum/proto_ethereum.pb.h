/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Tue May 15 19:27:40 2018. */

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
    char address[25];
/* @@protoc_insertion_point(struct:ethereum_get_address_res_parameter_t) */
} ethereum_get_address_res_parameter_t;

typedef PB_BYTES_ARRAY_T(32) ethereum_transaction_req_parameter_t_nonce_t;
typedef PB_BYTES_ARRAY_T(32) ethereum_transaction_req_parameter_t_gas_price_t;
typedef PB_BYTES_ARRAY_T(32) ethereum_transaction_req_parameter_t_gas_limit_t;
typedef PB_BYTES_ARRAY_T(32) ethereum_transaction_req_parameter_t_value_t;
typedef PB_BYTES_ARRAY_T(7900) ethereum_transaction_req_parameter_t_data_t;
typedef struct _ethereum_transaction_req_parameter_t {
    ethereum_transaction_req_parameter_t_nonce_t nonce;
    ethereum_transaction_req_parameter_t_gas_price_t gas_price;
    ethereum_transaction_req_parameter_t_gas_limit_t gas_limit;
    char to_address[25];
    ethereum_transaction_req_parameter_t_value_t value;
    ethereum_transaction_req_parameter_t_data_t data;
/* @@protoc_insertion_point(struct:ethereum_transaction_req_parameter_t) */
} ethereum_transaction_req_parameter_t;

typedef PB_BYTES_ARRAY_T(8000) ethereum_transaction_res_parameter_t_signed_tx_t;
typedef struct _ethereum_transaction_res_parameter_t {
    ethereum_transaction_res_parameter_t_signed_tx_t signed_tx;
/* @@protoc_insertion_point(struct:ethereum_transaction_res_parameter_t) */
} ethereum_transaction_res_parameter_t;

/* Default values for struct fields */

/* Initializer values for message structs */
#define ethereum_transaction_req_parameter_t_init_default {{0, {0}}, {0, {0}}, {0, {0}}, "", {0, {0}}, {0, {0}}}
#define ethereum_transaction_res_parameter_t_init_default {{0, {0}}}
#define ethereum_get_address_req_parameter_t_init_default {""}
#define ethereum_get_address_res_parameter_t_init_default {""}
#define ethereum_transaction_req_parameter_t_init_zero {{0, {0}}, {0, {0}}, {0, {0}}, "", {0, {0}}, {0, {0}}}
#define ethereum_transaction_res_parameter_t_init_zero {{0, {0}}}
#define ethereum_get_address_req_parameter_t_init_zero {""}
#define ethereum_get_address_res_parameter_t_init_zero {""}

/* Field tags (for use in manual encoding/decoding) */
#define ethereum_get_address_req_parameter_t_key_path_tag 2
#define ethereum_get_address_res_parameter_t_address_tag 1
#define ethereum_transaction_req_parameter_t_nonce_tag 1
#define ethereum_transaction_req_parameter_t_gas_price_tag 2
#define ethereum_transaction_req_parameter_t_gas_limit_tag 3
#define ethereum_transaction_req_parameter_t_to_address_tag 4
#define ethereum_transaction_req_parameter_t_value_tag 5
#define ethereum_transaction_req_parameter_t_data_tag 6
#define ethereum_transaction_res_parameter_t_signed_tx_tag 2

/* Struct field encoding specification for nanopb */
extern const pb_field_t ethereum_transaction_req_parameter_t_fields[7];
extern const pb_field_t ethereum_transaction_res_parameter_t_fields[2];
extern const pb_field_t ethereum_get_address_req_parameter_t_fields[2];
extern const pb_field_t ethereum_get_address_res_parameter_t_fields[2];

/* Maximum encoded size of messages (where known) */
#define ethereum_transaction_req_parameter_t_size 8066
#define ethereum_transaction_res_parameter_t_size 8003
#define ethereum_get_address_req_parameter_t_size 53
#define ethereum_get_address_res_parameter_t_size 27

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTO_ETHEREUM_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
