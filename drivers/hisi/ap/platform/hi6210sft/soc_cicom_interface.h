#ifndef __SOC_CICOM_INTERFACE_H__
#define __SOC_CICOM_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_CICOM_STATE_RESET_ADDR(base) ((base) + (0x0000))
#define SOC_CICOM_PRIOR_SELECT_ADDR(base) ((base) + (0x0004))
#define SOC_CICOM_LLI_PARAM_ADDR_UL_ADDR(base) ((base) + (0x0008))
#define SOC_CICOM_GLOBAL_CFG_UL_ADDR(base) ((base) + (0x000C))
#define SOC_CICOM_CHL_FST_ADDR_UL_ADDR(base) ((base) + (0x0010))
#define SOC_CICOM_CHL_LST_ADDR_UL_ADDR(base) ((base) + (0x0014))
#define SOC_CICOM_INT_EN_UL_ADDR(base) ((base) + (0x0018))
#define SOC_CICOM_INT_RAW_UL_ADDR(base) ((base) + (0x001C))
#define SOC_CICOM_INT_CLR_UL_ADDR(base) ((base) + (0x0020))
#define SOC_CICOM_INT_MSK_UL_ADDR(base) ((base) + (0x0024))
#define SOC_CICOM_EN_UL_ADDR(base) ((base) + (0x0028))
#define SOC_CICOM_CK_ADDR_UL_ADDR(base) ((base) + (0x002C))
#define SOC_CICOM_CK_31_0_UL_ADDR(base) ((base) + (0x0030))
#define SOC_CICOM_CK_63_32_UL_ADDR(base) ((base) + (0x0034))
#define SOC_CICOM_CK_95_64_UL_ADDR(base) ((base) + (0x0038))
#define SOC_CICOM_CK_127_96_UL_ADDR(base) ((base) + (0x003C))
#define SOC_CICOM_CC_UL_ADDR(base) ((base) + (0x0040))
#define SOC_CICOM_PDU_TOTAL_LEN_UL_ADDR(base) ((base) + (0x0044))
#define SOC_CICOM_CUSTOM_CFG_UL_ADDR(base) ((base) + (0x0048))
#define SOC_CICOM_SRC_SEG_ADDR_UL_ADDR(base) ((base) + (0x004C))
#define SOC_CICOM_SRC_SEG_LEN_UL_ADDR(base) ((base) + (0x0050))
#define SOC_CICOM_LLI_SRC_SEG_ADDR_UL_ADDR(base) ((base) + (0x0054))
#define SOC_CICOM_DST1_SEG_ADDR_UL_ADDR(base) ((base) + (0x0058))
#define SOC_CICOM_DST1_SEG_LEN_UL_ADDR(base) ((base) + (0x005C))
#define SOC_CICOM_LLI_DST1_SEG_ADDR_UL_ADDR(base) ((base) + (0x0060))
#define SOC_CICOM_DST2_SEG_ADDR_UL_ADDR(base) ((base) + (0x0064))
#define SOC_CICOM_DST2_SEG_LEN_UL_ADDR(base) ((base) + (0x0068))
#define SOC_CICOM_LLI_DST2_SEG_ADDR_UL_ADDR(base) ((base) + (0x006C))
#define SOC_CICOM_ERROR_ADDR_UL_ADDR(base) ((base) + (0x0070))
#define SOC_CICOM_SRC_SEG_RD_ADDR_UL_ADDR(base) ((base) + (0x0074))
#define SOC_CICOM_SRC_SEG_LEAVE_LEN_UL_ADDR(base) ((base) + (0x0078))
#define SOC_CICOM_DST1_SEG_WR_ADDR_UL_ADDR(base) ((base) + (0x007C))
#define SOC_CICOM_DST1_SEG_LEAVE_LEN_UL_ADDR(base) ((base) + (0x0080))
#define SOC_CICOM_DST2_SEG_WR_ADDR_UL_ADDR(base) ((base) + (0x0084))
#define SOC_CICOM_DST2_SEG_LEAVE_LEN_UL_ADDR(base) ((base) + (0x0088))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cicom_state_reset : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CICOM_STATE_RESET_UNION;
#endif
#define SOC_CICOM_STATE_RESET_cicom_state_reset_START (0)
#define SOC_CICOM_STATE_RESET_cicom_state_reset_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prior_select : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_CICOM_PRIOR_SELECT_UNION;
#endif
#define SOC_CICOM_PRIOR_SELECT_prior_select_START (0)
#define SOC_CICOM_PRIOR_SELECT_prior_select_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lli_param_addr_ul : 32;
    } reg;
} SOC_CICOM_LLI_PARAM_ADDR_UL_UNION;
#endif
#define SOC_CICOM_LLI_PARAM_ADDR_UL_lli_param_addr_ul_START (0)
#define SOC_CICOM_LLI_PARAM_ADDR_UL_lli_param_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int alg_sel_ul : 2;
        unsigned int reserved_0 : 6;
        unsigned int offset_len_ul : 4;
        unsigned int reserved_1 : 4;
        unsigned int bearer_ul : 5;
        unsigned int reserved_2 : 11;
    } reg;
} SOC_CICOM_GLOBAL_CFG_UL_UNION;
#endif
#define SOC_CICOM_GLOBAL_CFG_UL_alg_sel_ul_START (0)
#define SOC_CICOM_GLOBAL_CFG_UL_alg_sel_ul_END (1)
#define SOC_CICOM_GLOBAL_CFG_UL_offset_len_ul_START (8)
#define SOC_CICOM_GLOBAL_CFG_UL_offset_len_ul_END (11)
#define SOC_CICOM_GLOBAL_CFG_UL_bearer_ul_START (16)
#define SOC_CICOM_GLOBAL_CFG_UL_bearer_ul_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int chl_fst_addr_ul : 32;
    } reg;
} SOC_CICOM_CHL_FST_ADDR_UL_UNION;
#endif
#define SOC_CICOM_CHL_FST_ADDR_UL_chl_fst_addr_ul_START (0)
#define SOC_CICOM_CHL_FST_ADDR_UL_chl_fst_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int chl_lst_addr_ul : 32;
    } reg;
} SOC_CICOM_CHL_LST_ADDR_UL_UNION;
#endif
#define SOC_CICOM_CHL_LST_ADDR_UL_chl_lst_addr_ul_START (0)
#define SOC_CICOM_CHL_LST_ADDR_UL_chl_lst_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int end_en_ul : 1;
        unsigned int src_addr_error_en_ul : 1;
        unsigned int axi_error_en_ul : 1;
        unsigned int chl_addr_error_en_ul : 1;
        unsigned int src_seg_len_error_en_ul : 1;
        unsigned int dst1_seg_len_error_en_ul : 1;
        unsigned int dst2_seg_len_error_en_ul : 1;
        unsigned int ck_addr_error_en_ul : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_CICOM_INT_EN_UL_UNION;
#endif
#define SOC_CICOM_INT_EN_UL_end_en_ul_START (0)
#define SOC_CICOM_INT_EN_UL_end_en_ul_END (0)
#define SOC_CICOM_INT_EN_UL_src_addr_error_en_ul_START (1)
#define SOC_CICOM_INT_EN_UL_src_addr_error_en_ul_END (1)
#define SOC_CICOM_INT_EN_UL_axi_error_en_ul_START (2)
#define SOC_CICOM_INT_EN_UL_axi_error_en_ul_END (2)
#define SOC_CICOM_INT_EN_UL_chl_addr_error_en_ul_START (3)
#define SOC_CICOM_INT_EN_UL_chl_addr_error_en_ul_END (3)
#define SOC_CICOM_INT_EN_UL_src_seg_len_error_en_ul_START (4)
#define SOC_CICOM_INT_EN_UL_src_seg_len_error_en_ul_END (4)
#define SOC_CICOM_INT_EN_UL_dst1_seg_len_error_en_ul_START (5)
#define SOC_CICOM_INT_EN_UL_dst1_seg_len_error_en_ul_END (5)
#define SOC_CICOM_INT_EN_UL_dst2_seg_len_error_en_ul_START (6)
#define SOC_CICOM_INT_EN_UL_dst2_seg_len_error_en_ul_END (6)
#define SOC_CICOM_INT_EN_UL_ck_addr_error_en_ul_START (7)
#define SOC_CICOM_INT_EN_UL_ck_addr_error_en_ul_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int end_raw_ul : 1;
        unsigned int src_addr_error_raw_ul : 1;
        unsigned int axi_error_raw_ul : 1;
        unsigned int chl_addr_error_raw_ul : 1;
        unsigned int src_seg_len_error_raw_ul : 1;
        unsigned int dst1_seg_len_error_raw_ul : 1;
        unsigned int dst2_seg_len_error_raw_ul : 1;
        unsigned int ck_addr_error_raw_ul : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_CICOM_INT_RAW_UL_UNION;
#endif
#define SOC_CICOM_INT_RAW_UL_end_raw_ul_START (0)
#define SOC_CICOM_INT_RAW_UL_end_raw_ul_END (0)
#define SOC_CICOM_INT_RAW_UL_src_addr_error_raw_ul_START (1)
#define SOC_CICOM_INT_RAW_UL_src_addr_error_raw_ul_END (1)
#define SOC_CICOM_INT_RAW_UL_axi_error_raw_ul_START (2)
#define SOC_CICOM_INT_RAW_UL_axi_error_raw_ul_END (2)
#define SOC_CICOM_INT_RAW_UL_chl_addr_error_raw_ul_START (3)
#define SOC_CICOM_INT_RAW_UL_chl_addr_error_raw_ul_END (3)
#define SOC_CICOM_INT_RAW_UL_src_seg_len_error_raw_ul_START (4)
#define SOC_CICOM_INT_RAW_UL_src_seg_len_error_raw_ul_END (4)
#define SOC_CICOM_INT_RAW_UL_dst1_seg_len_error_raw_ul_START (5)
#define SOC_CICOM_INT_RAW_UL_dst1_seg_len_error_raw_ul_END (5)
#define SOC_CICOM_INT_RAW_UL_dst2_seg_len_error_raw_ul_START (6)
#define SOC_CICOM_INT_RAW_UL_dst2_seg_len_error_raw_ul_END (6)
#define SOC_CICOM_INT_RAW_UL_ck_addr_error_raw_ul_START (7)
#define SOC_CICOM_INT_RAW_UL_ck_addr_error_raw_ul_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int end_clr_ul : 1;
        unsigned int src_addr_error_clr_ul : 1;
        unsigned int axi_error_clr_ul : 1;
        unsigned int chl_addr_error_clr_ul : 1;
        unsigned int src_seg_len_error_clr_ul : 1;
        unsigned int dst1_seg_len_error_clr_ul : 1;
        unsigned int dst2_seg_len_error_clr_ul : 1;
        unsigned int ck_addr_error_clr_ul : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_CICOM_INT_CLR_UL_UNION;
#endif
#define SOC_CICOM_INT_CLR_UL_end_clr_ul_START (0)
#define SOC_CICOM_INT_CLR_UL_end_clr_ul_END (0)
#define SOC_CICOM_INT_CLR_UL_src_addr_error_clr_ul_START (1)
#define SOC_CICOM_INT_CLR_UL_src_addr_error_clr_ul_END (1)
#define SOC_CICOM_INT_CLR_UL_axi_error_clr_ul_START (2)
#define SOC_CICOM_INT_CLR_UL_axi_error_clr_ul_END (2)
#define SOC_CICOM_INT_CLR_UL_chl_addr_error_clr_ul_START (3)
#define SOC_CICOM_INT_CLR_UL_chl_addr_error_clr_ul_END (3)
#define SOC_CICOM_INT_CLR_UL_src_seg_len_error_clr_ul_START (4)
#define SOC_CICOM_INT_CLR_UL_src_seg_len_error_clr_ul_END (4)
#define SOC_CICOM_INT_CLR_UL_dst1_seg_len_error_clr_ul_START (5)
#define SOC_CICOM_INT_CLR_UL_dst1_seg_len_error_clr_ul_END (5)
#define SOC_CICOM_INT_CLR_UL_dst2_seg_len_error_clr_ul_START (6)
#define SOC_CICOM_INT_CLR_UL_dst2_seg_len_error_clr_ul_END (6)
#define SOC_CICOM_INT_CLR_UL_ck_addr_error_clr_ul_START (7)
#define SOC_CICOM_INT_CLR_UL_ck_addr_error_clr_ul_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int end_msk_ul : 1;
        unsigned int src_addr_error_msk_ul : 1;
        unsigned int axi_error_msk_ul : 1;
        unsigned int chl_addr_error_msk_ul : 1;
        unsigned int src_seg_len_error_msk_ul : 1;
        unsigned int dst1_seg_len_error_msk_ul : 1;
        unsigned int dst2_seg_len_error_msk_ul : 1;
        unsigned int ck_addr_error_msk_ul : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_CICOM_INT_MSK_UL_UNION;
#endif
#define SOC_CICOM_INT_MSK_UL_end_msk_ul_START (0)
#define SOC_CICOM_INT_MSK_UL_end_msk_ul_END (0)
#define SOC_CICOM_INT_MSK_UL_src_addr_error_msk_ul_START (1)
#define SOC_CICOM_INT_MSK_UL_src_addr_error_msk_ul_END (1)
#define SOC_CICOM_INT_MSK_UL_axi_error_msk_ul_START (2)
#define SOC_CICOM_INT_MSK_UL_axi_error_msk_ul_END (2)
#define SOC_CICOM_INT_MSK_UL_chl_addr_error_msk_ul_START (3)
#define SOC_CICOM_INT_MSK_UL_chl_addr_error_msk_ul_END (3)
#define SOC_CICOM_INT_MSK_UL_src_seg_len_error_msk_ul_START (4)
#define SOC_CICOM_INT_MSK_UL_src_seg_len_error_msk_ul_END (4)
#define SOC_CICOM_INT_MSK_UL_dst1_seg_len_error_msk_ul_START (5)
#define SOC_CICOM_INT_MSK_UL_dst1_seg_len_error_msk_ul_END (5)
#define SOC_CICOM_INT_MSK_UL_dst2_seg_len_error_msk_ul_START (6)
#define SOC_CICOM_INT_MSK_UL_dst2_seg_len_error_msk_ul_END (6)
#define SOC_CICOM_INT_MSK_UL_ck_addr_error_msk_ul_START (7)
#define SOC_CICOM_INT_MSK_UL_ck_addr_error_msk_ul_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int en_ul : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_CICOM_EN_UL_UNION;
#endif
#define SOC_CICOM_EN_UL_en_ul_START (0)
#define SOC_CICOM_EN_UL_en_ul_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ck_addr_ul : 32;
    } reg;
} SOC_CICOM_CK_ADDR_UL_UNION;
#endif
#define SOC_CICOM_CK_ADDR_UL_ck_addr_ul_START (0)
#define SOC_CICOM_CK_ADDR_UL_ck_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ck_31_0_ul : 32;
    } reg;
} SOC_CICOM_CK_31_0_UL_UNION;
#endif
#define SOC_CICOM_CK_31_0_UL_ck_31_0_ul_START (0)
#define SOC_CICOM_CK_31_0_UL_ck_31_0_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ck_63_32_ul : 32;
    } reg;
} SOC_CICOM_CK_63_32_UL_UNION;
#endif
#define SOC_CICOM_CK_63_32_UL_ck_63_32_ul_START (0)
#define SOC_CICOM_CK_63_32_UL_ck_63_32_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ck_95_64_ul : 32;
    } reg;
} SOC_CICOM_CK_95_64_UL_UNION;
#endif
#define SOC_CICOM_CK_95_64_UL_ck_95_64_ul_START (0)
#define SOC_CICOM_CK_95_64_UL_ck_95_64_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ck_127_96_ul : 32;
    } reg;
} SOC_CICOM_CK_127_96_UL_UNION;
#endif
#define SOC_CICOM_CK_127_96_UL_ck_127_96_ul_START (0)
#define SOC_CICOM_CK_127_96_UL_ck_127_96_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cc_ul : 32;
    } reg;
} SOC_CICOM_CC_UL_UNION;
#endif
#define SOC_CICOM_CC_UL_cc_ul_START (0)
#define SOC_CICOM_CC_UL_cc_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdu_total_len_ul : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_CICOM_PDU_TOTAL_LEN_UL_UNION;
#endif
#define SOC_CICOM_PDU_TOTAL_LEN_UL_pdu_total_len_ul_START (0)
#define SOC_CICOM_PDU_TOTAL_LEN_UL_pdu_total_len_ul_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int key_xor_src_ul : 2;
        unsigned int reserved_0 : 6;
        unsigned int src_seg_en_ul : 1;
        unsigned int reserved_1 : 7;
        unsigned int dst1_seg_en_ul : 1;
        unsigned int reserved_2 : 7;
        unsigned int dst2_seg_en_ul : 1;
        unsigned int reserved_3 : 7;
    } reg;
} SOC_CICOM_CUSTOM_CFG_UL_UNION;
#endif
#define SOC_CICOM_CUSTOM_CFG_UL_key_xor_src_ul_START (0)
#define SOC_CICOM_CUSTOM_CFG_UL_key_xor_src_ul_END (1)
#define SOC_CICOM_CUSTOM_CFG_UL_src_seg_en_ul_START (8)
#define SOC_CICOM_CUSTOM_CFG_UL_src_seg_en_ul_END (8)
#define SOC_CICOM_CUSTOM_CFG_UL_dst1_seg_en_ul_START (16)
#define SOC_CICOM_CUSTOM_CFG_UL_dst1_seg_en_ul_END (16)
#define SOC_CICOM_CUSTOM_CFG_UL_dst2_seg_en_ul_START (24)
#define SOC_CICOM_CUSTOM_CFG_UL_dst2_seg_en_ul_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int src_seg_addr_ul : 32;
    } reg;
} SOC_CICOM_SRC_SEG_ADDR_UL_UNION;
#endif
#define SOC_CICOM_SRC_SEG_ADDR_UL_src_seg_addr_ul_START (0)
#define SOC_CICOM_SRC_SEG_ADDR_UL_src_seg_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int src_seg_len_ul : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_CICOM_SRC_SEG_LEN_UL_UNION;
#endif
#define SOC_CICOM_SRC_SEG_LEN_UL_src_seg_len_ul_START (0)
#define SOC_CICOM_SRC_SEG_LEN_UL_src_seg_len_ul_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lli_src_seg_addr_ul : 32;
    } reg;
} SOC_CICOM_LLI_SRC_SEG_ADDR_UL_UNION;
#endif
#define SOC_CICOM_LLI_SRC_SEG_ADDR_UL_lli_src_seg_addr_ul_START (0)
#define SOC_CICOM_LLI_SRC_SEG_ADDR_UL_lli_src_seg_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dst1_seg_addr_ul : 32;
    } reg;
} SOC_CICOM_DST1_SEG_ADDR_UL_UNION;
#endif
#define SOC_CICOM_DST1_SEG_ADDR_UL_dst1_seg_addr_ul_START (0)
#define SOC_CICOM_DST1_SEG_ADDR_UL_dst1_seg_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dst1_seg_len_ul : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_CICOM_DST1_SEG_LEN_UL_UNION;
#endif
#define SOC_CICOM_DST1_SEG_LEN_UL_dst1_seg_len_ul_START (0)
#define SOC_CICOM_DST1_SEG_LEN_UL_dst1_seg_len_ul_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lli_dst1_seg_addr_ul : 32;
    } reg;
} SOC_CICOM_LLI_DST1_SEG_ADDR_UL_UNION;
#endif
#define SOC_CICOM_LLI_DST1_SEG_ADDR_UL_lli_dst1_seg_addr_ul_START (0)
#define SOC_CICOM_LLI_DST1_SEG_ADDR_UL_lli_dst1_seg_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dst2_seg_addr_ul : 32;
    } reg;
} SOC_CICOM_DST2_SEG_ADDR_UL_UNION;
#endif
#define SOC_CICOM_DST2_SEG_ADDR_UL_dst2_seg_addr_ul_START (0)
#define SOC_CICOM_DST2_SEG_ADDR_UL_dst2_seg_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dst2_seg_len_ul : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_CICOM_DST2_SEG_LEN_UL_UNION;
#endif
#define SOC_CICOM_DST2_SEG_LEN_UL_dst2_seg_len_ul_START (0)
#define SOC_CICOM_DST2_SEG_LEN_UL_dst2_seg_len_ul_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lli_dst2_seg_addr_ul : 32;
    } reg;
} SOC_CICOM_LLI_DST2_SEG_ADDR_UL_UNION;
#endif
#define SOC_CICOM_LLI_DST2_SEG_ADDR_UL_lli_dst2_seg_addr_ul_START (0)
#define SOC_CICOM_LLI_DST2_SEG_ADDR_UL_lli_dst2_seg_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int error_addr_ul : 32;
    } reg;
} SOC_CICOM_ERROR_ADDR_UL_UNION;
#endif
#define SOC_CICOM_ERROR_ADDR_UL_error_addr_ul_START (0)
#define SOC_CICOM_ERROR_ADDR_UL_error_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int src_seg_rd_addr_ul : 32;
    } reg;
} SOC_CICOM_SRC_SEG_RD_ADDR_UL_UNION;
#endif
#define SOC_CICOM_SRC_SEG_RD_ADDR_UL_src_seg_rd_addr_ul_START (0)
#define SOC_CICOM_SRC_SEG_RD_ADDR_UL_src_seg_rd_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int src_seg_leave_len_ul : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_CICOM_SRC_SEG_LEAVE_LEN_UL_UNION;
#endif
#define SOC_CICOM_SRC_SEG_LEAVE_LEN_UL_src_seg_leave_len_ul_START (0)
#define SOC_CICOM_SRC_SEG_LEAVE_LEN_UL_src_seg_leave_len_ul_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dst1_seg_wr_addr_ul : 32;
    } reg;
} SOC_CICOM_DST1_SEG_WR_ADDR_UL_UNION;
#endif
#define SOC_CICOM_DST1_SEG_WR_ADDR_UL_dst1_seg_wr_addr_ul_START (0)
#define SOC_CICOM_DST1_SEG_WR_ADDR_UL_dst1_seg_wr_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dst1_seg_leave_len_ul : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_CICOM_DST1_SEG_LEAVE_LEN_UL_UNION;
#endif
#define SOC_CICOM_DST1_SEG_LEAVE_LEN_UL_dst1_seg_leave_len_ul_START (0)
#define SOC_CICOM_DST1_SEG_LEAVE_LEN_UL_dst1_seg_leave_len_ul_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dst2_seg_wr_addr_ul : 32;
    } reg;
} SOC_CICOM_DST2_SEG_WR_ADDR_UL_UNION;
#endif
#define SOC_CICOM_DST2_SEG_WR_ADDR_UL_dst2_seg_wr_addr_ul_START (0)
#define SOC_CICOM_DST2_SEG_WR_ADDR_UL_dst2_seg_wr_addr_ul_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dst2_seg_leave_len_ul : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_CICOM_DST2_SEG_LEAVE_LEN_UL_UNION;
#endif
#define SOC_CICOM_DST2_SEG_LEAVE_LEN_UL_dst2_seg_leave_len_ul_START (0)
#define SOC_CICOM_DST2_SEG_LEAVE_LEN_UL_dst2_seg_leave_len_ul_END (13)
#define SOC_CIPHER_REG_ADDR(base,offset) ((base)+(offset))
#define SOC_CIPHER_CICOM_STATE_RESET(BaseAddr) SOC_CICOM_STATE_RESET_ADDR(BaseAddr)
#define SOC_CIPHER_PRIOR_SELECT(BaseAddr) SOC_CICOM_PRIOR_SELECT_ADDR(BaseAddr)
#define SOC_CIPHER_LLI_PARAM_ADDR_UL(BaseAddr) SOC_CICOM_LLI_PARAM_ADDR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_GLOBAL_CFG_UL(BaseAddr) SOC_CICOM_GLOBAL_CFG_UL_ADDR(BaseAddr)
#define SOC_CIPHER_CHL_FST_ADDR_UL(BaseAddr) SOC_CICOM_CHL_FST_ADDR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_CHL_LST_ADDR_UL(BaseAddr) SOC_CICOM_CHL_LST_ADDR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_INT_EN_UL(BaseAddr) SOC_CICOM_INT_EN_UL_ADDR(BaseAddr)
#define SOC_CIPHER_INT_RAW_UL(BaseAddr) SOC_CICOM_INT_RAW_UL_ADDR(BaseAddr)
#define SOC_CIPHER_INT_CLR_UL(BaseAddr) SOC_CICOM_INT_CLR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_INT_MSK_UL(BaseAddr) SOC_CICOM_INT_MSK_UL_ADDR(BaseAddr)
#define SOC_CIPHER_EN_UL(BaseAddr) SOC_CICOM_EN_UL_ADDR(BaseAddr)
#define SOC_CIPHER_CK_ADDR_UL(BaseAddr) SOC_CICOM_CK_ADDR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_CK_31_0_UL(BaseAddr) SOC_CICOM_CK_31_0_UL_ADDR(BaseAddr)
#define SOC_CIPHER_CK_63_32_UL(BaseAddr) SOC_CICOM_CK_63_32_UL_ADDR(BaseAddr)
#define SOC_CIPHER_CK_95_64_UL(BaseAddr) SOC_CICOM_CK_95_64_UL_ADDR(BaseAddr)
#define SOC_CIPHER_CK_127_96_UL(BaseAddr) SOC_CICOM_CK_127_96_UL_ADDR(BaseAddr)
#define SOC_CIPHER_CC_UL(BaseAddr) SOC_CICOM_CC_UL_ADDR(BaseAddr)
#define SOC_CIPHER_SRC_PDU_TOTAL_LEN_UL(BaseAddr) SOC_CICOM_PDU_TOTAL_LEN_UL_ADDR(BaseAddr)
#define SOC_CIPHER_CUSTOM_CFG_UL(BaseAddr) SOC_CICOM_CUSTOM_CFG_UL_ADDR(BaseAddr)
#define SOC_CIPHER_SRC_PDU_SEG_ADDR_UL(BaseAddr) SOC_CICOM_SRC_SEG_ADDR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_SRC_PDU_SEG_LEN_UL(BaseAddr) SOC_CICOM_SRC_SEG_LEN_UL_ADDR(BaseAddr)
#define SOC_CIPHER_LLI_SRC_PDU_SEG_ADDR_UL(BaseAddr) SOC_CICOM_LLI_SRC_SEG_ADDR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_DST_TTF_SEG_ADDR_UL(BaseAddr) SOC_CICOM_DST1_SEG_ADDR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_DST_TTF_SEG_LEN_UL(BaseAddr) SOC_CICOM_DST1_SEG_LEN_UL_ADDR(BaseAddr)
#define SOC_CIPHER_LLI_DST_TTF_SEG_ADDR_UL(BaseAddr) SOC_CICOM_LLI_DST1_SEG_ADDR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_DST_MBX_SEG_ADDR_UL(BaseAddr) SOC_CICOM_DST2_SEG_ADDR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_DST_MBX_SEG_LEN_UL(BaseAddr) SOC_CICOM_DST2_SEG_LEN_UL_ADDR(BaseAddr)
#define SOC_CIPHER_LLI_DST_MBX_SEG_ADDR_UL(BaseAddr) SOC_CICOM_LLI_DST2_SEG_ADDR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_ERROR_ADDR_UL(BaseAddr) SOC_CICOM_ERROR_ADDR_UL_ADDR(BaseAddr)
#define SOC_CIPHER_SRC_SEG_RD_ADDR_UL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0074)
#define SOC_CIPHER_SRC_SEG_LEAVE_LEN_UL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0078)
#define SOC_CIPHER_DST1_SEG_WR_ADDR_UL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x007c)
#define SOC_CIPHER_DST1_SEG_LEAVE_LEN_UL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0080)
#define SOC_CIPHER_DST2_SEG_WR_ADDR_UL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0084)
#define SOC_CIPHER_DST2_SEG_LEAVE_LEN_UL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0088)
#define SOC_CIPHER_LLI_PARAM_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0108)
#define SOC_CIPHER_GLOBAL_CFG_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x010C)
#define SOC_CIPHER_CHL_FST_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0110)
#define SOC_CIPHER_CHL_LST_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0114)
#define SOC_CIPHER_INT_EN_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0118)
#define SOC_CIPHER_INT_RAW_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x011C)
#define SOC_CIPHER_INT_CLR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0120)
#define SOC_CIPHER_INT_MSK_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0124)
#define SOC_CIPHER_EN_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0128)
#define SOC_CIPHER_CK_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x012C)
#define SOC_CIPHER_CK_31_0_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0130)
#define SOC_CIPHER_CK_63_32_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0134)
#define SOC_CIPHER_CK_95_64_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0138)
#define SOC_CIPHER_CK_127_96_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x013c)
#define SOC_CIPHER_CC_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0140)
#define SOC_CIPHER_SRC_PDU_TOTAL_LEN_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0144)
#define SOC_CIPHER_CUSTOM_CFG_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0148)
#define SOC_CIPHER_SRC_PDU_SEG_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x014c)
#define SOC_CIPHER_SRC_PDU_SEG_LEN_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0150)
#define SOC_CIPHER_LLI_SRC_PDU_SEG_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0154)
#define SOC_CIPHER_DST_TTF_SEG_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0158)
#define SOC_CIPHER_DST_TTF_SEG_LEN_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x015c)
#define SOC_CIPHER_LLI_DST_TTF_SEG_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0160)
#define SOC_CIPHER_DST_MBX_SEG_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0164)
#define SOC_CIPHER_DST_MBX_SEG_LEN_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0168)
#define SOC_CIPHER_LLI_DST_MBX_SEG_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x016C)
#define SOC_CIPHER_ERROR_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0170)
#define SOC_CIPHER_SRC_RD_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0174)
#define SOC_CIPHER_SRC_SEG_LEFT_LEN_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0178)
#define SOC_CIPHER_DST1_SEG_WR_ADDR_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x017C)
#define SOC_CIPHER_DST1_SEG_LEFT_LEN_DL(BaseAddr) SOC_CIPHER_REG_ADDR(BaseAddr,0x0180)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
