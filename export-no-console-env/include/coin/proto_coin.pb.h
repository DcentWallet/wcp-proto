/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Wed May 23 18:17:49 2018. */

#ifndef PB_COIN_PROTO_COIN_PB_H_INCLUDED
#define PB_COIN_PROTO_COIN_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _coin_extract_pubkey_req_parameter_t {
    char bip32name[17];
    char key_path[51];
/* @@protoc_insertion_point(struct:coin_extract_pubkey_req_parameter_t) */
} coin_extract_pubkey_req_parameter_t;

typedef PB_BYTES_ARRAY_T(121) coin_extract_pubkey_res_parameter_t_pubkey_t;
typedef struct _coin_extract_pubkey_res_parameter_t {
    coin_extract_pubkey_res_parameter_t_pubkey_t pubkey;
/* @@protoc_insertion_point(struct:coin_extract_pubkey_res_parameter_t) */
} coin_extract_pubkey_res_parameter_t;

typedef struct _coin_get_account_info_res_parameter_t {
    uint32_t total_num;
    uint32_t account_idx;
    char coin_name[17];
    char label[15];
    char address_path[25];
/* @@protoc_insertion_point(struct:coin_get_account_info_res_parameter_t) */
} coin_get_account_info_res_parameter_t;

typedef struct _coin_sync_account_info_req_parameter_t {
    uint32_t total_num;
    uint32_t account_idx;
    char date[17];
    char coin_group[17];
    char coin_name[17];
    char label[15];
    char balance[18];
    char address_path[25];
/* @@protoc_insertion_point(struct:coin_sync_account_info_req_parameter_t) */
} coin_sync_account_info_req_parameter_t;

/* Default values for struct fields */

/* Initializer values for message structs */
#define coin_sync_account_info_req_parameter_t_init_default {0, 0, "", "", "", "", "", ""}
#define coin_get_account_info_res_parameter_t_init_default {0, 0, "", "", ""}
#define coin_extract_pubkey_req_parameter_t_init_default {"", ""}
#define coin_extract_pubkey_res_parameter_t_init_default {{0, {0}}}
#define coin_sync_account_info_req_parameter_t_init_zero {0, 0, "", "", "", "", "", ""}
#define coin_get_account_info_res_parameter_t_init_zero {0, 0, "", "", ""}
#define coin_extract_pubkey_req_parameter_t_init_zero {"", ""}
#define coin_extract_pubkey_res_parameter_t_init_zero {{0, {0}}}

/* Field tags (for use in manual encoding/decoding) */
#define coin_extract_pubkey_req_parameter_t_bip32name_tag 1
#define coin_extract_pubkey_req_parameter_t_key_path_tag 2
#define coin_extract_pubkey_res_parameter_t_pubkey_tag 1
#define coin_get_account_info_res_parameter_t_total_num_tag 1
#define coin_get_account_info_res_parameter_t_account_idx_tag 2
#define coin_get_account_info_res_parameter_t_coin_name_tag 3
#define coin_get_account_info_res_parameter_t_label_tag 4
#define coin_get_account_info_res_parameter_t_address_path_tag 6
#define coin_sync_account_info_req_parameter_t_total_num_tag 1
#define coin_sync_account_info_req_parameter_t_account_idx_tag 2
#define coin_sync_account_info_req_parameter_t_date_tag 3
#define coin_sync_account_info_req_parameter_t_coin_group_tag 4
#define coin_sync_account_info_req_parameter_t_coin_name_tag 5
#define coin_sync_account_info_req_parameter_t_label_tag 6
#define coin_sync_account_info_req_parameter_t_balance_tag 7
#define coin_sync_account_info_req_parameter_t_address_path_tag 8

/* Struct field encoding specification for nanopb */
extern const pb_field_t coin_sync_account_info_req_parameter_t_fields[9];
extern const pb_field_t coin_get_account_info_res_parameter_t_fields[6];
extern const pb_field_t coin_extract_pubkey_req_parameter_t_fields[3];
extern const pb_field_t coin_extract_pubkey_res_parameter_t_fields[2];

/* Maximum encoded size of messages (where known) */
#define coin_sync_account_info_req_parameter_t_size 133
#define coin_get_account_info_res_parameter_t_size 75
#define coin_extract_pubkey_req_parameter_t_size 72
#define coin_extract_pubkey_res_parameter_t_size 123

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTO_COIN_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
