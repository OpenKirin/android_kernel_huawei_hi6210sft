#ifndef __SOC_MDDRC_SECURITY_INTERFACE_H__
#define __SOC_MDDRC_SECURITY_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_ADDR(base) ((base) + (0x000))
#define SOC_MDDRC_SECURITY_SEC_BYPASS_ADDR(base) ((base) + (0x004))
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ADDR(base) ((base) + (0x010))
#define SOC_MDDRC_SECURITY_SEC_INT_EN_ADDR(base) ((base) + (0x020))
#define SOC_MDDRC_SECURITY_SEC_INT_STATUS_ADDR(base) ((base) + (0x024))
#define SOC_MDDRC_SECURITY_SEC_INT_CLEAR_ADDR(base) ((base) + (0x028))
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_0_ADDR(base) ((base) + (0x080))
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_ADDR(base) ((base) + (0x084))
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_ADDR(base) ((base) + (0x088))
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_ADDR(base,regions) ((base) + (0x100+0x10*(regions)))
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_ADDR(base,regions) ((base) + (0x104+0x10*(regions)))
#define SOC_MDDRC_SECURITY_SEC_MID_WR_ADDR(base,regions) ((base) + (0x108+0x10*(regions)))
#define SOC_MDDRC_SECURITY_SEC_MID_RD_ADDR(base,regions) ((base) + (0x10C+0x10*(regions)))
#define SOC_MDDRC_SECURITY_SEC_ITCRG_ADDR(base) ((base) + (0x3C0))
#define SOC_MDDRC_SECURITY_SEC_ITIP_ADDR(base) ((base) + (0x3C4))
#define SOC_MDDRC_SECURITY_SEC_ITOP_ADDR(base) ((base) + (0x3C8))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int no_of_rgns : 8;
        unsigned int subrgn_en : 1;
        unsigned int reserved : 19;
        unsigned int version : 4;
    } reg;
} SOC_MDDRC_SECURITY_SEC_RTL_INF_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_no_of_rgns_START (0)
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_no_of_rgns_END (7)
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_subrgn_en_START (8)
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_subrgn_en_END (8)
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_version_START (28)
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_version_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bypass : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MDDRC_SECURITY_SEC_BYPASS_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_BYPASS_bypass_START (0)
#define SOC_MDDRC_SECURITY_SEC_BYPASS_bypass_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ld_rgn_map : 1;
        unsigned int ld_rgn_attrib : 1;
        unsigned int ld_mid_rd : 1;
        unsigned int ld_mid_wr : 1;
        unsigned int ld_bypass : 1;
        unsigned int reserved_0 : 11;
        unsigned int ld_rgns_sel : 8;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgn_map_START (0)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgn_map_END (0)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgn_attrib_START (1)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgn_attrib_END (1)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_mid_rd_START (2)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_mid_rd_END (2)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_mid_wr_START (3)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_mid_wr_END (3)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_bypass_START (4)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_bypass_END (4)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgns_sel_START (16)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgns_sel_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MDDRC_SECURITY_SEC_INT_EN_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_INT_EN_int_en_START (0)
#define SOC_MDDRC_SECURITY_SEC_INT_EN_int_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int status : 1;
        unsigned int overrun : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MDDRC_SECURITY_SEC_INT_STATUS_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_INT_STATUS_status_START (0)
#define SOC_MDDRC_SECURITY_SEC_INT_STATUS_status_END (0)
#define SOC_MDDRC_SECURITY_SEC_INT_STATUS_overrun_START (1)
#define SOC_MDDRC_SECURITY_SEC_INT_STATUS_overrun_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clear : 32;
    } reg;
} SOC_MDDRC_SECURITY_SEC_INT_CLEAR_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_INT_CLEAR_clear_START (0)
#define SOC_MDDRC_SECURITY_SEC_INT_CLEAR_clear_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int address_low : 32;
    } reg;
} SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_0_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_0_address_low_START (0)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_0_address_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int address_high : 8;
        unsigned int reserved_0 : 8;
        unsigned int privileged : 1;
        unsigned int nonsecure : 1;
        unsigned int reserved_1 : 2;
        unsigned int access_type : 1;
        unsigned int reserved_2 : 11;
    } reg;
} SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_address_high_START (0)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_address_high_END (7)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_privileged_START (16)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_privileged_END (16)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_nonsecure_START (17)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_nonsecure_END (17)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_access_type_START (20)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_access_type_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int id : 24;
        unsigned int mid : 8;
    } reg;
} SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_id_START (0)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_id_END (23)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_mid_START (24)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_mid_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rgn_base_addr : 24;
        unsigned int rgn_size : 6;
        unsigned int reserved : 1;
        unsigned int rgn_en : 1;
    } reg;
} SOC_MDDRC_SECURITY_SEC_RGN_MAP_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_base_addr_START (0)
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_base_addr_END (23)
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_size_START (24)
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_size_END (29)
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_en_START (31)
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sp : 4;
        unsigned int security_inv : 1;
        unsigned int reserved_0 : 3;
        unsigned int mid_en : 1;
        unsigned int mid_inv : 1;
        unsigned int reserved_1 : 6;
        unsigned int subrgn_disable : 16;
    } reg;
} SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_sp_START (0)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_sp_END (3)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_security_inv_START (4)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_security_inv_END (4)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_mid_en_START (8)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_mid_en_END (8)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_mid_inv_START (9)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_mid_inv_END (9)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_subrgn_disable_START (16)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_subrgn_disable_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mid_sel_wr : 32;
    } reg;
} SOC_MDDRC_SECURITY_SEC_MID_WR_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_MID_WR_mid_sel_wr_START (0)
#define SOC_MDDRC_SECURITY_SEC_MID_WR_mid_sel_wr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mid_sel_rd : 32;
    } reg;
} SOC_MDDRC_SECURITY_SEC_MID_RD_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_MID_RD_mid_sel_rd_START (0)
#define SOC_MDDRC_SECURITY_SEC_MID_RD_mid_sel_rd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_test_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MDDRC_SECURITY_SEC_ITCRG_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_ITCRG_int_test_en_START (0)
#define SOC_MDDRC_SECURITY_SEC_ITCRG_int_test_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int itip_secure_boot_lock : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MDDRC_SECURITY_SEC_ITIP_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_ITIP_itip_secure_boot_lock_START (0)
#define SOC_MDDRC_SECURITY_SEC_ITIP_itip_secure_boot_lock_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int itop_int : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MDDRC_SECURITY_SEC_ITOP_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_ITOP_itop_int_START (0)
#define SOC_MDDRC_SECURITY_SEC_ITOP_itop_int_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
