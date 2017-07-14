#ifndef __SOC_MEDIA_NOC__INTERFACE_H__
#define __SOC_MEDIA_NOC__INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_ADDR(base) ((base) + (0x0000))
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_ADDR(base) ((base) + (0x0004))
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_FAULTEN_ADDR(base) ((base) + (0x0008))
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRVLD_ADDR(base) ((base) + (0x000C))
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRCLR_ADDR(base) ((base) + (0x0010))
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_ADDR(base) ((base) + (0x0014))
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG1_ADDR(base) ((base) + (0x0018))
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG3_ADDR(base) ((base) + (0x0020))
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG5_ADDR(base) ((base) + (0x0028))
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG7_ADDR(base) ((base) + (0x0030))
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0100))
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0104))
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0108))
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x010C))
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0110))
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0114))
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0118))
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0200))
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0204))
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0208))
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x020C))
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0210))
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0214))
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0218))
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_ADDR(base) ((base) + (0x1000))
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_ADDR(base) ((base) + (0x1004))
#define SOC_MEDIA_NOC_SMMU_ADAPTER_RATE_ADDR(base) ((base) + (0x1008))
#define SOC_MEDIA_NOC_SMMU_ADAPTER_BYPASS_ADDR(base) ((base) + (0x100C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_ADDR(base) ((base) + (0x2000))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_ADDR(base) ((base) + (0x2004))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_ADDR(base) ((base) + (0x2008))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_ADDR(base) ((base) + (0x200C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEPORTSEL_ADDR(base) ((base) + (0x2010))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_FILTERLUT_ADDR(base) ((base) + (0x2014))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMEN_ADDR(base) ((base) + (0x2018))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMSTATUS_ADDR(base) ((base) + (0x201C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMCLR_ADDR(base) ((base) + (0x2020))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATPERIOD_ADDR(base) ((base) + (0x2024))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATGO_ADDR(base) ((base) + (0x2028))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMIN_ADDR(base) ((base) + (0x202C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMAX_ADDR(base) ((base) + (0x2030))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMSTATUS_ADDR(base) ((base) + (0x2034))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMCLR_ADDR(base) ((base) + (0x2038))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMEN_ADDR(base) ((base) + (0x203C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDBASE_ADDR(base) ((base) + (0x2044))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDMASK_ADDR(base) ((base) + (0x2048))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ADDRBASE_LOW_ADDR(base) ((base) + (0x204C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_WINDOWSIZE_ADDR(base) ((base) + (0x1054))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYBASE_ADDR(base) ((base) + (0x2058))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYMASK_ADDR(base) ((base) + (0x205C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_ADDR(base) ((base) + (0x2060))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_ADDR(base) ((base) + (0x2064))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_LENGTH_ADDR(base) ((base) + (0x2068))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_URGENCY_ADDR(base) ((base) + (0x206C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERBASE_ADDR(base) ((base) + (0x2070))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERMASK_ADDR(base) ((base) + (0x2074))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDBASE_ADDR(base) ((base) + (0x2080))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDMASK_ADDR(base) ((base) + (0x2084))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ADDRBASE_LOW_ADDR(base) ((base) + (0x2088))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_WINDOWSIZE_ADDR(base) ((base) + (0x2090))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYBASE_ADDR(base) ((base) + (0x2094))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYMASK_ADDR(base) ((base) + (0x2098))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_ADDR(base) ((base) + (0x209C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_ADDR(base) ((base) + (0x20A0))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_LENGTH_ADDR(base) ((base) + (0x20A4))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_URGENCY_ADDR(base) ((base) + (0x20A8))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERBASE_ADDR(base) ((base) + (0x20AC))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERMASK_ADDR(base) ((base) + (0x20B0))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDBASE_ADDR(base) ((base) + (0x20BC))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDMASK_ADDR(base) ((base) + (0x20C0))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ADDRBASE_LOW_ADDR(base) ((base) + (0x20C4))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_WINDOWSIZE_ADDR(base) ((base) + (0x20CC))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYBASE_ADDR(base) ((base) + (0x20D0))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYMASK_ADDR(base) ((base) + (0x20D4))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_ADDR(base) ((base) + (0x20D8))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_ADDR(base) ((base) + (0x20DC))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_LENGTH_ADDR(base) ((base) + (0x20E0))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_URGENCY_ADDR(base) ((base) + (0x20E4))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERBASE_ADDR(base) ((base) + (0x20E8))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERMASK_ADDR(base) ((base) + (0x20EC))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDBASE_ADDR(base) ((base) + (0x20F8))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDMASK_ADDR(base) ((base) + (0x20FC))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ADDRBASE_LOW_ADDR(base) ((base) + (0x2100))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_WINDOWSIZE_ADDR(base) ((base) + (0x2108))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYBASE_ADDR(base) ((base) + (0x210C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYMASK_ADDR(base) ((base) + (0x2110))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_ADDR(base) ((base) + (0x2114))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_ADDR(base) ((base) + (0x2118))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_LENGTH_ADDR(base) ((base) + (0x211C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_URGENCY_ADDR(base) ((base) + (0x2120))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERBASE_ADDR(base) ((base) + (0x2124))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERMASK_ADDR(base) ((base) + (0x2128))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_SRC_ADDR(base) ((base) + (0x2138))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_ALARMMODE_ADDR(base) ((base) + (0x213C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_VAL_ADDR(base) ((base) + (0x2140))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_SRC_ADDR(base) ((base) + (0x214C))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_ALARMMODE_ADDR(base) ((base) + (0x2150))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_VAL_ADDR(base) ((base) + (0x2154))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_SRC_ADDR(base) ((base) + (0x2160))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_ALARMMODE_ADDR(base) ((base) + (0x2164))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_VAL_ADDR(base) ((base) + (0x2168))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_SRC_ADDR(base) ((base) + (0x2174))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_ALARMMODE_ADDR(base) ((base) + (0x2178))
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_VAL_ADDR(base) ((base) + (0x217C))
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0100))
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0104))
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0108))
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x010C))
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0110))
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0114))
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0118))
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0200))
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0204))
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0208))
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x020C))
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0210))
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0214))
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0218))
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0300))
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0304))
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0308))
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x030C))
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0310))
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0314))
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0318))
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0400))
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0404))
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0408))
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x040C))
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0410))
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0414))
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0418))
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_ADDR(base) ((base) + (0x1000))
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_ADDR(base) ((base) + (0x1004))
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_RATE_ADDR(base) ((base) + (0x1008))
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_BYPASS_ADDR(base) ((base) + (0x100C))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id : 8;
        unsigned int core_check_sum : 24;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_core_type_id_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_core_type_id_END (7)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_core_check_sum_START (8)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_core_check_sum_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id : 8;
        unsigned int flexnoc_id : 24;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_user_id_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_user_id_END (7)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_flexnoc_id_START (8)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_flexnoc_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_FAULTEN_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_FAULTEN_fault_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_FAULTEN_fault_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int err_vld : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRVLD_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRVLD_err_vld_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRVLD_err_vld_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int err_clr : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRCLR_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRCLR_err_clr_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRCLR_err_clr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lock : 1;
        unsigned int opc : 4;
        unsigned int reserved_0: 3;
        unsigned int err_code : 3;
        unsigned int reserved_1: 5;
        unsigned int len1 : 8;
        unsigned int reserved_2: 7;
        unsigned int format : 1;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_lock_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_lock_END (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_opc_START (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_opc_END (4)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_err_code_START (8)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_err_code_END (10)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_len1_START (16)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_len1_END (23)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_format_START (31)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_format_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errlog1 : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG1_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG1_errlog1_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG1_errlog1_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errlog3 : 32;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG3_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG3_errlog3_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG3_errlog3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errlog5 : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG5_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG5_errlog5_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG5_errlog5_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int errlog7 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG7_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG7_errlog7_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG7_errlog7_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id : 8;
        unsigned int core_check_sum : 24;
    } reg;
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_core_type_id_START (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_core_type_id_END (7)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_core_check_sum_START (8)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_core_check_sum_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id : 8;
        unsigned int flexnoc_id : 24;
    } reg;
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_user_id_START (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_user_id_END (7)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START (8)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END (31)
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
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_p0_START (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_p0_END (2)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_p1_START (8)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_p1_END (10)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_mark_START (31)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_mark_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_MODE_mode_START (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_MODE_mode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bandwidth : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_BANDWIDTH_bandwidth_START (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_BANDWIDTH_bandwidth_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int saturation : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_SATURATION_saturation_START (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_SATURATION_saturation_END (9)
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
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_socket_qos_en_START (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_socket_qos_en_END (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_ext_thr_en_START (1)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_ext_thr_en_END (1)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_int_clk_en_START (2)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_int_clk_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id : 8;
        unsigned int core_check_sum : 24;
    } reg;
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_core_type_id_START (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_core_type_id_END (7)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_core_check_sum_START (8)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_core_check_sum_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id : 8;
        unsigned int flexnoc_id : 24;
    } reg;
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_user_id_START (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_user_id_END (7)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START (8)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END (31)
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
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_p0_START (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_p0_END (2)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_p1_START (8)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_p1_END (10)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_mark_START (31)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_mark_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_MODE_mode_START (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_MODE_mode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bandwidth : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_BANDWIDTH_bandwidth_START (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_BANDWIDTH_bandwidth_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int saturation : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_SATURATION_saturation_START (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_SATURATION_saturation_END (9)
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
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_socket_qos_en_START (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_socket_qos_en_END (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_ext_thr_en_START (1)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_ext_thr_en_END (1)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_int_clk_en_START (2)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_int_clk_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id : 8;
        unsigned int core_check_sum : 24;
    } reg;
} SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_core_type_id_START (0)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_core_type_id_END (7)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_core_check_sum_START (8)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_core_check_sum_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id : 8;
        unsigned int flexnoc_id : 24;
    } reg;
} SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_user_id_START (0)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_user_id_END (7)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_flexnoc_id_START (8)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_flexnoc_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rate : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MEDIA_NOC_SMMU_ADAPTER_RATE_UNION;
#endif
#define SOC_MEDIA_NOC_SMMU_ADAPTER_RATE_rate_START (0)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_RATE_rate_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bypass : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_SMMU_ADAPTER_BYPASS_UNION;
#endif
#define SOC_MEDIA_NOC_SMMU_ADAPTER_BYPASS_bypass_START (0)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_BYPASS_bypass_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int id_core_id : 8;
        unsigned int core_check_sum : 24;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_id_core_id_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_id_core_id_END (7)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_core_check_sum_START (8)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_core_check_sum_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id : 8;
        unsigned int id_revision_id : 24;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_user_id_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_user_id_END (7)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_id_revision_id_START (8)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_id_revision_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int err_en : 1;
        unsigned int trace_en : 1;
        unsigned int payload_en : 1;
        unsigned int stat_en : 1;
        unsigned int alarm_en : 1;
        unsigned int stat_cond_dump : 1;
        unsigned int intrusive_mode : 1;
        unsigned int filt_byte_always_chainable_en : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_err_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_err_en_END (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_trace_en_START (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_trace_en_END (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_payload_en_START (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_payload_en_END (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_stat_en_START (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_stat_en_END (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_alarm_en_START (4)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_alarm_en_END (4)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_stat_cond_dump_START (5)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_stat_cond_dump_END (5)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_intrusive_mode_START (6)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_intrusive_mode_END (6)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_filt_byte_always_chainable_en_START (7)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_filt_byte_always_chainable_en_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int global_en : 1;
        unsigned int active : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_global_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_global_en_END (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_active_START (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_active_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trace_port_sel : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEPORTSEL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEPORTSEL_trace_port_sel_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEPORTSEL_trace_port_sel_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filter_lut : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_FILTERLUT_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_FILTERLUT_filter_lut_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_FILTERLUT_filter_lut_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trace_alarm_en : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMEN_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMEN_trace_alarm_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMEN_trace_alarm_en_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trace_alarm_status : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMSTATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMSTATUS_trace_alarm_status_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMSTATUS_trace_alarm_status_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trace_alarm_clr : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMCLR_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMCLR_trace_alarm_clr_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMCLR_trace_alarm_clr_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stat_period : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATPERIOD_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATPERIOD_stat_period_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATPERIOD_stat_period_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stat_go : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATGO_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATGO_stat_go_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATGO_stat_go_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stat_alarm_min : 32;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMIN_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMIN_stat_alarm_min_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMIN_stat_alarm_min_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stat_alarm_max : 32;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMAX_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMAX_stat_alarm_max_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMAX_stat_alarm_max_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stat_alarm_status : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMSTATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMSTATUS_stat_alarm_status_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMSTATUS_stat_alarm_status_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stat_alarm_clr : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMCLR_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMCLR_stat_alarm_clr_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMCLR_stat_alarm_clr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stat_alarm_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMEN_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMEN_stat_alarm_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMEN_stat_alarm_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_0_routeid_base : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDBASE_filters_0_routeid_base_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDBASE_filters_0_routeid_base_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_0_routeid_mask : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDMASK_filters_0_routeid_mask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDMASK_filters_0_routeid_mask_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_0_addrbase_low : 32;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ADDRBASE_LOW_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ADDRBASE_LOW_filters_0_addrbase_low_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ADDRBASE_LOW_filters_0_addrbase_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_0_window_size : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_WINDOWSIZE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_WINDOWSIZE_filters_0_window_size_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_WINDOWSIZE_filters_0_window_size_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_0_security_base : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYBASE_filters_0_security_base_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYBASE_filters_0_security_base_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_0_security_mask : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYMASK_filters_0_security_mask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYMASK_filters_0_security_mask_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_en : 1;
        unsigned int wr_en : 1;
        unsigned int lock_en : 1;
        unsigned int urg_en : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_rd_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_rd_en_END (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_wr_en_START (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_wr_en_END (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_lock_en_START (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_lock_en_END (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_urg_en_START (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_urg_en_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int req_en : 1;
        unsigned int rsp_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_req_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_req_en_END (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_rsp_en_START (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_rsp_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_0_length : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_LENGTH_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_LENGTH_filters_0_length_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_LENGTH_filters_0_length_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_0_urgency : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_URGENCY_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_URGENCY_filters_0_urgency_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_URGENCY_filters_0_urgency_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_0_user_base : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERBASE_filters_0_user_base_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERBASE_filters_0_user_base_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_0_user_mask : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERMASK_filters_0_user_mask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERMASK_filters_0_user_mask_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_1_routeid_base : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDBASE_filters_1_routeid_base_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDBASE_filters_1_routeid_base_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_1_routeid_mask : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDMASK_filters_1_routeid_mask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDMASK_filters_1_routeid_mask_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_1_addrbase_low : 32;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ADDRBASE_LOW_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ADDRBASE_LOW_filters_1_addrbase_low_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ADDRBASE_LOW_filters_1_addrbase_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_1_window_size : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_WINDOWSIZE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_WINDOWSIZE_filters_1_window_size_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_WINDOWSIZE_filters_1_window_size_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_1_security_base : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYBASE_filters_1_security_base_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYBASE_filters_1_security_base_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_1_security_mask : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYMASK_filters_1_security_mask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYMASK_filters_1_security_mask_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_en : 1;
        unsigned int wr_en : 1;
        unsigned int lock_en : 1;
        unsigned int urg_en : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_rd_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_rd_en_END (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_wr_en_START (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_wr_en_END (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_lock_en_START (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_lock_en_END (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_urg_en_START (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_urg_en_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int req_en : 1;
        unsigned int rsp_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_req_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_req_en_END (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_rsp_en_START (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_rsp_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_1_length : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_LENGTH_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_LENGTH_filters_1_length_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_LENGTH_filters_1_length_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_1_urgency : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_URGENCY_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_URGENCY_filters_1_urgency_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_URGENCY_filters_1_urgency_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_1_userbase : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERBASE_filters_1_userbase_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERBASE_filters_1_userbase_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_1_usermask : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERMASK_filters_1_usermask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERMASK_filters_1_usermask_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_2_routeid_base : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDBASE_filters_2_routeid_base_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDBASE_filters_2_routeid_base_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_2_routeid_mask : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDMASK_filters_2_routeid_mask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDMASK_filters_2_routeid_mask_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_2_addrbase_low : 32;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ADDRBASE_LOW_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ADDRBASE_LOW_filters_2_addrbase_low_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ADDRBASE_LOW_filters_2_addrbase_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_2_window_size : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_WINDOWSIZE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_WINDOWSIZE_filters_2_window_size_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_WINDOWSIZE_filters_2_window_size_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_2_security_base : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYBASE_filters_2_security_base_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYBASE_filters_2_security_base_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_2_security_mask : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYMASK_filters_2_security_mask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYMASK_filters_2_security_mask_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_en : 1;
        unsigned int wr_en : 1;
        unsigned int lock_en : 1;
        unsigned int urg_en : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_rd_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_rd_en_END (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_wr_en_START (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_wr_en_END (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_lock_en_START (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_lock_en_END (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_urg_en_START (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_urg_en_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int req_en : 1;
        unsigned int rsp_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_req_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_req_en_END (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_rsp_en_START (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_rsp_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_2_length : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_LENGTH_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_LENGTH_filters_2_length_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_LENGTH_filters_2_length_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_2_urgency : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_URGENCY_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_URGENCY_filters_2_urgency_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_URGENCY_filters_2_urgency_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_2_userbase : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERBASE_filters_2_userbase_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERBASE_filters_2_userbase_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_2_usermask : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERMASK_filters_2_usermask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERMASK_filters_2_usermask_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_3_routeid_base : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDBASE_filters_3_routeid_base_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDBASE_filters_3_routeid_base_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_3_routeid_mask : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDMASK_filters_3_routeid_mask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDMASK_filters_3_routeid_mask_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_3_addrbase_low : 32;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ADDRBASE_LOW_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ADDRBASE_LOW_filters_3_addrbase_low_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ADDRBASE_LOW_filters_3_addrbase_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_3_window_size : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_WINDOWSIZE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_WINDOWSIZE_filters_3_window_size_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_WINDOWSIZE_filters_3_window_size_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_3_security_base : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYBASE_filters_3_security_base_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYBASE_filters_3_security_base_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_3_security_mask : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYMASK_filters_3_security_mask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYMASK_filters_3_security_mask_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_en : 1;
        unsigned int wr_en : 1;
        unsigned int lock_en : 1;
        unsigned int urg_en : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_rd_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_rd_en_END (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_wr_en_START (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_wr_en_END (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_lock_en_START (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_lock_en_END (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_urg_en_START (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_urg_en_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int req_en : 1;
        unsigned int rsp_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_req_en_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_req_en_END (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_rsp_en_START (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_rsp_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_3_length : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_LENGTH_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_LENGTH_filters_3_length_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_LENGTH_filters_3_length_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_3_urgency : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_URGENCY_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_URGENCY_filters_3_urgency_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_URGENCY_filters_3_urgency_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_3_user_base : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERBASE_filters_3_user_base_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERBASE_filters_3_user_base_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filters_3_user_mask : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERMASK_filters_3_user_mask_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERMASK_filters_3_user_mask_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_event : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_SRC_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_SRC_int_event_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_SRC_int_event_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int counters_0_alarmmode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_ALARMMODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_ALARMMODE_counters_0_alarmmode_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_ALARMMODE_counters_0_alarmmode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int counters_0_val : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_VAL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_VAL_counters_0_val_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_VAL_counters_0_val_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_event : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_SRC_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_SRC_int_event_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_SRC_int_event_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int counters_1_alarmmode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_ALARMMODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_ALARMMODE_counters_1_alarmmode_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_ALARMMODE_counters_1_alarmmode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int counters_1_val : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_VAL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_VAL_counters_1_val_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_VAL_counters_1_val_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_event : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_SRC_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_SRC_int_event_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_SRC_int_event_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int counters_2_alarmmode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_ALARMMODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_ALARMMODE_counters_2_alarmmode_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_ALARMMODE_counters_2_alarmmode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int counters_2_val : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_VAL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_VAL_counters_2_val_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_VAL_counters_2_val_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_event : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_SRC_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_SRC_int_event_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_SRC_int_event_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int counters_3_alarmmode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_ALARMMODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_ALARMMODE_counters_3_alarmmode_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_ALARMMODE_counters_3_alarmmode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int counters_3_val : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_VAL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_VAL_counters_3_val_START (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_VAL_counters_3_val_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id : 8;
        unsigned int core_check_sum : 24;
    } reg;
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_core_type_id_START (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_core_type_id_END (7)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_core_check_sum_START (8)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_core_check_sum_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id : 8;
        unsigned int flexnoc_id : 24;
    } reg;
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_user_id_START (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_user_id_END (7)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START (8)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END (31)
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
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_p0_START (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_p0_END (2)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_p1_START (8)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_p1_END (10)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_mark_START (31)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_mark_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_MODE_mode_START (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_MODE_mode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bandwidth : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_BANDWIDTH_bandwidth_START (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_BANDWIDTH_bandwidth_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int saturation : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_SATURATION_saturation_START (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_SATURATION_saturation_END (9)
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
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_socket_qos_en_START (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_socket_qos_en_END (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_ext_thr_en_START (1)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_ext_thr_en_END (1)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_int_clk_en_START (2)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_int_clk_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id : 8;
        unsigned int core_check_sum : 24;
    } reg;
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_core_type_id_START (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_core_type_id_END (7)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_core_check_sum_START (8)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_core_check_sum_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id : 8;
        unsigned int flexnoc_id : 24;
    } reg;
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_user_id_START (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_user_id_END (7)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START (8)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END (31)
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
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_p0_START (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_p0_END (2)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_p1_START (8)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_p1_END (10)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_mark_START (31)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_mark_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_MODE_mode_START (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_MODE_mode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bandwidth : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_BANDWIDTH_bandwidth_START (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_BANDWIDTH_bandwidth_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int saturation : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_SATURATION_saturation_START (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_SATURATION_saturation_END (9)
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
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_socket_qos_en_START (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_socket_qos_en_END (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_ext_thr_en_START (1)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_ext_thr_en_END (1)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_int_clk_en_START (2)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_int_clk_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id : 8;
        unsigned int core_check_sum : 24;
    } reg;
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_core_type_id_START (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_core_type_id_END (7)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_core_check_sum_START (8)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_core_check_sum_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id : 8;
        unsigned int flexnoc_id : 24;
    } reg;
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_user_id_START (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_user_id_END (7)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START (8)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END (31)
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
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_p0_START (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_p0_END (2)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_p1_START (8)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_p1_END (10)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_mark_START (31)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_mark_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_MODE_mode_START (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_MODE_mode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bandwidth : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_BANDWIDTH_bandwidth_START (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_BANDWIDTH_bandwidth_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int saturation : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_SATURATION_saturation_START (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_SATURATION_saturation_END (9)
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
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_socket_qos_en_START (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_socket_qos_en_END (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_ext_thr_en_START (1)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_ext_thr_en_END (1)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_int_clk_en_START (2)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_int_clk_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id : 8;
        unsigned int core_check_sum : 24;
    } reg;
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_core_type_id_START (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_core_type_id_END (7)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_core_check_sum_START (8)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_core_check_sum_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id : 8;
        unsigned int flexnoc_id : 24;
    } reg;
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_user_id_START (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_user_id_END (7)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START (8)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END (31)
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
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_p0_START (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_p0_END (2)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_p1_START (8)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_p1_END (10)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_mark_START (31)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_mark_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mode : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_MODE_mode_START (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_MODE_mode_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bandwidth : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_BANDWIDTH_bandwidth_START (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_BANDWIDTH_bandwidth_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int saturation : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_SATURATION_saturation_START (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_SATURATION_saturation_END (9)
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
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_socket_qos_en_START (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_socket_qos_en_END (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_ext_thr_en_START (1)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_ext_thr_en_END (1)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_int_clk_en_START (2)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_int_clk_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core_type_id : 8;
        unsigned int core_check_sum : 24;
    } reg;
} SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_core_type_id_START (0)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_core_type_id_END (7)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_core_check_sum_START (8)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_core_check_sum_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int user_id : 8;
        unsigned int flexnoc_id : 24;
    } reg;
} SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_user_id_START (0)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_user_id_END (7)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_flexnoc_id_START (8)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_flexnoc_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rate : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MEDIA_NOC_VIDEO_ADAPTER_RATE_UNION;
#endif
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_RATE_rate_START (0)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_RATE_rate_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bypass : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MEDIA_NOC_VIDEO_ADAPTER_BYPASS_UNION;
#endif
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_BYPASS_bypass_START (0)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_BYPASS_bypass_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
