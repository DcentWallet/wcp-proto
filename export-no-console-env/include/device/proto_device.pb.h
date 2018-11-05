/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Mon Nov  5 20:32:22 2018. */

#ifndef PB_DEVICE_PROTO_DEVICE_PB_H_INCLUDED
#define PB_DEVICE_PROTO_DEVICE_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _device_wallet_state_t {
    device_wallet_state_t_init = 0,
    device_wallet_state_t_ready = 1,
    device_wallet_state_t_secure = 2,
    device_wallet_state_t_locked_fp = 3,
    device_wallet_state_t_locked_pin = 4,
    device_wallet_state_t_invalid = 255
} device_wallet_state_t;
#define _device_wallet_state_t_MIN device_wallet_state_t_init
#define _device_wallet_state_t_MAX device_wallet_state_t_invalid
#define _device_wallet_state_t_ARRAYSIZE ((device_wallet_state_t)(device_wallet_state_t_invalid+1))

/* Struct definitions */
typedef struct _device_coin_list_t {
    char name[16];
/* @@protoc_insertion_point(struct:device_coin_list_t) */
} device_coin_list_t;

typedef struct _device_fingerprint_t {
    uint32_t max_num;
    uint32_t enrolled;
/* @@protoc_insertion_point(struct:device_fingerprint_t) */
} device_fingerprint_t;

typedef struct _device_init_wallet_req_parameter_t {
    pb_size_t mnemonic_count;
    char mnemonic[24][20];
/* @@protoc_insertion_point(struct:device_init_wallet_req_parameter_t) */
} device_init_wallet_req_parameter_t;

typedef struct _device_set_label_req_parameter_t {
    char label[11];
/* @@protoc_insertion_point(struct:device_set_label_req_parameter_t) */
} device_set_label_req_parameter_t;

typedef struct _device_get_info_res_parameter_t {
    char devid[65];
    char fw_ver[14];
    char ksm_ver[14];
    device_wallet_state_t state;
    pb_size_t coin_count;
    device_coin_list_t coin[20];
    device_fingerprint_t fingerprint;
    char label[11];
/* @@protoc_insertion_point(struct:device_get_info_res_parameter_t) */
} device_get_info_res_parameter_t;

/* Default values for struct fields */

/* Initializer values for message structs */
#define device_get_info_res_parameter_t_init_default {"", "", "", (device_wallet_state_t)0, 0, {device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default, device_coin_list_t_init_default}, device_fingerprint_t_init_default, ""}
#define device_set_label_req_parameter_t_init_default {""}
#define device_init_wallet_req_parameter_t_init_default {0, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}}
#define device_fingerprint_t_init_default        {0, 0}
#define device_coin_list_t_init_default          {""}
#define device_get_info_res_parameter_t_init_zero {"", "", "", (device_wallet_state_t)0, 0, {device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero, device_coin_list_t_init_zero}, device_fingerprint_t_init_zero, ""}
#define device_set_label_req_parameter_t_init_zero {""}
#define device_init_wallet_req_parameter_t_init_zero {0, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}}
#define device_fingerprint_t_init_zero           {0, 0}
#define device_coin_list_t_init_zero             {""}

/* Field tags (for use in manual encoding/decoding) */
#define device_coin_list_t_name_tag              1
#define device_fingerprint_t_max_num_tag         1
#define device_fingerprint_t_enrolled_tag        2
#define device_init_wallet_req_parameter_t_mnemonic_tag 2
#define device_set_label_req_parameter_t_label_tag 1
#define device_get_info_res_parameter_t_devid_tag 1
#define device_get_info_res_parameter_t_fw_ver_tag 2
#define device_get_info_res_parameter_t_ksm_ver_tag 3
#define device_get_info_res_parameter_t_state_tag 4
#define device_get_info_res_parameter_t_coin_tag 5
#define device_get_info_res_parameter_t_fingerprint_tag 6
#define device_get_info_res_parameter_t_label_tag 7

/* Struct field encoding specification for nanopb */
extern const pb_field_t device_get_info_res_parameter_t_fields[8];
extern const pb_field_t device_set_label_req_parameter_t_fields[2];
extern const pb_field_t device_init_wallet_req_parameter_t_fields[2];
extern const pb_field_t device_fingerprint_t_fields[3];
extern const pb_field_t device_coin_list_t_fields[2];

/* Maximum encoded size of messages (where known) */
#define device_get_info_res_parameter_t_size     529
#define device_set_label_req_parameter_t_size    13
#define device_init_wallet_req_parameter_t_size  528
#define device_fingerprint_t_size                12
#define device_coin_list_t_size                  18

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTO_DEVICE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
