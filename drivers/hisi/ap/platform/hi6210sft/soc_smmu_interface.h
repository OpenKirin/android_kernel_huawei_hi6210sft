#ifndef __SOC_SMMU_INTERFACE_H__
#define __SOC_SMMU_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_SMMU_CTRL_ADDR(base) ((base) + (0x0000))
#define SOC_SMMU_ENABLE_ADDR(base) ((base) + (0x0004))
#define SOC_SMMU_PTBR_ADDR(base) ((base) + (0x0008))
#define SOC_SMMU_START_ADDR(base) ((base) + (0x000C))
#define SOC_SMMU_END_ADDR(base) ((base) + (0x0010))
#define SOC_SMMU_INTMASK_ADDR(base) ((base) + (0x0014))
#define SOC_SMMU_RINTSTS_ADDR(base) ((base) + (0x0018))
#define SOC_SMMU_MINTSTS_ADDR(base) ((base) + (0x001C))
#define SOC_SMMU_INTCLR_ADDR(base) ((base) + (0x0020))
#define SOC_SMMU_STATUS_ADDR(base) ((base) + (0x0024))
#define SOC_SMMU_AXIID_ADDR(base) ((base) + (0x0028))
#define SOC_SMMU_CNTCTRL_ADDR(base) ((base) + (0x002C))
#define SOC_SMMU_TRANSCNT_ADDR(base) ((base) + (0x0030))
#define SOC_SMMU_L0TLBHITCNT_ADDR(base) ((base) + (0x0034))
#define SOC_SMMU_L1TLBHITCNT_ADDR(base) ((base) + (0x0038))
#define SOC_SMMU_WRAPCNT_ADDR(base) ((base) + (0x003C))
#define SOC_SMMU_SEC_START_ADDR(base) ((base) + (0x0040))
#define SOC_SMMU_SEC_END_ADDR(base) ((base) + (0x0044))
#define SOC_SMMU_VERSION_ADDR(base) ((base) + (0x0048))
#define SOC_SMMU_IPTSRC_ADDR(base) ((base) + (0x004C))
#define SOC_SMMU_IPTPA_ADDR(base) ((base) + (0x0050))
#define SOC_SMMU_TRBA_ADDR(base) ((base) + (0x0054))
#define SOC_SMMU_BYS_START_ADDR(base) ((base) + (0x0058))
#define SOC_SMMU_BYS_END_ADDR(base) ((base) + (0x005C))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_rst : 1;
        unsigned int page_size : 1;
        unsigned int ddr_size : 2;
        unsigned int l1tlb_size : 2;
        unsigned int ion_size : 2;
        unsigned int ion_partial_en : 1;
        unsigned int preload_en : 1;
        unsigned int invalid_en : 1;
        unsigned int auto_invalid_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int tag_bit_sel : 2;
        unsigned int reserved_1 : 17;
    } reg;
} SOC_SMMU_CTRL_UNION;
#endif
#define SOC_SMMU_CTRL_smmu_rst_START (0)
#define SOC_SMMU_CTRL_smmu_rst_END (0)
#define SOC_SMMU_CTRL_page_size_START (1)
#define SOC_SMMU_CTRL_page_size_END (1)
#define SOC_SMMU_CTRL_ddr_size_START (2)
#define SOC_SMMU_CTRL_ddr_size_END (3)
#define SOC_SMMU_CTRL_l1tlb_size_START (4)
#define SOC_SMMU_CTRL_l1tlb_size_END (5)
#define SOC_SMMU_CTRL_ion_size_START (6)
#define SOC_SMMU_CTRL_ion_size_END (7)
#define SOC_SMMU_CTRL_ion_partial_en_START (8)
#define SOC_SMMU_CTRL_ion_partial_en_END (8)
#define SOC_SMMU_CTRL_preload_en_START (9)
#define SOC_SMMU_CTRL_preload_en_END (9)
#define SOC_SMMU_CTRL_invalid_en_START (10)
#define SOC_SMMU_CTRL_invalid_en_END (10)
#define SOC_SMMU_CTRL_auto_invalid_en_START (11)
#define SOC_SMMU_CTRL_auto_invalid_en_END (11)
#define SOC_SMMU_CTRL_tag_bit_sel_START (13)
#define SOC_SMMU_CTRL_tag_bit_sel_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_enable : 1;
        unsigned int ch0_enable : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_SMMU_ENABLE_UNION;
#endif
#define SOC_SMMU_ENABLE_smmu_enable_START (0)
#define SOC_SMMU_ENABLE_smmu_enable_END (0)
#define SOC_SMMU_ENABLE_ch0_enable_START (1)
#define SOC_SMMU_ENABLE_ch0_enable_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trans_base_addr : 32;
    } reg;
} SOC_SMMU_PTBR_UNION;
#endif
#define SOC_SMMU_PTBR_trans_base_addr_START (0)
#define SOC_SMMU_PTBR_trans_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_start : 32;
    } reg;
} SOC_SMMU_START_UNION;
#endif
#define SOC_SMMU_START_addr_start_START (0)
#define SOC_SMMU_START_addr_start_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_end : 32;
    } reg;
} SOC_SMMU_END_UNION;
#endif
#define SOC_SMMU_END_addr_end_START (0)
#define SOC_SMMU_END_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_error_int : 1;
        unsigned int pt_invalid_int : 1;
        unsigned int master0_err_int : 1;
        unsigned int master1_err_int : 1;
        unsigned int master0_timeout_int : 1;
        unsigned int master1_timeout_int : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_SMMU_INTMASK_UNION;
#endif
#define SOC_SMMU_INTMASK_cfg_error_int_START (0)
#define SOC_SMMU_INTMASK_cfg_error_int_END (0)
#define SOC_SMMU_INTMASK_pt_invalid_int_START (1)
#define SOC_SMMU_INTMASK_pt_invalid_int_END (1)
#define SOC_SMMU_INTMASK_master0_err_int_START (2)
#define SOC_SMMU_INTMASK_master0_err_int_END (2)
#define SOC_SMMU_INTMASK_master1_err_int_START (3)
#define SOC_SMMU_INTMASK_master1_err_int_END (3)
#define SOC_SMMU_INTMASK_master0_timeout_int_START (4)
#define SOC_SMMU_INTMASK_master0_timeout_int_END (4)
#define SOC_SMMU_INTMASK_master1_timeout_int_START (5)
#define SOC_SMMU_INTMASK_master1_timeout_int_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_error_int : 1;
        unsigned int pt_invalid_int : 1;
        unsigned int master0_err_int : 1;
        unsigned int master1_err_int : 1;
        unsigned int master0_timeout_int : 1;
        unsigned int master1_timeout_int : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_SMMU_RINTSTS_UNION;
#endif
#define SOC_SMMU_RINTSTS_cfg_error_int_START (0)
#define SOC_SMMU_RINTSTS_cfg_error_int_END (0)
#define SOC_SMMU_RINTSTS_pt_invalid_int_START (1)
#define SOC_SMMU_RINTSTS_pt_invalid_int_END (1)
#define SOC_SMMU_RINTSTS_master0_err_int_START (2)
#define SOC_SMMU_RINTSTS_master0_err_int_END (2)
#define SOC_SMMU_RINTSTS_master1_err_int_START (3)
#define SOC_SMMU_RINTSTS_master1_err_int_END (3)
#define SOC_SMMU_RINTSTS_master0_timeout_int_START (4)
#define SOC_SMMU_RINTSTS_master0_timeout_int_END (4)
#define SOC_SMMU_RINTSTS_master1_timeout_int_START (5)
#define SOC_SMMU_RINTSTS_master1_timeout_int_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_error_int : 1;
        unsigned int pt_invalid_int : 1;
        unsigned int master0_err_int : 1;
        unsigned int master1_err_int : 1;
        unsigned int master0_timeout_int : 1;
        unsigned int master1_timeout_int : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_SMMU_MINTSTS_UNION;
#endif
#define SOC_SMMU_MINTSTS_cfg_error_int_START (0)
#define SOC_SMMU_MINTSTS_cfg_error_int_END (0)
#define SOC_SMMU_MINTSTS_pt_invalid_int_START (1)
#define SOC_SMMU_MINTSTS_pt_invalid_int_END (1)
#define SOC_SMMU_MINTSTS_master0_err_int_START (2)
#define SOC_SMMU_MINTSTS_master0_err_int_END (2)
#define SOC_SMMU_MINTSTS_master1_err_int_START (3)
#define SOC_SMMU_MINTSTS_master1_err_int_END (3)
#define SOC_SMMU_MINTSTS_master0_timeout_int_START (4)
#define SOC_SMMU_MINTSTS_master0_timeout_int_END (4)
#define SOC_SMMU_MINTSTS_master1_timeout_int_START (5)
#define SOC_SMMU_MINTSTS_master1_timeout_int_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_error_int : 1;
        unsigned int pt_invalid_int : 1;
        unsigned int master0_err_int : 1;
        unsigned int master1_err_int : 1;
        unsigned int master0_timeout_int : 1;
        unsigned int master1_timeout_int : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_SMMU_INTCLR_UNION;
#endif
#define SOC_SMMU_INTCLR_cfg_error_int_START (0)
#define SOC_SMMU_INTCLR_cfg_error_int_END (0)
#define SOC_SMMU_INTCLR_pt_invalid_int_START (1)
#define SOC_SMMU_INTCLR_pt_invalid_int_END (1)
#define SOC_SMMU_INTCLR_master0_err_int_START (2)
#define SOC_SMMU_INTCLR_master0_err_int_END (2)
#define SOC_SMMU_INTCLR_master1_err_int_START (3)
#define SOC_SMMU_INTCLR_master1_err_int_END (3)
#define SOC_SMMU_INTCLR_master0_timeout_int_START (4)
#define SOC_SMMU_INTCLR_master0_timeout_int_END (4)
#define SOC_SMMU_INTCLR_master1_timeout_int_START (5)
#define SOC_SMMU_INTCLR_master1_timeout_int_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int l0tlb_fsm : 3;
        unsigned int axi_fifo_full : 1;
        unsigned int rpl_fifo_full : 1;
        unsigned int master0_buf_full : 1;
        unsigned int master1_buf_full : 1;
        unsigned int bypass : 1;
        unsigned int cfg_error : 1;
        unsigned int cfg_lock : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_SMMU_STATUS_UNION;
#endif
#define SOC_SMMU_STATUS_l0tlb_fsm_START (0)
#define SOC_SMMU_STATUS_l0tlb_fsm_END (2)
#define SOC_SMMU_STATUS_axi_fifo_full_START (3)
#define SOC_SMMU_STATUS_axi_fifo_full_END (3)
#define SOC_SMMU_STATUS_rpl_fifo_full_START (4)
#define SOC_SMMU_STATUS_rpl_fifo_full_END (4)
#define SOC_SMMU_STATUS_master0_buf_full_START (5)
#define SOC_SMMU_STATUS_master0_buf_full_END (5)
#define SOC_SMMU_STATUS_master1_buf_full_START (6)
#define SOC_SMMU_STATUS_master1_buf_full_END (6)
#define SOC_SMMU_STATUS_bypass_START (7)
#define SOC_SMMU_STATUS_bypass_END (7)
#define SOC_SMMU_STATUS_cfg_error_START (8)
#define SOC_SMMU_STATUS_cfg_error_END (8)
#define SOC_SMMU_STATUS_cfg_lock_START (9)
#define SOC_SMMU_STATUS_cfg_lock_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_axiid : 12;
        unsigned int rpl_sideband : 18;
        unsigned int l0_bypass : 1;
        unsigned int s128_bypass : 1;
    } reg;
} SOC_SMMU_AXIID_UNION;
#endif
#define SOC_SMMU_AXIID_smmu_axiid_START (0)
#define SOC_SMMU_AXIID_smmu_axiid_END (11)
#define SOC_SMMU_AXIID_rpl_sideband_START (12)
#define SOC_SMMU_AXIID_rpl_sideband_END (29)
#define SOC_SMMU_AXIID_l0_bypass_START (30)
#define SOC_SMMU_AXIID_l0_bypass_END (30)
#define SOC_SMMU_AXIID_s128_bypass_START (31)
#define SOC_SMMU_AXIID_s128_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int count_enable : 1;
        unsigned int count_clear : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_SMMU_CNTCTRL_UNION;
#endif
#define SOC_SMMU_CNTCTRL_count_enable_START (0)
#define SOC_SMMU_CNTCTRL_count_enable_END (0)
#define SOC_SMMU_CNTCTRL_count_clear_START (1)
#define SOC_SMMU_CNTCTRL_count_clear_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int axi_trans_count : 32;
    } reg;
} SOC_SMMU_TRANSCNT_UNION;
#endif
#define SOC_SMMU_TRANSCNT_axi_trans_count_START (0)
#define SOC_SMMU_TRANSCNT_axi_trans_count_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int l0tlb_hit_count : 32;
    } reg;
} SOC_SMMU_L0TLBHITCNT_UNION;
#endif
#define SOC_SMMU_L0TLBHITCNT_l0tlb_hit_count_START (0)
#define SOC_SMMU_L0TLBHITCNT_l0tlb_hit_count_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int l1tlb_hit_count : 32;
    } reg;
} SOC_SMMU_L1TLBHITCNT_UNION;
#endif
#define SOC_SMMU_L1TLBHITCNT_l1tlb_hit_count_START (0)
#define SOC_SMMU_L1TLBHITCNT_l1tlb_hit_count_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int axi_trans_count_wrap : 4;
        unsigned int l0tlb_hit_count_wrap : 4;
        unsigned int l1tlb_hit_count_wrap : 4;
        unsigned int reserved : 20;
    } reg;
} SOC_SMMU_WRAPCNT_UNION;
#endif
#define SOC_SMMU_WRAPCNT_axi_trans_count_wrap_START (0)
#define SOC_SMMU_WRAPCNT_axi_trans_count_wrap_END (3)
#define SOC_SMMU_WRAPCNT_l0tlb_hit_count_wrap_START (4)
#define SOC_SMMU_WRAPCNT_l0tlb_hit_count_wrap_END (7)
#define SOC_SMMU_WRAPCNT_l1tlb_hit_count_wrap_START (8)
#define SOC_SMMU_WRAPCNT_l1tlb_hit_count_wrap_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sec_addr_start : 32;
    } reg;
} SOC_SMMU_SEC_START_UNION;
#endif
#define SOC_SMMU_SEC_START_sec_addr_start_START (0)
#define SOC_SMMU_SEC_START_sec_addr_start_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sec_addr_end : 32;
    } reg;
} SOC_SMMU_SEC_END_UNION;
#endif
#define SOC_SMMU_SEC_END_sec_addr_end_START (0)
#define SOC_SMMU_SEC_END_sec_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_version : 32;
    } reg;
} SOC_SMMU_VERSION_UNION;
#endif
#define SOC_SMMU_VERSION_smmu_version_START (0)
#define SOC_SMMU_VERSION_smmu_version_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_ipt_src : 32;
    } reg;
} SOC_SMMU_IPTSRC_UNION;
#endif
#define SOC_SMMU_IPTSRC_smmu_ipt_src_START (0)
#define SOC_SMMU_IPTSRC_smmu_ipt_src_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_ipt_pa : 32;
    } reg;
} SOC_SMMU_IPTPA_UNION;
#endif
#define SOC_SMMU_IPTPA_smmu_ipt_pa_START (0)
#define SOC_SMMU_IPTPA_smmu_ipt_pa_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_tagram_baseaddr : 32;
    } reg;
} SOC_SMMU_TRBA_UNION;
#endif
#define SOC_SMMU_TRBA_smmu_tagram_baseaddr_START (0)
#define SOC_SMMU_TRBA_smmu_tagram_baseaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bypass_start_addr : 32;
    } reg;
} SOC_SMMU_BYS_START_UNION;
#endif
#define SOC_SMMU_BYS_START_bypass_start_addr_START (0)
#define SOC_SMMU_BYS_START_bypass_start_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bypass_end_addr : 32;
    } reg;
} SOC_SMMU_BYS_END_UNION;
#endif
#define SOC_SMMU_BYS_END_bypass_end_addr_START (0)
#define SOC_SMMU_BYS_END_bypass_end_addr_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
