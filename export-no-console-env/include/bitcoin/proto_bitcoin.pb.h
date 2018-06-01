/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Sat Jun  2 00:59:19 2018. */

#ifndef PB_BITCOIN_PROTO_BITCOIN_PB_H_INCLUDED
#define PB_BITCOIN_PROTO_BITCOIN_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _bitcoin_transaction_type_t {
    bitcoin_transaction_type_t_p2pkh = 0,
    bitcoin_transaction_type_t_p2pk = 1,
    bitcoin_transaction_type_t_p2sh = 2,
    bitcoin_transaction_type_t_multisig = 3,
    bitcoin_transaction_type_t_change = 255
} bitcoin_transaction_type_t;
#define _bitcoin_transaction_type_t_MIN bitcoin_transaction_type_t_p2pkh
#define _bitcoin_transaction_type_t_MAX bitcoin_transaction_type_t_change
#define _bitcoin_transaction_type_t_ARRAYSIZE ((bitcoin_transaction_type_t)(bitcoin_transaction_type_t_change+1))

/* Struct definitions */
typedef struct _bitcoin_get_address_req_parameter_t {
    char key_path[51];
/* @@protoc_insertion_point(struct:bitcoin_get_address_req_parameter_t) */
} bitcoin_get_address_req_parameter_t;

typedef struct _bitcoin_get_address_res_parameter_t {
    char address[40];
/* @@protoc_insertion_point(struct:bitcoin_get_address_res_parameter_t) */
} bitcoin_get_address_res_parameter_t;

typedef struct _bitcoin_transaction_finish_res_parameter_t {
    uint32_t tx_size;
    uint32_t tx_blk_size;
/* @@protoc_insertion_point(struct:bitcoin_transaction_finish_res_parameter_t) */
} bitcoin_transaction_finish_res_parameter_t;

typedef struct _bitcoin_transaction_input_t {
    uint32_t prev_tx_size;
    uint32_t utxo_idx;
    bitcoin_transaction_type_t type;
    char key_path[51];
    bool has_sequence;
    uint32_t sequence;
/* @@protoc_insertion_point(struct:bitcoin_transaction_input_t) */
} bitcoin_transaction_input_t;

typedef struct _bitcoin_transaction_output_t {
    bitcoin_transaction_type_t type;
    uint64_t value;
    pb_size_t to_address_count;
    char to_address[3][120];
/* @@protoc_insertion_point(struct:bitcoin_transaction_output_t) */
} bitcoin_transaction_output_t;

typedef PB_BYTES_ARRAY_T(8000) bitcoin_transaction_retrieve_res_parameter_t_tx_blk_t;
typedef struct _bitcoin_transaction_retrieve_res_parameter_t {
    uint32_t tx_blk_idx;
    bitcoin_transaction_retrieve_res_parameter_t_tx_blk_t tx_blk;
/* @@protoc_insertion_point(struct:bitcoin_transaction_retrieve_res_parameter_t) */
} bitcoin_transaction_retrieve_res_parameter_t;

typedef PB_BYTES_ARRAY_T(8000) bitcoin_transaction_update_prevtx_req_parameter_t_prev_tx_blk_t;
typedef struct _bitcoin_transaction_update_prevtx_req_parameter_t {
    uint32_t input_idx;
    uint32_t prev_tx_blk_idx;
    bitcoin_transaction_update_prevtx_req_parameter_t_prev_tx_blk_t prev_tx_blk;
/* @@protoc_insertion_point(struct:bitcoin_transaction_update_prevtx_req_parameter_t) */
} bitcoin_transaction_update_prevtx_req_parameter_t;

typedef PB_BYTES_ARRAY_T(8000) bitcoin_transaction_update_script_req_parameter_t_script_t;
typedef struct _bitcoin_transaction_update_script_req_parameter_t {
    uint32_t input_idx;
    bitcoin_transaction_update_script_req_parameter_t_script_t script;
/* @@protoc_insertion_point(struct:bitcoin_transaction_update_script_req_parameter_t) */
} bitcoin_transaction_update_script_req_parameter_t;

typedef struct _bitcoin_transaction_begin_req_parameter_t {
    uint32_t version;
    uint32_t tx_blk_size;
    pb_size_t input_count;
    bitcoin_transaction_input_t input[50];
    pb_size_t output_count;
    bitcoin_transaction_output_t output[10];
    uint32_t locktime;
/* @@protoc_insertion_point(struct:bitcoin_transaction_begin_req_parameter_t) */
} bitcoin_transaction_begin_req_parameter_t;

/* Default values for struct fields */

/* Initializer values for message structs */
#define bitcoin_transaction_begin_req_parameter_t_init_default {0, 0, 0, {bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default, bitcoin_transaction_input_t_init_default}, 0, {bitcoin_transaction_output_t_init_default, bitcoin_transaction_output_t_init_default, bitcoin_transaction_output_t_init_default, bitcoin_transaction_output_t_init_default, bitcoin_transaction_output_t_init_default, bitcoin_transaction_output_t_init_default, bitcoin_transaction_output_t_init_default, bitcoin_transaction_output_t_init_default, bitcoin_transaction_output_t_init_default, bitcoin_transaction_output_t_init_default}, 0}
#define bitcoin_transaction_update_script_req_parameter_t_init_default {0, {0, {0}}}
#define bitcoin_transaction_update_prevtx_req_parameter_t_init_default {0, 0, {0, {0}}}
#define bitcoin_transaction_finish_res_parameter_t_init_default {0, 0}
#define bitcoin_transaction_retrieve_res_parameter_t_init_default {0, {0, {0}}}
#define bitcoin_get_address_req_parameter_t_init_default {""}
#define bitcoin_get_address_res_parameter_t_init_default {""}
#define bitcoin_transaction_input_t_init_default {0, 0, (bitcoin_transaction_type_t)0, "", false, 0}
#define bitcoin_transaction_output_t_init_default {(bitcoin_transaction_type_t)0, 0, 0, {"", "", ""}}
#define bitcoin_transaction_begin_req_parameter_t_init_zero {0, 0, 0, {bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero, bitcoin_transaction_input_t_init_zero}, 0, {bitcoin_transaction_output_t_init_zero, bitcoin_transaction_output_t_init_zero, bitcoin_transaction_output_t_init_zero, bitcoin_transaction_output_t_init_zero, bitcoin_transaction_output_t_init_zero, bitcoin_transaction_output_t_init_zero, bitcoin_transaction_output_t_init_zero, bitcoin_transaction_output_t_init_zero, bitcoin_transaction_output_t_init_zero, bitcoin_transaction_output_t_init_zero}, 0}
#define bitcoin_transaction_update_script_req_parameter_t_init_zero {0, {0, {0}}}
#define bitcoin_transaction_update_prevtx_req_parameter_t_init_zero {0, 0, {0, {0}}}
#define bitcoin_transaction_finish_res_parameter_t_init_zero {0, 0}
#define bitcoin_transaction_retrieve_res_parameter_t_init_zero {0, {0, {0}}}
#define bitcoin_get_address_req_parameter_t_init_zero {""}
#define bitcoin_get_address_res_parameter_t_init_zero {""}
#define bitcoin_transaction_input_t_init_zero    {0, 0, (bitcoin_transaction_type_t)0, "", false, 0}
#define bitcoin_transaction_output_t_init_zero   {(bitcoin_transaction_type_t)0, 0, 0, {"", "", ""}}

/* Field tags (for use in manual encoding/decoding) */
#define bitcoin_get_address_req_parameter_t_key_path_tag 2
#define bitcoin_get_address_res_parameter_t_address_tag 1
#define bitcoin_transaction_finish_res_parameter_t_tx_size_tag 1
#define bitcoin_transaction_finish_res_parameter_t_tx_blk_size_tag 2
#define bitcoin_transaction_input_t_prev_tx_size_tag 1
#define bitcoin_transaction_input_t_utxo_idx_tag 2
#define bitcoin_transaction_input_t_type_tag     3
#define bitcoin_transaction_input_t_key_path_tag 4
#define bitcoin_transaction_input_t_sequence_tag 5
#define bitcoin_transaction_output_t_type_tag    1
#define bitcoin_transaction_output_t_value_tag   2
#define bitcoin_transaction_output_t_to_address_tag 3
#define bitcoin_transaction_retrieve_res_parameter_t_tx_blk_idx_tag 1
#define bitcoin_transaction_retrieve_res_parameter_t_tx_blk_tag 2
#define bitcoin_transaction_update_prevtx_req_parameter_t_input_idx_tag 1
#define bitcoin_transaction_update_prevtx_req_parameter_t_prev_tx_blk_idx_tag 2
#define bitcoin_transaction_update_prevtx_req_parameter_t_prev_tx_blk_tag 3
#define bitcoin_transaction_update_script_req_parameter_t_input_idx_tag 1
#define bitcoin_transaction_update_script_req_parameter_t_script_tag 2
#define bitcoin_transaction_begin_req_parameter_t_version_tag 1
#define bitcoin_transaction_begin_req_parameter_t_tx_blk_size_tag 2
#define bitcoin_transaction_begin_req_parameter_t_input_tag 5
#define bitcoin_transaction_begin_req_parameter_t_output_tag 7
#define bitcoin_transaction_begin_req_parameter_t_locktime_tag 8

/* Struct field encoding specification for nanopb */
extern const pb_field_t bitcoin_transaction_begin_req_parameter_t_fields[6];
extern const pb_field_t bitcoin_transaction_update_script_req_parameter_t_fields[3];
extern const pb_field_t bitcoin_transaction_update_prevtx_req_parameter_t_fields[4];
extern const pb_field_t bitcoin_transaction_finish_res_parameter_t_fields[3];
extern const pb_field_t bitcoin_transaction_retrieve_res_parameter_t_fields[3];
extern const pb_field_t bitcoin_get_address_req_parameter_t_fields[2];
extern const pb_field_t bitcoin_get_address_res_parameter_t_fields[2];
extern const pb_field_t bitcoin_transaction_input_t_fields[6];
extern const pb_field_t bitcoin_transaction_output_t_fields[4];

/* Maximum encoded size of messages (where known) */
#define bitcoin_transaction_begin_req_parameter_t_size 7648
#define bitcoin_transaction_update_script_req_parameter_t_size 8009
#define bitcoin_transaction_update_prevtx_req_parameter_t_size 8015
#define bitcoin_transaction_finish_res_parameter_t_size 12
#define bitcoin_transaction_retrieve_res_parameter_t_size 8009
#define bitcoin_get_address_req_parameter_t_size 53
#define bitcoin_get_address_res_parameter_t_size 42
#define bitcoin_transaction_input_t_size         74
#define bitcoin_transaction_output_t_size        380

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTO_BITCOIN_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
