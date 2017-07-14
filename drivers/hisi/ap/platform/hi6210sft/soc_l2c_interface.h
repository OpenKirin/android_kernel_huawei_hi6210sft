#ifndef __SOC_L2C_INTERFACE_H__
#define __SOC_L2C_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_L2C_CACHE_ID_ADDR(base) ((base) + (0x0))
#define SOC_L2C_CACHE_TYPE_ADDR(base) ((base) + (0x4))
#define SOC_L2C_CONTROL_ADDR(base) ((base) + (0x100))
#define SOC_L2C_AUXCONTROL_ADDR(base) ((base) + (0x104))
#define SOC_L2C_TAGRAM_CONTROL_ADDR(base) ((base) + (0x108))
#define SOC_L2C_DATARAM_CONTROL_ADDR(base) ((base) + (0x10C))
#define SOC_L2C_EV_COUNTER_CTRL_ADDR(base) ((base) + (0x200))
#define SOC_L2C_EV_COUNTER1_CFG_ADDR(base) ((base) + (0x204))
#define SOC_L2C_EV_COUNTER0_CFG_ADDR(base) ((base) + (0x208))
#define SOC_L2C_EV_COUNTER1_ADDR(base) ((base) + (0x20C))
#define SOC_L2C_EV_COUNTER0_ADDR(base) ((base) + (0x210))
#define SOC_L2C_INT_MASK_ADDR(base) ((base) + (0x214))
#define SOC_L2C_INT_MASK_STATUS_ADDR(base) ((base) + (0x218))
#define SOC_L2C_INT_RAW_STATUS_ADDR(base) ((base) + (0x21C))
#define SOC_L2C_INT_CLEAR_ADDR(base) ((base) + (0x220))
#define SOC_L2C_CACHE_SYNC_ADDR(base) ((base) + (0x730))
#define SOC_L2C_INV_PA_ADDR(base) ((base) + (0x770))
#define SOC_L2C_INV_WAY_ADDR(base) ((base) + (0x77C))
#define SOC_L2C_CLEAN_PA_ADDR(base) ((base) + (0x7B0))
#define SOC_L2C_CLEAN_INDEX_ADDR(base) ((base) + (0x7B8))
#define SOC_L2C_CLEAN_WAY_ADDR(base) ((base) + (0x7BC))
#define SOC_L2C_CLEAN_INV_PA_ADDR(base) ((base) + (0x7F0))
#define SOC_L2C_CLEAN_INV_INDEX_ADDR(base) ((base) + (0x7F8))
#define SOC_L2C_CLEAN_INV_WAY_ADDR(base) ((base) + (0x7FC))
#define SOC_L2C_D_LOCKDOWN0_ADDR(base) ((base) + (0x900))
#define SOC_L2C_I_LOCKDOWN0_ADDR(base) ((base) + (0x904))
#define SOC_L2C_D_LOCKDOWN1_ADDR(base) ((base) + (0x908))
#define SOC_L2C_I_LOCKDOWN1_ADDR(base) ((base) + (0x90C))
#define SOC_L2C_D_LOCKDOWN2_ADDR(base) ((base) + (0x910))
#define SOC_L2C_I_LOCKDOWN2_ADDR(base) ((base) + (0x914))
#define SOC_L2C_D_LOCKDOWN3_ADDR(base) ((base) + (0x918))
#define SOC_L2C_I_LOCKDOWN3_ADDR(base) ((base) + (0x91C))
#define SOC_L2C_D_LOCKDOWN4_ADDR(base) ((base) + (0x920))
#define SOC_L2C_I_LOCKDOWN4_ADDR(base) ((base) + (0x924))
#define SOC_L2C_D_LOCKDOWN5_ADDR(base) ((base) + (0x928))
#define SOC_L2C_I_LOCKDOWN5_ADDR(base) ((base) + (0x92C))
#define SOC_L2C_D_LOCKDOWN6_ADDR(base) ((base) + (0x930))
#define SOC_L2C_I_LOCKDOWN6_ADDR(base) ((base) + (0x934))
#define SOC_L2C_D_LOCKDOWN7_ADDR(base) ((base) + (0x938))
#define SOC_L2C_I_LOCKDOWN7_ADDR(base) ((base) + (0x93C))
#define SOC_L2C_LOCK_LINE_EN_ADDR(base) ((base) + (0x950))
#define SOC_L2C_UNLOCK_WAY_ADDR(base) ((base) + (0x954))
#define SOC_L2C_ADDR_FIL_START_ADDR(base) ((base) + (0xC00))
#define SOC_L2C_ADDR_FIL_END_ADDR(base) ((base) + (0xC04))
#define SOC_L2C_DEBUG_CTRL_ADDR(base) ((base) + (0xF40))
#define SOC_L2C_PREFETCH_CTRL_ADDR(base) ((base) + (0xF60))
#define SOC_L2C_POWER_CTRL_ADDR(base) ((base) + (0xF80))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int RTLRELEASE : 6;
        unsigned int PARTNUM : 4;
        unsigned int CACHEID : 6;
        unsigned int reserved : 8;
        unsigned int Implementer : 8;
    } reg;
} SOC_L2C_CACHE_ID_UNION;
#endif
#define SOC_L2C_CACHE_ID_RTLRELEASE_START (0)
#define SOC_L2C_CACHE_ID_RTLRELEASE_END (5)
#define SOC_L2C_CACHE_ID_PARTNUM_START (6)
#define SOC_L2C_CACHE_ID_PARTNUM_END (9)
#define SOC_L2C_CACHE_ID_CACHEID_START (10)
#define SOC_L2C_CACHE_ID_CACHEID_END (15)
#define SOC_L2C_CACHE_ID_Implementer_START (24)
#define SOC_L2C_CACHE_ID_Implementer_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int CACHELINELEN : 2;
        unsigned int reserved_0 : 4;
        unsigned int ASSOCATIVITY : 1;
        unsigned int reserved_1 : 1;
        unsigned int Isize : 3;
        unsigned int reserved_2 : 1;
        unsigned int CACHELINELEN : 2;
        unsigned int reserved_3 : 4;
        unsigned int ASSOCATIVITY : 1;
        unsigned int reserved_4 : 1;
        unsigned int Dsize : 3;
        unsigned int reserved_5 : 1;
        unsigned int H : 1;
        unsigned int CTYPE : 4;
        unsigned int reserved_6 : 2;
        unsigned int DataBanking : 1;
    } reg;
} SOC_L2C_CACHE_TYPE_UNION;
#endif
#define SOC_L2C_CACHE_TYPE_CACHELINELEN_START (0)
#define SOC_L2C_CACHE_TYPE_CACHELINELEN_END (1)
#define SOC_L2C_CACHE_TYPE_ASSOCATIVITY_START (6)
#define SOC_L2C_CACHE_TYPE_ASSOCATIVITY_END (6)
#define SOC_L2C_CACHE_TYPE_Isize_START (8)
#define SOC_L2C_CACHE_TYPE_Isize_END (10)
#define SOC_L2C_CACHE_TYPE_CACHELINELEN_START (12)
#define SOC_L2C_CACHE_TYPE_CACHELINELEN_END (13)
#define SOC_L2C_CACHE_TYPE_ASSOCATIVITY_START (18)
#define SOC_L2C_CACHE_TYPE_ASSOCATIVITY_END (18)
#define SOC_L2C_CACHE_TYPE_Dsize_START (20)
#define SOC_L2C_CACHE_TYPE_Dsize_END (22)
#define SOC_L2C_CACHE_TYPE_H_START (24)
#define SOC_L2C_CACHE_TYPE_H_END (24)
#define SOC_L2C_CACHE_TYPE_CTYPE_START (25)
#define SOC_L2C_CACHE_TYPE_CTYPE_END (28)
#define SOC_L2C_CACHE_TYPE_DataBanking_START (31)
#define SOC_L2C_CACHE_TYPE_DataBanking_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ENABLE : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_L2C_CONTROL_UNION;
#endif
#define SOC_L2C_CONTROL_ENABLE_START (0)
#define SOC_L2C_CONTROL_ENABLE_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int LineOfZero : 1;
        unsigned int reserved_0 : 9;
        unsigned int HPrioSOReadEn : 1;
        unsigned int StrBufLimEn : 1;
        unsigned int ExcCacheCfg : 1;
        unsigned int ShAttInvEn : 1;
        unsigned int reserved_1 : 2;
        unsigned int ASSOCATIVITY : 1;
        unsigned int WAYSIZE : 3;
        unsigned int EVMONEN : 1;
        unsigned int ParityEnable : 1;
        unsigned int SharedAtt : 1;
        unsigned int ForceWriteAll : 2;
        unsigned int CACHEPOLICY : 1;
        unsigned int NSLOCKEN : 1;
        unsigned int NSINTACCTRL : 1;
        unsigned int DataPrefEn : 1;
        unsigned int InstrPrefEn : 1;
        unsigned int EarlyBREAPEN : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_L2C_AUXCONTROL_UNION;
#endif
#define SOC_L2C_AUXCONTROL_LineOfZero_START (0)
#define SOC_L2C_AUXCONTROL_LineOfZero_END (0)
#define SOC_L2C_AUXCONTROL_HPrioSOReadEn_START (10)
#define SOC_L2C_AUXCONTROL_HPrioSOReadEn_END (10)
#define SOC_L2C_AUXCONTROL_StrBufLimEn_START (11)
#define SOC_L2C_AUXCONTROL_StrBufLimEn_END (11)
#define SOC_L2C_AUXCONTROL_ExcCacheCfg_START (12)
#define SOC_L2C_AUXCONTROL_ExcCacheCfg_END (12)
#define SOC_L2C_AUXCONTROL_ShAttInvEn_START (13)
#define SOC_L2C_AUXCONTROL_ShAttInvEn_END (13)
#define SOC_L2C_AUXCONTROL_ASSOCATIVITY_START (16)
#define SOC_L2C_AUXCONTROL_ASSOCATIVITY_END (16)
#define SOC_L2C_AUXCONTROL_WAYSIZE_START (17)
#define SOC_L2C_AUXCONTROL_WAYSIZE_END (19)
#define SOC_L2C_AUXCONTROL_EVMONEN_START (20)
#define SOC_L2C_AUXCONTROL_EVMONEN_END (20)
#define SOC_L2C_AUXCONTROL_ParityEnable_START (21)
#define SOC_L2C_AUXCONTROL_ParityEnable_END (21)
#define SOC_L2C_AUXCONTROL_SharedAtt_START (22)
#define SOC_L2C_AUXCONTROL_SharedAtt_END (22)
#define SOC_L2C_AUXCONTROL_ForceWriteAll_START (23)
#define SOC_L2C_AUXCONTROL_ForceWriteAll_END (24)
#define SOC_L2C_AUXCONTROL_CACHEPOLICY_START (25)
#define SOC_L2C_AUXCONTROL_CACHEPOLICY_END (25)
#define SOC_L2C_AUXCONTROL_NSLOCKEN_START (26)
#define SOC_L2C_AUXCONTROL_NSLOCKEN_END (26)
#define SOC_L2C_AUXCONTROL_NSINTACCTRL_START (27)
#define SOC_L2C_AUXCONTROL_NSINTACCTRL_END (27)
#define SOC_L2C_AUXCONTROL_DataPrefEn_START (28)
#define SOC_L2C_AUXCONTROL_DataPrefEn_END (28)
#define SOC_L2C_AUXCONTROL_InstrPrefEn_START (29)
#define SOC_L2C_AUXCONTROL_InstrPrefEn_END (29)
#define SOC_L2C_AUXCONTROL_EarlyBREAPEN_START (30)
#define SOC_L2C_AUXCONTROL_EarlyBREAPEN_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int SETLATENCY : 3;
        unsigned int reserved_0 : 1;
        unsigned int RDLATENCY : 3;
        unsigned int reserved_1 : 1;
        unsigned int WALATENCY : 3;
        unsigned int reserved_2 : 21;
    } reg;
} SOC_L2C_TAGRAM_CONTROL_UNION;
#endif
#define SOC_L2C_TAGRAM_CONTROL_SETLATENCY_START (0)
#define SOC_L2C_TAGRAM_CONTROL_SETLATENCY_END (2)
#define SOC_L2C_TAGRAM_CONTROL_RDLATENCY_START (4)
#define SOC_L2C_TAGRAM_CONTROL_RDLATENCY_END (6)
#define SOC_L2C_TAGRAM_CONTROL_WALATENCY_START (8)
#define SOC_L2C_TAGRAM_CONTROL_WALATENCY_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int SETLATENCY : 3;
        unsigned int reserved_0 : 1;
        unsigned int RDLATENCY : 3;
        unsigned int reserved_1 : 1;
        unsigned int WALATENCY : 3;
        unsigned int reserved_2 : 21;
    } reg;
} SOC_L2C_DATARAM_CONTROL_UNION;
#endif
#define SOC_L2C_DATARAM_CONTROL_SETLATENCY_START (0)
#define SOC_L2C_DATARAM_CONTROL_SETLATENCY_END (2)
#define SOC_L2C_DATARAM_CONTROL_RDLATENCY_START (4)
#define SOC_L2C_DATARAM_CONTROL_RDLATENCY_END (6)
#define SOC_L2C_DATARAM_CONTROL_WALATENCY_START (8)
#define SOC_L2C_DATARAM_CONTROL_WALATENCY_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int COUNTENABLE : 1;
        unsigned int COUNTRESET : 2;
        unsigned int reserved : 29;
    } reg;
} SOC_L2C_EV_COUNTER_CTRL_UNION;
#endif
#define SOC_L2C_EV_COUNTER_CTRL_COUNTENABLE_START (0)
#define SOC_L2C_EV_COUNTER_CTRL_COUNTENABLE_END (0)
#define SOC_L2C_EV_COUNTER_CTRL_COUNTRESET_START (1)
#define SOC_L2C_EV_COUNTER_CTRL_COUNTRESET_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int INTGEN : 2;
        unsigned int EVSOURCE : 4;
        unsigned int reserved : 26;
    } reg;
} SOC_L2C_EV_COUNTER1_CFG_UNION;
#endif
#define SOC_L2C_EV_COUNTER1_CFG_INTGEN_START (0)
#define SOC_L2C_EV_COUNTER1_CFG_INTGEN_END (1)
#define SOC_L2C_EV_COUNTER1_CFG_EVSOURCE_START (2)
#define SOC_L2C_EV_COUNTER1_CFG_EVSOURCE_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int INTGEN : 2;
        unsigned int EVSOURCE : 4;
        unsigned int reserved : 26;
    } reg;
} SOC_L2C_EV_COUNTER0_CFG_UNION;
#endif
#define SOC_L2C_EV_COUNTER0_CFG_INTGEN_START (0)
#define SOC_L2C_EV_COUNTER0_CFG_INTGEN_END (1)
#define SOC_L2C_EV_COUNTER0_CFG_EVSOURCE_START (2)
#define SOC_L2C_EV_COUNTER0_CFG_EVSOURCE_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int VALUE : 32;
    } reg;
} SOC_L2C_EV_COUNTER1_UNION;
#endif
#define SOC_L2C_EV_COUNTER1_VALUE_START (0)
#define SOC_L2C_EV_COUNTER1_VALUE_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int VALUE : 32;
    } reg;
} SOC_L2C_EV_COUNTER0_UNION;
#endif
#define SOC_L2C_EV_COUNTER0_VALUE_START (0)
#define SOC_L2C_EV_COUNTER0_VALUE_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ECNTR : 1;
        unsigned int PARRT : 1;
        unsigned int PARRD : 1;
        unsigned int ERRWT : 1;
        unsigned int ERRWD : 1;
        unsigned int ERRRT : 1;
        unsigned int ERRRD : 1;
        unsigned int SLVERR : 1;
        unsigned int DECERR : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_L2C_INT_MASK_UNION;
#endif
#define SOC_L2C_INT_MASK_ECNTR_START (0)
#define SOC_L2C_INT_MASK_ECNTR_END (0)
#define SOC_L2C_INT_MASK_PARRT_START (1)
#define SOC_L2C_INT_MASK_PARRT_END (1)
#define SOC_L2C_INT_MASK_PARRD_START (2)
#define SOC_L2C_INT_MASK_PARRD_END (2)
#define SOC_L2C_INT_MASK_ERRWT_START (3)
#define SOC_L2C_INT_MASK_ERRWT_END (3)
#define SOC_L2C_INT_MASK_ERRWD_START (4)
#define SOC_L2C_INT_MASK_ERRWD_END (4)
#define SOC_L2C_INT_MASK_ERRRT_START (5)
#define SOC_L2C_INT_MASK_ERRRT_END (5)
#define SOC_L2C_INT_MASK_ERRRD_START (6)
#define SOC_L2C_INT_MASK_ERRRD_END (6)
#define SOC_L2C_INT_MASK_SLVERR_START (7)
#define SOC_L2C_INT_MASK_SLVERR_END (7)
#define SOC_L2C_INT_MASK_DECERR_START (8)
#define SOC_L2C_INT_MASK_DECERR_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ECNTR : 1;
        unsigned int PARRT : 1;
        unsigned int PARRD : 1;
        unsigned int ERRWT : 1;
        unsigned int ERRWD : 1;
        unsigned int ERRRT : 1;
        unsigned int ERRRD : 1;
        unsigned int SLVERR : 1;
        unsigned int DECERR : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_L2C_INT_MASK_STATUS_UNION;
#endif
#define SOC_L2C_INT_MASK_STATUS_ECNTR_START (0)
#define SOC_L2C_INT_MASK_STATUS_ECNTR_END (0)
#define SOC_L2C_INT_MASK_STATUS_PARRT_START (1)
#define SOC_L2C_INT_MASK_STATUS_PARRT_END (1)
#define SOC_L2C_INT_MASK_STATUS_PARRD_START (2)
#define SOC_L2C_INT_MASK_STATUS_PARRD_END (2)
#define SOC_L2C_INT_MASK_STATUS_ERRWT_START (3)
#define SOC_L2C_INT_MASK_STATUS_ERRWT_END (3)
#define SOC_L2C_INT_MASK_STATUS_ERRWD_START (4)
#define SOC_L2C_INT_MASK_STATUS_ERRWD_END (4)
#define SOC_L2C_INT_MASK_STATUS_ERRRT_START (5)
#define SOC_L2C_INT_MASK_STATUS_ERRRT_END (5)
#define SOC_L2C_INT_MASK_STATUS_ERRRD_START (6)
#define SOC_L2C_INT_MASK_STATUS_ERRRD_END (6)
#define SOC_L2C_INT_MASK_STATUS_SLVERR_START (7)
#define SOC_L2C_INT_MASK_STATUS_SLVERR_END (7)
#define SOC_L2C_INT_MASK_STATUS_DECERR_START (8)
#define SOC_L2C_INT_MASK_STATUS_DECERR_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ECNTR : 1;
        unsigned int PARRT : 1;
        unsigned int PARRD : 1;
        unsigned int ERRWT : 1;
        unsigned int ERRWD : 1;
        unsigned int ERRRT : 1;
        unsigned int ERRRD : 1;
        unsigned int SLVERR : 1;
        unsigned int DECERR : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_L2C_INT_RAW_STATUS_UNION;
#endif
#define SOC_L2C_INT_RAW_STATUS_ECNTR_START (0)
#define SOC_L2C_INT_RAW_STATUS_ECNTR_END (0)
#define SOC_L2C_INT_RAW_STATUS_PARRT_START (1)
#define SOC_L2C_INT_RAW_STATUS_PARRT_END (1)
#define SOC_L2C_INT_RAW_STATUS_PARRD_START (2)
#define SOC_L2C_INT_RAW_STATUS_PARRD_END (2)
#define SOC_L2C_INT_RAW_STATUS_ERRWT_START (3)
#define SOC_L2C_INT_RAW_STATUS_ERRWT_END (3)
#define SOC_L2C_INT_RAW_STATUS_ERRWD_START (4)
#define SOC_L2C_INT_RAW_STATUS_ERRWD_END (4)
#define SOC_L2C_INT_RAW_STATUS_ERRRT_START (5)
#define SOC_L2C_INT_RAW_STATUS_ERRRT_END (5)
#define SOC_L2C_INT_RAW_STATUS_ERRRD_START (6)
#define SOC_L2C_INT_RAW_STATUS_ERRRD_END (6)
#define SOC_L2C_INT_RAW_STATUS_SLVERR_START (7)
#define SOC_L2C_INT_RAW_STATUS_SLVERR_END (7)
#define SOC_L2C_INT_RAW_STATUS_DECERR_START (8)
#define SOC_L2C_INT_RAW_STATUS_DECERR_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ECNTR : 1;
        unsigned int PARRT : 1;
        unsigned int PARRD : 1;
        unsigned int ERRWT : 1;
        unsigned int ERRWD : 1;
        unsigned int ERRRT : 1;
        unsigned int ERRRD : 1;
        unsigned int SLVERR : 1;
        unsigned int DECERR : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_L2C_INT_CLEAR_UNION;
#endif
#define SOC_L2C_INT_CLEAR_ECNTR_START (0)
#define SOC_L2C_INT_CLEAR_ECNTR_END (0)
#define SOC_L2C_INT_CLEAR_PARRT_START (1)
#define SOC_L2C_INT_CLEAR_PARRT_END (1)
#define SOC_L2C_INT_CLEAR_PARRD_START (2)
#define SOC_L2C_INT_CLEAR_PARRD_END (2)
#define SOC_L2C_INT_CLEAR_ERRWT_START (3)
#define SOC_L2C_INT_CLEAR_ERRWT_END (3)
#define SOC_L2C_INT_CLEAR_ERRWD_START (4)
#define SOC_L2C_INT_CLEAR_ERRWD_END (4)
#define SOC_L2C_INT_CLEAR_ERRRT_START (5)
#define SOC_L2C_INT_CLEAR_ERRRT_END (5)
#define SOC_L2C_INT_CLEAR_ERRRD_START (6)
#define SOC_L2C_INT_CLEAR_ERRRD_END (6)
#define SOC_L2C_INT_CLEAR_SLVERR_START (7)
#define SOC_L2C_INT_CLEAR_SLVERR_END (7)
#define SOC_L2C_INT_CLEAR_DECERR_START (8)
#define SOC_L2C_INT_CLEAR_DECERR_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int C : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_L2C_CACHE_SYNC_UNION;
#endif
#define SOC_L2C_CACHE_SYNC_C_START (0)
#define SOC_L2C_CACHE_SYNC_C_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int C : 1;
        unsigned int reserved : 4;
        unsigned int INDEX : 11;
        unsigned int TAG : 16;
    } reg;
} SOC_L2C_INV_PA_UNION;
#endif
#define SOC_L2C_INV_PA_C_START (0)
#define SOC_L2C_INV_PA_C_END (0)
#define SOC_L2C_INV_PA_INDEX_START (5)
#define SOC_L2C_INV_PA_INDEX_END (15)
#define SOC_L2C_INV_PA_TAG_START (16)
#define SOC_L2C_INV_PA_TAG_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int WAY : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_INV_WAY_UNION;
#endif
#define SOC_L2C_INV_WAY_WAY_START (0)
#define SOC_L2C_INV_WAY_WAY_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int C : 1;
        unsigned int reserved : 4;
        unsigned int INDEX : 11;
        unsigned int TAG : 16;
    } reg;
} SOC_L2C_CLEAN_PA_UNION;
#endif
#define SOC_L2C_CLEAN_PA_C_START (0)
#define SOC_L2C_CLEAN_PA_C_END (0)
#define SOC_L2C_CLEAN_PA_INDEX_START (5)
#define SOC_L2C_CLEAN_PA_INDEX_END (15)
#define SOC_L2C_CLEAN_PA_TAG_START (16)
#define SOC_L2C_CLEAN_PA_TAG_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int C : 1;
        unsigned int reserved_0: 4;
        unsigned int INDEX : 11;
        unsigned int reserved_1: 12;
        unsigned int WAY : 4;
    } reg;
} SOC_L2C_CLEAN_INDEX_UNION;
#endif
#define SOC_L2C_CLEAN_INDEX_C_START (0)
#define SOC_L2C_CLEAN_INDEX_C_END (0)
#define SOC_L2C_CLEAN_INDEX_INDEX_START (5)
#define SOC_L2C_CLEAN_INDEX_INDEX_END (15)
#define SOC_L2C_CLEAN_INDEX_WAY_START (28)
#define SOC_L2C_CLEAN_INDEX_WAY_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int WAY : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_CLEAN_WAY_UNION;
#endif
#define SOC_L2C_CLEAN_WAY_WAY_START (0)
#define SOC_L2C_CLEAN_WAY_WAY_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int C : 1;
        unsigned int reserved : 4;
        unsigned int INDEX : 11;
        unsigned int TAG : 16;
    } reg;
} SOC_L2C_CLEAN_INV_PA_UNION;
#endif
#define SOC_L2C_CLEAN_INV_PA_C_START (0)
#define SOC_L2C_CLEAN_INV_PA_C_END (0)
#define SOC_L2C_CLEAN_INV_PA_INDEX_START (5)
#define SOC_L2C_CLEAN_INV_PA_INDEX_END (15)
#define SOC_L2C_CLEAN_INV_PA_TAG_START (16)
#define SOC_L2C_CLEAN_INV_PA_TAG_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int C : 1;
        unsigned int reserved_0: 4;
        unsigned int INDEX : 11;
        unsigned int reserved_1: 12;
        unsigned int WAY : 4;
    } reg;
} SOC_L2C_CLEAN_INV_INDEX_UNION;
#endif
#define SOC_L2C_CLEAN_INV_INDEX_C_START (0)
#define SOC_L2C_CLEAN_INV_INDEX_C_END (0)
#define SOC_L2C_CLEAN_INV_INDEX_INDEX_START (5)
#define SOC_L2C_CLEAN_INV_INDEX_INDEX_END (15)
#define SOC_L2C_CLEAN_INV_INDEX_WAY_START (28)
#define SOC_L2C_CLEAN_INV_INDEX_WAY_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int WAY : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_CLEAN_INV_WAY_UNION;
#endif
#define SOC_L2C_CLEAN_INV_WAY_WAY_START (0)
#define SOC_L2C_CLEAN_INV_WAY_WAY_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int DATALOCK000 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_D_LOCKDOWN0_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN0_DATALOCK000_START (0)
#define SOC_L2C_D_LOCKDOWN0_DATALOCK000_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int INSLOCK000 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_I_LOCKDOWN0_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN0_INSLOCK000_START (0)
#define SOC_L2C_I_LOCKDOWN0_INSLOCK000_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int DATALOCK001 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_D_LOCKDOWN1_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN1_DATALOCK001_START (0)
#define SOC_L2C_D_LOCKDOWN1_DATALOCK001_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int INSLOCK001 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_I_LOCKDOWN1_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN1_INSLOCK001_START (0)
#define SOC_L2C_I_LOCKDOWN1_INSLOCK001_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int DATALOCK002 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_D_LOCKDOWN2_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN2_DATALOCK002_START (0)
#define SOC_L2C_D_LOCKDOWN2_DATALOCK002_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int INSLOCK002 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_I_LOCKDOWN2_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN2_INSLOCK002_START (0)
#define SOC_L2C_I_LOCKDOWN2_INSLOCK002_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int DATALOCK003 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_D_LOCKDOWN3_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN3_DATALOCK003_START (0)
#define SOC_L2C_D_LOCKDOWN3_DATALOCK003_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int INSLOCK003 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_I_LOCKDOWN3_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN3_INSLOCK003_START (0)
#define SOC_L2C_I_LOCKDOWN3_INSLOCK003_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int DATALOCK004 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_D_LOCKDOWN4_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN4_DATALOCK004_START (0)
#define SOC_L2C_D_LOCKDOWN4_DATALOCK004_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int INSLOCK004 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_I_LOCKDOWN4_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN4_INSLOCK004_START (0)
#define SOC_L2C_I_LOCKDOWN4_INSLOCK004_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int DATALOCK005 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_D_LOCKDOWN5_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN5_DATALOCK005_START (0)
#define SOC_L2C_D_LOCKDOWN5_DATALOCK005_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int INSLOCK005 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_I_LOCKDOWN5_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN5_INSLOCK005_START (0)
#define SOC_L2C_I_LOCKDOWN5_INSLOCK005_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int DATALOCK006 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_D_LOCKDOWN6_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN6_DATALOCK006_START (0)
#define SOC_L2C_D_LOCKDOWN6_DATALOCK006_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int INSLOCK006 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_I_LOCKDOWN6_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN6_INSLOCK006_START (0)
#define SOC_L2C_I_LOCKDOWN6_INSLOCK006_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int DATALOCK007 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_D_LOCKDOWN7_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN7_DATALOCK007_START (0)
#define SOC_L2C_D_LOCKDOWN7_DATALOCK007_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int INSLOCK007 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_I_LOCKDOWN7_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN7_INSLOCK007_START (0)
#define SOC_L2C_I_LOCKDOWN7_INSLOCK007_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ENABLE : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_L2C_LOCK_LINE_EN_UNION;
#endif
#define SOC_L2C_LOCK_LINE_EN_ENABLE_START (0)
#define SOC_L2C_LOCK_LINE_EN_ENABLE_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ENABLE : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_L2C_UNLOCK_WAY_UNION;
#endif
#define SOC_L2C_UNLOCK_WAY_ENABLE_START (0)
#define SOC_L2C_UNLOCK_WAY_ENABLE_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ENABLE : 1;
        unsigned int reserved : 19;
        unsigned int ADDSTART : 12;
    } reg;
} SOC_L2C_ADDR_FIL_START_UNION;
#endif
#define SOC_L2C_ADDR_FIL_START_ENABLE_START (0)
#define SOC_L2C_ADDR_FIL_START_ENABLE_END (0)
#define SOC_L2C_ADDR_FIL_START_ADDSTART_START (20)
#define SOC_L2C_ADDR_FIL_START_ADDSTART_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 20;
        unsigned int ADDEND : 12;
    } reg;
} SOC_L2C_ADDR_FIL_END_UNION;
#endif
#define SOC_L2C_ADDR_FIL_END_ADDEND_START (20)
#define SOC_L2C_ADDR_FIL_END_ADDEND_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int DCL : 1;
        unsigned int DWB : 1;
        unsigned int SPNIDEN : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_L2C_DEBUG_CTRL_UNION;
#endif
#define SOC_L2C_DEBUG_CTRL_DCL_START (0)
#define SOC_L2C_DEBUG_CTRL_DCL_END (0)
#define SOC_L2C_DEBUG_CTRL_DWB_START (1)
#define SOC_L2C_DEBUG_CTRL_DWB_END (1)
#define SOC_L2C_DEBUG_CTRL_SPNIDEN_START (2)
#define SOC_L2C_DEBUG_CTRL_SPNIDEN_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int PO : 5;
        unsigned int reserved_0: 16;
        unsigned int NSIDESE : 1;
        unsigned int reserved_1: 1;
        unsigned int IDLE : 1;
        unsigned int PDE : 1;
        unsigned int reserved_2: 2;
        unsigned int DLWRD : 1;
        unsigned int DPE : 1;
        unsigned int IPE : 1;
        unsigned int DLE : 1;
        unsigned int reserved_3: 1;
    } reg;
} SOC_L2C_PREFETCH_CTRL_UNION;
#endif
#define SOC_L2C_PREFETCH_CTRL_PO_START (0)
#define SOC_L2C_PREFETCH_CTRL_PO_END (4)
#define SOC_L2C_PREFETCH_CTRL_NSIDESE_START (21)
#define SOC_L2C_PREFETCH_CTRL_NSIDESE_END (21)
#define SOC_L2C_PREFETCH_CTRL_IDLE_START (23)
#define SOC_L2C_PREFETCH_CTRL_IDLE_END (23)
#define SOC_L2C_PREFETCH_CTRL_PDE_START (24)
#define SOC_L2C_PREFETCH_CTRL_PDE_END (24)
#define SOC_L2C_PREFETCH_CTRL_DLWRD_START (27)
#define SOC_L2C_PREFETCH_CTRL_DLWRD_END (27)
#define SOC_L2C_PREFETCH_CTRL_DPE_START (28)
#define SOC_L2C_PREFETCH_CTRL_DPE_END (28)
#define SOC_L2C_PREFETCH_CTRL_IPE_START (29)
#define SOC_L2C_PREFETCH_CTRL_IPE_END (29)
#define SOC_L2C_PREFETCH_CTRL_DLE_START (30)
#define SOC_L2C_PREFETCH_CTRL_DLE_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int SDBMODEEN : 1;
        unsigned int DCGEN : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_L2C_POWER_CTRL_UNION;
#endif
#define SOC_L2C_POWER_CTRL_SDBMODEEN_START (0)
#define SOC_L2C_POWER_CTRL_SDBMODEEN_END (0)
#define SOC_L2C_POWER_CTRL_DCGEN_START (1)
#define SOC_L2C_POWER_CTRL_DCGEN_END (1)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
