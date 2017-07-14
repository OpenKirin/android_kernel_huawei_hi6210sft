#ifndef __SOC_TZASC_INTERFACE_H__
#define __SOC_TZASC_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_TZASC_Configuration_ADDR(base) ((base) + (0x0000))
#define SOC_TZASC_ActionRegister_ADDR(base) ((base) + (0x0004))
#define SOC_TZASC_lockdown_range_ADDR(base) ((base) + (0x0008))
#define SOC_TZASC_lockdown_select_ADDR(base) ((base) + (0x000C))
#define SOC_TZASC_int_status_ADDR(base) ((base) + (0x0010))
#define SOC_TZASC_int_clear_ADDR(base) ((base) + (0x0014))
#define SOC_TZASC_fail_address_low_ADDR(base) ((base) + (0x0020))
#define SOC_TZASC_fail_address_high_ADDR(base) ((base) + (0x0024))
#define SOC_TZASC_fail_control_ADDR(base) ((base) + (0x0028))
#define SOC_TZASC_fail_id_ADDR(base) ((base) + (0x002C))
#define SOC_TZASC_speculation_control_ADDR(base) ((base) + (0x0030))
#define SOC_TZASC_security_inversion_en_ADDR(base) ((base) + (0x0034))
#define SOC_TZASC_region_setup_low_0_ADDR(base) ((base) + (0x0100))
#define SOC_TZASC_region_setup_high_0_ADDR(base) ((base) + (0x0104))
#define SOC_TZASC_region_attributes_0_ADDR(base) ((base) + (0x0108))
#define SOC_TZASC_region_setup_low_1_ADDR(base) ((base) + (0x0110))
#define SOC_TZASC_region_setup_high_1_ADDR(base) ((base) + (0x0114))
#define SOC_TZASC_region_attributes_1_ADDR(base) ((base) + (0x0118))
#define SOC_TZASC_region_setup_low_2_ADDR(base) ((base) + (0x0120))
#define SOC_TZASC_region_setup_high_2_ADDR(base) ((base) + (0x0124))
#define SOC_TZASC_region_attributes_2_ADDR(base) ((base) + (0x0128))
#define SOC_TZASC_region_setup_low_3_ADDR(base) ((base) + (0x0130))
#define SOC_TZASC_region_setup_high_3_ADDR(base) ((base) + (0x0134))
#define SOC_TZASC_region_attributes_3_ADDR(base) ((base) + (0x0138))
#define SOC_TZASC_region_setup_low_4_ADDR(base) ((base) + (0x0140))
#define SOC_TZASC_region_setup_high_4_ADDR(base) ((base) + (0x0144))
#define SOC_TZASC_region_attributes_4_ADDR(base) ((base) + (0x0148))
#define SOC_TZASC_region_setup_low_5_ADDR(base) ((base) + (0x0150))
#define SOC_TZASC_region_setup_high_5_ADDR(base) ((base) + (0x0154))
#define SOC_TZASC_region_attributes_5_ADDR(base) ((base) + (0x0158))
#define SOC_TZASC_region_setup_low_6_ADDR(base) ((base) + (0x0160))
#define SOC_TZASC_region_setup_high_6_ADDR(base) ((base) + (0x0164))
#define SOC_TZASC_region_attributes_6_ADDR(base) ((base) + (0x0168))
#define SOC_TZASC_region_setup_low_7_ADDR(base) ((base) + (0x0170))
#define SOC_TZASC_region_setup_high_7_ADDR(base) ((base) + (0x0174))
#define SOC_TZASC_region_attributes_7_ADDR(base) ((base) + (0x0178))
#define SOC_TZASC_itcrg_ADDR(base) ((base) + (0x0E00))
#define SOC_TZASC_itid_ADDR(base) ((base) + (0x0E04))
#define SOC_TZASC_itop_ADDR(base) ((base) + (0x0E08))
#define SOC_TZASC_periph_id_4_ADDR(base) ((base) + (0x0FD0))
#define SOC_TZASC_periph_id_0_ADDR(base) ((base) + (0x0FE0))
#define SOC_TZASC_periph_id_1_ADDR(base) ((base) + (0x0FE4))
#define SOC_TZASC_periph_id_2_ADDR(base) ((base) + (0x0FE8))
#define SOC_TZASC_periph_id_3_ADDR(base) ((base) + (0x0FEC))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int no_of_regions : 4;
        unsigned int reserved_0 : 4;
        unsigned int address_width : 6;
        unsigned int reserved_1 : 18;
    } reg;
} SOC_TZASC_Configuration_UNION;
#endif
#define SOC_TZASC_Configuration_no_of_regions_START (0)
#define SOC_TZASC_Configuration_no_of_regions_END (3)
#define SOC_TZASC_Configuration_address_width_START (8)
#define SOC_TZASC_Configuration_address_width_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reaction_value : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_TZASC_ActionRegister_UNION;
#endif
#define SOC_TZASC_ActionRegister_reaction_value_START (0)
#define SOC_TZASC_ActionRegister_reaction_value_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lockdown_regions : 4;
        unsigned int reserved : 27;
        unsigned int enable : 1;
    } reg;
} SOC_TZASC_lockdown_range_UNION;
#endif
#define SOC_TZASC_lockdown_range_lockdown_regions_START (0)
#define SOC_TZASC_lockdown_range_lockdown_regions_END (3)
#define SOC_TZASC_lockdown_range_enable_START (31)
#define SOC_TZASC_lockdown_range_enable_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int region_register : 1;
        unsigned int security_inv : 1;
        unsigned int acc_speculation_cntl : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_TZASC_lockdown_select_UNION;
#endif
#define SOC_TZASC_lockdown_select_region_register_START (0)
#define SOC_TZASC_lockdown_select_region_register_END (0)
#define SOC_TZASC_lockdown_select_security_inv_START (1)
#define SOC_TZASC_lockdown_select_security_inv_END (1)
#define SOC_TZASC_lockdown_select_acc_speculation_cntl_START (2)
#define SOC_TZASC_lockdown_select_acc_speculation_cntl_END (2)
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
} SOC_TZASC_int_status_UNION;
#endif
#define SOC_TZASC_int_status_status_START (0)
#define SOC_TZASC_int_status_status_END (0)
#define SOC_TZASC_int_status_overrun_START (1)
#define SOC_TZASC_int_status_overrun_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clear : 32;
    } reg;
} SOC_TZASC_int_clear_UNION;
#endif
#define SOC_TZASC_int_clear_clear_START (0)
#define SOC_TZASC_int_clear_clear_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int add_status_low : 32;
    } reg;
} SOC_TZASC_fail_address_low_UNION;
#endif
#define SOC_TZASC_fail_address_low_add_status_low_START (0)
#define SOC_TZASC_fail_address_low_add_status_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int add_status_high : 32;
    } reg;
} SOC_TZASC_fail_address_high_UNION;
#endif
#define SOC_TZASC_fail_address_high_add_status_high_START (0)
#define SOC_TZASC_fail_address_high_add_status_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 20;
        unsigned int privileged : 1;
        unsigned int nonsecure : 1;
        unsigned int reserved_1 : 2;
        unsigned int write : 1;
        unsigned int reserved_2 : 7;
    } reg;
} SOC_TZASC_fail_control_UNION;
#endif
#define SOC_TZASC_fail_control_privileged_START (20)
#define SOC_TZASC_fail_control_privileged_END (20)
#define SOC_TZASC_fail_control_nonsecure_START (21)
#define SOC_TZASC_fail_control_nonsecure_END (21)
#define SOC_TZASC_fail_control_write_START (24)
#define SOC_TZASC_fail_control_write_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fail_id : 32;
    } reg;
} SOC_TZASC_fail_id_UNION;
#endif
#define SOC_TZASC_fail_id_fail_id_START (0)
#define SOC_TZASC_fail_id_fail_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int read_speculation : 1;
        unsigned int write_speculation : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_TZASC_speculation_control_UNION;
#endif
#define SOC_TZASC_speculation_control_read_speculation_START (0)
#define SOC_TZASC_speculation_control_read_speculation_END (0)
#define SOC_TZASC_speculation_control_write_speculation_START (1)
#define SOC_TZASC_speculation_control_write_speculation_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int security_inversion_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_TZASC_security_inversion_en_UNION;
#endif
#define SOC_TZASC_security_inversion_en_security_inversion_en_START (0)
#define SOC_TZASC_security_inversion_en_security_inversion_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 15;
        unsigned int base_address_low : 17;
    } reg;
} SOC_TZASC_region_setup_low_0_UNION;
#endif
#define SOC_TZASC_region_setup_low_0_base_address_low_START (15)
#define SOC_TZASC_region_setup_low_0_base_address_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_address_high : 32;
    } reg;
} SOC_TZASC_region_setup_high_0_UNION;
#endif
#define SOC_TZASC_region_setup_high_0_base_address_high_START (0)
#define SOC_TZASC_region_setup_high_0_base_address_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int en : 1;
        unsigned int size : 6;
        unsigned int reserved_0 : 1;
        unsigned int subregion_disable : 8;
        unsigned int reserved_1 : 12;
        unsigned int sp : 4;
    } reg;
} SOC_TZASC_region_attributes_0_UNION;
#endif
#define SOC_TZASC_region_attributes_0_en_START (0)
#define SOC_TZASC_region_attributes_0_en_END (0)
#define SOC_TZASC_region_attributes_0_size_START (1)
#define SOC_TZASC_region_attributes_0_size_END (6)
#define SOC_TZASC_region_attributes_0_subregion_disable_START (8)
#define SOC_TZASC_region_attributes_0_subregion_disable_END (15)
#define SOC_TZASC_region_attributes_0_sp_START (28)
#define SOC_TZASC_region_attributes_0_sp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 15;
        unsigned int base_address_low : 17;
    } reg;
} SOC_TZASC_region_setup_low_1_UNION;
#endif
#define SOC_TZASC_region_setup_low_1_base_address_low_START (15)
#define SOC_TZASC_region_setup_low_1_base_address_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_address_high : 32;
    } reg;
} SOC_TZASC_region_setup_high_1_UNION;
#endif
#define SOC_TZASC_region_setup_high_1_base_address_high_START (0)
#define SOC_TZASC_region_setup_high_1_base_address_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int en : 1;
        unsigned int size : 6;
        unsigned int reserved_0 : 1;
        unsigned int subregion_disable : 8;
        unsigned int reserved_1 : 12;
        unsigned int sp : 4;
    } reg;
} SOC_TZASC_region_attributes_1_UNION;
#endif
#define SOC_TZASC_region_attributes_1_en_START (0)
#define SOC_TZASC_region_attributes_1_en_END (0)
#define SOC_TZASC_region_attributes_1_size_START (1)
#define SOC_TZASC_region_attributes_1_size_END (6)
#define SOC_TZASC_region_attributes_1_subregion_disable_START (8)
#define SOC_TZASC_region_attributes_1_subregion_disable_END (15)
#define SOC_TZASC_region_attributes_1_sp_START (28)
#define SOC_TZASC_region_attributes_1_sp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 15;
        unsigned int base_address_low : 17;
    } reg;
} SOC_TZASC_region_setup_low_2_UNION;
#endif
#define SOC_TZASC_region_setup_low_2_base_address_low_START (15)
#define SOC_TZASC_region_setup_low_2_base_address_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_address_high : 32;
    } reg;
} SOC_TZASC_region_setup_high_2_UNION;
#endif
#define SOC_TZASC_region_setup_high_2_base_address_high_START (0)
#define SOC_TZASC_region_setup_high_2_base_address_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int en : 1;
        unsigned int size : 6;
        unsigned int reserved_0 : 1;
        unsigned int subregion_disable : 8;
        unsigned int reserved_1 : 12;
        unsigned int sp : 4;
    } reg;
} SOC_TZASC_region_attributes_2_UNION;
#endif
#define SOC_TZASC_region_attributes_2_en_START (0)
#define SOC_TZASC_region_attributes_2_en_END (0)
#define SOC_TZASC_region_attributes_2_size_START (1)
#define SOC_TZASC_region_attributes_2_size_END (6)
#define SOC_TZASC_region_attributes_2_subregion_disable_START (8)
#define SOC_TZASC_region_attributes_2_subregion_disable_END (15)
#define SOC_TZASC_region_attributes_2_sp_START (28)
#define SOC_TZASC_region_attributes_2_sp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 15;
        unsigned int base_address_low : 17;
    } reg;
} SOC_TZASC_region_setup_low_3_UNION;
#endif
#define SOC_TZASC_region_setup_low_3_base_address_low_START (15)
#define SOC_TZASC_region_setup_low_3_base_address_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_address_high : 32;
    } reg;
} SOC_TZASC_region_setup_high_3_UNION;
#endif
#define SOC_TZASC_region_setup_high_3_base_address_high_START (0)
#define SOC_TZASC_region_setup_high_3_base_address_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int en : 1;
        unsigned int size : 6;
        unsigned int reserved_0 : 1;
        unsigned int subregion_disable : 8;
        unsigned int reserved_1 : 12;
        unsigned int sp : 4;
    } reg;
} SOC_TZASC_region_attributes_3_UNION;
#endif
#define SOC_TZASC_region_attributes_3_en_START (0)
#define SOC_TZASC_region_attributes_3_en_END (0)
#define SOC_TZASC_region_attributes_3_size_START (1)
#define SOC_TZASC_region_attributes_3_size_END (6)
#define SOC_TZASC_region_attributes_3_subregion_disable_START (8)
#define SOC_TZASC_region_attributes_3_subregion_disable_END (15)
#define SOC_TZASC_region_attributes_3_sp_START (28)
#define SOC_TZASC_region_attributes_3_sp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 15;
        unsigned int base_address_low : 17;
    } reg;
} SOC_TZASC_region_setup_low_4_UNION;
#endif
#define SOC_TZASC_region_setup_low_4_base_address_low_START (15)
#define SOC_TZASC_region_setup_low_4_base_address_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_address_high : 32;
    } reg;
} SOC_TZASC_region_setup_high_4_UNION;
#endif
#define SOC_TZASC_region_setup_high_4_base_address_high_START (0)
#define SOC_TZASC_region_setup_high_4_base_address_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int en : 1;
        unsigned int size : 6;
        unsigned int reserved_0 : 1;
        unsigned int subregion_disable : 8;
        unsigned int reserved_1 : 12;
        unsigned int sp : 4;
    } reg;
} SOC_TZASC_region_attributes_4_UNION;
#endif
#define SOC_TZASC_region_attributes_4_en_START (0)
#define SOC_TZASC_region_attributes_4_en_END (0)
#define SOC_TZASC_region_attributes_4_size_START (1)
#define SOC_TZASC_region_attributes_4_size_END (6)
#define SOC_TZASC_region_attributes_4_subregion_disable_START (8)
#define SOC_TZASC_region_attributes_4_subregion_disable_END (15)
#define SOC_TZASC_region_attributes_4_sp_START (28)
#define SOC_TZASC_region_attributes_4_sp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 15;
        unsigned int base_address_low : 17;
    } reg;
} SOC_TZASC_region_setup_low_5_UNION;
#endif
#define SOC_TZASC_region_setup_low_5_base_address_low_START (15)
#define SOC_TZASC_region_setup_low_5_base_address_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_address_high : 32;
    } reg;
} SOC_TZASC_region_setup_high_5_UNION;
#endif
#define SOC_TZASC_region_setup_high_5_base_address_high_START (0)
#define SOC_TZASC_region_setup_high_5_base_address_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int en : 1;
        unsigned int size : 6;
        unsigned int reserved_0 : 1;
        unsigned int subregion_disable : 8;
        unsigned int reserved_1 : 12;
        unsigned int sp : 4;
    } reg;
} SOC_TZASC_region_attributes_5_UNION;
#endif
#define SOC_TZASC_region_attributes_5_en_START (0)
#define SOC_TZASC_region_attributes_5_en_END (0)
#define SOC_TZASC_region_attributes_5_size_START (1)
#define SOC_TZASC_region_attributes_5_size_END (6)
#define SOC_TZASC_region_attributes_5_subregion_disable_START (8)
#define SOC_TZASC_region_attributes_5_subregion_disable_END (15)
#define SOC_TZASC_region_attributes_5_sp_START (28)
#define SOC_TZASC_region_attributes_5_sp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 15;
        unsigned int base_address_low : 17;
    } reg;
} SOC_TZASC_region_setup_low_6_UNION;
#endif
#define SOC_TZASC_region_setup_low_6_base_address_low_START (15)
#define SOC_TZASC_region_setup_low_6_base_address_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_address_high : 32;
    } reg;
} SOC_TZASC_region_setup_high_6_UNION;
#endif
#define SOC_TZASC_region_setup_high_6_base_address_high_START (0)
#define SOC_TZASC_region_setup_high_6_base_address_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int en : 1;
        unsigned int size : 6;
        unsigned int reserved_0 : 1;
        unsigned int subregion_disable : 8;
        unsigned int reserved_1 : 12;
        unsigned int sp : 4;
    } reg;
} SOC_TZASC_region_attributes_6_UNION;
#endif
#define SOC_TZASC_region_attributes_6_en_START (0)
#define SOC_TZASC_region_attributes_6_en_END (0)
#define SOC_TZASC_region_attributes_6_size_START (1)
#define SOC_TZASC_region_attributes_6_size_END (6)
#define SOC_TZASC_region_attributes_6_subregion_disable_START (8)
#define SOC_TZASC_region_attributes_6_subregion_disable_END (15)
#define SOC_TZASC_region_attributes_6_sp_START (28)
#define SOC_TZASC_region_attributes_6_sp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 15;
        unsigned int base_address_low : 17;
    } reg;
} SOC_TZASC_region_setup_low_7_UNION;
#endif
#define SOC_TZASC_region_setup_low_7_base_address_low_START (15)
#define SOC_TZASC_region_setup_low_7_base_address_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_address_high : 32;
    } reg;
} SOC_TZASC_region_setup_high_7_UNION;
#endif
#define SOC_TZASC_region_setup_high_7_base_address_high_START (0)
#define SOC_TZASC_region_setup_high_7_base_address_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int en : 1;
        unsigned int size : 6;
        unsigned int reserved_0 : 1;
        unsigned int subregion_disable : 8;
        unsigned int reserved_1 : 12;
        unsigned int sp : 4;
    } reg;
} SOC_TZASC_region_attributes_7_UNION;
#endif
#define SOC_TZASC_region_attributes_7_en_START (0)
#define SOC_TZASC_region_attributes_7_en_END (0)
#define SOC_TZASC_region_attributes_7_size_START (1)
#define SOC_TZASC_region_attributes_7_size_END (6)
#define SOC_TZASC_region_attributes_7_subregion_disable_START (8)
#define SOC_TZASC_region_attributes_7_subregion_disable_END (15)
#define SOC_TZASC_region_attributes_7_sp_START (28)
#define SOC_TZASC_region_attributes_7_sp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_test_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_TZASC_itcrg_UNION;
#endif
#define SOC_TZASC_itcrg_int_test_en_START (0)
#define SOC_TZASC_itcrg_int_test_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int itip_secure_boot_lock : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_TZASC_itid_UNION;
#endif
#define SOC_TZASC_itid_itip_secure_boot_lock_START (0)
#define SOC_TZASC_itid_itip_secure_boot_lock_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int itop_int : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_TZASC_itop_UNION;
#endif
#define SOC_TZASC_itop_itop_int_START (0)
#define SOC_TZASC_itop_itop_int_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int jep106_c_code : 4;
        unsigned int no_4KB_count : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_TZASC_periph_id_4_UNION;
#endif
#define SOC_TZASC_periph_id_4_jep106_c_code_START (0)
#define SOC_TZASC_periph_id_4_jep106_c_code_END (3)
#define SOC_TZASC_periph_id_4_no_4KB_count_START (4)
#define SOC_TZASC_periph_id_4_no_4KB_count_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int part_number_0 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_TZASC_periph_id_0_UNION;
#endif
#define SOC_TZASC_periph_id_0_part_number_0_START (0)
#define SOC_TZASC_periph_id_0_part_number_0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int part_number_1 : 4;
        unsigned int jep106_id_3_0 : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_TZASC_periph_id_1_UNION;
#endif
#define SOC_TZASC_periph_id_1_part_number_1_START (0)
#define SOC_TZASC_periph_id_1_part_number_1_END (3)
#define SOC_TZASC_periph_id_1_jep106_id_3_0_START (4)
#define SOC_TZASC_periph_id_1_jep106_id_3_0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int jep106_id_6_4 : 3;
        unsigned int jedec_used : 1;
        unsigned int revision : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_TZASC_periph_id_2_UNION;
#endif
#define SOC_TZASC_periph_id_2_jep106_id_6_4_START (0)
#define SOC_TZASC_periph_id_2_jep106_id_6_4_END (2)
#define SOC_TZASC_periph_id_2_jedec_used_START (3)
#define SOC_TZASC_periph_id_2_jedec_used_END (3)
#define SOC_TZASC_periph_id_2_revision_START (4)
#define SOC_TZASC_periph_id_2_revision_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mod_number : 4;
        unsigned int RevAnd : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_TZASC_periph_id_3_UNION;
#endif
#define SOC_TZASC_periph_id_3_mod_number_START (0)
#define SOC_TZASC_periph_id_3_mod_number_END (3)
#define SOC_TZASC_periph_id_3_RevAnd_START (4)
#define SOC_TZASC_periph_id_3_RevAnd_END (7)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
