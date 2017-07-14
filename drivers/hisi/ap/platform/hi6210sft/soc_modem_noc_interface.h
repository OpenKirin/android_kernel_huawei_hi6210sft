#ifndef __SOC_MODEM_NOC_INTERFACE_H__
#define __SOC_MODEM_NOC_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_ADDR(base) ((base) + (0x0000))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_ADDR(base) ((base) + (0x0004))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_FAULTEN_ADDR(base) ((base) + (0x0008))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRVLD_ADDR(base) ((base) + (0x000C))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRCLR_ADDR(base) ((base) + (0x0010))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_ADDR(base) ((base) + (0x0014))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG1_ADDR(base) ((base) + (0x0018))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG3_ADDR(base) ((base) + (0x0020))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG7_ADDR(base) ((base) + (0x0030))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_ADDR(base) ((base) + (0x0080))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_ADDR(base) ((base) + (0x0084))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_FAULTEN_ADDR(base) ((base) + (0x0088))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRVLD_ADDR(base) ((base) + (0x008C))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRCLR_ADDR(base) ((base) + (0x0090))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_ADDR(base) ((base) + (0x0094))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG1_ADDR(base) ((base) + (0x0098))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG3_ADDR(base) ((base) + (0x00A0))
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG7_ADDR(base) ((base) + (0x00B0))
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0100))
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0104))
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0108))
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x010C))
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0118))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id_logger0 : 8;
        unsigned int core_check_sum_logger0 : 24;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_core_type_id_logger0_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_core_type_id_logger0_END (7)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_core_check_sum_logger0_START (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_core_check_sum_logger0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id_logger0 : 8;
        unsigned int flexnoc_id_logger0 : 24;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_user_id_logger0_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_user_id_logger0_END (7)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_flexnoc_id_logger0_START (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_flexnoc_id_logger0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faulten_logger0 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_FAULTEN_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_FAULTEN_faulten_logger0_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_FAULTEN_faulten_logger0_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errvld_logger0 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRVLD_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRVLD_errvld_logger0_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRVLD_errvld_logger0_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errclr_logger0 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRCLR_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRCLR_errclr_logger0_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRCLR_errclr_logger0_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lock_logger0 : 1;
        unsigned int opc_logger0 : 4;
        unsigned int reserved_0 : 3;
        unsigned int errcode_logger0 : 3;
        unsigned int reserved_1 : 5;
        unsigned int len1_logger0 : 8;
        unsigned int reserved_2 : 7;
        unsigned int format_logger0 : 1;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_lock_logger0_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_lock_logger0_END (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_opc_logger0_START (1)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_opc_logger0_END (4)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_errcode_logger0_START (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_errcode_logger0_END (10)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_len1_logger0_START (16)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_len1_logger0_END (23)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_format_logger0_START (31)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_format_logger0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errlog1_logger0 : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG1_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG1_errlog1_logger0_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG1_errlog1_logger0_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errlog3_logger0 : 32;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG3_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG3_errlog3_logger0_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG3_errlog3_logger0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errlog7_logger0 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG7_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG7_errlog7_logger0_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG7_errlog7_logger0_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id_logger1 : 8;
        unsigned int core_check_sum_logger1 : 24;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_core_type_id_logger1_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_core_type_id_logger1_END (7)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_core_check_sum_logger1_START (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_core_check_sum_logger1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id_logger1 : 8;
        unsigned int flexnoc_id_logger1 : 24;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_user_id_logger1_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_user_id_logger1_END (7)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_flexnoc_id_logger1_START (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_flexnoc_id_logger1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faulten_logger1 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_FAULTEN_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_FAULTEN_faulten_logger1_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_FAULTEN_faulten_logger1_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errvld_logger1 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRVLD_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRVLD_errvld_logger1_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRVLD_errvld_logger1_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errclr_logger1 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRCLR_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRCLR_errclr_logger1_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRCLR_errclr_logger1_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lock_logger1 : 1;
        unsigned int opc_logger1 : 4;
        unsigned int reserved_0 : 3;
        unsigned int errcode_logger1 : 3;
        unsigned int reserved_1 : 5;
        unsigned int len1_logger1 : 8;
        unsigned int reserved_2 : 7;
        unsigned int format_logger1 : 1;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_lock_logger1_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_lock_logger1_END (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_opc_logger1_START (1)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_opc_logger1_END (4)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_errcode_logger1_START (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_errcode_logger1_END (10)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_len1_logger1_START (16)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_len1_logger1_END (23)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_format_logger1_START (31)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_format_logger1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errlog1_logger1 : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG1_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG1_errlog1_logger1_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG1_errlog1_logger1_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errlog3_logger1 : 32;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG3_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG3_errlog3_logger1_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG3_errlog3_logger1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errlog7_logger1 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG7_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG7_errlog7_logger1_START (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG7_errlog7_logger1_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id : 8;
        unsigned int core_check_sum : 24;
    } reg;
} SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_core_type_id_START (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_core_type_id_END (7)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_core_check_sum_START (8)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_core_check_sum_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id : 8;
        unsigned int flexnoc_id : 24;
    } reg;
} SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_user_id_START (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_user_id_END (7)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START (8)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0 : 3;
        unsigned int reserved_0: 5;
        unsigned int p1 : 3;
        unsigned int reserved_1: 20;
        unsigned int mark : 1;
    } reg;
} SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_p0_START (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_p0_END (2)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_p1_START (8)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_p1_END (10)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_mark_START (31)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_mark_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MODEM_NOC_BBE16_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_MODE_mode_START (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_MODE_mode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int socket_qos_en : 1;
        unsigned int ext_thr_en : 1;
        unsigned int int_clk_en : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_socket_qos_en_START (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_socket_qos_en_END (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_ext_thr_en_START (1)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_ext_thr_en_END (1)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_int_clk_en_START (2)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_int_clk_en_END (2)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
