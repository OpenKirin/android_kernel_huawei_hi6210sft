#ifndef __SOC_PERI_SCTRL_INTERFACE_H__
#define __SOC_PERI_SCTRL_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_ADDR(base) ((base) + (0x000))
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_ADDR(base) ((base) + (0x004))
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_ADDR(base) ((base) + (0x008))
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_ADDR(base) ((base) + (0x00c))
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_ADDR(base) ((base) + (0x010))
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_ADDR(base) ((base) + (0x014))
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_ADDR(base) ((base) + (0x018))
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_ADDR(base) ((base) + (0x01C))
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL10_ADDR(base) ((base) + (0x020))
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_ADDR(base) ((base) + (0x024))
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_ADDR(base) ((base) + (0x028))
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL14_ADDR(base) ((base) + (0x02C))
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_ADDR(base) ((base) + (0x030))
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_ADDR(base) ((base) + (0x034))
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_ADDR(base) ((base) + (0x038))
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_ADDR(base) ((base) + (0x03c))
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_ADDR(base) ((base) + (0x050))
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ADDR(base) ((base) + (0x054))
#define SOC_PERI_SCTRL_SC_DDR_CTRL2_ADDR(base) ((base) + (0x058))
#define SOC_PERI_SCTRL_SC_DDR_CTRL3_ADDR(base) ((base) + (0x060))
#define SOC_PERI_SCTRL_SC_DDR_CTRL4_ADDR(base) ((base) + (0x064))
#define SOC_PERI_SCTRL_SC_NOC_CTRL0_ADDR(base) ((base) + (0x070))
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_ADDR(base) ((base) + (0x074))
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_ADDR(base) ((base) + (0x078))
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_ADDR(base) ((base) + (0x090))
#define SOC_PERI_SCTRL_SC_PERIPH_STAT1_ADDR(base) ((base) + (0x094))
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_ADDR(base) ((base) + (0x098))
#define SOC_PERI_SCTRL_SC_PERIPH_STAT3_ADDR(base) ((base) + (0x09C))
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_ADDR(base) ((base) + (0x0A0))
#define SOC_PERI_SCTRL_SC_PERIPH_STAT6_ADDR(base) ((base) + (0x0A4))
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_ADDR(base) ((base) + (0x0B0))
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_ADDR(base) ((base) + (0x0B4))
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_ADDR(base) ((base) + (0x100))
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_ADDR(base) ((base) + (0x104))
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_ADDR(base) ((base) + (0x108))
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_ADDR(base) ((base) + (0x110))
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_ADDR(base) ((base) + (0x114))
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_ADDR(base) ((base) + (0x118))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_ADDR(base) ((base) + (0x200))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_ADDR(base) ((base) + (0x204))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_ADDR(base) ((base) + (0x208))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_ADDR(base) ((base) + (0x210))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_ADDR(base) ((base) + (0x214))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_ADDR(base) ((base) + (0x218))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_ADDR(base) ((base) + (0x220))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_ADDR(base) ((base) + (0x224))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_ADDR(base) ((base) + (0x228))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_ADDR(base) ((base) + (0x230))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_ADDR(base) ((base) + (0x234))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_ADDR(base) ((base) + (0x238))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_ADDR(base) ((base) + (0x240))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_ADDR(base) ((base) + (0x244))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_ADDR(base) ((base) + (0x248))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_ADDR(base) ((base) + (0x250))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_ADDR(base) ((base) + (0x254))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_ADDR(base) ((base) + (0x258))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_ADDR(base) ((base) + (0x260))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_ADDR(base) ((base) + (0x264))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_ADDR(base) ((base) + (0x268))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_ADDR(base) ((base) + (0x270))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_ADDR(base) ((base) + (0x274))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_ADDR(base) ((base) + (0x278))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN14_ADDR(base) ((base) + (0x280))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS14_ADDR(base) ((base) + (0x284))
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT14_ADDR(base) ((base) + (0x288))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_ADDR(base) ((base) + (0x300))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_ADDR(base) ((base) + (0x304))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_ADDR(base) ((base) + (0x308))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_ADDR(base) ((base) + (0x310))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_ADDR(base) ((base) + (0x314))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_ADDR(base) ((base) + (0x318))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_ADDR(base) ((base) + (0x320))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_ADDR(base) ((base) + (0x324))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_ADDR(base) ((base) + (0x328))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_ADDR(base) ((base) + (0x330))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_ADDR(base) ((base) + (0x334))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_ADDR(base) ((base) + (0x338))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_ADDR(base) ((base) + (0x340))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_ADDR(base) ((base) + (0x344))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_ADDR(base) ((base) + (0x348))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_ADDR(base) ((base) + (0x350))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_ADDR(base) ((base) + (0x354))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_ADDR(base) ((base) + (0x358))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN10_ADDR(base) ((base) + (0x360))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS10_ADDR(base) ((base) + (0x364))
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT10_ADDR(base) ((base) + (0x368))
#define SOC_PERI_SCTRL_SC_CLK_SEL0_ADDR(base) ((base) + (0x400))
#define SOC_PERI_SCTRL_SC_CLK_SEL1_ADDR(base) ((base) + (0x404))
#define SOC_PERI_SCTRL_SC_CLKCFGALL0_ADDR(base) ((base) + (0x450))
#define SOC_PERI_SCTRL_SC_CLKCFGALL1_ADDR(base) ((base) + (0x454))
#define SOC_PERI_SCTRL_SC_CLKCFGALL2_ADDR(base) ((base) + (0x458))
#define SOC_PERI_SCTRL_SC_CLKCFGALL3_ADDR(base) ((base) + (0x45C))
#define SOC_PERI_SCTRL_SC_CLKCFGALL4_ADDR(base) ((base) + (0x460))
#define SOC_PERI_SCTRL_SC_CLKCFGALL5_ADDR(base) ((base) + (0x464))
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_ADDR(base) ((base) + (0x490))
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT1_ADDR(base) ((base) + (0x494))
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT2_ADDR(base) ((base) + (0x498))
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT3_ADDR(base) ((base) + (0x49C))
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_ADDR(base) ((base) + (0x4A0))
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_ADDR(base) ((base) + (0x4A4))
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_ADDR(base) ((base) + (0x4A8))
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_ADDR(base) ((base) + (0x4AC))
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_ADDR(base) ((base) + (0x4B0))
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_ADDR(base) ((base) + (0x4B4))
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_ADDR(base) ((base) + (0x4B8))
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_ADDR(base) ((base) + (0x500))
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_ADDR(base) ((base) + (0x504))
#define SOC_PERI_SCTRL_SC_CARM_STAT0_ADDR(base) ((base) + (0x508))
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_ADDR(base) ((base) + (0x600))
#define SOC_PERI_SCTRL_SC_HIFI_CTRL1_ADDR(base) ((base) + (0x604))
#define SOC_PERI_SCTRL_SC_HIFI_CTRL0_ADDR(base) ((base) + (0x608))
#define SOC_PERI_SCTRL_SC_HIFI_CTRL2_ADDR(base) ((base) + (0x60C))
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_ADDR(base) ((base) + (0x0610))
#define SOC_PERI_SCTRL_SC_HIFI_CTRL4_ADDR(base) ((base) + (0x0614))
#define SOC_PERI_SCTRL_SC_TEMP0_LAG_ADDR(base) ((base) + (0x700))
#define SOC_PERI_SCTRL_SC_TEMP0_TH_ADDR(base) ((base) + (0x704))
#define SOC_PERI_SCTRL_SC_TEMP0_RST_TH_ADDR(base) ((base) + (0x708))
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_ADDR(base) ((base) + (0x70C))
#define SOC_PERI_SCTRL_SC_TEMP0_EN_ADDR(base) ((base) + (0x710))
#define SOC_PERI_SCTRL_SC_TEMP0_INT_EN_ADDR(base) ((base) + (0x714))
#define SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_ADDR(base) ((base) + (0x718))
#define SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_ADDR(base) ((base) + (0x71C))
#define SOC_PERI_SCTRL_SC_TEMP0_RAW_INT_ADDR(base) ((base) + (0x720))
#define SOC_PERI_SCTRL_SC_TEMP0_MSK_INT_ADDR(base) ((base) + (0x724))
#define SOC_PERI_SCTRL_SC_TEMP0_VALUE_ADDR(base) ((base) + (0x728))
#define SOC_PERI_SCTRL_SC_RESERVED7_ADDR(base) ((base) + (0xD00))
#define SOC_PERI_SCTRL_SC_RESERVED8_ADDR(base) ((base) + (0xD04))
#define SOC_PERI_SCTRL_SC_RESERVED11_ADDR(base) ((base) + (0xD08))
#define SOC_PERI_SCTRL_SC_RESERVED12_ADDR(base) ((base) + (0xD0C))
#define SOC_PERI_SCTRL_SC_RESERVED13_ADDR(base) ((base) + (0xD10))
#define SOC_PERI_SCTRL_SC_RESERVED14_ADDR(base) ((base) + (0xD14))
#define SOC_PERI_SCTRL_SC_RESERVED15_ADDR(base) ((base) + (0xD18))
#define SOC_PERI_SCTRL_SC_RESERVED16_ADDR(base) ((base) + (0xD1C))
#define SOC_PERI_SCTRL_SC_RESERVED17_ADDR(base) ((base) + (0xD20))
#define SOC_PERI_SCTRL_SC_RESERVED18_ADDR(base) ((base) + (0xD24))
#define SOC_PERI_SCTRL_SC_RESERVED21_ADDR(base) ((base) + (0xD28))
#define SOC_PERI_SCTRL_SC_RESERVED22_ADDR(base) ((base) + (0xD2C))
#define SOC_PERI_SCTRL_SC_RESERVED23_ADDR(base) ((base) + (0xD30))
#define SOC_PERI_SCTRL_SC_RESERVED24_ADDR(base) ((base) + (0xD34))
#define SOC_PERI_SCTRL_SC_RESERVED25_ADDR(base) ((base) + (0xD38))
#define SOC_PERI_SCTRL_SC_RESERVED26_ADDR(base) ((base) + (0xD3C))
#define SOC_PERI_SCTRL_SC_RESERVED27_ADDR(base) ((base) + (0xD40))
#define SOC_PERI_SCTRL_SC_RESERVED28_ADDR(base) ((base) + (0xD44))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int etr_axi_csysreq_n : 1;
        unsigned int hifi_int_mask : 1;
        unsigned int hifi_all_int_mask : 1;
        unsigned int reserved_0 : 13;
        unsigned int etr_axi_csysreq_n_msk : 1;
        unsigned int hifi_int_mask_msk : 1;
        unsigned int hifi_all_int_mask_msk : 1;
        unsigned int reserved_1 : 13;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_etr_axi_csysreq_n_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_etr_axi_csysreq_n_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_int_mask_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_int_mask_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_all_int_mask_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_all_int_mask_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_etr_axi_csysreq_n_msk_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_etr_axi_csysreq_n_msk_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_int_mask_msk_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_int_mask_msk_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_all_int_mask_msk_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_all_int_mask_msk_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mmc_clk_phase_bypass_en_mmc0 : 2;
        unsigned int mmc_clk_phase_bypass_en_mmc1 : 2;
        unsigned int reserved_0 : 2;
        unsigned int nand_sys_mem_sel : 1;
        unsigned int g3d_ddrt_axi_sel : 1;
        unsigned int gu_mdm_bbp_testpin_sel : 1;
        unsigned int codec_ssi_master_check : 3;
        unsigned int func_test_soft : 3;
        unsigned int cssys_ts_enable : 1;
        unsigned int hifi_ramctrl_s_ema : 3;
        unsigned int reserved_1 : 1;
        unsigned int hifi_ramctrl_s_emaw : 2;
        unsigned int hifi_ramctrl_s_emas : 1;
        unsigned int reserved_2 : 3;
        unsigned int hifi_ramctrl_s_ret1n : 1;
        unsigned int hifi_ramctrl_s_ret2n : 1;
        unsigned int hifi_ramctrl_s_pgen : 1;
        unsigned int reserved_3 : 3;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_mmc_clk_phase_bypass_en_mmc0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_mmc_clk_phase_bypass_en_mmc0_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_mmc_clk_phase_bypass_en_mmc1_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_mmc_clk_phase_bypass_en_mmc1_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_nand_sys_mem_sel_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_nand_sys_mem_sel_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_g3d_ddrt_axi_sel_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_g3d_ddrt_axi_sel_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_gu_mdm_bbp_testpin_sel_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_gu_mdm_bbp_testpin_sel_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_codec_ssi_master_check_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_codec_ssi_master_check_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_func_test_soft_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_func_test_soft_END (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_cssys_ts_enable_START (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_cssys_ts_enable_END (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ema_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ema_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_emaw_START (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_emaw_END (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_emas_START (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_emas_END (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ret1n_START (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ret1n_END (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ret2n_START (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ret2n_END (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_pgen_START (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_pgen_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hifi_ddr_harqmem_addr : 12;
        unsigned int hifi_harqmemrmp_en : 1;
        unsigned int harqmem_sys_med_sel : 1;
        unsigned int soc_ap_occupy_grp1 : 2;
        unsigned int soc_ap_occupy_grp2 : 2;
        unsigned int soc_ap_occupy_grp3 : 2;
        unsigned int soc_ap_occupy_grp4 : 2;
        unsigned int soc_ap_occupy_grp5 : 2;
        unsigned int soc_ap_occupy_grp6 : 2;
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_hifi_ddr_harqmem_addr_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_hifi_ddr_harqmem_addr_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_hifi_harqmemrmp_en_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_hifi_harqmemrmp_en_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_harqmem_sys_med_sel_START (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_harqmem_sys_med_sel_END (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp1_START (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp1_END (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp2_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp2_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp3_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp3_END (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp4_START (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp4_END (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp5_START (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp5_END (23)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp6_START (24)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp6_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pico_fselv : 3;
        unsigned int fpga_ext_phy_sel : 1;
        unsigned int pico_refclksel : 2;
        unsigned int pico_siddq : 1;
        unsigned int pico_suspendm_sleepm : 1;
        unsigned int pico_ogdisable : 1;
        unsigned int pico_commononn : 1;
        unsigned int pico_vbusvldext : 1;
        unsigned int pico_vbusvldextsel : 1;
        unsigned int pico_vatestenb : 2;
        unsigned int pico_suspendm : 1;
        unsigned int pico_sleepm : 1;
        unsigned int bc11_c : 1;
        unsigned int bc11_b : 1;
        unsigned int bc11_a : 1;
        unsigned int bc11_gnd : 1;
        unsigned int bc11_float : 1;
        unsigned int otg_phy_sel : 1;
        unsigned int usb_otg_ss_scaledown_mode : 2;
        unsigned int otg_dm_pulldown : 1;
        unsigned int otg_dp_pulldown : 1;
        unsigned int otg_idpullup : 1;
        unsigned int otg_drvbus : 1;
        unsigned int otg_sessend : 1;
        unsigned int otg_bvalid : 1;
        unsigned int otg_avalid : 1;
        unsigned int otg_vbusvalid : 1;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL4_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_fselv_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_fselv_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_fpga_ext_phy_sel_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_fpga_ext_phy_sel_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_refclksel_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_refclksel_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_siddq_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_siddq_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_suspendm_sleepm_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_suspendm_sleepm_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_ogdisable_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_ogdisable_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_commononn_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_commononn_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vbusvldext_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vbusvldext_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vbusvldextsel_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vbusvldextsel_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vatestenb_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vatestenb_END (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_suspendm_START (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_suspendm_END (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_sleepm_START (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_sleepm_END (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_c_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_c_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_b_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_b_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_a_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_a_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_gnd_START (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_gnd_END (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_float_START (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_float_END (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_phy_sel_START (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_phy_sel_END (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_usb_otg_ss_scaledown_mode_START (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_usb_otg_ss_scaledown_mode_END (23)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_dm_pulldown_START (24)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_dm_pulldown_END (24)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_dp_pulldown_START (25)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_dp_pulldown_END (25)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_idpullup_START (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_idpullup_END (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_drvbus_START (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_drvbus_END (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_sessend_START (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_sessend_END (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_bvalid_START (29)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_bvalid_END (29)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_avalid_START (30)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_avalid_END (30)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_vbusvalid_START (31)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_vbusvalid_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 3;
        unsigned int usbotg_res_sel : 1;
        unsigned int picophy_acaenb : 1;
        unsigned int picophy_bc_mode : 1;
        unsigned int picophy_chrgsel : 1;
        unsigned int picophy_vdatsrcend : 1;
        unsigned int picophy_vdatdetenb : 1;
        unsigned int picophy_dcdenb : 1;
        unsigned int picophy_iddig : 1;
        unsigned int dbg_mux : 2;
        unsigned int reserved_1 : 19;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL5_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_usbotg_res_sel_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_usbotg_res_sel_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_acaenb_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_acaenb_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_bc_mode_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_bc_mode_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_chrgsel_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_chrgsel_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_vdatsrcend_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_vdatsrcend_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_vdatdetenb_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_vdatdetenb_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_dcdenb_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_dcdenb_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_iddig_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_iddig_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_dbg_mux_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_dbg_mux_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cssysoff_ramctrl_s_ema : 3;
        unsigned int reserved_0 : 1;
        unsigned int cssysoff_ramctrl_s_emaw : 2;
        unsigned int cssysoff_ramctrl_s_emas : 1;
        unsigned int reserved_1 : 3;
        unsigned int cssysoff_ramctrl_s_ret1n : 1;
        unsigned int cssysoff_ramctrl_s_ret2n : 1;
        unsigned int cssysoff_ramctrl_s_pgen : 1;
        unsigned int reserved_2 : 3;
        unsigned int reserved_3 : 16;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL6_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ema_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ema_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_emaw_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_emaw_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_emas_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_emas_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ret1n_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ret1n_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ret2n_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ret2n_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_pgen_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_pgen_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_ctrl8_picophy_txrisetune0 : 2;
        unsigned int periph_ctrl8_picophy_txpreempamptune0 : 2;
        unsigned int periph_ctrl8_picophy_txrestune0 : 2;
        unsigned int periph_ctrl8_picophy_txhssvtune0 : 2;
        unsigned int periph_ctrl8_picophy_compdistune0 : 3;
        unsigned int periph_ctrl8_picophy_txpreemppulsetune0 : 1;
        unsigned int periph_ctrl8_picophy_otgtune0 : 3;
        unsigned int reserved_0 : 1;
        unsigned int periph_ctrl8_picophy_sqrxtune0 : 3;
        unsigned int reserved_1 : 1;
        unsigned int periph_ctrl8_picophy_txvreftune0 : 4;
        unsigned int reserved_2 : 4;
        unsigned int periph_ctrl8_picophy_txfslstune0 : 4;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txrisetune0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txrisetune0_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txpreempamptune0_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txpreempamptune0_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txrestune0_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txrestune0_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txhssvtune0_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txhssvtune0_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_compdistune0_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_compdistune0_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txpreemppulsetune0_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txpreemppulsetune0_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_otgtune0_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_otgtune0_END (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_sqrxtune0_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_sqrxtune0_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txvreftune0_START (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txvreftune0_END (23)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txfslstune0_START (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txfslstune0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_ctrl9_picoply_testclken : 1;
        unsigned int periph_ctrl9_picoply_testdataoutsel : 1;
        unsigned int reserved_0 : 2;
        unsigned int periph_ctrl9_picoply_testaddr : 4;
        unsigned int periph_ctrl9_picoply_testdatain : 8;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testclken_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testclken_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testdataoutsel_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testdataoutsel_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testaddr_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testaddr_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testdatain_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testdatain_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL10_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int perisys_ramctrl_d1w2r_emaa : 3;
        unsigned int perisys_ramctrl_d1w2r_emab : 3;
        unsigned int perisys_ramctrl_d1w2r_emasa : 1;
        unsigned int perisys_ramctrl_d1w2r_colldisn : 1;
        unsigned int reserved_0 : 2;
        unsigned int perisys_ramctrl_d1w2r_ret1n : 1;
        unsigned int perisys_ramctrl_d1w2r_ret2n : 1;
        unsigned int perisys_ramctrl_d1w2r_pgen : 1;
        unsigned int reserved_1 : 3;
        unsigned int perisys_ramctrl_d1rw2rw_ema : 3;
        unsigned int reserved_2 : 1;
        unsigned int perisys_ramctrl_d1rw2rw_emaw : 2;
        unsigned int perisys_ramctrl_d1rw2rw_emas : 1;
        unsigned int perisys_ramctrl_d1rw2rw_colldisn : 1;
        unsigned int reserved_3 : 2;
        unsigned int perisys_ramctrl_d1rw2rw_ret1n : 1;
        unsigned int perisys_ramctrl_d1rw2rw_ret2n : 1;
        unsigned int perisys_ramctrl_d1rw2rw_pgen : 1;
        unsigned int perisys_ramctrl_d1rw2rw : 3;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL12_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emaa_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emaa_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emab_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emab_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emasa_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emasa_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_colldisn_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_colldisn_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_ret1n_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_ret1n_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_ret2n_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_ret2n_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_pgen_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_pgen_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ema_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ema_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_emaw_START (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_emaw_END (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_emas_START (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_emas_END (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_colldisn_START (23)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_colldisn_END (23)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ret1n_START (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ret1n_END (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ret2n_START (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ret2n_END (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_pgen_START (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_pgen_END (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_START (29)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_ctrl13_acpu_clk_sel_bypass_en : 1;
        unsigned int periph_ctrl13_ccpu_clk_sel_bypass_en : 1;
        unsigned int periph_ctrl13_hifi_clk_sel_bypass_en : 1;
        unsigned int periph_ctrl13_mmc0_ckg_bypass_en : 1;
        unsigned int periph_ctrl13_mmc1_ckg_bypass_en : 1;
        unsigned int periph_ctrl13_mmc2_ckg_bypass_en : 1;
        unsigned int periph_ctrl13_ssi_pad_ckg_bypass_en : 1;
        unsigned int periph_ctrl13_hprot2_usb : 1;
        unsigned int periph_ctrl13_hprot2_mmc0 : 1;
        unsigned int periph_ctrl13_hprot2_mmc1 : 1;
        unsigned int periph_ctrl13_hprot2_mmc2 : 1;
        unsigned int reserved : 21;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL13_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_acpu_clk_sel_bypass_en_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_acpu_clk_sel_bypass_en_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_ccpu_clk_sel_bypass_en_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_ccpu_clk_sel_bypass_en_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hifi_clk_sel_bypass_en_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hifi_clk_sel_bypass_en_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc0_ckg_bypass_en_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc0_ckg_bypass_en_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc1_ckg_bypass_en_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc1_ckg_bypass_en_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc2_ckg_bypass_en_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc2_ckg_bypass_en_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_ssi_pad_ckg_bypass_en_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_ssi_pad_ckg_bypass_en_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_usb_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_usb_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc0_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc0_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc1_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc1_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc2_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc2_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_ctrl14_fm_en : 1;
        unsigned int reserved_0 : 7;
        unsigned int periph_ctrl14_fm_clk_sel : 8;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL14_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL14_periph_ctrl14_fm_en_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL14_periph_ctrl14_fm_en_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL14_periph_ctrl14_fm_clk_sel_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL14_periph_ctrl14_fm_clk_sel_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int perisys_ramctrl_s_ema : 3;
        unsigned int reserved_0 : 1;
        unsigned int perisys_ramctrl_s_emaw : 2;
        unsigned int perisys_ramctrl_s_emas : 1;
        unsigned int reserved_1 : 3;
        unsigned int perisys_ramctrl_s_ret1n : 1;
        unsigned int perisys_ramctrl_s_ret2n : 1;
        unsigned int perisys_ramctrl_s_pgen : 1;
        unsigned int reserved_2 : 3;
        unsigned int rom_ctrl_ema : 3;
        unsigned int reserved_3 : 1;
        unsigned int rom_ctrl_pgen : 1;
        unsigned int rom_ctrl_ken : 1;
        unsigned int reserved_4 : 2;
        unsigned int reserved_5 : 8;
    } reg;
} SOC_PERI_SCTRL_SC_MEM_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ema_START (0)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ema_END (2)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_emaw_START (4)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_emaw_END (5)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_emas_START (6)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_emas_END (6)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ret1n_START (10)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ret1n_END (10)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ret2n_START (11)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ret2n_END (11)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_pgen_START (12)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_pgen_END (12)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_ema_START (16)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_ema_END (18)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_pgen_START (20)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_pgen_END (20)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_ken_START (21)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_ken_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int apdmac_auto_clken0_sel : 1;
        unsigned int apdmac_auto_clken1_sel : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 12;
        unsigned int apdmac_auto_clken0_sel_msk : 1;
        unsigned int apdmac_auto_clken1_sel_msk : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 12;
    } reg;
} SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken0_sel_START (0)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken0_sel_END (0)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken1_sel_START (1)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken1_sel_END (1)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken0_sel_msk_START (16)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken0_sel_msk_END (16)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken1_sel_msk_START (17)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken1_sel_msk_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int noc_freq_switch_100m_vote : 16;
        unsigned int noc_freq_switch_100m_vote_msk : 16;
    } reg;
} SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_noc_freq_switch_100m_vote_START (0)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_noc_freq_switch_100m_vote_END (15)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_noc_freq_switch_100m_vote_msk_START (16)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_noc_freq_switch_100m_vote_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int noc_freq_switch_150m_vote : 16;
        unsigned int noc_freq_switch_150m_vote_msk : 16;
    } reg;
} SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_noc_freq_switch_150m_vote_START (0)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_noc_freq_switch_150m_vote_END (15)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_noc_freq_switch_150m_vote_msk_START (16)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_noc_freq_switch_150m_vote_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int byp_mode : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int byp_mode_clk_sel : 1;
        unsigned int ddr_axi2_sysnoc_mid_sel : 1;
        unsigned int ddr_axi1_smmu_mid_sel : 1;
        unsigned int reserved_2 : 8;
        unsigned int reserved_3 : 2;
        unsigned int reserved_4 : 2;
        unsigned int reserved_5 : 2;
        unsigned int reserved_6 : 2;
        unsigned int reserved_7 : 2;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 7;
    } reg;
} SOC_PERI_SCTRL_SC_DDR_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_byp_mode_START (0)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_byp_mode_END (0)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_byp_mode_clk_sel_START (3)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_byp_mode_clk_sel_END (3)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_ddr_axi2_sysnoc_mid_sel_START (4)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_ddr_axi2_sysnoc_mid_sel_END (4)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_ddr_axi1_smmu_mid_sel_START (5)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_ddr_axi1_smmu_mid_sel_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_qos_ar_acpu : 4;
        unsigned int ddr_qos_aw_acpu : 4;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 4;
        unsigned int ddr_qos_ar_ccpu : 4;
        unsigned int ddr_qos_aw_ccpu : 4;
        unsigned int reserved_2 : 4;
        unsigned int reserved_3 : 4;
    } reg;
} SOC_PERI_SCTRL_SC_DDR_CTRL1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_ar_acpu_START (0)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_ar_acpu_END (3)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_aw_acpu_START (4)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_aw_acpu_END (7)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_ar_ccpu_START (16)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_ar_ccpu_END (19)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_aw_ccpu_START (20)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_aw_ccpu_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 4;
        unsigned int reserved_1: 4;
        unsigned int reserved_2: 4;
        unsigned int reserved_3: 4;
        unsigned int reserved_4: 4;
        unsigned int reserved_5: 4;
        unsigned int reserved_6: 8;
    } reg;
} SOC_PERI_SCTRL_SC_DDR_CTRL2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 4;
        unsigned int reserved_1: 4;
        unsigned int reserved_2: 4;
        unsigned int reserved_3: 4;
        unsigned int reserved_4: 4;
        unsigned int reserved_5: 4;
        unsigned int reserved_6: 4;
        unsigned int reserved_7: 4;
    } reg;
} SOC_PERI_SCTRL_SC_DDR_CTRL3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 4;
        unsigned int reserved_1: 4;
        unsigned int reserved_2: 4;
        unsigned int reserved_3: 20;
    } reg;
} SOC_PERI_SCTRL_SC_DDR_CTRL4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sysnoc_timeout_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PERI_SCTRL_SC_NOC_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_NOC_CTRL0_sysnoc_timeout_en_START (0)
#define SOC_PERI_SCTRL_SC_NOC_CTRL0_sysnoc_timeout_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clkbus_low_nopending_en : 1;
        unsigned int reserved_0 : 3;
        unsigned int clkbus_low_debounce_num_high : 10;
        unsigned int reserved_1 : 2;
        unsigned int clkbus_low_debounce_num_low : 10;
        unsigned int reserved_2 : 6;
    } reg;
} SOC_PERI_SCTRL_SC_NOC_CTRL1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_nopending_en_START (0)
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_nopending_en_END (0)
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_debounce_num_high_START (4)
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_debounce_num_high_END (13)
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_debounce_num_low_START (16)
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_debounce_num_low_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clkbus_high_nopending_en : 1;
        unsigned int reserved_0 : 3;
        unsigned int clkbus_high_debounce_num_high : 10;
        unsigned int reserved_1 : 2;
        unsigned int clkbus_high_debounce_num_low : 10;
        unsigned int reserved_2 : 6;
    } reg;
} SOC_PERI_SCTRL_SC_NOC_CTRL2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_nopending_en_START (0)
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_nopending_en_END (0)
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_debounce_num_high_START (4)
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_debounce_num_high_END (13)
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_debounce_num_low_START (16)
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_debounce_num_low_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_state0_ipf_idle : 1;
        unsigned int periph_state0_socp_idle : 1;
        unsigned int etr_axi_csysack_n : 1;
        unsigned int hifi_xocdmode : 1;
        unsigned int hifi_pwaitmode : 1;
        unsigned int noc_nopending_raw : 1;
        unsigned int clkbus_low_debounce_aft : 1;
        unsigned int clkbus_high_debounce_aft : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_periph_state0_ipf_idle_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_periph_state0_ipf_idle_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_periph_state0_socp_idle_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_periph_state0_socp_idle_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_etr_axi_csysack_n_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_etr_axi_csysack_n_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_hifi_xocdmode_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_hifi_xocdmode_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_hifi_pwaitmode_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_hifi_pwaitmode_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_noc_nopending_raw_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_noc_nopending_raw_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_clkbus_low_debounce_aft_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_clkbus_low_debounce_aft_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_clkbus_high_debounce_aft_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_clkbus_high_debounce_aft_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fm_state : 32;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_STAT1_fm_state_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT1_fm_state_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int testdataout_picophy : 4;
        unsigned int otg_wkp_sts : 1;
        unsigned int chargedet_picophy : 1;
        unsigned int datcondet_sts : 1;
        unsigned int chgdet_sts : 1;
        unsigned int chgdet_async : 1;
        unsigned int fsvplus0_picophy : 1;
        unsigned int fsvminus0_picophy : 1;
        unsigned int reserved : 21;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_testdataout_picophy_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_testdataout_picophy_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_otg_wkp_sts_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_otg_wkp_sts_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chargedet_picophy_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chargedet_picophy_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_datcondet_sts_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_datcondet_sts_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chgdet_sts_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chgdet_sts_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chgdet_async_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chgdet_async_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_fsvplus0_picophy_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_fsvplus0_picophy_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_fsvminus0_picophy_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_fsvminus0_picophy_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hifi_all_raw_int : 1;
        unsigned int hifi_all_msk_int : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_STAT3_hifi_all_raw_int_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT3_hifi_all_raw_int_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT3_hifi_all_msk_int_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT3_hifi_all_msk_int_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int usb_nopendingtrans : 1;
        unsigned int socp_nopendingtrans : 1;
        unsigned int service_nopendingtrans : 1;
        unsigned int service_dma_nopendingtrans : 1;
        unsigned int service_ao_nopendingtrans : 1;
        unsigned int seceng_nopendingtrans : 1;
        unsigned int modem_nopendingtrans : 1;
        unsigned int mmc2_nopendingtrans : 1;
        unsigned int mmc1_nopendingtrans : 1;
        unsigned int mmc0_nopendingtrans : 1;
        unsigned int mcu_nopendingtrans : 1;
        unsigned int ipf_nopendingtrans : 1;
        unsigned int hifi_nopendingtrans : 1;
        unsigned int dmac_nopendingtrans : 1;
        unsigned int dap_nopendingtrans : 1;
        unsigned int dap_apb_nopendingtrans : 1;
        unsigned int cssys_nopendingtrans : 1;
        unsigned int acpu_nopendingtrans : 1;
        unsigned int reserved : 14;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT4_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_usb_nopendingtrans_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_usb_nopendingtrans_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_socp_nopendingtrans_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_socp_nopendingtrans_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_nopendingtrans_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_nopendingtrans_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_dma_nopendingtrans_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_dma_nopendingtrans_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_ao_nopendingtrans_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_ao_nopendingtrans_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_seceng_nopendingtrans_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_seceng_nopendingtrans_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_modem_nopendingtrans_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_modem_nopendingtrans_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc2_nopendingtrans_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc2_nopendingtrans_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc1_nopendingtrans_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc1_nopendingtrans_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc0_nopendingtrans_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc0_nopendingtrans_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mcu_nopendingtrans_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mcu_nopendingtrans_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_ipf_nopendingtrans_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_ipf_nopendingtrans_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_hifi_nopendingtrans_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_hifi_nopendingtrans_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dmac_nopendingtrans_START (13)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dmac_nopendingtrans_END (13)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dap_nopendingtrans_START (14)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dap_nopendingtrans_END (14)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dap_apb_nopendingtrans_START (15)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dap_apb_nopendingtrans_END (15)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_cssys_nopendingtrans_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_cssys_nopendingtrans_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_acpu_nopendingtrans_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_acpu_nopendingtrans_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT6_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_hifi_int_statr0_ns_ipc2hifi_intr0 : 1;
        unsigned int sc_hifi_int_statr0_ns_ipc2hifi_intr1 : 1;
        unsigned int sc_hifi_int_statr0_s_ipc2hifi_intr0 : 1;
        unsigned int sc_hifi_int_statr0_s_ipc2hifi_intr1 : 1;
        unsigned int sc_hifi_int_statr0_timer10_intr : 1;
        unsigned int sc_hifi_int_statr0_timer11_intr : 1;
        unsigned int sc_hifi_int_statr0_timer12_intr : 1;
        unsigned int sc_hifi_int_statr0_timer13_intr : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int sc_hifi_int_statr0_digacodec_intr : 1;
        unsigned int sc_hifi_int_statr0_aedmac3_s_intr : 1;
        unsigned int sc_hifi_int_statr0_aedmac3_ns_intr : 1;
        unsigned int reserved_4 : 1;
        unsigned int sc_hifi_int_statr0_uart0_2_4_comb_intr : 1;
        unsigned int sc_hifi_int_statr0_wdog1_intr : 1;
        unsigned int reserved_5 : 1;
        unsigned int sc_hifi_int_statr0_seceng3_intr : 1;
        unsigned int sc_hifi_int_statr0_ctu_lte2dsp_intr : 1;
        unsigned int sc_hifi_int_statr0_ctu_tds2dsp_intr : 1;
        unsigned int sc_hifi_int_statr0_hifi_vote_intr : 1;
        unsigned int sc_hifi_int_statr0_gpio11_intr0 : 1;
        unsigned int sc_hifi_int_statr0_tds_stu_hifi_int : 1;
        unsigned int reserved_6 : 7;
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ns_ipc2hifi_intr0_START (0)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ns_ipc2hifi_intr0_END (0)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ns_ipc2hifi_intr1_START (1)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ns_ipc2hifi_intr1_END (1)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_s_ipc2hifi_intr0_START (2)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_s_ipc2hifi_intr0_END (2)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_s_ipc2hifi_intr1_START (3)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_s_ipc2hifi_intr1_END (3)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer10_intr_START (4)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer10_intr_END (4)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer11_intr_START (5)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer11_intr_END (5)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer12_intr_START (6)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer12_intr_END (6)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer13_intr_START (7)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer13_intr_END (7)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_digacodec_intr_START (12)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_digacodec_intr_END (12)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_aedmac3_s_intr_START (13)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_aedmac3_s_intr_END (13)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_aedmac3_ns_intr_START (14)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_aedmac3_ns_intr_END (14)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_uart0_2_4_comb_intr_START (16)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_uart0_2_4_comb_intr_END (16)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_wdog1_intr_START (17)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_wdog1_intr_END (17)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_seceng3_intr_START (19)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_seceng3_intr_END (19)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ctu_lte2dsp_intr_START (20)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ctu_lte2dsp_intr_END (20)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ctu_tds2dsp_intr_START (21)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ctu_tds2dsp_intr_END (21)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_hifi_vote_intr_START (22)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_hifi_vote_intr_END (22)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_gpio11_intr0_START (23)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_gpio11_intr0_END (23)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_tds_stu_hifi_int_START (24)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_tds_stu_hifi_int_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_hifi_int_statm0_ns_ipc2hifi_intr0 : 1;
        unsigned int sc_hifi_int_statm0_ns_ipc2hifi_intr1 : 1;
        unsigned int sc_hifi_int_statm0_s_ipc2hifi_intr0 : 1;
        unsigned int sc_hifi_int_statm0_s_ipc2hifi_intr1 : 1;
        unsigned int sc_hifi_int_statm0_timer10_intr : 1;
        unsigned int sc_hifi_int_statm0_timer11_intr : 1;
        unsigned int sc_hifi_int_statm0_timer12_intr : 1;
        unsigned int sc_hifi_int_statm0_timer13_intr : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int sc_hifi_int_statm0_digacodec_intr : 1;
        unsigned int sc_hifi_int_statm0_aedmac3_s_intr : 1;
        unsigned int sc_hifi_int_statm0_aedmac3_ns_intr : 1;
        unsigned int reserved_4 : 1;
        unsigned int sc_hifi_int_statm0_uart0_2_4_comb_intr : 1;
        unsigned int sc_hifi_int_statm0_wdog1_intr : 1;
        unsigned int reserved_5 : 1;
        unsigned int sc_hifi_int_statm0_seceng3_intr : 1;
        unsigned int sc_hifi_int_statm0_ctu_lte2dsp_intr : 1;
        unsigned int sc_hifi_int_statm0_ctu_tds2dsp_intr : 1;
        unsigned int sc_hifi_int_statm0_hifi_vote_intr : 1;
        unsigned int sc_hifi_int_statm0_gpio11_intr0 : 1;
        unsigned int sc_hifi_int_statm0_tds_stu_hifi_int : 1;
        unsigned int reserved_6 : 7;
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ns_ipc2hifi_intr0_START (0)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ns_ipc2hifi_intr0_END (0)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ns_ipc2hifi_intr1_START (1)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ns_ipc2hifi_intr1_END (1)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_s_ipc2hifi_intr0_START (2)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_s_ipc2hifi_intr0_END (2)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_s_ipc2hifi_intr1_START (3)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_s_ipc2hifi_intr1_END (3)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer10_intr_START (4)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer10_intr_END (4)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer11_intr_START (5)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer11_intr_END (5)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer12_intr_START (6)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer12_intr_END (6)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer13_intr_START (7)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer13_intr_END (7)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_digacodec_intr_START (12)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_digacodec_intr_END (12)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_aedmac3_s_intr_START (13)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_aedmac3_s_intr_END (13)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_aedmac3_ns_intr_START (14)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_aedmac3_ns_intr_END (14)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_uart0_2_4_comb_intr_START (16)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_uart0_2_4_comb_intr_END (16)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_wdog1_intr_START (17)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_wdog1_intr_END (17)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_seceng3_intr_START (19)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_seceng3_intr_END (19)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ctu_lte2dsp_intr_START (20)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ctu_lte2dsp_intr_END (20)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ctu_tds2dsp_intr_START (21)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ctu_tds2dsp_intr_END (21)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_hifi_vote_intr_START (22)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_hifi_vote_intr_END (22)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_gpio11_intr0_START (23)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_gpio11_intr0_END (23)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_tds_stu_hifi_int_START (24)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_tds_stu_hifi_int_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_peri_2nd_int_en0_gpio4_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio5_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio6_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio7_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio8_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio9_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio10_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio11_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio12_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio13_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_ipf_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_ipf_intr1 : 1;
        unsigned int sc_peri_2nd_int_en0_socp_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_socp_intr1 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio14_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio15_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio16_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio17_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio18_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_gpio19_intr0 : 1;
        unsigned int sc_peri_2nd_int_en0_sys_noc_err_intr : 1;
        unsigned int sc_peri_2nd_int_en0_media_noc_err_intr : 1;
        unsigned int sc_peri_2nd_int_en0_ddrc_sec_intr : 1;
        unsigned int sc_peri_2nd_int_en0_acpu_soft_fiq_intr : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio4_intr0_START (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio4_intr0_END (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio5_intr0_START (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio5_intr0_END (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio6_intr0_START (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio6_intr0_END (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio7_intr0_START (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio7_intr0_END (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio8_intr0_START (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio8_intr0_END (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio9_intr0_START (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio9_intr0_END (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio10_intr0_START (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio10_intr0_END (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio11_intr0_START (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio11_intr0_END (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio12_intr0_START (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio12_intr0_END (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio13_intr0_START (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio13_intr0_END (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ipf_intr0_START (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ipf_intr0_END (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ipf_intr1_START (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ipf_intr1_END (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_socp_intr0_START (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_socp_intr0_END (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_socp_intr1_START (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_socp_intr1_END (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio14_intr0_START (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio14_intr0_END (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio15_intr0_START (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio15_intr0_END (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio16_intr0_START (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio16_intr0_END (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio17_intr0_START (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio17_intr0_END (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio18_intr0_START (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio18_intr0_END (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio19_intr0_START (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio19_intr0_END (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_sys_noc_err_intr_START (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_sys_noc_err_intr_END (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_media_noc_err_intr_START (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_media_noc_err_intr_END (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ddrc_sec_intr_START (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ddrc_sec_intr_END (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_acpu_soft_fiq_intr_START (23)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_acpu_soft_fiq_intr_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_peri_2nd_int_statr0_gpio4_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio5_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio6_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio7_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio8_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio9_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio10_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio11_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio12_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio13_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_ipf_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_ipf_intr1 : 1;
        unsigned int sc_peri_2nd_int_statr0_socp_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_socp_intr1 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio14_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio15_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio16_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio17_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio18_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_gpio19_intr0 : 1;
        unsigned int sc_peri_2nd_int_statr0_sys_noc_err_intr : 1;
        unsigned int sc_peri_2nd_int_statr0_media_noc_err_intr : 1;
        unsigned int sc_peri_2nd_int_statr0_ddrc_sec_intr : 1;
        unsigned int sc_peri_2nd_int_statr0_acpu_soft_fiq_intr : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio4_intr0_START (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio4_intr0_END (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio5_intr0_START (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio5_intr0_END (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio6_intr0_START (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio6_intr0_END (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio7_intr0_START (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio7_intr0_END (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio8_intr0_START (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio8_intr0_END (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio9_intr0_START (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio9_intr0_END (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio10_intr0_START (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio10_intr0_END (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio11_intr0_START (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio11_intr0_END (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio12_intr0_START (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio12_intr0_END (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio13_intr0_START (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio13_intr0_END (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ipf_intr0_START (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ipf_intr0_END (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ipf_intr1_START (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ipf_intr1_END (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_socp_intr0_START (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_socp_intr0_END (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_socp_intr1_START (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_socp_intr1_END (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio14_intr0_START (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio14_intr0_END (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio15_intr0_START (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio15_intr0_END (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio16_intr0_START (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio16_intr0_END (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio17_intr0_START (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio17_intr0_END (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio18_intr0_START (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio18_intr0_END (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio19_intr0_START (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio19_intr0_END (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_sys_noc_err_intr_START (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_sys_noc_err_intr_END (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_media_noc_err_intr_START (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_media_noc_err_intr_END (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ddrc_sec_intr_START (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ddrc_sec_intr_END (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_acpu_soft_fiq_intr_START (23)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_acpu_soft_fiq_intr_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_peri_2nd_int_statm0_gpio4_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio5_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio6_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio7_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio8_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio9_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio10_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio11_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio12_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio13_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_ipf_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_ipf_intr1 : 1;
        unsigned int sc_peri_2nd_int_statm0_socp_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_socp_intr1 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio14_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio15_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio16_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio17_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio18_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_gpio19_intr0 : 1;
        unsigned int sc_peri_2nd_int_statm0_sys_noc_err_intr : 1;
        unsigned int sc_peri_2nd_int_statm0_media_noc_err_intr : 1;
        unsigned int sc_peri_2nd_int_statm0_ddrc_sec_intr : 1;
        unsigned int sc_peri_2nd_int_statm0_acpu_soft_fiq_intr : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio4_intr0_START (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio4_intr0_END (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio5_intr0_START (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio5_intr0_END (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio6_intr0_START (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio6_intr0_END (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio7_intr0_START (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio7_intr0_END (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio8_intr0_START (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio8_intr0_END (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio9_intr0_START (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio9_intr0_END (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio10_intr0_START (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio10_intr0_END (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio11_intr0_START (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio11_intr0_END (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio12_intr0_START (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio12_intr0_END (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio13_intr0_START (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio13_intr0_END (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ipf_intr0_START (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ipf_intr0_END (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ipf_intr1_START (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ipf_intr1_END (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_socp_intr0_START (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_socp_intr0_END (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_socp_intr1_START (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_socp_intr1_END (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio14_intr0_START (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio14_intr0_END (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio15_intr0_START (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio15_intr0_END (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio16_intr0_START (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio16_intr0_END (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio17_intr0_START (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio17_intr0_END (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio18_intr0_START (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio18_intr0_END (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio19_intr0_START (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio19_intr0_END (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_sys_noc_err_intr_START (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_sys_noc_err_intr_END (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_media_noc_err_intr_START (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_media_noc_err_intr_END (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ddrc_sec_intr_START (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ddrc_sec_intr_END (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_acpu_soft_fiq_intr_START (23)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_acpu_soft_fiq_intr_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_peri_2nd_int_en1_ddr_dfs_intr : 1;
        unsigned int sc_peri_2nd_int_en1_g3d_lp_intr : 1;
        unsigned int sc_peri_2nd_int_en1_acpu_lp_intr : 1;
        unsigned int sc_peri_2nd_int_en1_ccpu_pmuirq_intr : 1;
        unsigned int sc_peri_2nd_int_en1_acpu_pmuirq3_intr : 1;
        unsigned int sc_peri_2nd_int_en1_acpu_pmuirq2_intr : 1;
        unsigned int sc_peri_2nd_int_en1_acpu_pmuirq1_intr : 1;
        unsigned int sc_peri_2nd_int_en1_acpu_pmuirq0_intr : 1;
        unsigned int sc_peri_2nd_int_en1_sdiommc_intr : 1;
        unsigned int sc_peri_2nd_int_en1_sdmmc_intr : 1;
        unsigned int sc_peri_2nd_int_en1_emmc_intr : 1;
        unsigned int sc_peri_2nd_int_en1_usb2otg_intr : 1;
        unsigned int sc_peri_2nd_int_en1_g3d_intr : 1;
        unsigned int sc_peri_2nd_int_en1_mipi_dsi_intr : 1;
        unsigned int sc_peri_2nd_int_en1_ade_ldi_intr : 1;
        unsigned int sc_peri_2nd_int_en1_ade_intr : 1;
        unsigned int sc_peri_2nd_int_en1_mmu_intr : 1;
        unsigned int sc_peri_2nd_int_en1_jpeg_intr : 1;
        unsigned int sc_peri_2nd_int_en1_vcodec_intr : 1;
        unsigned int sc_peri_2nd_int_en1_mipi_cs1_intr : 1;
        unsigned int sc_peri_2nd_int_en1_mipi_cs0_intr : 1;
        unsigned int sc_peri_2nd_int_en1_isp_intr : 1;
        unsigned int reserved : 10;
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ddr_dfs_intr_START (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ddr_dfs_intr_END (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_g3d_lp_intr_START (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_g3d_lp_intr_END (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_lp_intr_START (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_lp_intr_END (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ccpu_pmuirq_intr_START (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ccpu_pmuirq_intr_END (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq3_intr_START (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq3_intr_END (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq2_intr_START (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq2_intr_END (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq1_intr_START (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq1_intr_END (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq0_intr_START (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq0_intr_END (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_sdiommc_intr_START (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_sdiommc_intr_END (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_sdmmc_intr_START (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_sdmmc_intr_END (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_emmc_intr_START (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_emmc_intr_END (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_usb2otg_intr_START (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_usb2otg_intr_END (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_g3d_intr_START (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_g3d_intr_END (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_dsi_intr_START (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_dsi_intr_END (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ade_ldi_intr_START (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ade_ldi_intr_END (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ade_intr_START (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ade_intr_END (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mmu_intr_START (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mmu_intr_END (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_jpeg_intr_START (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_jpeg_intr_END (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_vcodec_intr_START (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_vcodec_intr_END (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_cs1_intr_START (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_cs1_intr_END (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_cs0_intr_START (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_cs0_intr_END (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_isp_intr_START (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_isp_intr_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_peri_2nd_int_statr1_ddr_dfs_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_g3d_lp_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_acpu_lp_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_ccpu_pmuirq_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_acpu_pmuirq3_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_acpu_pmuirq2_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_acpu_pmuirq1_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_acpu_pmuirq0_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_sdiommc_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_sdmmc_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_emmc_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_usb2otg_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_g3d_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_mipi_dsi_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_ade_ldi_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_ade_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_mmu_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_jpeg_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_vcodec_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_mipi_cs1_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_mipi_cs0_intr : 1;
        unsigned int sc_peri_2nd_int_statr1_isp_intr : 1;
        unsigned int reserved : 10;
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ddr_dfs_intr_START (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ddr_dfs_intr_END (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_g3d_lp_intr_START (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_g3d_lp_intr_END (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_lp_intr_START (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_lp_intr_END (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ccpu_pmuirq_intr_START (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ccpu_pmuirq_intr_END (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq3_intr_START (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq3_intr_END (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq2_intr_START (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq2_intr_END (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq1_intr_START (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq1_intr_END (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq0_intr_START (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq0_intr_END (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_sdiommc_intr_START (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_sdiommc_intr_END (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_sdmmc_intr_START (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_sdmmc_intr_END (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_emmc_intr_START (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_emmc_intr_END (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_usb2otg_intr_START (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_usb2otg_intr_END (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_g3d_intr_START (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_g3d_intr_END (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_dsi_intr_START (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_dsi_intr_END (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ade_ldi_intr_START (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ade_ldi_intr_END (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ade_intr_START (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ade_intr_END (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mmu_intr_START (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mmu_intr_END (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_jpeg_intr_START (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_jpeg_intr_END (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_vcodec_intr_START (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_vcodec_intr_END (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_cs1_intr_START (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_cs1_intr_END (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_cs0_intr_START (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_cs0_intr_END (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_isp_intr_START (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_isp_intr_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_peri_2nd_int_statm1_ddr_dfs_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_g3d_lp_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_acpu_lp_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_ccpu_pmuirq_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_acpu_pmuirq3_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_acpu_pmuirq2_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_acpu_pmuirq1_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_acpu_pmuirq0_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_sdiommc_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_sdmmc_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_emmc_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_usb2otg_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_g3d_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_mipi_dsi_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_ade_ldi_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_ade_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_mmu_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_jpeg_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_vcodec_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_mipi_cs1_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_mipi_cs0_intr : 1;
        unsigned int sc_peri_2nd_int_statm1_isp_intr : 1;
        unsigned int reserved : 10;
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ddr_dfs_intr_START (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ddr_dfs_intr_END (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_g3d_lp_intr_START (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_g3d_lp_intr_END (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_lp_intr_START (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_lp_intr_END (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ccpu_pmuirq_intr_START (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ccpu_pmuirq_intr_END (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq3_intr_START (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq3_intr_END (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq2_intr_START (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq2_intr_END (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq1_intr_START (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq1_intr_END (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq0_intr_START (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq0_intr_END (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_sdiommc_intr_START (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_sdiommc_intr_END (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_sdmmc_intr_START (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_sdmmc_intr_END (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_emmc_intr_START (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_emmc_intr_END (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_usb2otg_intr_START (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_usb2otg_intr_END (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_g3d_intr_START (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_g3d_intr_END (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_dsi_intr_START (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_dsi_intr_END (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ade_ldi_intr_START (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ade_ldi_intr_END (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ade_intr_START (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ade_intr_END (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mmu_intr_START (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mmu_intr_END (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_jpeg_intr_START (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_jpeg_intr_END (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_vcodec_intr_START (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_vcodec_intr_END (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_cs1_intr_START (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_cs1_intr_END (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_cs0_intr_START (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_cs0_intr_END (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_isp_intr_START (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_isp_intr_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clken0_mmc0 : 1;
        unsigned int periph_clken0_mmc1 : 1;
        unsigned int periph_clken0_mmc2 : 1;
        unsigned int periph_clken0_nandc : 1;
        unsigned int periph_clken0_usbotg : 1;
        unsigned int periph_clken0_picophy_test : 1;
        unsigned int periph_clken0_pll_test : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc1_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc1_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc2_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc2_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_nandc_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_nandc_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_usbotg_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_usbotg_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_picophy_test_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_picophy_test_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_pll_test_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_pll_test_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkdis0_mmc0 : 1;
        unsigned int periph_clkdis0_mmc1 : 1;
        unsigned int periph_clkdis0_mmc2 : 1;
        unsigned int periph_clkdis0_nandc : 1;
        unsigned int periph_clkdis0_usbotg : 1;
        unsigned int periph_clkdis0_picophy_test : 1;
        unsigned int periph_clkdis0_pll_test : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc1_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc1_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc2_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc2_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_nandc_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_nandc_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_usbotg_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_usbotg_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_picophy_test_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_picophy_test_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_pll_test_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_pll_test_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkstat0_mmc0 : 1;
        unsigned int periph_clkstat0_mmc1 : 1;
        unsigned int periph_clkstat0_mmc2 : 1;
        unsigned int periph_clkstat0_nandc : 1;
        unsigned int periph_clkstat0_usbotg : 1;
        unsigned int periph_clkstat0_picophy_test : 1;
        unsigned int periph_clkstat0_pll_test : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc1_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc1_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc2_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc2_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_nandc_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_nandc_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_usbotg_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_usbotg_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_picophy_test_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_picophy_test_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_pll_test_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_pll_test_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clken1_hifi : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_clken1_digacodec : 1;
        unsigned int reserved_4 : 26;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_periph_clken1_hifi_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_periph_clken1_hifi_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_periph_clken1_digacodec_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_periph_clken1_digacodec_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkdis1_hifi : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_clkdis1_digacodec : 1;
        unsigned int reserved_4 : 26;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_periph_clkdis1_hifi_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_periph_clkdis1_hifi_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_periph_clkdis1_digacodec_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_periph_clkdis1_digacodec_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkstat1_hifi : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_clkstat1_digacodec : 1;
        unsigned int reserved_4 : 26;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_periph_clkstat1_hifi_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_periph_clkstat1_hifi_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_periph_clkstat1_digacodec_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_periph_clkstat1_digacodec_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clken2_ipf_acpu : 1;
        unsigned int periph_clken2_socp_acpu : 1;
        unsigned int periph_clken2_dmac : 1;
        unsigned int periph_clken2_seceng_acpu : 1;
        unsigned int reserved_0 : 1;
        unsigned int periph_clken2_hpm0 : 1;
        unsigned int periph_clken2_hpm1 : 1;
        unsigned int periph_clken2_hpm2 : 1;
        unsigned int periph_clken2_hpm3 : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_ipf_acpu_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_ipf_acpu_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_socp_acpu_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_socp_acpu_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_dmac_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_dmac_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_seceng_acpu_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_seceng_acpu_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm0_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm0_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm1_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm1_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm2_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm2_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm3_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm3_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkdis2_ipf_acpu : 1;
        unsigned int periph_clkdis2_socp_acpu : 1;
        unsigned int periph_clkdis2_dmac : 1;
        unsigned int periph_clkdis2_seceng_acpu : 1;
        unsigned int reserved_0 : 1;
        unsigned int periph_clkdis2_hpm0 : 1;
        unsigned int periph_clkdis2_hpm1 : 1;
        unsigned int periph_clkdis2_hpm2 : 1;
        unsigned int periph_clkdis2_hpm3 : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_ipf_acpu_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_ipf_acpu_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_socp_acpu_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_socp_acpu_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_dmac_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_dmac_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_seceng_acpu_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_seceng_acpu_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm0_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm0_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm1_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm1_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm2_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm2_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm3_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm3_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkstat2_ipf_acpu : 1;
        unsigned int periph_clkstat2_socp_acpu : 1;
        unsigned int periph_clkstat2_dmac : 1;
        unsigned int periph_clkstat2_seceng_acpu : 1;
        unsigned int reserved_0 : 1;
        unsigned int periph_clkstat2_hpm0 : 1;
        unsigned int periph_clkstat2_hpm1 : 1;
        unsigned int periph_clkstat2_hpm2 : 1;
        unsigned int periph_clkstat2_hpm3 : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_ipf_acpu_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_ipf_acpu_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_socp_acpu_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_socp_acpu_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_dmac_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_dmac_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_seceng_acpu_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_seceng_acpu_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm0_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm0_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm1_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm1_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm2_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm2_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm3_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm3_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clken3_cssys : 1;
        unsigned int periph_clken3_i2c0 : 1;
        unsigned int periph_clken3_i2c1 : 1;
        unsigned int periph_clken3_i2c2 : 1;
        unsigned int periph_clken3_i2c3 : 1;
        unsigned int periph_clken3_uart1 : 1;
        unsigned int periph_clken3_uart2 : 1;
        unsigned int periph_clken3_uart3 : 1;
        unsigned int periph_clken3_uart4 : 1;
        unsigned int periph_clken3_ssp : 1;
        unsigned int periph_clken3_pwm : 1;
        unsigned int periph_clken3_blpwm : 1;
        unsigned int periph_clken3_tsensor : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int periph_clken3_gps : 1;
        unsigned int periph_clken3_tcxo_pad0 : 1;
        unsigned int periph_clken3_tcxo_pad1 : 1;
        unsigned int periph_clken3_dapb : 1;
        unsigned int periph_clken3_hkadc : 1;
        unsigned int periph_clken3_codec_ssi : 1;
        unsigned int periph_clken3_tzpc_dep : 1;
        unsigned int reserved_2 : 10;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_cssys_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_cssys_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c0_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c0_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c1_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c1_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c2_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c2_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c3_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c3_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart1_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart1_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart2_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart2_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart3_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart3_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart4_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart4_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_ssp_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_ssp_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_pwm_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_pwm_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_blpwm_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_blpwm_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tsensor_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tsensor_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_gps_START (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_gps_END (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tcxo_pad0_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tcxo_pad0_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tcxo_pad1_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tcxo_pad1_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_dapb_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_dapb_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_hkadc_START (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_hkadc_END (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_codec_ssi_START (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_codec_ssi_END (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tzpc_dep_START (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tzpc_dep_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkdis3_cssys : 1;
        unsigned int periph_clkdis3_i2c0 : 1;
        unsigned int periph_clkdis3_i2c1 : 1;
        unsigned int periph_clkdis3_i2c2 : 1;
        unsigned int periph_clkdis3_i2c3 : 1;
        unsigned int periph_clkdis3_uart1 : 1;
        unsigned int periph_clkdis3_uart2 : 1;
        unsigned int periph_clkdis3_uart3 : 1;
        unsigned int periph_clkdis3_uart4 : 1;
        unsigned int periph_clkdis3_ssp : 1;
        unsigned int periph_clkdis3_pwm : 1;
        unsigned int periph_clkdis3_blpwm : 1;
        unsigned int periph_clkdis3_tsensor : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int periph_clkdis3_gps : 1;
        unsigned int periph_clkdis3_tcxo_pad0 : 1;
        unsigned int periph_clkdis3_tcxo_pad1 : 1;
        unsigned int periph_clkdis3_dapb : 1;
        unsigned int periph_clkdis3_hkadc : 1;
        unsigned int periph_clkdis3_codec_ssi : 1;
        unsigned int periph_clkdis3_tzpc_dep : 1;
        unsigned int reserved_2 : 10;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_cssys_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_cssys_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c0_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c0_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c1_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c1_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c2_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c2_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c3_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c3_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart1_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart1_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart2_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart2_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart3_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart3_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart4_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart4_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_ssp_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_ssp_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_pwm_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_pwm_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_blpwm_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_blpwm_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tsensor_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tsensor_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_gps_START (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_gps_END (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tcxo_pad0_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tcxo_pad0_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tcxo_pad1_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tcxo_pad1_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_dapb_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_dapb_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_hkadc_START (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_hkadc_END (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_codec_ssi_START (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_codec_ssi_END (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tzpc_dep_START (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tzpc_dep_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkstat3_cssys : 1;
        unsigned int periph_clkstat3_i2c0 : 1;
        unsigned int periph_clkstat3_i2c1 : 1;
        unsigned int periph_clkstat3_i2c2 : 1;
        unsigned int periph_clkstat3_i2c3 : 1;
        unsigned int periph_clkstat3_uart1 : 1;
        unsigned int periph_clkstat3_uart2 : 1;
        unsigned int periph_clkstat3_uart3 : 1;
        unsigned int periph_clkstat3_uart4 : 1;
        unsigned int periph_clkstat3_ssp : 1;
        unsigned int periph_clkstat3_pwm : 1;
        unsigned int periph_clkstat3_blpwm : 1;
        unsigned int periph_clkstat3_tsensor : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int periph_clkstat3_gps : 1;
        unsigned int periph_clkstat3_tcxo_pad0 : 1;
        unsigned int periph_clkstat3_tcxo_pad1 : 1;
        unsigned int periph_clkstat3_dapb : 1;
        unsigned int periph_clkstat3_hkadc : 1;
        unsigned int periph_clkstat3_codec_ssi : 1;
        unsigned int periph_clkstat3_tzpc_dep : 1;
        unsigned int reserved_2 : 10;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_cssys_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_cssys_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c0_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c0_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c1_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c1_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c2_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c2_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c3_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c3_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart1_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart1_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart2_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart2_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart3_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart3_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart4_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart4_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_ssp_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_ssp_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_pwm_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_pwm_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_blpwm_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_blpwm_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tsensor_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tsensor_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_gps_START (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_gps_END (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tcxo_pad0_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tcxo_pad0_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tcxo_pad1_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tcxo_pad1_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_dapb_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_dapb_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_hkadc_START (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_hkadc_END (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_codec_ssi_START (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_codec_ssi_END (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tzpc_dep_START (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tzpc_dep_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clken8_rs0 : 1;
        unsigned int periph_clken8_rs2 : 1;
        unsigned int periph_clken8_rs3 : 1;
        unsigned int periph_clken8_ms0 : 1;
        unsigned int reserved_0 : 1;
        unsigned int periph_clken8_ms2 : 1;
        unsigned int periph_clken8_xg2ram0 : 1;
        unsigned int periph_clken8_x2sram_tzma : 1;
        unsigned int periph_clken8_sram : 1;
        unsigned int periph_clken8_rom : 1;
        unsigned int periph_clken8_harq : 1;
        unsigned int periph_clken8_mmu : 1;
        unsigned int periph_clken8_ddrc : 1;
        unsigned int periph_clken8_ddrphy : 1;
        unsigned int periph_clken8_ddrphy_ref : 1;
        unsigned int periph_clken8_x2x_sysnoc : 1;
        unsigned int periph_clken8_x2x_ccpu : 1;
        unsigned int periph_clken8_ddrt : 1;
        unsigned int periph_clken8_ddrpack_rs : 1;
        unsigned int reserved_1 : 13;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs2_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs2_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs3_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs3_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ms0_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ms0_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ms2_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ms2_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_xg2ram0_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_xg2ram0_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2sram_tzma_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2sram_tzma_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_sram_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_sram_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rom_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rom_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_harq_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_harq_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_mmu_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_mmu_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrc_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrc_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrphy_START (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrphy_END (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrphy_ref_START (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrphy_ref_END (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2x_sysnoc_START (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2x_sysnoc_END (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2x_ccpu_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2x_ccpu_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrt_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrt_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrpack_rs_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrpack_rs_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkdis8_rs0 : 1;
        unsigned int periph_clkdis8_rs2 : 1;
        unsigned int periph_clkdis8_rs3 : 1;
        unsigned int periph_clkdis8_ms0 : 1;
        unsigned int reserved_0 : 1;
        unsigned int periph_clkdis8_ms2 : 1;
        unsigned int periph_clkdis8_xg2ram0 : 1;
        unsigned int periph_clkdis8_x2sram_tzma : 1;
        unsigned int periph_clkdis8_sram : 1;
        unsigned int periph_clkdis8_rom : 1;
        unsigned int periph_clkdis8_harq : 1;
        unsigned int periph_clkdis8_mmu : 1;
        unsigned int periph_clkdis8_ddrc : 1;
        unsigned int periph_clkdis8_ddrphy : 1;
        unsigned int periph_clkdis8_ddrphy_ref : 1;
        unsigned int periph_clkdis8_x2x_sysnoc : 1;
        unsigned int periph_clkdis8_x2x_ccpu : 1;
        unsigned int periph_clkdis8_ddrt : 1;
        unsigned int periph_clkdis8_ddrpack_rs : 1;
        unsigned int reserved_1 : 13;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs2_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs2_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs3_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs3_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ms0_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ms0_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ms2_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ms2_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_xg2ram0_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_xg2ram0_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2sram_tzma_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2sram_tzma_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_sram_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_sram_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rom_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rom_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_harq_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_harq_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_mmu_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_mmu_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrc_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrc_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrphy_START (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrphy_END (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrphy_ref_START (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrphy_ref_END (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2x_sysnoc_START (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2x_sysnoc_END (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2x_ccpu_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2x_ccpu_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrt_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrt_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrpack_rs_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrpack_rs_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkstat8_rs0 : 1;
        unsigned int periph_clkstat8_rs2 : 1;
        unsigned int periph_clkstat8_rs3 : 1;
        unsigned int periph_clkstat8_ms0 : 1;
        unsigned int reserved_0 : 1;
        unsigned int periph_clkstat8_ms2 : 1;
        unsigned int periph_clkstat8_xg2ram0 : 1;
        unsigned int periph_clkstat8_x2sram_tzma : 1;
        unsigned int periph_clkstat8_sram : 1;
        unsigned int periph_clkstat8_rom : 1;
        unsigned int periph_clkstat8_harq : 1;
        unsigned int periph_clkstat8_mmu : 1;
        unsigned int periph_clkstat8_ddrc : 1;
        unsigned int periph_clkstat8_ddrphy : 1;
        unsigned int periph_clkstat8_ddrphy_ref : 1;
        unsigned int periph_clkstat8_x2x_sysnoc : 1;
        unsigned int periph_clkstat8_x2x_ccpu : 1;
        unsigned int periph_clkstat8_ddrt : 1;
        unsigned int periph_clkstat8_ddrpack_rs : 1;
        unsigned int reserved_1 : 13;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs2_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs2_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs3_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs3_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ms0_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ms0_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ms2_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ms2_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_xg2ram0_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_xg2ram0_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2sram_tzma_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2sram_tzma_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_sram_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_sram_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rom_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rom_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_harq_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_harq_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_mmu_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_mmu_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrc_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrc_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrphy_START (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrphy_END (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrphy_ref_START (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrphy_ref_END (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2x_sysnoc_START (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2x_sysnoc_END (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2x_ccpu_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2x_ccpu_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrt_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrt_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrpack_rs_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrpack_rs_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clken9_carm_dap : 1;
        unsigned int periph_clken9_carm_atb : 1;
        unsigned int periph_clken9_carm_lbus : 1;
        unsigned int periph_clken9_carm_kernel : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_dap_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_dap_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_atb_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_atb_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_lbus_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_lbus_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_kernel_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_kernel_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkdis9_carm_dap : 1;
        unsigned int periph_clkdis9_carm_atb : 1;
        unsigned int periph_clkdis9_carm_lbus : 1;
        unsigned int periph_clkdis9_carm_kernel : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_dap_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_dap_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_atb_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_atb_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_lbus_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_lbus_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_kernel_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_kernel_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkstat9_carm_dap : 1;
        unsigned int periph_clkstat9_carm_atb : 1;
        unsigned int periph_clkstat9_carm_lbus : 1;
        unsigned int periph_clkstat9_carm_kernel : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_dap_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_dap_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_atb_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_atb_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_lbus_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_lbus_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_kernel_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_kernel_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clken10_ipf_ccpu : 1;
        unsigned int periph_clken10_socp_ccpu : 1;
        unsigned int periph_clken10_seceng_ccpu : 1;
        unsigned int periph_clken10_harq_ccpu : 1;
        unsigned int reserved_0 : 12;
        unsigned int periph_clken10_ipf_mcu : 1;
        unsigned int periph_clken10_socp_mcu : 1;
        unsigned int periph_clken10_seceng_mcu : 1;
        unsigned int periph_clken10_harq_mcu : 1;
        unsigned int reserved_1 : 12;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_ipf_ccpu_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_ipf_ccpu_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_socp_ccpu_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_socp_ccpu_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_seceng_ccpu_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_seceng_ccpu_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_harq_ccpu_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_harq_ccpu_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_ipf_mcu_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_ipf_mcu_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_socp_mcu_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_socp_mcu_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_seceng_mcu_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_seceng_mcu_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_harq_mcu_START (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_harq_mcu_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkdis10_ipf_ccpu : 1;
        unsigned int periph_clkdis10_socp_ccpu : 1;
        unsigned int periph_clkdis10_seceng_ccpu : 1;
        unsigned int periph_clkdis10_harq_ccpu : 1;
        unsigned int reserved_0 : 12;
        unsigned int periph_clkdis10_ipf_mcu : 1;
        unsigned int periph_clkdis10_socp_mcu : 1;
        unsigned int periph_clkdis10_seceng_mcu : 1;
        unsigned int periph_clkdis10_harq_mcu : 1;
        unsigned int reserved_1 : 12;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_ipf_ccpu_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_ipf_ccpu_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_socp_ccpu_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_socp_ccpu_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_seceng_ccpu_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_seceng_ccpu_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_harq_ccpu_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_harq_ccpu_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_ipf_mcu_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_ipf_mcu_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_socp_mcu_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_socp_mcu_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_seceng_mcu_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_seceng_mcu_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_harq_mcu_START (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_harq_mcu_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkstat10_ipf_ccpu : 1;
        unsigned int periph_clkstat10_socp_ccpu : 1;
        unsigned int periph_clkstat10_seceng_ccpu : 1;
        unsigned int periph_clkstat10_harq_ccpu : 1;
        unsigned int reserved_0 : 12;
        unsigned int periph_clkstat10_ipf_mcu : 1;
        unsigned int periph_clkstat10_socp_mcu : 1;
        unsigned int periph_clkstat10_seceng_mcu : 1;
        unsigned int periph_clkstat10_harq_mcu : 1;
        unsigned int reserved_1 : 12;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_ipf_ccpu_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_ipf_ccpu_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_socp_ccpu_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_socp_ccpu_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_seceng_ccpu_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_seceng_ccpu_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_harq_ccpu_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_harq_ccpu_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_ipf_mcu_START (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_ipf_mcu_END (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_socp_mcu_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_socp_mcu_END (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_seceng_mcu_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_seceng_mcu_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_harq_mcu_START (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_harq_mcu_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clken12_hifi_src : 1;
        unsigned int periph_clken12_mmc0_src : 1;
        unsigned int periph_clken12_mmc1_src : 1;
        unsigned int periph_clken12_mmc2_src : 1;
        unsigned int periph_clken12_syspll_div_src : 1;
        unsigned int periph_clken12_tpiu_src : 1;
        unsigned int periph_clken12_mmc0_hf : 1;
        unsigned int periph_clken12_mmc1_hf : 1;
        unsigned int periph_clken12_pll_test_src : 1;
        unsigned int periph_clken12_codec_soc : 1;
        unsigned int periph_clken12_media : 1;
        unsigned int reserved : 21;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_hifi_src_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_hifi_src_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc0_src_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc0_src_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc1_src_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc1_src_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc2_src_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc2_src_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_syspll_div_src_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_syspll_div_src_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_tpiu_src_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_tpiu_src_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc0_hf_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc0_hf_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc1_hf_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc1_hf_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_pll_test_src_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_pll_test_src_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_codec_soc_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_codec_soc_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_media_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_media_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkdis12_hifi_src : 1;
        unsigned int periph_clkdis12_mmc0_src : 1;
        unsigned int periph_clkdis12_mmc1_src : 1;
        unsigned int periph_clkdis12_mmc2_src : 1;
        unsigned int periph_clkdis12_syspll_div_src : 1;
        unsigned int periph_clkdis12_tpiu_src : 1;
        unsigned int periph_clkdis12_mmc0_hf : 1;
        unsigned int periph_clkdis12_mmc1_hf : 1;
        unsigned int periph_clkdis12_pll_test_src : 1;
        unsigned int periph_clkdis12_codec_soc : 1;
        unsigned int periph_clkdis12_media : 1;
        unsigned int reserved : 21;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_hifi_src_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_hifi_src_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc0_src_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc0_src_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc1_src_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc1_src_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc2_src_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc2_src_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_syspll_div_src_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_syspll_div_src_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_tpiu_src_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_tpiu_src_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc0_hf_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc0_hf_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc1_hf_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc1_hf_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_pll_test_src_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_pll_test_src_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_codec_soc_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_codec_soc_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_media_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_media_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkstat12_hifi_src : 1;
        unsigned int periph_clkstat12_mmc0_src : 1;
        unsigned int periph_clkstat12_mmc1_src : 1;
        unsigned int periph_clkstat12_mmc2_src : 1;
        unsigned int periph_clkstat12_syspll_div_src : 1;
        unsigned int periph_clkstat12_tpiu_src : 1;
        unsigned int periph_clkstat12_mmc0_hf : 1;
        unsigned int periph_clkstat12_mmc1_hf : 1;
        unsigned int periph_clkstat12_pll_test_src : 1;
        unsigned int periph_clkstat12_codec_soc : 1;
        unsigned int periph_clkstat12_media : 1;
        unsigned int reserved : 21;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_hifi_src_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_hifi_src_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc0_src_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc0_src_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc1_src_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc1_src_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc2_src_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc2_src_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_syspll_div_src_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_syspll_div_src_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_tpiu_src_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_tpiu_src_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc0_hf_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc0_hf_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc1_hf_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc1_hf_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_pll_test_src_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_pll_test_src_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_codec_soc_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_codec_soc_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_media_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_media_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clken14_reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN14_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN14_periph_clken14_reserved_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN14_periph_clken14_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkdis14_reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS14_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS14_periph_clkdis14_reserved_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS14_periph_clkdis14_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkstat14_reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT14_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT14_periph_clkstat14_reserved_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT14_periph_clkstat14_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rsten0_mmc0 : 1;
        unsigned int periph_rsten0_mmc1 : 1;
        unsigned int periph_rsten0_mmc2 : 1;
        unsigned int periph_rsten0_nandc : 1;
        unsigned int periph_rsten0_usbotg_bus : 1;
        unsigned int periph_rsten0_por_picophy : 1;
        unsigned int periph_rsten0_usbotg : 1;
        unsigned int periph_rsten0_usbotg_32k : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc1_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc1_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc2_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc2_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_nandc_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_nandc_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_bus_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_bus_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_por_picophy_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_por_picophy_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_32k_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_32k_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rstdis0_mmc0 : 1;
        unsigned int periph_rstdis0_mmc1 : 1;
        unsigned int periph_rstdis0_mmc2 : 1;
        unsigned int periph_rstdis0_nandc : 1;
        unsigned int periph_rstdis0_usbotg_bus : 1;
        unsigned int periph_rstdis0_por_picophy : 1;
        unsigned int periph_rstdis0_usbotg : 1;
        unsigned int periph_rstdis0_usbotg_32k : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc1_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc1_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc2_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc2_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_nandc_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_nandc_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_bus_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_bus_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_por_picophy_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_por_picophy_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_32k_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_32k_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rststat0_mmc0 : 1;
        unsigned int periph_rststat0_mmc1 : 1;
        unsigned int periph_rststat0_mmc2 : 1;
        unsigned int periph_rststat0_nandc : 1;
        unsigned int periph_rststat0_usbotg_bus : 1;
        unsigned int periph_rststat0_por_picophy : 1;
        unsigned int periph_rststat0_usbotg : 1;
        unsigned int periph_rststat0_usbotg_32k : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc1_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc1_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc2_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc2_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_nandc_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_nandc_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_bus_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_bus_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_por_picophy_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_por_picophy_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_32k_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_32k_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rsten1_hifi : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_rsten1_digacodec : 1;
        unsigned int reserved_4 : 26;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_periph_rsten1_hifi_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_periph_rsten1_hifi_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_periph_rsten1_digacodec_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_periph_rsten1_digacodec_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rstdis1_hifi : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_rstdis1_digacodec : 1;
        unsigned int reserved_4 : 26;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_periph_rstdis1_hifi_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_periph_rstdis1_hifi_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_periph_rstdis1_digacodec_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_periph_rstdis1_digacodec_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rststat1_hifi : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_rststat1_digacodec : 1;
        unsigned int reserved_4 : 26;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_periph_rststat1_hifi_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_periph_rststat1_hifi_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_periph_rststat1_digacodec_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_periph_rststat1_digacodec_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rsten2_ipf : 1;
        unsigned int periph_rsten2_socp : 1;
        unsigned int periph_rsten2_dmac : 1;
        unsigned int periph_rsten2_seceng : 1;
        unsigned int periph_rsten2_abb : 1;
        unsigned int periph_rsten2_hpm0 : 1;
        unsigned int periph_rsten2_hpm1 : 1;
        unsigned int periph_rsten2_hpm2 : 1;
        unsigned int periph_rsten2_hpm3 : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_ipf_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_ipf_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_socp_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_socp_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_dmac_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_dmac_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_seceng_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_seceng_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_abb_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_abb_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm0_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm0_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm1_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm1_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm2_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm2_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm3_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm3_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rstdis2_ipf : 1;
        unsigned int periph_rstdis2_socp : 1;
        unsigned int periph_rstdis2_dmac : 1;
        unsigned int periph_rstdis2_seceng : 1;
        unsigned int periph_rstdis2_abb : 1;
        unsigned int periph_rstdis2_hpm0 : 1;
        unsigned int periph_rstdis2_hpm1 : 1;
        unsigned int periph_rstdis2_hpm2 : 1;
        unsigned int periph_rstdis2_hpm3 : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_ipf_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_ipf_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_socp_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_socp_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_dmac_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_dmac_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_seceng_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_seceng_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_abb_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_abb_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm0_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm0_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm1_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm1_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm2_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm2_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm3_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm3_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rststat2_ipf : 1;
        unsigned int periph_rststat2_socp : 1;
        unsigned int periph_rststat2_dmac : 1;
        unsigned int periph_rststat2_seceng : 1;
        unsigned int periph_rststat2_abb : 1;
        unsigned int periph_rststat2_hpm0 : 1;
        unsigned int periph_rststat2_hpm1 : 1;
        unsigned int periph_rststat2_hpm2 : 1;
        unsigned int periph_rststat2_hpm3 : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_ipf_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_ipf_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_socp_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_socp_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_dmac_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_dmac_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_seceng_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_seceng_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_abb_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_abb_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm0_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm0_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm1_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm1_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm2_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm2_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm3_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm3_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rsten3_cssys : 1;
        unsigned int periph_rsten3_i2c0 : 1;
        unsigned int periph_rsten3_i2c1 : 1;
        unsigned int periph_rsten3_i2c2 : 1;
        unsigned int periph_rsten3_i2c3 : 1;
        unsigned int periph_rsten3_uart1 : 1;
        unsigned int periph_rsten3_uart2 : 1;
        unsigned int periph_rsten3_uart3 : 1;
        unsigned int periph_rsten3_uart4 : 1;
        unsigned int periph_rsten3_ssp : 1;
        unsigned int periph_rsten3_pwm : 1;
        unsigned int periph_rsten3_blpwm : 1;
        unsigned int periph_rsten3_tsensor : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int periph_rsten3_dapb : 1;
        unsigned int periph_rsten3_hkadc : 1;
        unsigned int periph_rsten3_codec_ssi : 1;
        unsigned int reserved_5 : 11;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_cssys_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_cssys_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c0_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c0_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c1_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c1_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c2_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c2_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c3_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c3_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart1_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart1_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart2_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart2_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart3_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart3_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart4_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart4_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_ssp_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_ssp_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_pwm_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_pwm_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_blpwm_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_blpwm_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_tsensor_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_tsensor_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_dapb_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_dapb_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_hkadc_START (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_hkadc_END (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_codec_ssi_START (20)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_codec_ssi_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rstdis3_cssys : 1;
        unsigned int periph_rstdis3_i2c0 : 1;
        unsigned int periph_rstdis3_i2c1 : 1;
        unsigned int periph_rstdis3_i2c2 : 1;
        unsigned int periph_rstdis3_i2c3 : 1;
        unsigned int periph_rstdis3_uart1 : 1;
        unsigned int periph_rstdis3_uart2 : 1;
        unsigned int periph_rstdis3_uart3 : 1;
        unsigned int periph_rstdis3_uart4 : 1;
        unsigned int periph_rstdis3_ssp : 1;
        unsigned int periph_rstdis3_pwm : 1;
        unsigned int periph_rstdis3_blpwm : 1;
        unsigned int periph_rstdis3_tsensor : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int periph_rstdis3_dapb : 1;
        unsigned int periph_rstdis3_hkadc : 1;
        unsigned int periph_rstdis3_codec_ssi : 1;
        unsigned int reserved_5 : 11;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_cssys_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_cssys_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c0_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c0_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c1_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c1_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c2_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c2_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c3_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c3_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart1_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart1_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart2_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart2_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart3_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart3_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart4_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart4_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_ssp_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_ssp_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_pwm_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_pwm_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_blpwm_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_blpwm_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_tsensor_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_tsensor_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_dapb_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_dapb_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_hkadc_START (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_hkadc_END (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_codec_ssi_START (20)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_codec_ssi_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rststat3_cssys : 1;
        unsigned int periph_rststat3_i2c0 : 1;
        unsigned int periph_rststat3_i2c1 : 1;
        unsigned int periph_rststat3_i2c2 : 1;
        unsigned int periph_rststat3_i2c3 : 1;
        unsigned int periph_rststat3_uart1 : 1;
        unsigned int periph_rststat3_uart2 : 1;
        unsigned int periph_rststat3_uart3 : 1;
        unsigned int periph_rststat3_uart4 : 1;
        unsigned int periph_rststat3_ssp : 1;
        unsigned int periph_rststat3_pwm : 1;
        unsigned int periph_rststat3_blpwm : 1;
        unsigned int periph_rststat3_tsensor : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int periph_rststat3_dapb : 1;
        unsigned int periph_rststat3_hkadc : 1;
        unsigned int periph_rststat3_codec_ssi : 1;
        unsigned int reserved_5 : 11;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_cssys_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_cssys_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c0_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c0_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c1_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c1_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c2_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c2_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c3_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c3_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart1_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart1_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart2_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart2_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart3_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart3_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart4_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart4_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_ssp_START (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_ssp_END (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_pwm_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_pwm_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_blpwm_START (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_blpwm_END (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_tsensor_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_tsensor_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_dapb_START (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_dapb_END (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_hkadc_START (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_hkadc_END (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_codec_ssi_START (20)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_codec_ssi_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rsten8_rs0 : 1;
        unsigned int periph_rsten8_rs2 : 1;
        unsigned int periph_rsten8_rs3 : 1;
        unsigned int periph_rsten8_ms0 : 1;
        unsigned int reserved_0 : 1;
        unsigned int periph_rsten8_ms2 : 1;
        unsigned int periph_rsten8_xg2ram0 : 1;
        unsigned int periph_rsten8_x2sram_tzma : 1;
        unsigned int periph_rsten8_sram : 1;
        unsigned int reserved_1 : 1;
        unsigned int periph_rsten8_harq : 1;
        unsigned int reserved_2 : 1;
        unsigned int periph_rsten8_ddrc : 1;
        unsigned int periph_rsten8_ddrc_apb : 1;
        unsigned int periph_rsten8_ddrpack_apb : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int periph_rsten8_ddrt : 1;
        unsigned int reserved_5 : 14;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs2_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs2_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs3_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs3_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ms0_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ms0_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ms2_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ms2_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_xg2ram0_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_xg2ram0_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_x2sram_tzma_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_x2sram_tzma_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_sram_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_sram_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_harq_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_harq_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrc_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrc_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrc_apb_START (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrc_apb_END (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrpack_apb_START (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrpack_apb_END (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrt_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrt_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rstdis8_rs0 : 1;
        unsigned int periph_rstdis8_rs2 : 1;
        unsigned int periph_rstdis8_rs3 : 1;
        unsigned int periph_rstdis8_ms0 : 1;
        unsigned int reserved_0 : 1;
        unsigned int periph_rstdis8_ms2 : 1;
        unsigned int periph_rstdis8_xg2ram0 : 1;
        unsigned int periph_rstdis8_x2sram_tzma : 1;
        unsigned int periph_rstdis8_sram : 1;
        unsigned int reserved_1 : 1;
        unsigned int periph_rstdis8_harq : 1;
        unsigned int reserved_2 : 1;
        unsigned int periph_rstdis8_ddrc : 1;
        unsigned int periph_rstdis8_ddrc_apb : 1;
        unsigned int periph_rstdis8_ddrpack_apb : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int periph_rstdis8_ddrt : 1;
        unsigned int reserved_5 : 14;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs2_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs2_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs3_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs3_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ms0_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ms0_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ms2_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ms2_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_xg2ram0_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_xg2ram0_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_x2sram_tzma_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_x2sram_tzma_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_sram_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_sram_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_harq_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_harq_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrc_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrc_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrc_apb_START (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrc_apb_END (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrpack_apb_START (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrpack_apb_END (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrt_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrt_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rststat8_rs0 : 1;
        unsigned int periph_rststat8_rs2 : 1;
        unsigned int periph_rststat8_rs3 : 1;
        unsigned int periph_rststat8_ms0 : 1;
        unsigned int reserved_0 : 1;
        unsigned int periph_rststat8_ms2 : 1;
        unsigned int periph_rststat8_xg2ram0 : 1;
        unsigned int periph_rststat8_x2sram_tzma : 1;
        unsigned int periph_rststat8_sram : 1;
        unsigned int reserved_1 : 1;
        unsigned int periph_rststat8_harq : 1;
        unsigned int reserved_2 : 1;
        unsigned int periph_rststat8_ddrc : 1;
        unsigned int periph_rststat8_ddrc_apb : 1;
        unsigned int periph_rststat8_ddrpack_apb : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int periph_rststat8_ddrt : 1;
        unsigned int reserved_5 : 14;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs0_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs0_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs2_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs2_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs3_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs3_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ms0_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ms0_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ms2_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ms2_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_xg2ram0_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_xg2ram0_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_x2sram_tzma_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_x2sram_tzma_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_sram_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_sram_END (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_harq_START (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_harq_END (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrc_START (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrc_END (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrc_apb_START (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrc_apb_END (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrpack_apb_START (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrpack_apb_END (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrt_START (17)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrt_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rsten9_carm_dap : 1;
        unsigned int periph_rsten9_carm_atb : 1;
        unsigned int periph_rsten9_carm_lbus : 1;
        unsigned int periph_rsten9_carm_por : 1;
        unsigned int periph_rsten9_carm_core : 1;
        unsigned int periph_rsten9_carm_dbg : 1;
        unsigned int periph_rsten9_carm_l2 : 1;
        unsigned int periph_rsten9_carm_socdbg : 1;
        unsigned int periph_rsten9_carm_etm : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_dap_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_dap_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_atb_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_atb_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_lbus_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_lbus_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_por_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_por_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_core_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_core_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_dbg_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_dbg_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_l2_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_l2_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_socdbg_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_socdbg_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_etm_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_etm_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rsdist9_carm_dap : 1;
        unsigned int periph_rsdist9_carm_atb : 1;
        unsigned int periph_rsdist9_carm_lbus : 1;
        unsigned int periph_rsdist9_carm_por : 1;
        unsigned int periph_rsdist9_carm_core : 1;
        unsigned int periph_rsdist9_carm_dbg : 1;
        unsigned int periph_rsdist9_carm_l2 : 1;
        unsigned int periph_rsdist9_carm_socdbg : 1;
        unsigned int periph_rsdist9_carm_etm : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_dap_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_dap_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_atb_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_atb_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_lbus_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_lbus_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_por_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_por_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_core_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_core_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_dbg_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_dbg_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_l2_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_l2_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_socdbg_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_socdbg_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_etm_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_etm_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rststat9_carm_dap : 1;
        unsigned int periph_rststat9_carm_atb : 1;
        unsigned int periph_rststat9_carm_lbus : 1;
        unsigned int periph_rststat9_carm_por : 1;
        unsigned int periph_rststat9_carm_core : 1;
        unsigned int periph_rststat9_carm_dbg : 1;
        unsigned int periph_rststat9_carm_l2 : 1;
        unsigned int periph_rststat9_carm_socdbg : 1;
        unsigned int periph_rststat9_carm_etm : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_dap_START (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_dap_END (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_atb_START (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_atb_END (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_lbus_START (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_lbus_END (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_por_START (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_por_END (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_core_START (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_core_END (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_dbg_START (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_dbg_END (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_l2_START (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_l2_END (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_socdbg_START (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_socdbg_END (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_etm_START (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_etm_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN10_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS10_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT10_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sel_clk_hifi : 1;
        unsigned int sel_clk_uart1 : 1;
        unsigned int sel_clk_uart2 : 1;
        unsigned int sel_clk_uart3 : 1;
        unsigned int sel_clk_uart4 : 1;
        unsigned int sel_clk_mmc : 1;
        unsigned int sel_pll_test : 3;
        unsigned int sel_codec_ssi : 1;
        unsigned int sel_clk_ccpu : 1;
        unsigned int reserved_0 : 5;
        unsigned int sel_clk_hifi_msk : 1;
        unsigned int sel_clk_uart1_msk : 1;
        unsigned int sel_clk_uart2_msk : 1;
        unsigned int sel_clk_uart3_msk : 1;
        unsigned int sel_clk_uart4_msk : 1;
        unsigned int sel_clk_mmc_msk : 1;
        unsigned int sel_pll_test_msk : 3;
        unsigned int sel_codec_ssi_msk : 1;
        unsigned int sel_clk_ccpu_msk : 1;
        unsigned int reserved_1 : 5;
    } reg;
} SOC_PERI_SCTRL_SC_CLK_SEL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_hifi_START (0)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_hifi_END (0)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart1_START (1)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart1_END (1)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart2_START (2)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart2_END (2)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart3_START (3)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart3_END (3)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart4_START (4)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart4_END (4)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_mmc_START (5)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_mmc_END (5)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_pll_test_START (6)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_pll_test_END (8)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_codec_ssi_START (9)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_codec_ssi_END (9)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_ccpu_START (10)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_ccpu_END (10)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_hifi_msk_START (16)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_hifi_msk_END (16)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart1_msk_START (17)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart1_msk_END (17)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart2_msk_START (18)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart2_msk_END (18)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart3_msk_START (19)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart3_msk_END (19)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart4_msk_START (20)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart4_msk_END (20)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_mmc_msk_START (21)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_mmc_msk_END (21)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_pll_test_msk_START (22)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_pll_test_msk_END (24)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_codec_ssi_msk_START (25)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_codec_ssi_msk_END (25)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_ccpu_msk_START (26)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_ccpu_msk_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 16;
        unsigned int reserved_1: 16;
    } reg;
} SOC_PERI_SCTRL_SC_CLK_SEL1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 6;
        unsigned int reserved_1: 2;
        unsigned int reserved_2: 8;
        unsigned int reserved_3: 1;
        unsigned int reserved_4: 1;
        unsigned int reserved_5: 14;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 6;
        unsigned int reserved_1: 2;
        unsigned int reserved_2: 8;
        unsigned int reserved_3: 1;
        unsigned int reserved_4: 1;
        unsigned int reserved_5: 14;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg0_value0_clkbus_low : 7;
        unsigned int clk_8bit_cfg0_vld0_clkbus_low : 1;
        unsigned int clk_8bit_cfg0_value0_clkbus_high : 7;
        unsigned int clk_8bit_cfg0_vld0_clkbus_high : 1;
        unsigned int clk_8bit_cfg0_value0_clkbus_idle_low : 7;
        unsigned int clk_8bit_cfg0_vld0_clkbus_idle_low : 1;
        unsigned int clk_8bit_cfg0_value0_clkbus_idle_high : 7;
        unsigned int clk_8bit_cfg0_vld0_clkbus_idle_high : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_low_START (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_low_END (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_low_START (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_low_END (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_high_START (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_high_END (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_high_START (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_high_END (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_idle_low_START (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_idle_low_END (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_idle_low_START (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_idle_low_END (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_idle_high_START (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_idle_high_END (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_idle_high_START (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_idle_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg1_value0_mmc0 : 7;
        unsigned int clk_8bit_cfg1_vld0_mmc0 : 1;
        unsigned int reserved_0 : 7;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 7;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 7;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT1_clk_8bit_cfg1_value0_mmc0_START (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT1_clk_8bit_cfg1_value0_mmc0_END (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT1_clk_8bit_cfg1_vld0_mmc0_START (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT1_clk_8bit_cfg1_vld0_mmc0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg2_value0_mmc1 : 7;
        unsigned int clk_8bit_cfg2_vld0_mmc1 : 1;
        unsigned int reserved_0 : 7;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 7;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 7;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT2_clk_8bit_cfg2_value0_mmc1_START (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT2_clk_8bit_cfg2_value0_mmc1_END (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT2_clk_8bit_cfg2_vld0_mmc1_START (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT2_clk_8bit_cfg2_vld0_mmc1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg3_value0_mmc2 : 7;
        unsigned int clk_8bit_cfg3_vld0_mmc2 : 1;
        unsigned int reserved_0 : 7;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 7;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 7;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT3_clk_8bit_cfg3_value0_mmc2_START (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT3_clk_8bit_cfg3_value0_mmc2_END (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT3_clk_8bit_cfg3_vld0_mmc2_START (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT3_clk_8bit_cfg3_vld0_mmc2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg4_value0_hifi : 7;
        unsigned int clk_8bit_cfg4_vld0_hifi : 1;
        unsigned int clk_8bit_cfg4_value1_dacodec : 7;
        unsigned int clk_8bit_cfg4_vld1_dacodec : 1;
        unsigned int clk_8bit_cfg4_value2_pll_test : 7;
        unsigned int clk_8bit_cfg4_vld2_pll_test : 1;
        unsigned int clk_8bit_cfg4_value3_dapb : 7;
        unsigned int clk_8bit_cfg4_vld3_dapb : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT4_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value0_hifi_START (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value0_hifi_END (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld0_hifi_START (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld0_hifi_END (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value1_dacodec_START (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value1_dacodec_END (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld1_dacodec_START (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld1_dacodec_END (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value2_pll_test_START (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value2_pll_test_END (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld2_pll_test_START (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld2_pll_test_END (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value3_dapb_START (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value3_dapb_END (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld3_dapb_START (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld3_dapb_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg5_value0 : 7;
        unsigned int clk_8bit_cfg5_vld0 : 1;
        unsigned int clk_8bit_cfg5_value1 : 7;
        unsigned int clk_8bit_cfg5_vld1 : 1;
        unsigned int clk_8bit_cfg5_value2 : 7;
        unsigned int clk_8bit_cfg5_vld2 : 1;
        unsigned int clk_8bit_cfg5_value3 : 7;
        unsigned int clk_8bit_cfg5_vld3 : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT5_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value0_START (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value0_END (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld0_START (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld0_END (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value1_START (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value1_END (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld1_START (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld1_END (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value2_START (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value2_END (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld2_START (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld2_END (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value3_START (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value3_END (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld3_START (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg6_value0 : 7;
        unsigned int clk_8bit_cfg6_vld0 : 1;
        unsigned int clk_8bit_cfg6_value1 : 7;
        unsigned int clk_8bit_cfg6_vld1 : 1;
        unsigned int clk_8bit_cfg6_value2 : 7;
        unsigned int clk_8bit_cfg6_vld2 : 1;
        unsigned int clk_8bit_cfg6_value3 : 7;
        unsigned int clk_8bit_cfg6_vld3 : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT6_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value0_START (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value0_END (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld0_START (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld0_END (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value1_START (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value1_END (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld1_START (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld1_END (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value2_START (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value2_END (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld2_START (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld2_END (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value3_START (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value3_END (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld3_START (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg7_value0 : 7;
        unsigned int clk_8bit_cfg7_vld0 : 1;
        unsigned int clk_8bit_cfg7_value1 : 7;
        unsigned int clk_8bit_cfg7_vld1 : 1;
        unsigned int clk_8bit_cfg7_value2 : 7;
        unsigned int clk_8bit_cfg7_vld2 : 1;
        unsigned int clk_8bit_cfg7_value3 : 7;
        unsigned int clk_8bit_cfg7_vld3 : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT7_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value0_START (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value0_END (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld0_START (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld0_END (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value1_START (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value1_END (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld1_START (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld1_END (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value2_START (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value2_END (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld2_START (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld2_END (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value3_START (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value3_END (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld3_START (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg8_value0 : 7;
        unsigned int clk_8bit_cfg8_vld0 : 1;
        unsigned int clk_8bit_cfg8_value1 : 7;
        unsigned int clk_8bit_cfg8_vld1 : 1;
        unsigned int clk_8bit_cfg8_value2 : 7;
        unsigned int clk_8bit_cfg8_vld2 : 1;
        unsigned int clk_8bit_cfg8_value3 : 7;
        unsigned int clk_8bit_cfg8_vld3 : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value0_START (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value0_END (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld0_START (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld0_END (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value1_START (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value1_END (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld1_START (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld1_END (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value2_START (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value2_END (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld2_START (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld2_END (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value3_START (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value3_END (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld3_START (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg9_value0 : 7;
        unsigned int clk_8bit_cfg9_vld0 : 1;
        unsigned int clk_8bit_cfg9_value1 : 7;
        unsigned int clk_8bit_cfg9_vld1 : 1;
        unsigned int clk_8bit_cfg9_value2 : 7;
        unsigned int clk_8bit_cfg9_vld2 : 1;
        unsigned int clk_8bit_cfg9_value3 : 7;
        unsigned int clk_8bit_cfg9_vld3 : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value0_START (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value0_END (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld0_START (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld0_END (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value1_START (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value1_END (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld1_START (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld1_END (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value2_START (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value2_END (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld2_START (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld2_END (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value3_START (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value3_END (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld3_START (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg10_value0 : 7;
        unsigned int clk_8bit_cfg10_vld0 : 1;
        unsigned int clk_8bit_cfg10_value1 : 7;
        unsigned int clk_8bit_cfg10_vld1 : 1;
        unsigned int clk_8bit_cfg10_value2 : 7;
        unsigned int clk_8bit_cfg10_vld2 : 1;
        unsigned int clk_8bit_cfg10_value3 : 7;
        unsigned int clk_8bit_cfg10_vld3 : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT10_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value0_START (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value0_END (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld0_START (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld0_END (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value1_START (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value1_END (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld1_START (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld1_END (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value2_START (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value2_END (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld2_START (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld2_END (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value3_START (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value3_END (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld3_START (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int carm_ramctrl_s_ema : 3;
        unsigned int reserved_0 : 1;
        unsigned int carm_ramctrl_s_emaw : 2;
        unsigned int carm_ramctrl_s_emas : 1;
        unsigned int reserved_1 : 3;
        unsigned int carm_ramctrl_s_ret1n : 1;
        unsigned int carm_ramctrl_s_ret2n : 1;
        unsigned int carm_ramctrl_s_pgen : 1;
        unsigned int reserved_2 : 3;
        unsigned int carm_cp15disable : 1;
        unsigned int carm_cfgdisable : 1;
        unsigned int carm_l2rstdisable : 1;
        unsigned int carm_l1rstdisable : 1;
        unsigned int carm_dbgrestart : 1;
        unsigned int carm_debug_req : 1;
        unsigned int carm_dbgpwrup : 1;
        unsigned int reserved_3 : 3;
        unsigned int secure_cfg_tzpc_dep : 1;
        unsigned int secure_cfg_seceng : 1;
        unsigned int secure_cfg_i2c0 : 1;
        unsigned int secure_cfg_i2c1 : 1;
        unsigned int secure_cfg_i2c2 : 1;
        unsigned int secure_cfg_i2c3 : 1;
    } reg;
} SOC_PERI_SCTRL_SC_CARM_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ema_START (0)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ema_END (2)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_emaw_START (4)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_emaw_END (5)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_emas_START (6)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_emas_END (6)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ret1n_START (10)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ret1n_END (10)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ret2n_START (11)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ret2n_END (11)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_pgen_START (12)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_pgen_END (12)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_cp15disable_START (16)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_cp15disable_END (16)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_cfgdisable_START (17)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_cfgdisable_END (17)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_l2rstdisable_START (18)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_l2rstdisable_END (18)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_l1rstdisable_START (19)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_l1rstdisable_END (19)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_dbgrestart_START (20)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_dbgrestart_END (20)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_debug_req_START (21)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_debug_req_END (21)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_dbgpwrup_START (22)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_dbgpwrup_END (22)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_tzpc_dep_START (26)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_tzpc_dep_END (26)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_seceng_START (27)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_seceng_END (27)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c0_START (28)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c0_END (28)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c1_START (29)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c1_END (29)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c2_START (30)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c2_END (30)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c3_START (31)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ccpu_cfgte : 1;
        unsigned int carm_cfgend : 1;
        unsigned int carm_vinithi : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_PERI_SCTRL_SC_CARM_CTRL1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_ccpu_cfgte_START (0)
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_ccpu_cfgte_END (0)
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_carm_cfgend_START (1)
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_carm_cfgend_END (1)
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_carm_vinithi_START (2)
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_carm_vinithi_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int carm_dbgtrigger : 1;
        unsigned int carm_dbgrestarted : 1;
        unsigned int carm_dbgnopwrdwn : 1;
        unsigned int carm_dbgpwrupreq : 1;
        unsigned int carm_smp_amp : 1;
        unsigned int carm_standby_wfi : 1;
        unsigned int carm_standby_wfe : 1;
        unsigned int carm_dbgack : 1;
        unsigned int carm_standbywfil2 : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_PERI_SCTRL_SC_CARM_STAT0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgtrigger_START (0)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgtrigger_END (0)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgrestarted_START (1)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgrestarted_END (1)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgnopwrdwn_START (2)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgnopwrdwn_END (2)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgpwrupreq_START (3)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgpwrupreq_END (3)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_smp_amp_START (4)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_smp_amp_END (4)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standby_wfi_START (5)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standby_wfi_END (5)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standby_wfe_START (6)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standby_wfe_END (6)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgack_START (7)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgack_END (7)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standbywfil2_START (8)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standbywfil2_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hifi_stat_vector_sel : 1;
        unsigned int hifi_ocd_halton_reset : 1;
        unsigned int hifi_runstall : 1;
        unsigned int reserved_0 : 27;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_stat_vector_sel_START (0)
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_stat_vector_sel_END (0)
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_ocd_halton_reset_START (1)
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_ocd_halton_reset_END (1)
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_runstall_START (2)
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_runstall_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hifi_nmi : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_CTRL1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_CTRL1_hifi_nmi_START (0)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL1_hifi_nmi_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hifi_instruction_remap_addr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_CTRL0_hifi_instruction_remap_addr_START (0)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL0_hifi_instruction_remap_addr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hifi_boot_addr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_CTRL2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_CTRL2_hifi_boot_addr_START (0)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL2_hifi_boot_addr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hifi_access_start_addr0 : 12;
        unsigned int hifi_access_end_addr0 : 12;
        unsigned int hifi_access_permit : 1;
        unsigned int reserved_0 : 3;
        unsigned int hifi_access_en : 1;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_CTRL3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_start_addr0_START (0)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_start_addr0_END (11)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_end_addr0_START (12)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_end_addr0_END (23)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_permit_START (24)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_permit_END (24)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_en_START (28)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_en_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hifi_access_start_addr1 : 12;
        unsigned int hifi_access_end_addr1 : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_CTRL4_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_CTRL4_hifi_access_start_addr1_START (0)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL4_hifi_access_start_addr1_END (11)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL4_hifi_access_end_addr1_START (12)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL4_hifi_access_end_addr1_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int temp0_lag : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_LAG_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_LAG_temp0_lag_START (0)
#define SOC_PERI_SCTRL_SC_TEMP0_LAG_temp0_lag_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int temp0_0th : 8;
        unsigned int temp0_1th : 8;
        unsigned int temp0_2th : 8;
        unsigned int temp0_3th : 8;
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_TH_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_0th_START (0)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_0th_END (7)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_1th_START (8)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_1th_END (15)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_2th_START (16)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_2th_END (23)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_3th_START (24)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_3th_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int temp0_rst_th : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_RST_TH_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_RST_TH_temp0_rst_th_START (0)
#define SOC_PERI_SCTRL_SC_TEMP0_RST_TH_temp0_rst_th_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int temp0_trim_raw : 4;
        unsigned int temp0_ct_sel_raw : 2;
        unsigned int reserved_0 : 6;
        unsigned int temp0_test_raw : 8;
        unsigned int reserved_1 : 12;
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_CFG_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_trim_raw_START (0)
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_trim_raw_END (3)
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_ct_sel_raw_START (4)
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_ct_sel_raw_END (5)
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_test_raw_START (12)
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_test_raw_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int temp0_en_raw : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_EN_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_EN_temp0_en_raw_START (0)
#define SOC_PERI_SCTRL_SC_TEMP0_EN_temp0_en_raw_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int temp0_int_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_INT_EN_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_START (0)
#define SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int temp0_int_clr : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_temp0_int_clr_START (0)
#define SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_temp0_int_clr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int temp0_rst_msk : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_temp0_rst_msk_START (0)
#define SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_temp0_rst_msk_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int temp0_rawint : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_RAW_INT_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_RAW_INT_temp0_rawint_START (0)
#define SOC_PERI_SCTRL_SC_TEMP0_RAW_INT_temp0_rawint_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int temp0_mskint : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_MSK_INT_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_MSK_INT_temp0_mskint_START (0)
#define SOC_PERI_SCTRL_SC_TEMP0_MSK_INT_temp0_mskint_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int temp0_out_s : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_VALUE_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_VALUE_temp0_out_s_START (0)
#define SOC_PERI_SCTRL_SC_TEMP0_VALUE_temp0_out_s_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved7 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED7_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED7_sc_reserved7_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED7_sc_reserved7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved8 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED8_sc_reserved8_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED8_sc_reserved8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved11 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED11_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED11_sc_reserved11_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED11_sc_reserved11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved12 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED12_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED12_sc_reserved12_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED12_sc_reserved12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved13 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED13_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED13_sc_reserved13_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED13_sc_reserved13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved14 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED14_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED14_sc_reserved14_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED14_sc_reserved14_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved15 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED15_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED15_sc_reserved15_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED15_sc_reserved15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved16 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED16_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED16_sc_reserved16_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED16_sc_reserved16_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved17 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED17_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED17_sc_reserved17_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED17_sc_reserved17_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved18 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED18_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED18_sc_reserved18_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED18_sc_reserved18_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved21 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED21_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED21_sc_reserved21_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED21_sc_reserved21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved22 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED22_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED22_sc_reserved22_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED22_sc_reserved22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved23 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED23_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED23_sc_reserved23_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED23_sc_reserved23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved24 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED24_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED24_sc_reserved24_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED24_sc_reserved24_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved25 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED25_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED25_sc_reserved25_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED25_sc_reserved25_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved26 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED26_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED26_sc_reserved26_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED26_sc_reserved26_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved27 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED27_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED27_sc_reserved27_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED27_sc_reserved27_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved28 : 32;
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED28_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED28_sc_reserved28_START (0)
#define SOC_PERI_SCTRL_SC_RESERVED28_sc_reserved28_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
