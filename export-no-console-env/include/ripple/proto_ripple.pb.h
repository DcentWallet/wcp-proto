/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Thu Nov 15 16:29:38 2018. */

#ifndef PB_RIPPLE_PROTO_RIPPLE_PB_H_INCLUDED
#define PB_RIPPLE_PROTO_RIPPLE_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _ripple_get_address_req_parameter_t {
    char key_path[51];
/* @@protoc_insertion_point(struct:ripple_get_address_req_parameter_t) */
} ripple_get_address_req_parameter_t;

typedef struct _ripple_get_address_res_parameter_t {
    char address[43];
/* @@protoc_insertion_point(struct:ripple_get_address_res_parameter_t) */
} ripple_get_address_res_parameter_t;

typedef PB_BYTES_ARRAY_T(7900) ripple_transaction_req_parameter_t_unsigned_tx_t;
typedef struct _ripple_transaction_req_parameter_t {
    ripple_transaction_req_parameter_t_unsigned_tx_t unsigned_tx;
    char key_path[51];
/* @@protoc_insertion_point(struct:ripple_transaction_req_parameter_t) */
} ripple_transaction_req_parameter_t;

typedef PB_BYTES_ARRAY_T(8000) ripple_transaction_res_parameter_t_signed_tx_t;
typedef struct _ripple_transaction_res_parameter_t {
    ripple_transaction_res_parameter_t_signed_tx_t signed_tx;
/* @@protoc_insertion_point(struct:ripple_transaction_res_parameter_t) */
} ripple_transaction_res_parameter_t;

/* Default values for struct fields */

/* Initializer values for message structs */
#define ripple_transaction_req_parameter_t_init_default {{0, {0}}, ""}
#define ripple_transaction_res_parameter_t_init_default {{0, {0}}}
#define ripple_get_address_req_parameter_t_init_default {""}
#define ripple_get_address_res_parameter_t_init_default {""}
#define ripple_transaction_req_parameter_t_init_zero {{0, {0}}, ""}
#define ripple_transaction_res_parameter_t_init_zero {{0, {0}}}
#define ripple_get_address_req_parameter_t_init_zero {""}
#define ripple_get_address_res_parameter_t_init_zero {""}

/* Field tags (for use in manual encoding/decoding) */
#define ripple_get_address_req_parameter_t_key_path_tag 2
#define ripple_get_address_res_parameter_t_address_tag 1
#define ripple_transaction_req_parameter_t_unsigned_tx_tag 1
#define ripple_transaction_req_parameter_t_key_path_tag 10
#define ripple_transaction_res_parameter_t_signed_tx_tag 1

/* Struct field encoding specification for nanopb */
extern const pb_field_t ripple_transaction_req_parameter_t_fields[3];
extern const pb_field_t ripple_transaction_res_parameter_t_fields[2];
extern const pb_field_t ripple_get_address_req_parameter_t_fields[2];
extern const pb_field_t ripple_get_address_res_parameter_t_fields[2];

/* Maximum encoded size of messages (where known) */
#define ripple_transaction_req_parameter_t_size  7956
#define ripple_transaction_res_parameter_t_size  8003
#define ripple_get_address_req_parameter_t_size  53
#define ripple_get_address_res_parameter_t_size  45

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTO_RIPPLE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
