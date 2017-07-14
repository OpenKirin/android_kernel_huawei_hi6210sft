#ifndef __SOC_AO_SCTRL_INTERFACE_H__
#define __SOC_AO_SCTRL_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_AO_SCTRL_SC_SYS_CTRL0_ADDR(base) ((base) + (0x000))
#define SOC_AO_SCTRL_SC_SYS_CTRL1_ADDR(base) ((base) + (0x004))
#define SOC_AO_SCTRL_SC_SYS_CTRL2_ADDR(base) ((base) + (0x008))
#define SOC_AO_SCTRL_SC_SYS_STAT0_ADDR(base) ((base) + (0x010))
#define SOC_AO_SCTRL_SC_SYS_STAT1_ADDR(base) ((base) + (0x014))
#define SOC_AO_SCTRL_SC_MCU_IMCTRL_ADDR(base) ((base) + (0x018))
#define SOC_AO_SCTRL_SC_MCU_IMSTAT_ADDR(base) ((base) + (0x01C))
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_ADDR(base) ((base) + (0x044))
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_ADDR(base) ((base) + (0x048))
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_ADDR(base) ((base) + (0x04C))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_ADDR(base) ((base) + (0x054))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_ADDR(base) ((base) + (0x058))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_ADDR(base) ((base) + (0x05C))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_ADDR(base) ((base) + (0x064))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_ADDR(base) ((base) + (0x068))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_ADDR(base) ((base) + (0x06C))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_ADDR(base) ((base) + (0x094))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_ADDR(base) ((base) + (0x098))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_ADDR(base) ((base) + (0x09C))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_ADDR(base) ((base) + (0x0A8))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_ADDR(base) ((base) + (0x0AC))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_ADDR(base) ((base) + (0x0B0))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_ADDR(base) ((base) + (0x0B4))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_ADDR(base) ((base) + (0x0B8))
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_ADDR(base) ((base) + (0x0BC))
#define SOC_AO_SCTRL_SC_INT_STATR_ADDR(base) ((base) + (0x0C4))
#define SOC_AO_SCTRL_SC_INT_STATM_ADDR(base) ((base) + (0x0C8))
#define SOC_AO_SCTRL_SC_INT_CLEAR_ADDR(base) ((base) + (0x0CC))
#define SOC_AO_SCTRL_SC_INT_EN_SET_ADDR(base) ((base) + (0x0D0))
#define SOC_AO_SCTRL_SC_INT_EN_DIS_ADDR(base) ((base) + (0x0D4))
#define SOC_AO_SCTRL_SC_INT_EN_STAT_ADDR(base) ((base) + (0x0D8))
#define SOC_AO_SCTRL_SC_INT_STATR1_ADDR(base) ((base) + (0x0E4))
#define SOC_AO_SCTRL_SC_INT_STATM1_ADDR(base) ((base) + (0x0E8))
#define SOC_AO_SCTRL_SC_INT_CLEAR1_ADDR(base) ((base) + (0x0EC))
#define SOC_AO_SCTRL_SC_INT_EN_SET1_ADDR(base) ((base) + (0x0F0))
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_ADDR(base) ((base) + (0x0F4))
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_ADDR(base) ((base) + (0x0F8))
#define SOC_AO_SCTRL_SC_TIMER_EN0_ADDR(base) ((base) + (0x1D0))
#define SOC_AO_SCTRL_SC_TIMER_EN1_ADDR(base) ((base) + (0x1D4))
#define SOC_AO_SCTRL_SC_TIMER_EN4_ADDR(base) ((base) + (0x1F0))
#define SOC_AO_SCTRL_SC_TIMER_EN5_ADDR(base) ((base) + (0x1F4))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL0_ADDR(base) ((base) + (0x400))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_ADDR(base) ((base) + (0x404))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL2_ADDR(base) ((base) + (0x408))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_ADDR(base) ((base) + (0x40C))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_ADDR(base) ((base) + (0x410))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_ADDR(base) ((base) + (0x414))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_ADDR(base) ((base) + (0x418))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL7_ADDR(base) ((base) + (0x41C))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_ADDR(base) ((base) + (0x440))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT1_ADDR(base) ((base) + (0x444))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT2_ADDR(base) ((base) + (0x448))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT3_ADDR(base) ((base) + (0x44C))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_ADDR(base) ((base) + (0x450))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT5_ADDR(base) ((base) + (0x454))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT6_ADDR(base) ((base) + (0x458))
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_ADDR(base) ((base) + (0x45C))
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_ADDR(base) ((base) + (0x630))
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_ADDR(base) ((base) + (0x634))
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_ADDR(base) ((base) + (0x638))
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_ADDR(base) ((base) + (0x63C))
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_ADDR(base) ((base) + (0x640))
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_ADDR(base) ((base) + (0x644))
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_ADDR(base) ((base) + (0x6F0))
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_ADDR(base) ((base) + (0x6F4))
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_ADDR(base) ((base) + (0x6F8))
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN5_ADDR(base) ((base) + (0x6FC))
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS5_ADDR(base) ((base) + (0x700))
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT5_ADDR(base) ((base) + (0x704))
#define SOC_AO_SCTRL_SC_PW_CLKEN0_ADDR(base) ((base) + (0x800))
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_ADDR(base) ((base) + (0x804))
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_ADDR(base) ((base) + (0x808))
#define SOC_AO_SCTRL_SC_PW_RSTEN0_ADDR(base) ((base) + (0x810))
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_ADDR(base) ((base) + (0x814))
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_ADDR(base) ((base) + (0x818))
#define SOC_AO_SCTRL_SC_PW_ISOEN0_ADDR(base) ((base) + (0x820))
#define SOC_AO_SCTRL_SC_PW_ISODIS0_ADDR(base) ((base) + (0x824))
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_ADDR(base) ((base) + (0x828))
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_ADDR(base) ((base) + (0x830))
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_ADDR(base) ((base) + (0x834))
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_ADDR(base) ((base) + (0x838))
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_ADDR(base) ((base) + (0x83C))
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_ADDR(base) ((base) + (0x840))
#define SOC_AO_SCTRL_SC_PW_STAT0_ADDR(base) ((base) + (0x850))
#define SOC_AO_SCTRL_SC_PW_STAT1_ADDR(base) ((base) + (0x854))
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_ADDR(base) ((base) + (0x880))
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT0_ADDR(base) ((base) + (0x890))
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT1_ADDR(base) ((base) + (0x894))
#define SOC_AO_SCTRL_SC_PW_CTRL1_ADDR(base) ((base) + (0x8C8))
#define SOC_AO_SCTRL_SC_PW_CTRL_ADDR(base) ((base) + (0x8CC))
#define SOC_AO_SCTRL_SC_MCPU_VOTEEN_ADDR(base) ((base) + (0x8D0))
#define SOC_AO_SCTRL_SC_MCPU_VOTEDIS_ADDR(base) ((base) + (0x8D4))
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT_ADDR(base) ((base) + (0x8D8))
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK0_ADDR(base) ((base) + (0x8E0))
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK1_ADDR(base) ((base) + (0x8E4))
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_ADDR(base) ((base) + (0x8E8))
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_ADDR(base) ((base) + (0x8EC))
#define SOC_AO_SCTRL_SC_PERI_VOTEEN_ADDR(base) ((base) + (0x8F0))
#define SOC_AO_SCTRL_SC_PERI_VOTEDIS_ADDR(base) ((base) + (0x8F4))
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT_ADDR(base) ((base) + (0x8F8))
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK0_ADDR(base) ((base) + (0x900))
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK1_ADDR(base) ((base) + (0x904))
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_ADDR(base) ((base) + (0x908))
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_ADDR(base) ((base) + (0x90C))
#define SOC_AO_SCTRL_SC_ACPU_VOTEEN_ADDR(base) ((base) + (0x910))
#define SOC_AO_SCTRL_SC_ACPU_VOTEDIS_ADDR(base) ((base) + (0x914))
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT_ADDR(base) ((base) + (0x918))
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK0_ADDR(base) ((base) + (0x920))
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK1_ADDR(base) ((base) + (0x924))
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_ADDR(base) ((base) + (0x928))
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_ADDR(base) ((base) + (0x92C))
#define SOC_AO_SCTRL_SC_MCU_VOTEEN_ADDR(base) ((base) + (0x930))
#define SOC_AO_SCTRL_SC_MCU_VOTEDIS_ADDR(base) ((base) + (0x934))
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT_ADDR(base) ((base) + (0x938))
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK0_ADDR(base) ((base) + (0x940))
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK1_ADDR(base) ((base) + (0x944))
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT0_MSK_ADDR(base) ((base) + (0x948))
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT1_MSK_ADDR(base) ((base) + (0x94C))
#define SOC_AO_SCTRL_SC_MCU_VOTE1EN_ADDR(base) ((base) + (0x960))
#define SOC_AO_SCTRL_SC_MCU_VOTE1DIS_ADDR(base) ((base) + (0x964))
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT_ADDR(base) ((base) + (0x968))
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK0_ADDR(base) ((base) + (0x970))
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK1_ADDR(base) ((base) + (0x974))
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT0_MSK_ADDR(base) ((base) + (0x978))
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT1_MSK_ADDR(base) ((base) + (0x97C))
#define SOC_AO_SCTRL_SC_MCU_VOTE2EN_ADDR(base) ((base) + (0x980))
#define SOC_AO_SCTRL_SC_MCU_VOTE2DIS_ADDR(base) ((base) + (0x984))
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT_ADDR(base) ((base) + (0x988))
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK0_ADDR(base) ((base) + (0x990))
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK1_ADDR(base) ((base) + (0x994))
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT0_MSK_ADDR(base) ((base) + (0x998))
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT1_MSK_ADDR(base) ((base) + (0x99C))
#define SOC_AO_SCTRL_SC_VOTE_CTRL_ADDR(base) ((base) + (0x9A0))
#define SOC_AO_SCTRL_SC_VOTE_STAT_ADDR(base) ((base) + (0x9A4))
#define SOC_AO_SCTRL_SC_ECONUM_ADDR(base) ((base) + (0xF00))
#define SOC_AO_SCTRL_SCCHIPID_ADDR(base) ((base) + (0xF10))
#define SOC_AO_SCTRL_SCSOCID_ADDR(base) ((base) + (0xF1C))
#define SOC_AO_SCTRL_SC_SOC_FPGA_RTL_DEF_ADDR(base) ((base) + (0xFE0))
#define SOC_AO_SCTRL_SC_SOC_FPGA_PR_DEF_ADDR(base) ((base) + (0xFE4))
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF0_ADDR(base) ((base) + (0xFE8))
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF1_ADDR(base) ((base) + (0xFEC))
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_ADDR(base) ((base) + (0x1028))
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_ADDR(base) ((base) + (0x102c))
#define SOC_AO_SCTRL_SC_XTAL_CTRL3_ADDR(base) ((base) + (0x1034))
#define SOC_AO_SCTRL_SC_XTAL_CTRL5_ADDR(base) ((base) + (0x103C))
#define SOC_AO_SCTRL_SC_XTAL_STAT0_ADDR(base) ((base) + (0x1060))
#define SOC_AO_SCTRL_SC_XTAL_STAT1_ADDR(base) ((base) + (0x1070))
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID0_ADDR(base) ((base) + (0x1080))
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID1_ADDR(base) ((base) + (0x1084))
#define SOC_AO_SCTRL_SC_EFUSE_SYS_CTRL_ADDR(base) ((base) + (0x1088))
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_ADDR(base) ((base) + (0x1288))
#define SOC_AO_SCTRL_SC_DBG_STAT_ADDR(base) ((base) + (0x12B4))
#define SOC_AO_SCTRL_SC_ARM_DBG_KEY0_ADDR(base) ((base) + (0x12B8))
#define SOC_AO_SCTRL_SC_RESERVED31_ADDR(base) ((base) + (0x13A0))
#define SOC_AO_SCTRL_SC_RESERVED32_ADDR(base) ((base) + (0x13A4))
#define SOC_AO_SCTRL_SC_RESERVED33_ADDR(base) ((base) + (0x13A8))
#define SOC_AO_SCTRL_SC_RESERVED34_ADDR(base) ((base) + (0x13AC))
#define SOC_AO_SCTRL_SC_RESERVED35_ADDR(base) ((base) + (0x13B0))
#define SOC_AO_SCTRL_SC_RESERVED36_ADDR(base) ((base) + (0x13B4))
#define SOC_AO_SCTRL_SC_RESERVED37_ADDR(base) ((base) + (0x13B8))
#define SOC_AO_SCTRL_SC_RESERVED38_ADDR(base) ((base) + (0x13BC))
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_ADDR(base) ((base) + (0x1480))
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_ADDR(base) ((base) + (0x1484))
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_ADDR(base) ((base) + (0x1488))
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_ADDR(base) ((base) + (0x148C))
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_ADDR(base) ((base) + (0x14A8))
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_ADDR(base) ((base) + (0x14AC))
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ADDR(base) ((base) + (0x14C0))
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_ADDR(base) ((base) + (0x14C4))
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_ADDR(base) ((base) + (0x14C8))
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_ADDR(base) ((base) + (0x14CC))
#define SOC_AO_SCTRL_SC_PWUP_TIME0_ADDR(base) ((base) + (0x1880))
#define SOC_AO_SCTRL_SC_PWUP_TIME1_ADDR(base) ((base) + (0x1884))
#define SOC_AO_SCTRL_SC_PWUP_TIME2_ADDR(base) ((base) + (0x1888))
#define SOC_AO_SCTRL_SC_PWUP_TIME3_ADDR(base) ((base) + (0x188C))
#define SOC_AO_SCTRL_SC_PWUP_TIME4_ADDR(base) ((base) + (0x1890))
#define SOC_AO_SCTRL_SC_PWUP_TIME5_ADDR(base) ((base) + (0x1894))
#define SOC_AO_SCTRL_SC_PWUP_TIME6_ADDR(base) ((base) + (0x1898))
#define SOC_AO_SCTRL_SC_PWUP_TIME7_ADDR(base) ((base) + (0x189C))
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_ADDR(base) ((base) + (0x1C04))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int modectrl0_sftcfg : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_AO_SCTRL_SC_SYS_CTRL0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYS_CTRL0_modectrl0_sftcfg_START (0)
#define SOC_AO_SCTRL_SC_SYS_CTRL0_modectrl0_sftcfg_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aarm_wd_rst_cfg : 1;
        unsigned int remap_sram_aarm : 1;
        unsigned int efusec_remap : 1;
        unsigned int ext_pll_sel : 1;
        unsigned int mcu_wdg0_rstmcu_cfg : 1;
        unsigned int reserved_0 : 1;
        unsigned int usim0_hpd_de_bounce_cfg : 1;
        unsigned int usim0_hpd_oe_cfg : 1;
        unsigned int usim1_hpd_de_bounce_cfg : 1;
        unsigned int usim1_hpd_oe_cfg : 1;
        unsigned int bus_dfs_fore_hd_cfg : 1;
        unsigned int bus_dfs_fore_hd_cfg1 : 1;
        unsigned int usim0_hpd_oe_sft : 1;
        unsigned int usim1_hpd_oe_sft : 1;
        unsigned int reserved_1 : 1;
        unsigned int mcu_clken_hardcfg : 1;
        unsigned int aarm_wd_rst_cfg_msk : 1;
        unsigned int remap_sram_aarm_msk : 1;
        unsigned int efusec_remap_msk : 1;
        unsigned int ext_pll_sel_msk : 1;
        unsigned int mcu_wdg0_rstmcu_cfg_msk : 1;
        unsigned int reserved_2 : 1;
        unsigned int usim0_hpd_de_bounce_cfg_msk : 1;
        unsigned int usim0_hpd_oe_cfg_msk : 1;
        unsigned int usim1_hpd_de_bounce_cfg_msk : 1;
        unsigned int usim1_hpd_oe_cfg_msk : 1;
        unsigned int bus_dfs_fore_hd_cfg_msk : 1;
        unsigned int bus_dfs_fore_hd_cfg1_msk : 1;
        unsigned int usim0_hpd_oe_sft_msk : 1;
        unsigned int usim1_hpd_oe_sft_msk : 1;
        unsigned int reserved_3 : 1;
        unsigned int mcu_clken_hardcfg_msk : 1;
    } reg;
} SOC_AO_SCTRL_SC_SYS_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYS_CTRL1_aarm_wd_rst_cfg_START (0)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_aarm_wd_rst_cfg_END (0)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_remap_sram_aarm_START (1)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_remap_sram_aarm_END (1)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_efusec_remap_START (2)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_efusec_remap_END (2)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_ext_pll_sel_START (3)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_ext_pll_sel_END (3)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_wdg0_rstmcu_cfg_START (4)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_wdg0_rstmcu_cfg_END (4)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_de_bounce_cfg_START (6)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_de_bounce_cfg_END (6)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_cfg_START (7)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_cfg_END (7)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_de_bounce_cfg_START (8)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_de_bounce_cfg_END (8)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_cfg_START (9)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_cfg_END (9)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg_START (10)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg_END (10)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg1_START (11)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg1_END (11)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_sft_START (12)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_sft_END (12)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_sft_START (13)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_sft_END (13)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_clken_hardcfg_START (15)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_clken_hardcfg_END (15)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_aarm_wd_rst_cfg_msk_START (16)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_aarm_wd_rst_cfg_msk_END (16)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_remap_sram_aarm_msk_START (17)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_remap_sram_aarm_msk_END (17)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_efusec_remap_msk_START (18)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_efusec_remap_msk_END (18)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_ext_pll_sel_msk_START (19)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_ext_pll_sel_msk_END (19)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_wdg0_rstmcu_cfg_msk_START (20)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_wdg0_rstmcu_cfg_msk_END (20)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_de_bounce_cfg_msk_START (22)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_de_bounce_cfg_msk_END (22)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_cfg_msk_START (23)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_cfg_msk_END (23)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_de_bounce_cfg_msk_START (24)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_de_bounce_cfg_msk_END (24)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_cfg_msk_START (25)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_cfg_msk_END (25)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg_msk_START (26)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg_msk_END (26)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg1_msk_START (27)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg1_msk_END (27)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_sft_msk_START (28)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_sft_msk_END (28)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_sft_msk_START (29)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_sft_msk_END (29)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_clken_hardcfg_msk_START (31)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_clken_hardcfg_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 26;
        unsigned int mcu_sft_rst_stat_clear : 1;
        unsigned int mcu_wdg0_rst_stat_clear : 1;
        unsigned int tsensor_rst_stat_clear : 1;
        unsigned int acpu_wdg_rst_stat_clear : 1;
        unsigned int mcu_wdg1_rst_stat_clear : 1;
        unsigned int glb_srst_stat_clear : 1;
    } reg;
} SOC_AO_SCTRL_SC_SYS_CTRL2_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_sft_rst_stat_clear_START (26)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_sft_rst_stat_clear_END (26)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_wdg0_rst_stat_clear_START (27)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_wdg0_rst_stat_clear_END (27)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_tsensor_rst_stat_clear_START (28)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_tsensor_rst_stat_clear_END (28)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_acpu_wdg_rst_stat_clear_START (29)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_acpu_wdg_rst_stat_clear_END (29)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_wdg1_rst_stat_clear_START (30)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_wdg1_rst_stat_clear_END (30)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_glb_srst_stat_clear_START (31)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_glb_srst_stat_clear_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 25;
        unsigned int mcu_rst_stat : 1;
        unsigned int mcu_softrst_stat : 1;
        unsigned int mcu_wdgrst_stat : 1;
        unsigned int tsensor_hardrst_stat : 1;
        unsigned int acpu_wd_glb_rst_stat : 1;
        unsigned int cm3_wdg1_rst_stat : 1;
        unsigned int glb_srst_stat : 1;
    } reg;
} SOC_AO_SCTRL_SC_SYS_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_rst_stat_START (25)
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_rst_stat_END (25)
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_softrst_stat_START (26)
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_softrst_stat_END (26)
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_wdgrst_stat_START (27)
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_wdgrst_stat_END (27)
#define SOC_AO_SCTRL_SC_SYS_STAT0_tsensor_hardrst_stat_START (28)
#define SOC_AO_SCTRL_SC_SYS_STAT0_tsensor_hardrst_stat_END (28)
#define SOC_AO_SCTRL_SC_SYS_STAT0_acpu_wd_glb_rst_stat_START (29)
#define SOC_AO_SCTRL_SC_SYS_STAT0_acpu_wd_glb_rst_stat_END (29)
#define SOC_AO_SCTRL_SC_SYS_STAT0_cm3_wdg1_rst_stat_START (30)
#define SOC_AO_SCTRL_SC_SYS_STAT0_cm3_wdg1_rst_stat_END (30)
#define SOC_AO_SCTRL_SC_SYS_STAT0_glb_srst_stat_START (31)
#define SOC_AO_SCTRL_SC_SYS_STAT0_glb_srst_stat_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mode_status : 4;
        unsigned int reserved_0 : 12;
        unsigned int boot_sel_lock : 1;
        unsigned int func_mode_lock : 2;
        unsigned int boot_mode_lock : 1;
        unsigned int fun_jtag_mode_out : 2;
        unsigned int reserved_1 : 5;
        unsigned int security_boot_flg : 1;
        unsigned int efuse_nandboot_msk : 1;
        unsigned int efuse_nand_bitwide : 1;
        unsigned int reserved_2 : 2;
    } reg;
} SOC_AO_SCTRL_SC_SYS_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYS_STAT1_mode_status_START (0)
#define SOC_AO_SCTRL_SC_SYS_STAT1_mode_status_END (3)
#define SOC_AO_SCTRL_SC_SYS_STAT1_boot_sel_lock_START (16)
#define SOC_AO_SCTRL_SC_SYS_STAT1_boot_sel_lock_END (16)
#define SOC_AO_SCTRL_SC_SYS_STAT1_func_mode_lock_START (17)
#define SOC_AO_SCTRL_SC_SYS_STAT1_func_mode_lock_END (18)
#define SOC_AO_SCTRL_SC_SYS_STAT1_boot_mode_lock_START (19)
#define SOC_AO_SCTRL_SC_SYS_STAT1_boot_mode_lock_END (19)
#define SOC_AO_SCTRL_SC_SYS_STAT1_fun_jtag_mode_out_START (20)
#define SOC_AO_SCTRL_SC_SYS_STAT1_fun_jtag_mode_out_END (21)
#define SOC_AO_SCTRL_SC_SYS_STAT1_security_boot_flg_START (27)
#define SOC_AO_SCTRL_SC_SYS_STAT1_security_boot_flg_END (27)
#define SOC_AO_SCTRL_SC_SYS_STAT1_efuse_nandboot_msk_START (28)
#define SOC_AO_SCTRL_SC_SYS_STAT1_efuse_nandboot_msk_END (28)
#define SOC_AO_SCTRL_SC_SYS_STAT1_efuse_nand_bitwide_START (29)
#define SOC_AO_SCTRL_SC_SYS_STAT1_efuse_nand_bitwide_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int itmd_en0 : 1;
        unsigned int itmd_ctrl0 : 3;
        unsigned int reserved : 28;
    } reg;
} SOC_AO_SCTRL_SC_MCU_IMCTRL_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_IMCTRL_itmd_en0_START (0)
#define SOC_AO_SCTRL_SC_MCU_IMCTRL_itmd_en0_END (0)
#define SOC_AO_SCTRL_SC_MCU_IMCTRL_itmd_ctrl0_START (1)
#define SOC_AO_SCTRL_SC_MCU_IMCTRL_itmd_ctrl0_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int itmd_stat0_sftcfg : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_AO_SCTRL_SC_MCU_IMSTAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_IMSTAT_itmd_stat0_sftcfg_START (0)
#define SOC_AO_SCTRL_SC_MCU_IMSTAT_itmd_stat0_sftcfg_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_secondry_int_en0_0bit : 1;
        unsigned int sc_secondry_int_en0_1bit : 1;
        unsigned int sc_secondry_int_en0_2bit : 1;
        unsigned int sc_secondry_int_en0_15bit : 13;
        unsigned int sc_secondry_int_en0_16bit : 1;
        unsigned int sc_secondry_int_en0_17bit : 1;
        unsigned int sc_secondry_int_en0_18bit : 1;
        unsigned int sc_secondry_int_en0_19bit : 1;
        unsigned int sc_secondry_int_en0_20bit : 1;
        unsigned int sc_secondry_int_en0_21bit : 1;
        unsigned int sc_secondry_int_en0_22bit : 1;
        unsigned int sc_secondry_int_en0_23bit : 1;
        unsigned int sc_secondry_int_en0_31bit : 8;
    } reg;
} SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_0bit_START (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_0bit_END (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_1bit_START (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_1bit_END (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_2bit_START (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_2bit_END (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_15bit_START (3)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_15bit_END (15)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_16bit_START (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_16bit_END (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_17bit_START (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_17bit_END (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_18bit_START (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_18bit_END (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_19bit_START (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_19bit_END (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_20bit_START (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_20bit_END (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_21bit_START (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_21bit_END (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_22bit_START (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_22bit_END (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_23bit_START (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_23bit_END (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_31bit_START (24)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_31bit_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_secondry_int_raw0_0bit : 1;
        unsigned int sc_secondry_int_raw0_1bit : 1;
        unsigned int sc_secondry_int_raw0_2bit : 1;
        unsigned int sc_secondry_int_raw0_15bit : 13;
        unsigned int sc_secondry_int_raw0_16bit : 1;
        unsigned int sc_secondry_int_raw0_17bit : 1;
        unsigned int sc_secondry_int_raw0_18bit : 1;
        unsigned int sc_secondry_int_raw0_19bit : 1;
        unsigned int sc_secondry_int_raw0_20bit : 1;
        unsigned int sc_secondry_int_raw0_21bit : 1;
        unsigned int sc_secondry_int_raw0_22bit : 1;
        unsigned int sc_secondry_int_raw0_23bit : 1;
        unsigned int sc_secondry_int_raw0_31bit : 8;
    } reg;
} SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_0bit_START (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_0bit_END (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_1bit_START (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_1bit_END (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_2bit_START (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_2bit_END (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_15bit_START (3)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_15bit_END (15)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_16bit_START (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_16bit_END (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_17bit_START (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_17bit_END (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_18bit_START (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_18bit_END (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_19bit_START (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_19bit_END (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_20bit_START (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_20bit_END (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_21bit_START (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_21bit_END (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_22bit_START (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_22bit_END (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_23bit_START (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_23bit_END (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_31bit_START (24)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_31bit_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_secondry_int_mask0_0bit : 1;
        unsigned int sc_secondry_int_mask0_1bit : 1;
        unsigned int sc_secondry_int_mask0_2bit : 1;
        unsigned int sc_secondry_int_mask0_15bit : 13;
        unsigned int sc_secondry_int_mask0_16bit : 1;
        unsigned int sc_secondry_int_mask0_17bit : 1;
        unsigned int sc_secondry_int_mask0_18bit : 1;
        unsigned int sc_secondry_int_mask0_19bit : 1;
        unsigned int sc_secondry_int_mask0_20bit : 1;
        unsigned int sc_secondry_int_mask0_21bit : 1;
        unsigned int sc_secondry_int_mask0_22bit : 1;
        unsigned int sc_secondry_int_mask0_23bit : 1;
        unsigned int sc_secondry_int_mask0_31bit : 8;
    } reg;
} SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_0bit_START (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_0bit_END (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_1bit_START (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_1bit_END (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_2bit_START (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_2bit_END (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_15bit_START (3)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_15bit_END (15)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_16bit_START (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_16bit_END (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_17bit_START (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_17bit_END (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_18bit_START (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_18bit_END (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_19bit_START (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_19bit_END (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_20bit_START (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_20bit_END (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_21bit_START (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_21bit_END (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_22bit_START (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_22bit_END (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_23bit_START (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_23bit_END (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_31bit_START (24)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_31bit_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_en6_WatchDog0 : 1;
        unsigned int mcu_wakeup_int_en6_WatchDog1 : 1;
        unsigned int mcu_wakeup_int_en6_WatchDog2 : 1;
        unsigned int mcu_wakeup_int_en6_CM3WatchDog1 : 1;
        unsigned int mcu_wakeup_int_en6_MWatchDog0 : 1;
        unsigned int mcu_wakeup_int_en6_GPIO14 : 1;
        unsigned int mcu_wakeup_int_en6_GPIO15 : 1;
        unsigned int mcu_wakeup_int_en6_GPIO16 : 1;
        unsigned int mcu_wakeup_int_en6_GPIO17 : 1;
        unsigned int mcu_wakeup_int_en6_GPIO18 : 1;
        unsigned int mcu_wakeup_int_en6_GPIO19 : 1;
        unsigned int mcu_wakeup_int_en6_CM3Timer2 : 1;
        unsigned int mcu_wakeup_int_en6_CM3Timer3 : 1;
        unsigned int mcu_wakeup_int_en6_PWM0 : 1;
        unsigned int mcu_wakeup_int_en6_PWM1 : 1;
        unsigned int mcu_wakeup_int_en6_PWMIN : 1;
        unsigned int mcu_wakeup_int_en6_reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog0_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog0_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog1_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog1_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog2_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog2_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3WatchDog1_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3WatchDog1_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_MWatchDog0_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_MWatchDog0_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO14_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO14_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO15_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO15_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO16_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO16_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO17_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO17_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO18_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO18_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO19_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO19_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3Timer2_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3Timer2_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3Timer3_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3Timer3_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWM0_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWM0_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWM1_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWM1_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWMIN_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWMIN_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_raw6_WatchDog0 : 1;
        unsigned int mcu_wakeup_int_raw6_WatchDog1 : 1;
        unsigned int mcu_wakeup_int_raw6_WatchDog2 : 1;
        unsigned int mcu_wakeup_int_raw6_CM3WatchDog1 : 1;
        unsigned int mcu_wakeup_int_raw6_MWatchDog0 : 1;
        unsigned int mcu_wakeup_int_raw6_GPIO14 : 1;
        unsigned int mcu_wakeup_int_raw6_GPIO15 : 1;
        unsigned int mcu_wakeup_int_raw6_GPIO16 : 1;
        unsigned int mcu_wakeup_int_raw6_GPIO17 : 1;
        unsigned int mcu_wakeup_int_raw6_GPIO18 : 1;
        unsigned int mcu_wakeup_int_raw6_GPIO19 : 1;
        unsigned int mcu_wakeup_int_raw6_CM3Timer2 : 1;
        unsigned int mcu_wakeup_int_raw6_CM3Timer3 : 1;
        unsigned int mcu_wakeup_int_raw6_PWM0 : 1;
        unsigned int mcu_wakeup_int_raw6_PWM1 : 1;
        unsigned int mcu_wakeup_int_raw6_PWMIN : 1;
        unsigned int mcu_wakeup_int_raw6_reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog0_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog0_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog1_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog1_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog2_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog2_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3WatchDog1_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3WatchDog1_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_MWatchDog0_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_MWatchDog0_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO14_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO14_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO15_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO15_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO16_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO16_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO17_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO17_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO18_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO18_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO19_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO19_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3Timer2_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3Timer2_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3Timer3_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3Timer3_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWM0_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWM0_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWM1_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWM1_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWMIN_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWMIN_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_mask6_WatchDog0 : 1;
        unsigned int mcu_wakeup_int_mask6_WatchDog1 : 1;
        unsigned int mcu_wakeup_int_mask6_WatchDog2 : 1;
        unsigned int mcu_wakeup_int_mask6_CM3WatchDog1 : 1;
        unsigned int mcu_wakeup_int_mask6_MWatchDog0 : 1;
        unsigned int mcu_wakeup_int_mask6_GPIO14 : 1;
        unsigned int mcu_wakeup_int_mask6_GPIO15 : 1;
        unsigned int mcu_wakeup_int_mask6_GPIO16 : 1;
        unsigned int mcu_wakeup_int_mask6_GPIO17 : 1;
        unsigned int mcu_wakeup_int_mask6_GPIO18 : 1;
        unsigned int mcu_wakeup_int_mask6_GPIO19 : 1;
        unsigned int mcu_wakeup_int_mask6_CM3Timer2 : 1;
        unsigned int mcu_wakeup_int_mask6_CM3Timer3 : 1;
        unsigned int mcu_wakeup_int_mask6_PWM0 : 1;
        unsigned int mcu_wakeup_int_mask6_PWM1 : 1;
        unsigned int mcu_wakeup_int_mask6_PWMIN : 1;
        unsigned int mcu_wakeup_int_mask6_reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog0_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog0_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog1_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog1_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog2_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog2_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3WatchDog1_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3WatchDog1_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_MWatchDog0_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_MWatchDog0_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO14_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO14_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO15_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO15_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO16_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO16_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO17_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO17_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO18_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO18_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO19_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO19_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3Timer2_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3Timer2_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3Timer3_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3Timer3_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWM0_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWM0_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWM1_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWM1_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWMIN_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWMIN_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_en5_GPIO0 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO1 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO2 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO3 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO4 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO5 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO6 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO7 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO8 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO9 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO10 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO11 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO12 : 1;
        unsigned int mcu_wakeup_int_en5_GPIO13 : 1;
        unsigned int mcu_wakeup_int_en5_CSYSPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_en5_CDBGPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_en5_16reserved : 1;
        unsigned int mcu_wakeup_int_en5_RTC1_INT : 1;
        unsigned int mcu_wakeup_int_en5_RTC0_INT : 1;
        unsigned int mcu_wakeup_int_en5_19reserved : 1;
        unsigned int mcu_wakeup_int_en5_20reserved : 1;
        unsigned int mcu_wakeup_int_en5_Timer14 : 1;
        unsigned int mcu_wakeup_int_en5_Timer15 : 1;
        unsigned int mcu_wakeup_int_en5_Timer16 : 1;
        unsigned int mcu_wakeup_int_en5_Timer17 : 1;
        unsigned int mcu_wakeup_int_en5_CM3Timer0 : 1;
        unsigned int mcu_wakeup_int_en5_CM3Timer1 : 1;
        unsigned int mcu_wakeup_int_en5_MTimer16 : 1;
        unsigned int mcu_wakeup_int_en5_MTimer17 : 1;
        unsigned int mcu_wakeup_int_en5_MTimer18 : 1;
        unsigned int mcu_wakeup_int_en5_MTimer19 : 1;
        unsigned int mcu_wakeup_int_en5_CM3WatchDog0 : 1;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO0_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO0_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO1_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO1_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO2_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO2_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO3_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO3_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO4_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO4_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO5_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO5_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO6_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO6_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO7_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO7_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO8_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO8_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO9_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO9_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO10_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO10_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO11_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO11_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO12_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO12_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO13_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO13_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CSYSPWRUPREQ_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CSYSPWRUPREQ_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CDBGPWRUPREQ_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CDBGPWRUPREQ_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_16reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_16reserved_END (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_RTC1_INT_START (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_RTC1_INT_END (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_RTC0_INT_START (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_RTC0_INT_END (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_19reserved_START (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_19reserved_END (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_20reserved_START (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_20reserved_END (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer14_START (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer14_END (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer15_START (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer15_END (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer16_START (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer16_END (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer17_START (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer17_END (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3Timer0_START (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3Timer0_END (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3Timer1_START (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3Timer1_END (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer16_START (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer16_END (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer17_START (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer17_END (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer18_START (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer18_END (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer19_START (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer19_END (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3WatchDog0_START (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3WatchDog0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_raw5_GPIO0 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO1 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO2 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO3 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO4 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO5 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO6 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO7 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO8 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO9 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO10 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO11 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO12 : 1;
        unsigned int mcu_wakeup_int_raw5_GPIO13 : 1;
        unsigned int mcu_wakeup_int_raw5_CSYSPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_raw5_CDBGPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_raw5_16reserved : 1;
        unsigned int mcu_wakeup_int_raw5_RTC1_INT : 1;
        unsigned int mcu_wakeup_int_raw5_RTC0_INT : 1;
        unsigned int mcu_wakeup_int_raw5_19reserved : 1;
        unsigned int mcu_wakeup_int_raw5_20reserved : 1;
        unsigned int mcu_wakeup_int_raw5_Timer14 : 1;
        unsigned int mcu_wakeup_int_raw5_Timer15 : 1;
        unsigned int mcu_wakeup_int_raw5_Timer16 : 1;
        unsigned int mcu_wakeup_int_raw5_Timer17 : 1;
        unsigned int mcu_wakeup_int_raw5_CM3Timer0 : 1;
        unsigned int mcu_wakeup_int_raw5_CM3Timer1 : 1;
        unsigned int mcu_wakeup_int_raw5_MTimer16 : 1;
        unsigned int mcu_wakeup_int_raw5_MTimer17 : 1;
        unsigned int mcu_wakeup_int_raw5_MTimer18 : 1;
        unsigned int mcu_wakeup_int_raw5_MTimer19 : 1;
        unsigned int mcu_wakeup_int_raw5_CM3WatchDog0 : 1;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO0_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO0_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO1_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO1_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO2_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO2_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO3_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO3_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO4_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO4_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO5_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO5_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO6_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO6_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO7_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO7_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO8_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO8_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO9_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO9_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO10_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO10_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO11_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO11_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO12_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO12_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO13_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO13_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CSYSPWRUPREQ_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CSYSPWRUPREQ_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CDBGPWRUPREQ_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CDBGPWRUPREQ_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_16reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_16reserved_END (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_RTC1_INT_START (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_RTC1_INT_END (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_RTC0_INT_START (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_RTC0_INT_END (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_19reserved_START (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_19reserved_END (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_20reserved_START (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_20reserved_END (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer14_START (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer14_END (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer15_START (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer15_END (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer16_START (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer16_END (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer17_START (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer17_END (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3Timer0_START (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3Timer0_END (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3Timer1_START (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3Timer1_END (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer16_START (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer16_END (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer17_START (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer17_END (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer18_START (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer18_END (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer19_START (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer19_END (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3WatchDog0_START (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3WatchDog0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_mask5_GPIO0 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO1 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO2 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO3 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO4 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO5 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO6 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO7 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO8 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO9 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO10 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO11 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO12 : 1;
        unsigned int mcu_wakeup_int_mask5_GPIO13 : 1;
        unsigned int mcu_wakeup_int_mask5_CSYSPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_mask5_CDBGPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_mask5_16reserved : 1;
        unsigned int mcu_wakeup_int_mask5_RTC1_INT : 1;
        unsigned int mcu_wakeup_int_mask5_RTC0_INT : 1;
        unsigned int mcu_wakeup_int_mask5_19reserved : 1;
        unsigned int mcu_wakeup_int_mask5_20reserved : 1;
        unsigned int mcu_wakeup_int_mask5_Timer14 : 1;
        unsigned int mcu_wakeup_int_mask5_Timer15 : 1;
        unsigned int mcu_wakeup_int_mask5_Timer16 : 1;
        unsigned int mcu_wakeup_int_mask5_Timer17 : 1;
        unsigned int mcu_wakeup_int_mask5_CM3Timer0 : 1;
        unsigned int mcu_wakeup_int_mask5_CM3Timer1 : 1;
        unsigned int mcu_wakeup_int_mask5_MTimer16 : 1;
        unsigned int mcu_wakeup_int_mask5_MTimer17 : 1;
        unsigned int mcu_wakeup_int_mask5_MTimer18 : 1;
        unsigned int mcu_wakeup_int_mask5_MTimer19 : 1;
        unsigned int mcu_wakeup_int_mask5_CM3WatchDog0 : 1;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO0_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO0_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO1_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO1_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO2_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO2_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO3_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO3_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO4_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO4_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO5_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO5_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO6_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO6_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO7_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO7_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO8_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO8_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO9_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO9_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO10_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO10_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO11_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO11_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO12_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO12_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO13_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO13_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CSYSPWRUPREQ_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CSYSPWRUPREQ_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CDBGPWRUPREQ_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CDBGPWRUPREQ_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_16reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_16reserved_END (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_RTC1_INT_START (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_RTC1_INT_END (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_RTC0_INT_START (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_RTC0_INT_END (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_19reserved_START (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_19reserved_END (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_20reserved_START (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_20reserved_END (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer14_START (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer14_END (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer15_START (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer15_END (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer16_START (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer16_END (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer17_START (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer17_END (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3Timer0_START (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3Timer0_END (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3Timer1_START (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3Timer1_END (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer16_START (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer16_END (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer17_START (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer17_END (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer18_START (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer18_END (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer19_START (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer19_END (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3WatchDog0_START (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3WatchDog0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_en4_CSYSPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_en4_CDBGPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_en4_MTimer10 : 1;
        unsigned int mcu_wakeup_int_en4_MTimer11 : 1;
        unsigned int mcu_wakeup_int_en4_MTimer12 : 1;
        unsigned int mcu_wakeup_int_en4_MTimer13 : 1;
        unsigned int mcu_wakeup_int_en4_WatchDog1 : 1;
        unsigned int mcu_wakeup_int_en4_7reserved : 1;
        unsigned int mcu_wakeup_int_en4_IPC2HIFI_0 : 1;
        unsigned int mcu_wakeup_int_en4_HIFI_NMI_INT : 1;
        unsigned int mcu_wakeup_int_en4_AP_EDMAC_NSORS : 1;
        unsigned int mcu_wakeup_int_en4_11reserved : 1;
        unsigned int mcu_wakeup_int_en4_SEC_IPC2HIFI_0 : 1;
        unsigned int mcu_wakeup_int_en4_13GPIO11 : 1;
        unsigned int mcu_wakeup_int_en4_14reserved : 1;
        unsigned int mcu_wakeup_int_en4_15reserved : 1;
        unsigned int mcu_wakeup_int_en4_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_CSYSPWRUPREQ_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_CSYSPWRUPREQ_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_CDBGPWRUPREQ_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_CDBGPWRUPREQ_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer10_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer10_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer11_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer11_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer12_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer12_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer13_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer13_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_WatchDog1_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_WatchDog1_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_7reserved_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_7reserved_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_IPC2HIFI_0_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_IPC2HIFI_0_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_HIFI_NMI_INT_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_HIFI_NMI_INT_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_AP_EDMAC_NSORS_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_AP_EDMAC_NSORS_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_11reserved_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_11reserved_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_SEC_IPC2HIFI_0_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_SEC_IPC2HIFI_0_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_13GPIO11_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_13GPIO11_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_14reserved_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_14reserved_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_15reserved_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_15reserved_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_31reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_raw4_CSYSPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_raw4_CDBGPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_raw4_MTimer10 : 1;
        unsigned int mcu_wakeup_int_raw4_MTimer11 : 1;
        unsigned int mcu_wakeup_int_raw4_MTimer12 : 1;
        unsigned int mcu_wakeup_int_raw4_MTimer13 : 1;
        unsigned int mcu_wakeup_int_raw4_WatchDog1 : 1;
        unsigned int mcu_wakeup_int_raw4_7reserved : 1;
        unsigned int mcu_wakeup_int_raw4_IPC2HIFI_0 : 1;
        unsigned int mcu_wakeup_int_raw4_HIFI_NMI_INT : 1;
        unsigned int mcu_wakeup_int_raw4_AP_EDMAC_NSORS : 1;
        unsigned int mcu_wakeup_int_raw4_11reserved : 1;
        unsigned int mcu_wakeup_int_raw4_SEC_IPC2HIFI_0 : 1;
        unsigned int mcu_wakeup_int_raw4_13GPIO11 : 1;
        unsigned int mcu_wakeup_int_raw4_14reserved : 1;
        unsigned int mcu_wakeup_int_raw4_15reserved : 1;
        unsigned int mcu_wakeup_int_raw4_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_CSYSPWRUPREQ_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_CSYSPWRUPREQ_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_CDBGPWRUPREQ_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_CDBGPWRUPREQ_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer10_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer10_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer11_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer11_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer12_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer12_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer13_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer13_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_WatchDog1_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_WatchDog1_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_7reserved_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_7reserved_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_IPC2HIFI_0_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_IPC2HIFI_0_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_HIFI_NMI_INT_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_HIFI_NMI_INT_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_AP_EDMAC_NSORS_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_AP_EDMAC_NSORS_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_11reserved_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_11reserved_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_SEC_IPC2HIFI_0_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_SEC_IPC2HIFI_0_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_13GPIO11_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_13GPIO11_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_14reserved_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_14reserved_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_15reserved_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_15reserved_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_31reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_mask4_CSYSPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_mask4_CDBGPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_mask4_MTimer10 : 1;
        unsigned int mcu_wakeup_int_mask4_MTimer11 : 1;
        unsigned int mcu_wakeup_int_mask4_MTimer12 : 1;
        unsigned int mcu_wakeup_int_mask4_MTimer13 : 1;
        unsigned int mcu_wakeup_int_mask4_WatchDog1 : 1;
        unsigned int mcu_wakeup_int_mask4_7reserved : 1;
        unsigned int mcu_wakeup_int_mask4_IPC2HIFI_0 : 1;
        unsigned int mcu_wakeup_int_mask4_HIFI_NMI_INT : 1;
        unsigned int mcu_wakeup_int_mask4_AP_EDMAC_NSORS : 1;
        unsigned int mcu_wakeup_int_mask4_11reserved : 1;
        unsigned int mcu_wakeup_int_mask4_SEC_IPC2HIFI_0 : 1;
        unsigned int mcu_wakeup_int_mask4_13GPIO11 : 1;
        unsigned int mcu_wakeup_int_mask4_14reserved : 1;
        unsigned int mcu_wakeup_int_mask4_15reserved : 1;
        unsigned int mcu_wakeup_int_mask4_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_CSYSPWRUPREQ_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_CSYSPWRUPREQ_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_CDBGPWRUPREQ_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_CDBGPWRUPREQ_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer10_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer10_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer11_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer11_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer12_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer12_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer13_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer13_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_WatchDog1_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_WatchDog1_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_7reserved_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_7reserved_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_IPC2HIFI_0_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_IPC2HIFI_0_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_HIFI_NMI_INT_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_HIFI_NMI_INT_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_AP_EDMAC_NSORS_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_AP_EDMAC_NSORS_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_11reserved_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_11reserved_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_SEC_IPC2HIFI_0_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_SEC_IPC2HIFI_0_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_13GPIO11_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_13GPIO11_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_14reserved_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_14reserved_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_15reserved_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_15reserved_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_31reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_en0_GPIO0 : 1;
        unsigned int mcu_wakeup_int_en0_GPIO1 : 1;
        unsigned int mcu_wakeup_int_en0_GPIO2 : 1;
        unsigned int mcu_wakeup_int_en0_GPIO3 : 1;
        unsigned int mcu_wakeup_int_en0_4reserved : 1;
        unsigned int mcu_wakeup_int_en0_5reserved : 1;
        unsigned int mcu_wakeup_int_en0_6reserved : 1;
        unsigned int mcu_wakeup_int_en0_7reserved : 1;
        unsigned int mcu_wakeup_int_en0_8reserved : 1;
        unsigned int mcu_wakeup_int_en0_9reserved : 1;
        unsigned int mcu_wakeup_int_en0_10reserved : 1;
        unsigned int mcu_wakeup_int_en0_11reserved : 1;
        unsigned int mcu_wakeup_int_en0_12reserved : 1;
        unsigned int mcu_wakeup_int_en0_13reserved : 1;
        unsigned int mcu_wakeup_int_en0_CSYSPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_en0_CDBGPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_en0_scoff_2acpu_comb : 1;
        unsigned int mcu_wakeup_int_en0_RTC1_INT : 1;
        unsigned int mcu_wakeup_int_en0_RTC0_INT : 1;
        unsigned int mcu_wakeup_int_en0_Timer0 : 1;
        unsigned int mcu_wakeup_int_en0_Timer1 : 1;
        unsigned int mcu_wakeup_int_en0_Timer2 : 1;
        unsigned int mcu_wakeup_int_en0_Timer3 : 1;
        unsigned int mcu_wakeup_int_en0_Timer4 : 1;
        unsigned int mcu_wakeup_int_en0_Timer5 : 1;
        unsigned int mcu_wakeup_int_en0_Timer6 : 1;
        unsigned int mcu_wakeup_int_en0_Timer7 : 1;
        unsigned int mcu_wakeup_int_en0_Timer8 : 1;
        unsigned int mcu_wakeup_int_en0_Timer9 : 1;
        unsigned int mcu_wakeup_int_en0_Timer10 : 1;
        unsigned int mcu_wakeup_int_en0_Timer11 : 1;
        unsigned int mcu_wakeup_int_en0_Timer12 : 1;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO0_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO0_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO1_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO1_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO2_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO2_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO3_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO3_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_4reserved_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_4reserved_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_5reserved_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_5reserved_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_8reserved_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_8reserved_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_12reserved_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_12reserved_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_CSYSPWRUPREQ_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_CSYSPWRUPREQ_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_CDBGPWRUPREQ_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_CDBGPWRUPREQ_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_scoff_2acpu_comb_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_scoff_2acpu_comb_END (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_RTC1_INT_START (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_RTC1_INT_END (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_RTC0_INT_START (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_RTC0_INT_END (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer0_START (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer0_END (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer1_START (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer1_END (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer2_START (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer2_END (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer3_START (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer3_END (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer4_START (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer4_END (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer5_START (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer5_END (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer6_START (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer6_END (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer7_START (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer7_END (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer8_START (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer8_END (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer9_START (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer9_END (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer10_START (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer10_END (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer11_START (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer11_END (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer12_START (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_raw0_GPIO0 : 1;
        unsigned int mcu_wakeup_int_raw0_GPIO1 : 1;
        unsigned int mcu_wakeup_int_raw0_GPIO2 : 1;
        unsigned int mcu_wakeup_int_raw0_GPIO3 : 1;
        unsigned int mcu_wakeup_int_raw0_4reserved : 1;
        unsigned int mcu_wakeup_int_raw0_5reserved : 1;
        unsigned int mcu_wakeup_int_raw0_6reserved : 1;
        unsigned int mcu_wakeup_int_raw0_7reserved : 1;
        unsigned int mcu_wakeup_int_raw0_8reserved : 1;
        unsigned int mcu_wakeup_int_raw0_9reserved : 1;
        unsigned int mcu_wakeup_int_raw0_10reserved : 1;
        unsigned int mcu_wakeup_int_raw0_11reserved : 1;
        unsigned int mcu_wakeup_int_raw0_12reserved : 1;
        unsigned int mcu_wakeup_int_raw0_13reserved : 1;
        unsigned int mcu_wakeup_int_raw0_CSYSPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_raw0_CDBGPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_raw0_scoff_2acpu_comb : 1;
        unsigned int mcu_wakeup_int_raw0_RTC1_INT : 1;
        unsigned int mcu_wakeup_int_raw0_RTC0_INT : 1;
        unsigned int mcu_wakeup_int_raw0_Timer0 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer1 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer2 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer3 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer4 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer5 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer6 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer7 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer8 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer9 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer10 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer11 : 1;
        unsigned int mcu_wakeup_int_raw0_Timer12 : 1;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO0_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO0_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO1_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO1_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO2_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO2_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO3_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO3_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_4reserved_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_4reserved_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_5reserved_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_5reserved_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_8reserved_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_8reserved_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_12reserved_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_12reserved_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_CSYSPWRUPREQ_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_CSYSPWRUPREQ_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_CDBGPWRUPREQ_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_CDBGPWRUPREQ_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_scoff_2acpu_comb_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_scoff_2acpu_comb_END (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_RTC1_INT_START (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_RTC1_INT_END (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_RTC0_INT_START (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_RTC0_INT_END (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer0_START (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer0_END (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer1_START (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer1_END (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer2_START (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer2_END (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer3_START (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer3_END (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer4_START (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer4_END (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer5_START (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer5_END (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer6_START (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer6_END (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer7_START (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer7_END (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer8_START (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer8_END (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer9_START (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer9_END (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer10_START (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer10_END (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer11_START (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer11_END (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer12_START (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_mask0_GPIO0 : 1;
        unsigned int mcu_wakeup_int_mask0_GPIO1 : 1;
        unsigned int mcu_wakeup_int_mask0_GPIO2 : 1;
        unsigned int mcu_wakeup_int_mask0_GPIO3 : 1;
        unsigned int mcu_wakeup_int_mask0_4reserved : 1;
        unsigned int mcu_wakeup_int_mask0_5reserved : 1;
        unsigned int mcu_wakeup_int_mask0_6reserved : 1;
        unsigned int mcu_wakeup_int_mask0_7reserved : 1;
        unsigned int mcu_wakeup_int_mask0_8reserved : 1;
        unsigned int mcu_wakeup_int_mask0_9reserved : 1;
        unsigned int mcu_wakeup_int_mask0_10reserved : 1;
        unsigned int mcu_wakeup_int_mask0_11reserved : 1;
        unsigned int mcu_wakeup_int_mask0_12reserved : 1;
        unsigned int mcu_wakeup_int_mask0_13reserved : 1;
        unsigned int mcu_wakeup_int_mask0_CSYSPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_mask0_CDBGPWRUPREQ : 1;
        unsigned int mcu_wakeup_int_mask0_scoff_2acpu_comb : 1;
        unsigned int mcu_wakeup_int_mask0_RTC1_INT : 1;
        unsigned int mcu_wakeup_int_mask0_RTC0_INT : 1;
        unsigned int mcu_wakeup_int_mask0_Timer0 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer1 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer2 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer3 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer4 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer5 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer6 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer7 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer8 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer9 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer10 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer11 : 1;
        unsigned int mcu_wakeup_int_mask0_Timer12 : 1;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO0_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO0_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO1_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO1_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO2_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO2_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO3_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO3_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_4reserved_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_4reserved_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_5reserved_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_5reserved_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_8reserved_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_8reserved_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_12reserved_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_12reserved_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_CSYSPWRUPREQ_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_CSYSPWRUPREQ_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_CDBGPWRUPREQ_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_CDBGPWRUPREQ_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_scoff_2acpu_comb_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_scoff_2acpu_comb_END (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_RTC1_INT_START (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_RTC1_INT_END (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_RTC0_INT_START (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_RTC0_INT_END (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer0_START (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer0_END (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer1_START (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer1_END (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer2_START (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer2_END (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer3_START (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer3_END (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer4_START (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer4_END (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer5_START (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer5_END (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer6_START (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer6_END (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer7_START (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer7_END (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer8_START (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer8_END (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer9_START (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer9_END (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer10_START (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer10_END (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer11_START (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer11_END (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer12_START (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_en1_Timer13 : 1;
        unsigned int mcu_wakeup_int_en1_Timer14 : 1;
        unsigned int mcu_wakeup_int_en1_Timer15 : 1;
        unsigned int mcu_wakeup_int_en1_Timer16 : 1;
        unsigned int mcu_wakeup_int_en1_Timer17 : 1;
        unsigned int mcu_wakeup_int_en1_WatchDog0 : 1;
        unsigned int mcu_wakeup_int_en1_WatchDog1 : 1;
        unsigned int mcu_wakeup_int_en1_MWatchDog2 : 1;
        unsigned int mcu_wakeup_int_en1_ACPU_WKUP_VOTE : 1;
        unsigned int mcu_wakeup_int_en1_NS_IPC2ACPU_0 : 1;
        unsigned int mcu_wakeup_int_en1_10reserved : 1;
        unsigned int mcu_wakeup_int_en1_11reserved : 1;
        unsigned int mcu_wakeup_int_en1_12reserved : 1;
        unsigned int mcu_wakeup_int_en1_13reserved : 1;
        unsigned int mcu_wakeup_int_en1_14reserved : 1;
        unsigned int mcu_wakeup_int_en1_15reserved : 1;
        unsigned int mcu_wakeup_int_en1_16reserved : 1;
        unsigned int mcu_wakeup_int_en1_17reserved : 1;
        unsigned int mcu_wakeup_int_en1_18reserved : 1;
        unsigned int mcu_wakeup_int_en1_19reserved : 1;
        unsigned int mcu_wakeup_int_en1_NS_IPC2ACPU_2 : 1;
        unsigned int mcu_wakeup_int_en1_SEC_IPC2ACPU_2 : 1;
        unsigned int mcu_wakeup_int_en1_MWDog0_rstreq_intr : 1;
        unsigned int mcu_wakeup_int_en1_PWM0 : 1;
        unsigned int mcu_wakeup_int_en1_PWM1 : 1;
        unsigned int mcu_wakeup_int_en1_PWMIN : 1;
        unsigned int mcu_wakeup_int_en1_31reserved : 6;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer13_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer13_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer14_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer14_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer15_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer15_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer16_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer16_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer17_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer17_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_WatchDog0_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_WatchDog0_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_WatchDog1_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_WatchDog1_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_MWatchDog2_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_MWatchDog2_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_ACPU_WKUP_VOTE_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_ACPU_WKUP_VOTE_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_NS_IPC2ACPU_0_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_NS_IPC2ACPU_0_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_10reserved_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_10reserved_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_11reserved_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_11reserved_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_12reserved_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_12reserved_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_13reserved_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_13reserved_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_14reserved_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_14reserved_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_15reserved_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_15reserved_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_16reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_16reserved_END (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_17reserved_START (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_17reserved_END (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_18reserved_START (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_18reserved_END (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_19reserved_START (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_19reserved_END (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_NS_IPC2ACPU_2_START (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_NS_IPC2ACPU_2_END (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_SEC_IPC2ACPU_2_START (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_SEC_IPC2ACPU_2_END (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_MWDog0_rstreq_intr_START (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_MWDog0_rstreq_intr_END (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWM0_START (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWM0_END (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWM1_START (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWM1_END (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWMIN_START (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWMIN_END (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_31reserved_START (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_raw1_Timer13 : 1;
        unsigned int mcu_wakeup_int_raw1_Timer14 : 1;
        unsigned int mcu_wakeup_int_raw1_Timer15 : 1;
        unsigned int mcu_wakeup_int_raw1_Timer16 : 1;
        unsigned int mcu_wakeup_int_raw1_Timer17 : 1;
        unsigned int mcu_wakeup_int_raw1_WatchDog0 : 1;
        unsigned int mcu_wakeup_int_raw1_WatchDog1 : 1;
        unsigned int mcu_wakeup_int_raw1_MWatchDog2 : 1;
        unsigned int mcu_wakeup_int_raw1_ACPU_WKUP_VOTE : 1;
        unsigned int mcu_wakeup_int_raw1_NS_IPC2ACPU_0 : 1;
        unsigned int mcu_wakeup_int_raw1_10reserved : 1;
        unsigned int mcu_wakeup_int_raw1_11reserved : 1;
        unsigned int mcu_wakeup_int_raw1_12reserved : 1;
        unsigned int mcu_wakeup_int_raw1_13reserved : 1;
        unsigned int mcu_wakeup_int_raw1_14reserved : 1;
        unsigned int mcu_wakeup_int_raw1_15reserved : 1;
        unsigned int mcu_wakeup_int_raw1_16reserved : 1;
        unsigned int mcu_wakeup_int_raw1_17reserved : 1;
        unsigned int mcu_wakeup_int_raw1_18reserved : 1;
        unsigned int mcu_wakeup_int_raw1_19reserved : 1;
        unsigned int mcu_wakeup_int_raw1_NS_IPC2ACPU_2 : 1;
        unsigned int mcu_wakeup_int_raw1_SEC_IPC2ACPU_2 : 1;
        unsigned int mcu_wakeup_int_raw1_MWDog0_rstreq_intr : 1;
        unsigned int mcu_wakeup_int_raw1_PWM0 : 1;
        unsigned int mcu_wakeup_int_raw1_PWM1 : 1;
        unsigned int mcu_wakeup_int_raw1_PWMIN : 1;
        unsigned int mcu_wakeup_int_raw1_31reserved : 6;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer13_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer13_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer14_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer14_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer15_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer15_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer16_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer16_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer17_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer17_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_WatchDog0_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_WatchDog0_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_WatchDog1_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_WatchDog1_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_MWatchDog2_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_MWatchDog2_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_ACPU_WKUP_VOTE_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_ACPU_WKUP_VOTE_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_NS_IPC2ACPU_0_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_NS_IPC2ACPU_0_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_10reserved_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_10reserved_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_11reserved_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_11reserved_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_12reserved_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_12reserved_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_13reserved_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_13reserved_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_14reserved_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_14reserved_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_15reserved_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_15reserved_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_16reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_16reserved_END (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_17reserved_START (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_17reserved_END (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_18reserved_START (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_18reserved_END (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_19reserved_START (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_19reserved_END (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_NS_IPC2ACPU_2_START (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_NS_IPC2ACPU_2_END (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_SEC_IPC2ACPU_2_START (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_SEC_IPC2ACPU_2_END (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_MWDog0_rstreq_intr_START (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_MWDog0_rstreq_intr_END (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWM0_START (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWM0_END (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWM1_START (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWM1_END (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWMIN_START (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWMIN_END (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_31reserved_START (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_wakeup_int_mask1_Timer13 : 1;
        unsigned int mcu_wakeup_int_mask1_Timer14 : 1;
        unsigned int mcu_wakeup_int_mask1_Timer15 : 1;
        unsigned int mcu_wakeup_int_mask1_Timer16 : 1;
        unsigned int mcu_wakeup_int_mask1_Timer17 : 1;
        unsigned int mcu_wakeup_int_mask1_WatchDog0 : 1;
        unsigned int mcu_wakeup_int_mask1_WatchDog1 : 1;
        unsigned int mcu_wakeup_int_mask1_MWatchDog2 : 1;
        unsigned int mcu_wakeup_int_mask1_ACPU_WKUP_VOTE : 1;
        unsigned int mcu_wakeup_int_mask1_NS_IPC2ACPU_0 : 1;
        unsigned int mcu_wakeup_int_mask1_10reserved : 1;
        unsigned int mcu_wakeup_int_mask1_11reserved : 1;
        unsigned int mcu_wakeup_int_mask1_12reserved : 1;
        unsigned int mcu_wakeup_int_mask1_13reserved : 1;
        unsigned int mcu_wakeup_int_mask1_14reserved : 1;
        unsigned int mcu_wakeup_int_mask1_15reserved : 1;
        unsigned int mcu_wakeup_int_mask1_16reserved : 1;
        unsigned int mcu_wakeup_int_mask1_17reserved : 1;
        unsigned int mcu_wakeup_int_mask1_18reserved : 1;
        unsigned int mcu_wakeup_int_mask1_19reserved : 1;
        unsigned int mcu_wakeup_int_mask1_NS_IPC2ACPU_2 : 1;
        unsigned int mcu_wakeup_int_mask1_SEC_IPC2ACPU_2 : 1;
        unsigned int mcu_wakeup_int_mask1_MWDog0_rstreq_intr : 1;
        unsigned int mcu_wakeup_int_mask1_PWM0 : 1;
        unsigned int mcu_wakeup_int_mask1_PWM1 : 1;
        unsigned int mcu_wakeup_int_mask1_PWMIN : 1;
        unsigned int mcu_wakeup_int_mask1_31reserved : 6;
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer13_START (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer13_END (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer14_START (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer14_END (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer15_START (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer15_END (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer16_START (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer16_END (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer17_START (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer17_END (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_WatchDog0_START (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_WatchDog0_END (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_WatchDog1_START (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_WatchDog1_END (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_MWatchDog2_START (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_MWatchDog2_END (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_ACPU_WKUP_VOTE_START (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_ACPU_WKUP_VOTE_END (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_NS_IPC2ACPU_0_START (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_NS_IPC2ACPU_0_END (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_10reserved_START (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_10reserved_END (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_11reserved_START (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_11reserved_END (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_12reserved_START (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_12reserved_END (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_13reserved_START (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_13reserved_END (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_14reserved_START (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_14reserved_END (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_15reserved_START (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_15reserved_END (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_16reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_16reserved_END (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_17reserved_START (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_17reserved_END (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_18reserved_START (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_18reserved_END (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_19reserved_START (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_19reserved_END (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_NS_IPC2ACPU_2_START (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_NS_IPC2ACPU_2_END (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_SEC_IPC2ACPU_2_START (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_SEC_IPC2ACPU_2_END (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_MWDog0_rstreq_intr_START (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_MWDog0_rstreq_intr_END (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWM0_START (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWM0_END (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWM1_START (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWM1_END (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWMIN_START (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWMIN_END (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_31reserved_START (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_statr_0awd : 1;
        unsigned int sc_int_statr_1cm3wdg0 : 1;
        unsigned int sc_int_statr_2hifiwd : 1;
        unsigned int sc_int_statr_3bakwd : 1;
        unsigned int sc_int_statr_4acpu_sft_fiq : 1;
        unsigned int sc_int_statr_5vote0mcuei : 1;
        unsigned int sc_int_statr_6vote0mcudi : 1;
        unsigned int sc_int_statr_7vote1mcuei : 1;
        unsigned int sc_int_statr_8vote1mcudi : 1;
        unsigned int sc_int_statr_9cei : 1;
        unsigned int sc_int_statr_10cdi : 1;
        unsigned int sc_int_statr_11aei : 1;
        unsigned int sc_int_statr_12adi : 1;
        unsigned int sc_int_statr_13vote2mcudi : 1;
        unsigned int sc_int_statr_14vote0mcuei : 1;
        unsigned int sc_int_statr_15periei : 1;
        unsigned int sc_int_statr_16peridi : 1;
        unsigned int sc_int_statr_17vote0aarmei : 1;
        unsigned int sc_int_statr_18vote0aarmdi : 1;
        unsigned int sc_int_statr_19vote1aarmei : 1;
        unsigned int sc_int_statr_20vote1aarmdi : 1;
        unsigned int sc_int_statr_21vote2aarmdi : 1;
        unsigned int sc_int_statr_22vote0aarmei : 1;
        unsigned int sc_int_statr_23vote0carmei : 1;
        unsigned int sc_int_statr_24vote0carmdi : 1;
        unsigned int sc_int_statr_25vote1carmei : 1;
        unsigned int sc_int_statr_26vote1carmdi : 1;
        unsigned int sc_int_statr_27vote2hifidi : 1;
        unsigned int sc_int_statr_28vote0hifiei : 1;
        unsigned int sc_int_statr_29otgchg : 1;
        unsigned int sc_int_statr_30otgdat : 1;
        unsigned int sc_int_statr_31ccpu_sft_fiq : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_STATR_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_0awd_START (0)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_0awd_END (0)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_1cm3wdg0_START (1)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_1cm3wdg0_END (1)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_2hifiwd_START (2)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_2hifiwd_END (2)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_3bakwd_START (3)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_3bakwd_END (3)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_4acpu_sft_fiq_START (4)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_4acpu_sft_fiq_END (4)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_5vote0mcuei_START (5)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_5vote0mcuei_END (5)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_6vote0mcudi_START (6)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_6vote0mcudi_END (6)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_7vote1mcuei_START (7)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_7vote1mcuei_END (7)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_8vote1mcudi_START (8)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_8vote1mcudi_END (8)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_9cei_START (9)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_9cei_END (9)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_10cdi_START (10)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_10cdi_END (10)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_11aei_START (11)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_11aei_END (11)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_12adi_START (12)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_12adi_END (12)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_13vote2mcudi_START (13)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_13vote2mcudi_END (13)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_14vote0mcuei_START (14)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_14vote0mcuei_END (14)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_15periei_START (15)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_15periei_END (15)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_16peridi_START (16)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_16peridi_END (16)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_17vote0aarmei_START (17)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_17vote0aarmei_END (17)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_18vote0aarmdi_START (18)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_18vote0aarmdi_END (18)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_19vote1aarmei_START (19)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_19vote1aarmei_END (19)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_20vote1aarmdi_START (20)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_20vote1aarmdi_END (20)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_21vote2aarmdi_START (21)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_21vote2aarmdi_END (21)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_22vote0aarmei_START (22)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_22vote0aarmei_END (22)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_23vote0carmei_START (23)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_23vote0carmei_END (23)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_24vote0carmdi_START (24)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_24vote0carmdi_END (24)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_25vote1carmei_START (25)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_25vote1carmei_END (25)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_26vote1carmdi_START (26)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_26vote1carmdi_END (26)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_27vote2hifidi_START (27)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_27vote2hifidi_END (27)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_28vote0hifiei_START (28)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_28vote0hifiei_END (28)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_29otgchg_START (29)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_29otgchg_END (29)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_30otgdat_START (30)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_30otgdat_END (30)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_31ccpu_sft_fiq_START (31)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_31ccpu_sft_fiq_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_statm_0awd : 1;
        unsigned int sc_int_statm_1cm3wdg0 : 1;
        unsigned int sc_int_statm_2hifiwd : 1;
        unsigned int sc_int_statm_3bakwd : 1;
        unsigned int sc_int_statm_4acpu_sft_fiq : 1;
        unsigned int sc_int_statm_5vote0mcuei : 1;
        unsigned int sc_int_statm_6vote0mcudi : 1;
        unsigned int sc_int_statm_7vote1mcuei : 1;
        unsigned int sc_int_statm_8vote1mcudi : 1;
        unsigned int sc_int_statm_9cei : 1;
        unsigned int sc_int_statm_10cdi : 1;
        unsigned int sc_int_statm_11aei : 1;
        unsigned int sc_int_statm_12adi : 1;
        unsigned int sc_int_statm_13vote2mcudi : 1;
        unsigned int sc_int_statm_14vote0mcuei : 1;
        unsigned int sc_int_statm_15periei : 1;
        unsigned int sc_int_statm_16peridi : 1;
        unsigned int sc_int_statm_17vote0aarmei : 1;
        unsigned int sc_int_statm_18vote0aarmdi : 1;
        unsigned int sc_int_statm_19vote1aarmei : 1;
        unsigned int sc_int_statm_20vote1aarmdi : 1;
        unsigned int sc_int_statm_21vote2aarmdi : 1;
        unsigned int sc_int_statm_22vote0aarmei : 1;
        unsigned int sc_int_statm_23vote0carmei : 1;
        unsigned int sc_int_statm_24vote0carmdi : 1;
        unsigned int sc_int_statm_25vote1carmei : 1;
        unsigned int sc_int_statm_26vote1carmdi : 1;
        unsigned int sc_int_statm_27vote2hifidi : 1;
        unsigned int sc_int_statm_28vote0hifiei : 1;
        unsigned int sc_int_statm_29otgchg : 1;
        unsigned int sc_int_statm_30otgdat : 1;
        unsigned int sc_int_statm_31ccpu_sft_fiq : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_STATM_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_0awd_START (0)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_0awd_END (0)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_1cm3wdg0_START (1)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_1cm3wdg0_END (1)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_2hifiwd_START (2)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_2hifiwd_END (2)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_3bakwd_START (3)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_3bakwd_END (3)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_4acpu_sft_fiq_START (4)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_4acpu_sft_fiq_END (4)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_5vote0mcuei_START (5)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_5vote0mcuei_END (5)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_6vote0mcudi_START (6)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_6vote0mcudi_END (6)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_7vote1mcuei_START (7)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_7vote1mcuei_END (7)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_8vote1mcudi_START (8)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_8vote1mcudi_END (8)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_9cei_START (9)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_9cei_END (9)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_10cdi_START (10)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_10cdi_END (10)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_11aei_START (11)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_11aei_END (11)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_12adi_START (12)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_12adi_END (12)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_13vote2mcudi_START (13)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_13vote2mcudi_END (13)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_14vote0mcuei_START (14)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_14vote0mcuei_END (14)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_15periei_START (15)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_15periei_END (15)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_16peridi_START (16)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_16peridi_END (16)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_17vote0aarmei_START (17)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_17vote0aarmei_END (17)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_18vote0aarmdi_START (18)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_18vote0aarmdi_END (18)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_19vote1aarmei_START (19)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_19vote1aarmei_END (19)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_20vote1aarmdi_START (20)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_20vote1aarmdi_END (20)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_21vote2aarmdi_START (21)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_21vote2aarmdi_END (21)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_22vote0aarmei_START (22)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_22vote0aarmei_END (22)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_23vote0carmei_START (23)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_23vote0carmei_END (23)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_24vote0carmdi_START (24)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_24vote0carmdi_END (24)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_25vote1carmei_START (25)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_25vote1carmei_END (25)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_26vote1carmdi_START (26)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_26vote1carmdi_END (26)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_27vote2hifidi_START (27)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_27vote2hifidi_END (27)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_28vote0hifiei_START (28)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_28vote0hifiei_END (28)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_29otgchg_START (29)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_29otgchg_END (29)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_30otgdat_START (30)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_30otgdat_END (30)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_31ccpu_sft_fiq_START (31)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_31ccpu_sft_fiq_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_clear_0awd : 1;
        unsigned int sc_int_clear_1cm3wdg0 : 1;
        unsigned int sc_int_clear_2hifiwd : 1;
        unsigned int sc_int_clear_3bakwd : 1;
        unsigned int sc_int_clear_4acpu_sft_fiq : 1;
        unsigned int sc_int_clear_5vote0mcuei : 1;
        unsigned int sc_int_clear_6vote0mcudi : 1;
        unsigned int sc_int_clear_7vote1mcuei : 1;
        unsigned int sc_int_clear_8vote1mcudi : 1;
        unsigned int sc_int_clear_9cei : 1;
        unsigned int sc_int_clear_10cdi : 1;
        unsigned int sc_int_clear_11aei : 1;
        unsigned int sc_int_clear_12adi : 1;
        unsigned int sc_int_clear_13vote2mcudi : 1;
        unsigned int sc_int_clear_14vote0mcuei : 1;
        unsigned int sc_int_clear_15periei : 1;
        unsigned int sc_int_clear_16peridi : 1;
        unsigned int sc_int_clear_17vote0aarmei : 1;
        unsigned int sc_int_clear_18vote0aarmdi : 1;
        unsigned int sc_int_clear_19vote1aarmei : 1;
        unsigned int sc_int_clear_20vote1aarmdi : 1;
        unsigned int sc_int_clear_21vote2aarmdi : 1;
        unsigned int sc_int_clear_22vote0aarmei : 1;
        unsigned int sc_int_clear_23vote0carmei : 1;
        unsigned int sc_int_clear_24vote0carmdi : 1;
        unsigned int sc_int_clear_25vote1carmei : 1;
        unsigned int sc_int_clear_26vote1carmdi : 1;
        unsigned int sc_int_clear_27vote2hifidi : 1;
        unsigned int sc_int_clear_28vote0hifiei : 1;
        unsigned int sc_int_clear_29otgchg : 1;
        unsigned int sc_int_clear_30otgdat : 1;
        unsigned int sc_int_clear_31ccpu_sft_fiq : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_CLEAR_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_0awd_START (0)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_0awd_END (0)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_1cm3wdg0_START (1)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_1cm3wdg0_END (1)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_2hifiwd_START (2)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_2hifiwd_END (2)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_3bakwd_START (3)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_3bakwd_END (3)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_4acpu_sft_fiq_START (4)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_4acpu_sft_fiq_END (4)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_5vote0mcuei_START (5)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_5vote0mcuei_END (5)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_6vote0mcudi_START (6)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_6vote0mcudi_END (6)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_7vote1mcuei_START (7)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_7vote1mcuei_END (7)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_8vote1mcudi_START (8)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_8vote1mcudi_END (8)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_9cei_START (9)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_9cei_END (9)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_10cdi_START (10)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_10cdi_END (10)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_11aei_START (11)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_11aei_END (11)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_12adi_START (12)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_12adi_END (12)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_13vote2mcudi_START (13)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_13vote2mcudi_END (13)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_14vote0mcuei_START (14)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_14vote0mcuei_END (14)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_15periei_START (15)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_15periei_END (15)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_16peridi_START (16)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_16peridi_END (16)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_17vote0aarmei_START (17)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_17vote0aarmei_END (17)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_18vote0aarmdi_START (18)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_18vote0aarmdi_END (18)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_19vote1aarmei_START (19)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_19vote1aarmei_END (19)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_20vote1aarmdi_START (20)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_20vote1aarmdi_END (20)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_21vote2aarmdi_START (21)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_21vote2aarmdi_END (21)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_22vote0aarmei_START (22)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_22vote0aarmei_END (22)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_23vote0carmei_START (23)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_23vote0carmei_END (23)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_24vote0carmdi_START (24)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_24vote0carmdi_END (24)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_25vote1carmei_START (25)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_25vote1carmei_END (25)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_26vote1carmdi_START (26)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_26vote1carmdi_END (26)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_27vote2hifidi_START (27)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_27vote2hifidi_END (27)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_28vote0hifiei_START (28)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_28vote0hifiei_END (28)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_29otgchg_START (29)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_29otgchg_END (29)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_30otgdat_START (30)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_30otgdat_END (30)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_31ccpu_sft_fiq_START (31)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_31ccpu_sft_fiq_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_en0_0awd : 1;
        unsigned int sc_int_en0_1cm3wdg0 : 1;
        unsigned int sc_int_en0_2hifiwd : 1;
        unsigned int sc_int_en0_3bakwd : 1;
        unsigned int sc_int_en0_4acpu_sft_fiq : 1;
        unsigned int sc_int_en0_5vote0mcuei : 1;
        unsigned int sc_int_en0_6vote0mcudi : 1;
        unsigned int sc_int_en0_7vote1mcuei : 1;
        unsigned int sc_int_en0_8vote1mcudi : 1;
        unsigned int sc_int_en0_9cei : 1;
        unsigned int sc_int_en0_10cdi : 1;
        unsigned int sc_int_en0_11aei : 1;
        unsigned int sc_int_en0_12adi : 1;
        unsigned int sc_int_en0_13vote2mcudi : 1;
        unsigned int sc_int_en0_14vote0mcuei : 1;
        unsigned int sc_int_en0_15periei : 1;
        unsigned int sc_int_en0_16peridi : 1;
        unsigned int sc_int_en0_17vote0aarmei : 1;
        unsigned int sc_int_en0_18vote0aarmdi : 1;
        unsigned int sc_int_en0_19vote1aarmei : 1;
        unsigned int sc_int_en0_20vote1aarmdi : 1;
        unsigned int sc_int_en0_21vote2aarmdi : 1;
        unsigned int sc_int_en0_22vote0aarmei : 1;
        unsigned int sc_int_en0_23vote0carmei : 1;
        unsigned int sc_int_en0_24vote0carmdi : 1;
        unsigned int sc_int_en0_25vote1carmei : 1;
        unsigned int sc_int_en0_26vote1carmdi : 1;
        unsigned int sc_int_en0_27vote2hifidi : 1;
        unsigned int sc_int_en0_28vote0hifiei : 1;
        unsigned int sc_int_en0_29otgchg : 1;
        unsigned int sc_int_en0_30otgdat : 1;
        unsigned int sc_int_en0_31ccpu_sft_fiq : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_SET_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_0awd_START (0)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_0awd_END (0)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_1cm3wdg0_START (1)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_1cm3wdg0_END (1)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_2hifiwd_START (2)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_2hifiwd_END (2)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_3bakwd_START (3)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_3bakwd_END (3)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_4acpu_sft_fiq_START (4)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_4acpu_sft_fiq_END (4)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_5vote0mcuei_START (5)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_5vote0mcuei_END (5)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_6vote0mcudi_START (6)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_6vote0mcudi_END (6)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_7vote1mcuei_START (7)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_7vote1mcuei_END (7)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_8vote1mcudi_START (8)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_8vote1mcudi_END (8)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_9cei_START (9)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_9cei_END (9)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_10cdi_START (10)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_10cdi_END (10)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_11aei_START (11)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_11aei_END (11)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_12adi_START (12)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_12adi_END (12)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_13vote2mcudi_START (13)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_13vote2mcudi_END (13)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_14vote0mcuei_START (14)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_14vote0mcuei_END (14)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_15periei_START (15)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_15periei_END (15)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_16peridi_START (16)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_16peridi_END (16)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_17vote0aarmei_START (17)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_17vote0aarmei_END (17)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_18vote0aarmdi_START (18)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_18vote0aarmdi_END (18)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_19vote1aarmei_START (19)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_19vote1aarmei_END (19)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_20vote1aarmdi_START (20)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_20vote1aarmdi_END (20)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_21vote2aarmdi_START (21)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_21vote2aarmdi_END (21)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_22vote0aarmei_START (22)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_22vote0aarmei_END (22)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_23vote0carmei_START (23)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_23vote0carmei_END (23)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_24vote0carmdi_START (24)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_24vote0carmdi_END (24)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_25vote1carmei_START (25)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_25vote1carmei_END (25)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_26vote1carmdi_START (26)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_26vote1carmdi_END (26)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_27vote2hifidi_START (27)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_27vote2hifidi_END (27)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_28vote0hifiei_START (28)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_28vote0hifiei_END (28)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_29otgchg_START (29)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_29otgchg_END (29)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_30otgdat_START (30)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_30otgdat_END (30)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_31ccpu_sft_fiq_START (31)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_31ccpu_sft_fiq_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_dis0_0awd : 1;
        unsigned int sc_int_dis0_1cm3wdg0 : 1;
        unsigned int sc_int_dis0_2hifiwd : 1;
        unsigned int sc_int_dis0_3bakwd : 1;
        unsigned int sc_int_dis0_4acpu_sft_fiq : 1;
        unsigned int sc_int_dis0_5vote0mcuei : 1;
        unsigned int sc_int_dis0_6vote0mcudi : 1;
        unsigned int sc_int_dis0_7vote1mcuei : 1;
        unsigned int sc_int_dis0_8vote1mcudi : 1;
        unsigned int sc_int_dis0_9cei : 1;
        unsigned int sc_int_dis0_10cdi : 1;
        unsigned int sc_int_dis0_11aei : 1;
        unsigned int sc_int_dis0_12adi : 1;
        unsigned int sc_int_dis0_13vote2mcudi : 1;
        unsigned int sc_int_dis0_14vote0mcuei : 1;
        unsigned int sc_int_dis0_15periei : 1;
        unsigned int sc_int_dis0_16peridi : 1;
        unsigned int sc_int_dis0_17vote0aarmei : 1;
        unsigned int sc_int_dis0_18vote0aarmdi : 1;
        unsigned int sc_int_dis0_19vote1aarmei : 1;
        unsigned int sc_int_dis0_20vote1aarmdi : 1;
        unsigned int sc_int_dis0_21vote2aarmdi : 1;
        unsigned int sc_int_dis0_22vote0aarmei : 1;
        unsigned int sc_int_dis0_23vote0carmei : 1;
        unsigned int sc_int_dis0_24vote0carmdi : 1;
        unsigned int sc_int_dis0_25vote1carmei : 1;
        unsigned int sc_int_dis0_26vote1carmdi : 1;
        unsigned int sc_int_dis0_27vote2hifidi : 1;
        unsigned int sc_int_dis0_28vote0hifiei : 1;
        unsigned int sc_int_dis0_29otgchg : 1;
        unsigned int sc_int_dis0_30otgdat : 1;
        unsigned int sc_int_dis0_31ccpu_sft_fiq : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_DIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_0awd_START (0)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_0awd_END (0)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_1cm3wdg0_START (1)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_1cm3wdg0_END (1)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_2hifiwd_START (2)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_2hifiwd_END (2)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_3bakwd_START (3)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_3bakwd_END (3)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_4acpu_sft_fiq_START (4)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_4acpu_sft_fiq_END (4)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_5vote0mcuei_START (5)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_5vote0mcuei_END (5)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_6vote0mcudi_START (6)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_6vote0mcudi_END (6)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_7vote1mcuei_START (7)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_7vote1mcuei_END (7)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_8vote1mcudi_START (8)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_8vote1mcudi_END (8)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_9cei_START (9)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_9cei_END (9)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_10cdi_START (10)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_10cdi_END (10)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_11aei_START (11)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_11aei_END (11)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_12adi_START (12)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_12adi_END (12)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_13vote2mcudi_START (13)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_13vote2mcudi_END (13)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_14vote0mcuei_START (14)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_14vote0mcuei_END (14)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_15periei_START (15)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_15periei_END (15)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_16peridi_START (16)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_16peridi_END (16)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_17vote0aarmei_START (17)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_17vote0aarmei_END (17)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_18vote0aarmdi_START (18)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_18vote0aarmdi_END (18)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_19vote1aarmei_START (19)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_19vote1aarmei_END (19)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_20vote1aarmdi_START (20)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_20vote1aarmdi_END (20)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_21vote2aarmdi_START (21)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_21vote2aarmdi_END (21)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_22vote0aarmei_START (22)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_22vote0aarmei_END (22)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_23vote0carmei_START (23)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_23vote0carmei_END (23)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_24vote0carmdi_START (24)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_24vote0carmdi_END (24)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_25vote1carmei_START (25)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_25vote1carmei_END (25)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_26vote1carmdi_START (26)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_26vote1carmdi_END (26)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_27vote2hifidi_START (27)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_27vote2hifidi_END (27)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_28vote0hifiei_START (28)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_28vote0hifiei_END (28)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_29otgchg_START (29)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_29otgchg_END (29)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_30otgdat_START (30)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_30otgdat_END (30)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_31ccpu_sft_fiq_START (31)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_31ccpu_sft_fiq_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_en_sta_0awd : 1;
        unsigned int sc_int_en_sta_1cm3wdg0 : 1;
        unsigned int sc_int_en_sta_2hifiwd : 1;
        unsigned int sc_int_en_sta_3bakwd : 1;
        unsigned int sc_int_en_sta_4acpu_sft_fiq : 1;
        unsigned int sc_int_en_sta_5vote0mcuei : 1;
        unsigned int sc_int_en_sta_6vote0mcudi : 1;
        unsigned int sc_int_en_sta_7vote1mcuei : 1;
        unsigned int sc_int_en_sta_8vote1mcudi : 1;
        unsigned int sc_int_en_sta_9cei : 1;
        unsigned int sc_int_en_sta_10cdi : 1;
        unsigned int sc_int_en_sta_11aei : 1;
        unsigned int sc_int_en_sta_12adi : 1;
        unsigned int sc_int_en_sta_13vote2mcudi : 1;
        unsigned int sc_int_en_sta_14vote0mcuei : 1;
        unsigned int sc_int_en_sta_15periei : 1;
        unsigned int sc_int_en_sta_16peridi : 1;
        unsigned int sc_int_en_sta_17vote0aarmei : 1;
        unsigned int sc_int_en_sta_18vote0aarmdi : 1;
        unsigned int sc_int_en_sta_19vote1aarmei : 1;
        unsigned int sc_int_en_sta_20vote1aarmdi : 1;
        unsigned int sc_int_en_sta_21vote2aarmdi : 1;
        unsigned int sc_int_en_sta_22vote0aarmei : 1;
        unsigned int sc_int_en_sta_23vote0carmei : 1;
        unsigned int sc_int_en_sta_24vote0carmdi : 1;
        unsigned int sc_int_en_sta_25vote1carmei : 1;
        unsigned int sc_int_en_sta_26vote1carmdi : 1;
        unsigned int sc_int_en_sta_27vote2hifidi : 1;
        unsigned int sc_int_en_sta_28vote0hifiei : 1;
        unsigned int sc_int_en_sta_29otgchg : 1;
        unsigned int sc_int_en_sta_30otgdat : 1;
        unsigned int sc_int_en_sta_31ccpu_sft_fiq : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_0awd_START (0)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_0awd_END (0)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_1cm3wdg0_START (1)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_1cm3wdg0_END (1)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_2hifiwd_START (2)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_2hifiwd_END (2)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_3bakwd_START (3)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_3bakwd_END (3)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_4acpu_sft_fiq_START (4)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_4acpu_sft_fiq_END (4)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_5vote0mcuei_START (5)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_5vote0mcuei_END (5)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_6vote0mcudi_START (6)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_6vote0mcudi_END (6)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_7vote1mcuei_START (7)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_7vote1mcuei_END (7)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_8vote1mcudi_START (8)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_8vote1mcudi_END (8)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_9cei_START (9)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_9cei_END (9)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_10cdi_START (10)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_10cdi_END (10)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_11aei_START (11)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_11aei_END (11)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_12adi_START (12)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_12adi_END (12)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_13vote2mcudi_START (13)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_13vote2mcudi_END (13)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_14vote0mcuei_START (14)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_14vote0mcuei_END (14)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_15periei_START (15)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_15periei_END (15)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_16peridi_START (16)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_16peridi_END (16)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_17vote0aarmei_START (17)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_17vote0aarmei_END (17)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_18vote0aarmdi_START (18)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_18vote0aarmdi_END (18)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_19vote1aarmei_START (19)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_19vote1aarmei_END (19)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_20vote1aarmdi_START (20)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_20vote1aarmdi_END (20)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_21vote2aarmdi_START (21)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_21vote2aarmdi_END (21)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_22vote0aarmei_START (22)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_22vote0aarmei_END (22)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_23vote0carmei_START (23)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_23vote0carmei_END (23)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_24vote0carmdi_START (24)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_24vote0carmdi_END (24)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_25vote1carmei_START (25)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_25vote1carmei_END (25)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_26vote1carmdi_START (26)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_26vote1carmdi_END (26)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_27vote2hifidi_START (27)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_27vote2hifidi_END (27)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_28vote0hifiei_START (28)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_28vote0hifiei_END (28)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_29otgchg_START (29)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_29otgchg_END (29)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_30otgdat_START (30)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_30otgdat_END (30)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_31ccpu_sft_fiq_START (31)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_31ccpu_sft_fiq_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_statr_0usim0_detect_int : 1;
        unsigned int sc_int_statr_1usim1_detect_int : 1;
        unsigned int sc_int_statr_2reserved : 1;
        unsigned int sc_int_statr_3reserved : 1;
        unsigned int sc_int_statr_4reserved : 1;
        unsigned int sc_int_statr_5reserved : 1;
        unsigned int sc_int_statr_6reserved : 1;
        unsigned int sc_int_statr_7reserved : 1;
        unsigned int sc_int_statr_8reserved : 1;
        unsigned int sc_int_statr_9reserved : 1;
        unsigned int sc_int_statr_10reserved : 1;
        unsigned int sc_int_statr_11reserved : 1;
        unsigned int sc_int_statr_12reserved : 1;
        unsigned int sc_int_statr_13reserved : 1;
        unsigned int sc_int_statr_14reserved : 1;
        unsigned int sc_int_statr_15reserved : 1;
        unsigned int sc_int_statr_16reserved : 1;
        unsigned int sc_int_statr_17reserved : 1;
        unsigned int sc_int_statr_18reserved : 1;
        unsigned int sc_int_statr_19reserved : 1;
        unsigned int sc_int_statr_20reserved : 1;
        unsigned int sc_int_statr_21reserved : 1;
        unsigned int sc_int_statr_22reserved : 1;
        unsigned int sc_int_statr_23reserved : 1;
        unsigned int sc_int_statr_24reserved : 1;
        unsigned int sc_int_statr_25reserved : 1;
        unsigned int sc_int_statr_26reserved : 1;
        unsigned int sc_int_statr_27reserved : 1;
        unsigned int sc_int_statr_28reserved : 1;
        unsigned int sc_int_statr_29reserved : 1;
        unsigned int sc_int_statr_30reserved : 1;
        unsigned int sc_int_statr_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_STATR1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_0usim0_detect_int_START (0)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_0usim0_detect_int_END (0)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_1usim1_detect_int_START (1)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_1usim1_detect_int_END (1)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_2reserved_START (2)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_2reserved_END (2)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_3reserved_START (3)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_3reserved_END (3)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_4reserved_START (4)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_4reserved_END (4)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_5reserved_START (5)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_5reserved_END (5)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_6reserved_START (6)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_6reserved_END (6)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_7reserved_START (7)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_7reserved_END (7)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_8reserved_START (8)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_8reserved_END (8)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_9reserved_START (9)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_9reserved_END (9)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_10reserved_START (10)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_10reserved_END (10)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_11reserved_START (11)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_11reserved_END (11)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_12reserved_START (12)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_12reserved_END (12)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_13reserved_START (13)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_13reserved_END (13)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_14reserved_START (14)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_14reserved_END (14)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_15reserved_START (15)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_15reserved_END (15)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_16reserved_START (16)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_16reserved_END (16)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_17reserved_START (17)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_17reserved_END (17)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_18reserved_START (18)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_18reserved_END (18)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_19reserved_START (19)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_19reserved_END (19)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_20reserved_START (20)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_20reserved_END (20)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_21reserved_START (21)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_21reserved_END (21)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_22reserved_START (22)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_22reserved_END (22)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_23reserved_START (23)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_23reserved_END (23)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_24reserved_START (24)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_24reserved_END (24)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_25reserved_START (25)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_25reserved_END (25)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_26reserved_START (26)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_26reserved_END (26)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_27reserved_START (27)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_27reserved_END (27)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_28reserved_START (28)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_28reserved_END (28)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_29reserved_START (29)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_29reserved_END (29)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_30reserved_START (30)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_30reserved_END (30)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_31reserved_START (31)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_statm_0usim0_detect_int : 1;
        unsigned int sc_int_statm_1usim1_detect_int : 1;
        unsigned int sc_int_statm_2reserved : 1;
        unsigned int sc_int_statm_3reserved : 1;
        unsigned int sc_int_statm_4reserved : 1;
        unsigned int sc_int_statm_5reserved : 1;
        unsigned int sc_int_statm_6reserved : 1;
        unsigned int sc_int_statm_7reserved : 1;
        unsigned int sc_int_statm_8reserved : 1;
        unsigned int sc_int_statm_9reserved : 1;
        unsigned int sc_int_statm_10reserved : 1;
        unsigned int sc_int_statm_11reserved : 1;
        unsigned int sc_int_statm_12reserved : 1;
        unsigned int sc_int_statm_13reserved : 1;
        unsigned int sc_int_statm_14reserved : 1;
        unsigned int sc_int_statm_15reserved : 1;
        unsigned int sc_int_statm_16reserved : 1;
        unsigned int sc_int_statm_17reserved : 1;
        unsigned int sc_int_statm_18reserved : 1;
        unsigned int sc_int_statm_19reserved : 1;
        unsigned int sc_int_statm_20reserved : 1;
        unsigned int sc_int_statm_21reserved : 1;
        unsigned int sc_int_statm_22reserved : 1;
        unsigned int sc_int_statm_23reserved : 1;
        unsigned int sc_int_statm_24reserved : 1;
        unsigned int sc_int_statm_25reserved : 1;
        unsigned int sc_int_statm_26reserved : 1;
        unsigned int sc_int_statm_27reserved : 1;
        unsigned int sc_int_statm_28reserved : 1;
        unsigned int sc_int_statm_29reserved : 1;
        unsigned int sc_int_statm_30reserved : 1;
        unsigned int sc_int_statm_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_STATM1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_0usim0_detect_int_START (0)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_0usim0_detect_int_END (0)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_1usim1_detect_int_START (1)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_1usim1_detect_int_END (1)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_2reserved_START (2)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_2reserved_END (2)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_3reserved_START (3)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_3reserved_END (3)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_4reserved_START (4)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_4reserved_END (4)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_5reserved_START (5)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_5reserved_END (5)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_6reserved_START (6)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_6reserved_END (6)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_7reserved_START (7)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_7reserved_END (7)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_8reserved_START (8)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_8reserved_END (8)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_9reserved_START (9)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_9reserved_END (9)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_10reserved_START (10)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_10reserved_END (10)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_11reserved_START (11)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_11reserved_END (11)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_12reserved_START (12)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_12reserved_END (12)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_13reserved_START (13)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_13reserved_END (13)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_14reserved_START (14)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_14reserved_END (14)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_15reserved_START (15)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_15reserved_END (15)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_16reserved_START (16)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_16reserved_END (16)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_17reserved_START (17)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_17reserved_END (17)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_18reserved_START (18)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_18reserved_END (18)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_19reserved_START (19)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_19reserved_END (19)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_20reserved_START (20)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_20reserved_END (20)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_21reserved_START (21)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_21reserved_END (21)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_22reserved_START (22)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_22reserved_END (22)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_23reserved_START (23)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_23reserved_END (23)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_24reserved_START (24)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_24reserved_END (24)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_25reserved_START (25)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_25reserved_END (25)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_26reserved_START (26)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_26reserved_END (26)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_27reserved_START (27)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_27reserved_END (27)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_28reserved_START (28)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_28reserved_END (28)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_29reserved_START (29)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_29reserved_END (29)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_30reserved_START (30)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_30reserved_END (30)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_31reserved_START (31)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_clear_0usim0_detect_int : 1;
        unsigned int sc_int_clear_1usim1_detect_int : 1;
        unsigned int sc_int_clear_2reserved : 1;
        unsigned int sc_int_clear_3reserved : 1;
        unsigned int sc_int_clear_4reserved : 1;
        unsigned int sc_int_clear_5reserved : 1;
        unsigned int sc_int_clear_6reserved : 1;
        unsigned int sc_int_clear_7reserved : 1;
        unsigned int sc_int_clear_8reserved : 1;
        unsigned int sc_int_clear_9reserved : 1;
        unsigned int sc_int_clear_10reserved : 1;
        unsigned int sc_int_clear_11reserved : 1;
        unsigned int sc_int_clear_12reserved : 1;
        unsigned int sc_int_clear_13reserved : 1;
        unsigned int sc_int_clear_14reserved : 1;
        unsigned int sc_int_clear_15reserved : 1;
        unsigned int sc_int_clear_16reserved : 1;
        unsigned int sc_int_clear_17reserved : 1;
        unsigned int sc_int_clear_18reserved : 1;
        unsigned int sc_int_clear_19reserved : 1;
        unsigned int sc_int_clear_20reserved : 1;
        unsigned int sc_int_clear_21reserved : 1;
        unsigned int sc_int_clear_22reserved : 1;
        unsigned int sc_int_clear_23reserved : 1;
        unsigned int sc_int_clear_24reserved : 1;
        unsigned int sc_int_clear_25reserved : 1;
        unsigned int sc_int_clear_26reserved : 1;
        unsigned int sc_int_clear_27reserved : 1;
        unsigned int sc_int_clear_28reserved : 1;
        unsigned int sc_int_clear_29reserved : 1;
        unsigned int sc_int_clear_30reserved : 1;
        unsigned int sc_int_clear_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_CLEAR1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_0usim0_detect_int_START (0)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_0usim0_detect_int_END (0)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_1usim1_detect_int_START (1)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_1usim1_detect_int_END (1)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_2reserved_START (2)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_2reserved_END (2)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_3reserved_START (3)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_3reserved_END (3)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_4reserved_START (4)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_4reserved_END (4)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_5reserved_START (5)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_5reserved_END (5)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_6reserved_START (6)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_6reserved_END (6)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_7reserved_START (7)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_7reserved_END (7)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_8reserved_START (8)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_8reserved_END (8)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_9reserved_START (9)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_9reserved_END (9)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_10reserved_START (10)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_10reserved_END (10)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_11reserved_START (11)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_11reserved_END (11)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_12reserved_START (12)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_12reserved_END (12)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_13reserved_START (13)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_13reserved_END (13)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_14reserved_START (14)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_14reserved_END (14)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_15reserved_START (15)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_15reserved_END (15)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_16reserved_START (16)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_16reserved_END (16)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_17reserved_START (17)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_17reserved_END (17)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_18reserved_START (18)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_18reserved_END (18)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_19reserved_START (19)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_19reserved_END (19)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_20reserved_START (20)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_20reserved_END (20)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_21reserved_START (21)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_21reserved_END (21)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_22reserved_START (22)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_22reserved_END (22)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_23reserved_START (23)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_23reserved_END (23)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_24reserved_START (24)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_24reserved_END (24)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_25reserved_START (25)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_25reserved_END (25)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_26reserved_START (26)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_26reserved_END (26)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_27reserved_START (27)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_27reserved_END (27)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_28reserved_START (28)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_28reserved_END (28)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_29reserved_START (29)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_29reserved_END (29)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_30reserved_START (30)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_30reserved_END (30)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_31reserved_START (31)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_en0_0usim0_detect_int : 1;
        unsigned int sc_int_en0_1usim1_detect_int : 1;
        unsigned int sc_int_en0_2reserved : 1;
        unsigned int sc_int_en0_3reserved : 1;
        unsigned int sc_int_en0_4reserved : 1;
        unsigned int sc_int_en0_5reserved : 1;
        unsigned int sc_int_en0_6reserved : 1;
        unsigned int sc_int_en0_7reserved : 1;
        unsigned int sc_int_en0_8reserved : 1;
        unsigned int sc_int_en0_9reserved : 1;
        unsigned int sc_int_en0_10reserved : 1;
        unsigned int sc_int_en0_11reserved : 1;
        unsigned int sc_int_en0_12reserved : 1;
        unsigned int sc_int_en0_13reserved : 1;
        unsigned int sc_int_en0_14reserved : 1;
        unsigned int sc_int_en0_15reserved : 1;
        unsigned int sc_int_en0_16reserved : 1;
        unsigned int sc_int_en0_17reserved : 1;
        unsigned int sc_int_en0_18reserved : 1;
        unsigned int sc_int_en0_19reserved : 1;
        unsigned int sc_int_en0_20reserved : 1;
        unsigned int sc_int_en0_21reserved : 1;
        unsigned int sc_int_en0_22reserved : 1;
        unsigned int sc_int_en0_23reserved : 1;
        unsigned int sc_int_en0_24reserved : 1;
        unsigned int sc_int_en0_25reserved : 1;
        unsigned int sc_int_en0_26reserved : 1;
        unsigned int sc_int_en0_27reserved : 1;
        unsigned int sc_int_en0_28reserved : 1;
        unsigned int sc_int_en0_29reserved : 1;
        unsigned int sc_int_en0_30reserved : 1;
        unsigned int sc_int_en0_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_SET1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_0usim0_detect_int_START (0)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_0usim0_detect_int_END (0)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_1usim1_detect_int_START (1)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_1usim1_detect_int_END (1)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_2reserved_START (2)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_2reserved_END (2)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_4reserved_START (4)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_4reserved_END (4)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_5reserved_START (5)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_5reserved_END (5)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_8reserved_START (8)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_8reserved_END (8)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_12reserved_START (12)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_12reserved_END (12)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_16reserved_START (16)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_16reserved_END (16)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_17reserved_START (17)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_17reserved_END (17)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_18reserved_START (18)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_18reserved_END (18)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_19reserved_START (19)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_19reserved_END (19)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_20reserved_START (20)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_20reserved_END (20)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_21reserved_START (21)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_21reserved_END (21)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_22reserved_START (22)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_22reserved_END (22)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_23reserved_START (23)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_23reserved_END (23)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_24reserved_START (24)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_24reserved_END (24)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_25reserved_START (25)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_25reserved_END (25)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_26reserved_START (26)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_26reserved_END (26)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_27reserved_START (27)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_27reserved_END (27)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_28reserved_START (28)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_28reserved_END (28)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_29reserved_START (29)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_29reserved_END (29)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_30reserved_START (30)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_30reserved_END (30)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_31reserved_START (31)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_dis0_0usim0_detect_int : 1;
        unsigned int sc_int_dis0_1usim1_detect_int : 1;
        unsigned int sc_int_dis0_2reserved : 1;
        unsigned int sc_int_dis0_3reserved : 1;
        unsigned int sc_int_dis0_4reserved : 1;
        unsigned int sc_int_dis0_5reserved : 1;
        unsigned int sc_int_dis0_6reserved : 1;
        unsigned int sc_int_dis0_7reserved : 1;
        unsigned int sc_int_dis0_8reserved : 1;
        unsigned int sc_int_dis0_9reserved : 1;
        unsigned int sc_int_dis0_10reserved : 1;
        unsigned int sc_int_dis0_11reserved : 1;
        unsigned int sc_int_dis0_12reserved : 1;
        unsigned int sc_int_dis0_13reserved : 1;
        unsigned int sc_int_dis0_14reserved : 1;
        unsigned int sc_int_dis0_15reserved : 1;
        unsigned int sc_int_dis0_16reserved : 1;
        unsigned int sc_int_dis0_17reserved : 1;
        unsigned int sc_int_dis0_18reserved : 1;
        unsigned int sc_int_dis0_19reserved : 1;
        unsigned int sc_int_dis0_20reserved : 1;
        unsigned int sc_int_dis0_21reserved : 1;
        unsigned int sc_int_dis0_22reserved : 1;
        unsigned int sc_int_dis0_23reserved : 1;
        unsigned int sc_int_dis0_24reserved : 1;
        unsigned int sc_int_dis0_25reserved : 1;
        unsigned int sc_int_dis0_26reserved : 1;
        unsigned int sc_int_dis0_27reserved : 1;
        unsigned int sc_int_dis0_28reserved : 1;
        unsigned int sc_int_dis0_29reserved : 1;
        unsigned int sc_int_dis0_30reserved : 1;
        unsigned int sc_int_dis0_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_DIS1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_0usim0_detect_int_START (0)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_0usim0_detect_int_END (0)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_1usim1_detect_int_START (1)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_1usim1_detect_int_END (1)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_2reserved_START (2)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_2reserved_END (2)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_4reserved_START (4)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_4reserved_END (4)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_5reserved_START (5)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_5reserved_END (5)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_8reserved_START (8)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_8reserved_END (8)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_12reserved_START (12)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_12reserved_END (12)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_16reserved_START (16)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_16reserved_END (16)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_17reserved_START (17)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_17reserved_END (17)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_18reserved_START (18)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_18reserved_END (18)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_19reserved_START (19)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_19reserved_END (19)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_20reserved_START (20)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_20reserved_END (20)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_21reserved_START (21)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_21reserved_END (21)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_22reserved_START (22)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_22reserved_END (22)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_23reserved_START (23)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_23reserved_END (23)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_24reserved_START (24)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_24reserved_END (24)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_25reserved_START (25)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_25reserved_END (25)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_26reserved_START (26)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_26reserved_END (26)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_27reserved_START (27)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_27reserved_END (27)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_28reserved_START (28)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_28reserved_END (28)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_29reserved_START (29)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_29reserved_END (29)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_30reserved_START (30)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_30reserved_END (30)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_31reserved_START (31)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_en_sta_0usim0_detect_int : 1;
        unsigned int sc_int_en_sta_1usim1_detect_int : 1;
        unsigned int sc_int_en_sta_2reserved : 1;
        unsigned int sc_int_en_sta_3reserved : 1;
        unsigned int sc_int_en_sta_4reserved : 1;
        unsigned int sc_int_en_sta_5reserved : 1;
        unsigned int sc_int_en_sta_6reserved : 1;
        unsigned int sc_int_en_sta_7reserved : 1;
        unsigned int sc_int_en_sta_8reserved : 1;
        unsigned int sc_int_en_sta_9reserved : 1;
        unsigned int sc_int_en_sta_10reserved : 1;
        unsigned int sc_int_en_sta_11reserved : 1;
        unsigned int sc_int_en_sta_12reserved : 1;
        unsigned int sc_int_en_sta_13reserved : 1;
        unsigned int sc_int_en_sta_14reserved : 1;
        unsigned int sc_int_en_sta_15reserved : 1;
        unsigned int sc_int_en_sta_16reserved : 1;
        unsigned int sc_int_en_sta_17reserved : 1;
        unsigned int sc_int_en_sta_18reserved : 1;
        unsigned int sc_int_en_sta_19reserved : 1;
        unsigned int sc_int_en_sta_20reserved : 1;
        unsigned int sc_int_en_sta_21reserved : 1;
        unsigned int sc_int_en_sta_22reserved : 1;
        unsigned int sc_int_en_sta_23reserved : 1;
        unsigned int sc_int_en_sta_24reserved : 1;
        unsigned int sc_int_en_sta_25reserved : 1;
        unsigned int sc_int_en_sta_26reserved : 1;
        unsigned int sc_int_en_sta_27reserved : 1;
        unsigned int sc_int_en_sta_28reserved : 1;
        unsigned int sc_int_en_sta_29reserved : 1;
        unsigned int sc_int_en_sta_30reserved : 1;
        unsigned int sc_int_en_sta_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_0usim0_detect_int_START (0)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_0usim0_detect_int_END (0)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_1usim1_detect_int_START (1)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_1usim1_detect_int_END (1)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_2reserved_START (2)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_2reserved_END (2)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_3reserved_START (3)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_3reserved_END (3)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_4reserved_START (4)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_4reserved_END (4)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_5reserved_START (5)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_5reserved_END (5)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_6reserved_START (6)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_6reserved_END (6)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_7reserved_START (7)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_7reserved_END (7)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_8reserved_START (8)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_8reserved_END (8)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_9reserved_START (9)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_9reserved_END (9)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_10reserved_START (10)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_10reserved_END (10)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_11reserved_START (11)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_11reserved_END (11)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_12reserved_START (12)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_12reserved_END (12)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_13reserved_START (13)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_13reserved_END (13)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_14reserved_START (14)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_14reserved_END (14)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_15reserved_START (15)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_15reserved_END (15)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_16reserved_START (16)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_16reserved_END (16)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_17reserved_START (17)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_17reserved_END (17)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_18reserved_START (18)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_18reserved_END (18)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_19reserved_START (19)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_19reserved_END (19)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_20reserved_START (20)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_20reserved_END (20)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_21reserved_START (21)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_21reserved_END (21)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_22reserved_START (22)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_22reserved_END (22)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_23reserved_START (23)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_23reserved_END (23)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_24reserved_START (24)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_24reserved_END (24)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_25reserved_START (25)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_25reserved_END (25)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_26reserved_START (26)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_26reserved_END (26)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_27reserved_START (27)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_27reserved_END (27)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_28reserved_START (28)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_28reserved_END (28)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_29reserved_START (29)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_29reserved_END (29)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_30reserved_START (30)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_30reserved_END (30)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_31reserved_START (31)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer_en0_1acpu_dualtimer0_en0 : 2;
        unsigned int timer_en0_3acpu_dualtimer0_en1 : 2;
        unsigned int timer_en0_5acpu_dualtimer1_en0 : 2;
        unsigned int timer_en0_7acpu_dualtimer1_en1 : 2;
        unsigned int timer_en0_9acpu_dualtimer2_en0 : 2;
        unsigned int timer_en0_11acpu_dualtimer2_en1 : 2;
        unsigned int timer_en0_13acpu_dualtimer3_en0 : 2;
        unsigned int timer_en0_15acpu_dualtimer3_en1 : 2;
        unsigned int timer_en0_msk_1acpu_dualtimer0_en0 : 2;
        unsigned int timer_en0_msk_3acpu_dualtimer0_en1 : 2;
        unsigned int timer_en0_msk_5acpu_dualtimer1_en0 : 2;
        unsigned int timer_en0_msk_7acpu_dualtimer1_en1 : 2;
        unsigned int timer_en0_msk_9acpu_dualtimer2_en0 : 2;
        unsigned int timer_en0_msk_11acpu_dualtimer2_en1 : 2;
        unsigned int timer_en0_msk_13acpu_dualtimer3_en0 : 2;
        unsigned int timer_en0_msk_15acpu_dualtimer3_en1 : 2;
    } reg;
} SOC_AO_SCTRL_SC_TIMER_EN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_1acpu_dualtimer0_en0_START (0)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_1acpu_dualtimer0_en0_END (1)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_3acpu_dualtimer0_en1_START (2)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_3acpu_dualtimer0_en1_END (3)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_5acpu_dualtimer1_en0_START (4)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_5acpu_dualtimer1_en0_END (5)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_7acpu_dualtimer1_en1_START (6)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_7acpu_dualtimer1_en1_END (7)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_9acpu_dualtimer2_en0_START (8)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_9acpu_dualtimer2_en0_END (9)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_11acpu_dualtimer2_en1_START (10)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_11acpu_dualtimer2_en1_END (11)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_13acpu_dualtimer3_en0_START (12)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_13acpu_dualtimer3_en0_END (13)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_15acpu_dualtimer3_en1_START (14)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_15acpu_dualtimer3_en1_END (15)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_1acpu_dualtimer0_en0_START (16)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_1acpu_dualtimer0_en0_END (17)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_3acpu_dualtimer0_en1_START (18)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_3acpu_dualtimer0_en1_END (19)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_5acpu_dualtimer1_en0_START (20)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_5acpu_dualtimer1_en0_END (21)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_7acpu_dualtimer1_en1_START (22)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_7acpu_dualtimer1_en1_END (23)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_9acpu_dualtimer2_en0_START (24)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_9acpu_dualtimer2_en0_END (25)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_11acpu_dualtimer2_en1_START (26)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_11acpu_dualtimer2_en1_END (27)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_13acpu_dualtimer3_en0_START (28)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_13acpu_dualtimer3_en0_END (29)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_15acpu_dualtimer3_en1_START (30)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_15acpu_dualtimer3_en1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer_en1_1acpu_dualtimer4_en0 : 2;
        unsigned int timer_en1_3acpu_dualtimer4_en1 : 2;
        unsigned int timer_en1_5acpu_dualtimer5_en0 : 2;
        unsigned int timer_en1_7acpu_dualtimer5_en1 : 2;
        unsigned int timer_en1_9acpu_dualtimer6_en0 : 2;
        unsigned int timer_en1_11acpu_dualtimer6_en1 : 2;
        unsigned int timer_en1_13acpu_dualtimer7_en0 : 2;
        unsigned int timer_en1_15acpu_dualtimer7_en1 : 2;
        unsigned int timer_en1_msk_1acpu_dualtimer4_en0 : 2;
        unsigned int timer_en1_msk_3acpu_dualtimer4_en1 : 2;
        unsigned int timer_en1_msk_5acpu_dualtimer5_en0 : 2;
        unsigned int timer_en1_msk_7acpu_dualtimer5_en1 : 2;
        unsigned int timer_en1_msk_9acpu_dualtimer6_en0 : 2;
        unsigned int timer_en1_msk_11acpu_dualtimer6_en1 : 2;
        unsigned int timer_en1_msk_13acpu_dualtimer7_en0 : 2;
        unsigned int timer_en1_msk_15acpu_dualtimer7_en1 : 2;
    } reg;
} SOC_AO_SCTRL_SC_TIMER_EN1_UNION;
#endif
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_1acpu_dualtimer4_en0_START (0)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_1acpu_dualtimer4_en0_END (1)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_3acpu_dualtimer4_en1_START (2)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_3acpu_dualtimer4_en1_END (3)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_5acpu_dualtimer5_en0_START (4)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_5acpu_dualtimer5_en0_END (5)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_7acpu_dualtimer5_en1_START (6)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_7acpu_dualtimer5_en1_END (7)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_9acpu_dualtimer6_en0_START (8)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_9acpu_dualtimer6_en0_END (9)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_11acpu_dualtimer6_en1_START (10)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_11acpu_dualtimer6_en1_END (11)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_13acpu_dualtimer7_en0_START (12)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_13acpu_dualtimer7_en0_END (13)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_15acpu_dualtimer7_en1_START (14)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_15acpu_dualtimer7_en1_END (15)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_1acpu_dualtimer4_en0_START (16)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_1acpu_dualtimer4_en0_END (17)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_3acpu_dualtimer4_en1_START (18)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_3acpu_dualtimer4_en1_END (19)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_5acpu_dualtimer5_en0_START (20)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_5acpu_dualtimer5_en0_END (21)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_7acpu_dualtimer5_en1_START (22)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_7acpu_dualtimer5_en1_END (23)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_9acpu_dualtimer6_en0_START (24)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_9acpu_dualtimer6_en0_END (25)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_11acpu_dualtimer6_en1_START (26)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_11acpu_dualtimer6_en1_END (27)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_13acpu_dualtimer7_en0_START (28)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_13acpu_dualtimer7_en0_END (29)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_15acpu_dualtimer7_en1_START (30)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_15acpu_dualtimer7_en1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer_en4_mcu_dualtimer0_en0 : 2;
        unsigned int timer_en4_3mcu_dualtimer0_en1 : 2;
        unsigned int timer_en4_5mcu_dualtimer1_en0 : 2;
        unsigned int timer_en4_7mcu_dualtimer1_en1 : 2;
        unsigned int reserved_0 : 8;
        unsigned int timer_en4_msk_acpu_dualtimer9_en0 : 2;
        unsigned int timer_en4_msk_3acpu_dualtimer9_en1 : 2;
        unsigned int timer_en4_msk_5acpu_dualtimer10_en0 : 2;
        unsigned int timer_en4_msk_7acpu_dualtimer10_en1 : 2;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_AO_SCTRL_SC_TIMER_EN4_UNION;
#endif
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_mcu_dualtimer0_en0_START (0)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_mcu_dualtimer0_en0_END (1)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_3mcu_dualtimer0_en1_START (2)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_3mcu_dualtimer0_en1_END (3)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_5mcu_dualtimer1_en0_START (4)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_5mcu_dualtimer1_en0_END (5)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_7mcu_dualtimer1_en1_START (6)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_7mcu_dualtimer1_en1_END (7)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_acpu_dualtimer9_en0_START (16)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_acpu_dualtimer9_en0_END (17)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_3acpu_dualtimer9_en1_START (18)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_3acpu_dualtimer9_en1_END (19)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_5acpu_dualtimer10_en0_START (20)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_5acpu_dualtimer10_en0_END (21)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_7acpu_dualtimer10_en1_START (22)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_7acpu_dualtimer10_en1_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer_en5_acpu_dualtimer8_en0 : 3;
        unsigned int timer_en5_acpu_dualtimer8_en1 : 3;
        unsigned int timer_en5_reserved : 10;
        unsigned int timer_en5_msk_acpu_dualtimer8_en0 : 3;
        unsigned int timer_en5_msk_acpu_dualtimer8_en1 : 3;
        unsigned int timer_en5_msk : 10;
    } reg;
} SOC_AO_SCTRL_SC_TIMER_EN5_UNION;
#endif
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_acpu_dualtimer8_en0_START (0)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_acpu_dualtimer8_en0_END (2)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_acpu_dualtimer8_en1_START (3)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_acpu_dualtimer8_en1_END (5)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_reserved_START (6)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_reserved_END (15)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_acpu_dualtimer8_en0_START (16)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_acpu_dualtimer8_en0_END (18)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_acpu_dualtimer8_en1_START (19)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_acpu_dualtimer8_en1_END (21)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_START (22)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_share_mem_waterlevel : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL0_mcu_share_mem_waterlevel_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL0_mcu_share_mem_waterlevel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_subsys_ctrl1_dbgen_stcalib : 26;
        unsigned int mcu_subsys_ctrl1_dbgen_dapenable : 1;
        unsigned int reserved : 2;
        unsigned int cm3_sft_nmi_intreq : 1;
        unsigned int cache_hready_sel : 1;
        unsigned int mcu_subsys_ctrl1 : 1;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_dbgen_stcalib_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_dbgen_stcalib_END (25)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_dbgen_dapenable_START (26)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_dbgen_dapenable_END (26)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_cm3_sft_nmi_intreq_START (29)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_cm3_sft_nmi_intreq_END (29)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_cache_hready_sel_START (30)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_cache_hready_sel_END (30)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_START (31)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_remap_ddr_startaddr : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL2_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL2_mcu_remap_ddr_startaddr_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL2_mcu_remap_ddr_startaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_subsys_ctrl3_pmussi : 3;
        unsigned int cssys_ctrl_prot : 1;
        unsigned int tcxo_afc_oen_crg : 1;
        unsigned int reserved : 3;
        unsigned int aob_io_sel18_usim1 : 1;
        unsigned int aob_io_sel18_usim0 : 1;
        unsigned int aob_io_sel18_sd : 1;
        unsigned int mcu_subsys_ctrl3_reserved : 21;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_mcu_subsys_ctrl3_pmussi_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_mcu_subsys_ctrl3_pmussi_END (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_cssys_ctrl_prot_START (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_cssys_ctrl_prot_END (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_tcxo_afc_oen_crg_START (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_tcxo_afc_oen_crg_END (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_usim1_START (8)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_usim1_END (8)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_usim0_START (9)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_usim0_END (9)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_sd_START (10)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_sd_END (10)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_mcu_subsys_ctrl3_reserved_START (11)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_mcu_subsys_ctrl3_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int coreon_ramctrl_s_ema : 3;
        unsigned int reserved_0 : 1;
        unsigned int coreon_ramctrl_s_emaw : 2;
        unsigned int coreon_ramctrl_s_emas : 1;
        unsigned int reserved_1 : 3;
        unsigned int coreon_ramctrl_s_ret1n : 1;
        unsigned int coreon_ramctrl_s_ret2n : 1;
        unsigned int coreon_ramctrl_s_pgen : 1;
        unsigned int reserved_2 : 3;
        unsigned int reserved_3 : 16;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ema_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ema_END (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_emaw_START (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_emaw_END (5)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_emas_START (6)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_emas_END (6)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ret1n_START (10)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ret1n_END (10)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ret2n_START (11)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ret2n_END (11)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_pgen_START (12)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_pgen_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_share_mem_addr_mapaddr : 15;
        unsigned int reserved : 1;
        unsigned int mcu_share_mem_pageaddr : 3;
        unsigned int mcu_share_mem_remap_en : 1;
        unsigned int mcu_share_mem_addr : 12;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_addr_mapaddr_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_addr_mapaddr_END (14)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_pageaddr_START (16)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_pageaddr_END (18)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_remap_en_START (19)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_remap_en_END (19)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_addr_START (20)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cm3_acc_ddr_protect_str_addr : 12;
        unsigned int reserved_0 : 4;
        unsigned int cm3_acc_ddr_protect_end_addr : 12;
        unsigned int reserved_1 : 2;
        unsigned int cm3_acc_ddr_protect_sel : 1;
        unsigned int cm3_acc_ddr_protect_ctrl : 1;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_str_addr_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_str_addr_END (11)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_end_addr_START (16)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_end_addr_END (27)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_sel_START (30)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_sel_END (30)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_ctrl_START (31)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_ctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL7_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_subsys_state0_sysresetreq : 1;
        unsigned int mcu_subsys_state0_sleeping : 1;
        unsigned int mcu_subsys_state0_sleepdeep : 1;
        unsigned int mcu_subsys_state0_lockup : 1;
        unsigned int mcu_subsys_state0_currpri : 8;
        unsigned int mcu_subsys_state0_brchstat : 4;
        unsigned int mcu_subsys_state0_reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sysresetreq_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sysresetreq_END (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sleeping_START (1)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sleeping_END (1)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sleepdeep_START (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sleepdeep_END (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_lockup_START (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_lockup_END (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_currpri_START (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_currpri_END (11)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_brchstat_START (12)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_brchstat_END (15)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_reserved_START (16)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_subsys_state1 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT1_mcu_subsys_state1_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT1_mcu_subsys_state1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_subsys_state2 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT2_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT2_mcu_subsys_state2_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT2_mcu_subsys_state2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_subsys_state3 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT3_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT3_mcu_subsys_state3_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT3_mcu_subsys_state3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_subsys_state4_bank_write_port_enable : 1;
        unsigned int mcu_subsys_state4_bank_write_port_addres : 4;
        unsigned int mcu_subsys_state4_bank_read_port_A_address : 4;
        unsigned int mcu_subsys_state4_bank_read_port_B_address : 4;
        unsigned int mcu_subsys_state4 : 19;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_write_port_enable_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_write_port_enable_END (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_write_port_addres_START (1)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_write_port_addres_END (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_read_port_A_address_START (5)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_read_port_A_address_END (8)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_read_port_B_address_START (9)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_read_port_B_address_END (12)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_START (13)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_subsys_state5 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT5_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT5_mcu_subsys_state5_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT5_mcu_subsys_state5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_subsys_state6 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT6_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT6_mcu_subsys_state6_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT6_mcu_subsys_state6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_subsys_state7_DAP_HTRANS : 2;
        unsigned int mcu_subsys_state7_DAP_abort : 1;
        unsigned int mcu_subsys_state7_Watchpoint : 1;
        unsigned int mcu_subsys_state7_FPB_instruction_remap_match : 1;
        unsigned int mcu_subsys_state7_FPB_literal_remap_match : 1;
        unsigned int mcu_subsys_state7_FPB_BKPT_match : 1;
        unsigned int mcu_subsys_state7_SysTick_interrupt_request : 1;
        unsigned int mcu_subsys_state7 : 24;
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_DAP_HTRANS_START (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_DAP_HTRANS_END (1)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_DAP_abort_START (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_DAP_abort_END (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_Watchpoint_START (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_Watchpoint_END (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_instruction_remap_match_START (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_instruction_remap_match_END (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_literal_remap_match_START (5)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_literal_remap_match_END (5)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_BKPT_match_START (6)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_BKPT_match_END (6)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_SysTick_interrupt_request_START (7)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_SysTick_interrupt_request_END (7)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_START (8)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clken4_0hclk_mcu : 1;
        unsigned int periph_clken4_lreserved : 1;
        unsigned int periph_clken4_2reserved : 1;
        unsigned int periph_clken4_3clk_mcu_dap : 1;
        unsigned int periph_clken4_4pclk_cm3_timer0 : 1;
        unsigned int periph_clken4_5pclk_cm3_timer1 : 1;
        unsigned int periph_clken4_6pclk_cm3_wdt0 : 1;
        unsigned int periph_clken4_7pclk_cm3_wdt1 : 1;
        unsigned int periph_clken4_8hclk_ipc_s : 1;
        unsigned int periph_clken4_9hclk_ipc_ns : 1;
        unsigned int periph_clken4_10pclk_efusec : 1;
        unsigned int periph_clken4_11pclk_tzpc : 1;
        unsigned int periph_clken4_12pclk_wdt0 : 1;
        unsigned int periph_clken4_13pclk_wdt1 : 1;
        unsigned int periph_clken4_14pclk_wdt2 : 1;
        unsigned int periph_clken4_15pclk_timer0 : 1;
        unsigned int periph_clken4_16pclk_timer1 : 1;
        unsigned int periph_clken4_17pclk_timer2 : 1;
        unsigned int periph_clken4_18pclk_timer3 : 1;
        unsigned int periph_clken4_19pclk_timer4 : 1;
        unsigned int periph_clken4_20pclk_timer5 : 1;
        unsigned int periph_clken4_21pclk_timer6 : 1;
        unsigned int periph_clken4_22pclk_timer7 : 1;
        unsigned int periph_clken4_23pclk_timer8 : 1;
        unsigned int periph_clken4_24clk_uart0 : 1;
        unsigned int periph_clken4_25clk_rtc0 : 1;
        unsigned int periph_clken4_26clk_rtc1 : 1;
        unsigned int periph_clken4_27pclk_pmussi : 1;
        unsigned int periph_clken4_28clk_jtag_auth : 1;
        unsigned int periph_clken4_29clk_cs_dapb_on : 1;
        unsigned int periph_clken4_30clk_pdm : 1;
        unsigned int periph_clken4_31clk_ssi_pad : 1;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKEN4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_0hclk_mcu_START (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_0hclk_mcu_END (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_lreserved_START (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_lreserved_END (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_2reserved_START (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_2reserved_END (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_3clk_mcu_dap_START (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_3clk_mcu_dap_END (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_4pclk_cm3_timer0_START (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_4pclk_cm3_timer0_END (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_5pclk_cm3_timer1_START (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_5pclk_cm3_timer1_END (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_6pclk_cm3_wdt0_START (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_6pclk_cm3_wdt0_END (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_7pclk_cm3_wdt1_START (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_7pclk_cm3_wdt1_END (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_8hclk_ipc_s_START (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_8hclk_ipc_s_END (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_9hclk_ipc_ns_START (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_9hclk_ipc_ns_END (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_10pclk_efusec_START (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_10pclk_efusec_END (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_11pclk_tzpc_START (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_11pclk_tzpc_END (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_12pclk_wdt0_START (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_12pclk_wdt0_END (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_13pclk_wdt1_START (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_13pclk_wdt1_END (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_14pclk_wdt2_START (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_14pclk_wdt2_END (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_15pclk_timer0_START (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_15pclk_timer0_END (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_16pclk_timer1_START (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_16pclk_timer1_END (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_17pclk_timer2_START (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_17pclk_timer2_END (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_18pclk_timer3_START (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_18pclk_timer3_END (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_19pclk_timer4_START (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_19pclk_timer4_END (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_20pclk_timer5_START (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_20pclk_timer5_END (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_21pclk_timer6_START (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_21pclk_timer6_END (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_22pclk_timer7_START (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_22pclk_timer7_END (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_23pclk_timer8_START (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_23pclk_timer8_END (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_24clk_uart0_START (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_24clk_uart0_END (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_25clk_rtc0_START (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_25clk_rtc0_END (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_26clk_rtc1_START (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_26clk_rtc1_END (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_27pclk_pmussi_START (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_27pclk_pmussi_END (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_28clk_jtag_auth_START (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_28clk_jtag_auth_END (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_29clk_cs_dapb_on_START (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_29clk_cs_dapb_on_END (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_30clk_pdm_START (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_30clk_pdm_END (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_31clk_ssi_pad_START (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_31clk_ssi_pad_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkdis4_0hclk_mcu : 1;
        unsigned int periph_clkdis4_lreserved : 1;
        unsigned int periph_clkdis4_2reserved : 1;
        unsigned int periph_clkdis4_3clk_mcu_dap : 1;
        unsigned int periph_clkdis4_4pclk_cm3_timer0 : 1;
        unsigned int periph_clkdis4_5pclk_cm3_timer1 : 1;
        unsigned int periph_clkdis4_6pclk_cm3_wdt0 : 1;
        unsigned int periph_clkdis4_7pclk_cm3_wdt1 : 1;
        unsigned int periph_clkdis4_8hclk_ipc_s : 1;
        unsigned int periph_clkdis4_9hclk_ipc_ns : 1;
        unsigned int periph_clkdis4_10pclk_efusec : 1;
        unsigned int periph_clkdis4_11pclk_tzpc : 1;
        unsigned int periph_clkdis4_12pclk_wdt0 : 1;
        unsigned int periph_clkdis4_13pclk_wdt1 : 1;
        unsigned int periph_clkdis4_14pclk_wdt2 : 1;
        unsigned int periph_clkdis4_15pclk_timer0 : 1;
        unsigned int periph_clkdis4_16pclk_timer1 : 1;
        unsigned int periph_clkdis4_17pclk_timer2 : 1;
        unsigned int periph_clkdis4_18pclk_timer3 : 1;
        unsigned int periph_clkdis4_19pclk_timer4 : 1;
        unsigned int periph_clkdis4_20pclk_timer5 : 1;
        unsigned int periph_clkdis4_21pclk_timer6 : 1;
        unsigned int periph_clkdis4_22pclk_timer7 : 1;
        unsigned int periph_clkdis4_23pclk_timer8 : 1;
        unsigned int periph_clkdis4_24clk_uart0 : 1;
        unsigned int periph_clkdis4_25clk_rtc0 : 1;
        unsigned int periph_clkdis4_26clk_rtc1 : 1;
        unsigned int periph_clkdis4_27pclk_pmussi : 1;
        unsigned int periph_clkdis4_28clk_jtag_auth : 1;
        unsigned int periph_clkdis4_29clk_cs_dapb_on : 1;
        unsigned int periph_clkdis4_30clk_pdm : 1;
        unsigned int periph_clkdis4_31clk_ssi_pad : 1;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_0hclk_mcu_START (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_0hclk_mcu_END (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_lreserved_START (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_lreserved_END (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_2reserved_START (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_2reserved_END (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_3clk_mcu_dap_START (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_3clk_mcu_dap_END (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_4pclk_cm3_timer0_START (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_4pclk_cm3_timer0_END (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_5pclk_cm3_timer1_START (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_5pclk_cm3_timer1_END (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_6pclk_cm3_wdt0_START (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_6pclk_cm3_wdt0_END (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_7pclk_cm3_wdt1_START (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_7pclk_cm3_wdt1_END (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_8hclk_ipc_s_START (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_8hclk_ipc_s_END (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_9hclk_ipc_ns_START (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_9hclk_ipc_ns_END (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_10pclk_efusec_START (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_10pclk_efusec_END (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_11pclk_tzpc_START (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_11pclk_tzpc_END (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_12pclk_wdt0_START (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_12pclk_wdt0_END (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_13pclk_wdt1_START (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_13pclk_wdt1_END (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_14pclk_wdt2_START (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_14pclk_wdt2_END (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_15pclk_timer0_START (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_15pclk_timer0_END (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_16pclk_timer1_START (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_16pclk_timer1_END (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_17pclk_timer2_START (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_17pclk_timer2_END (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_18pclk_timer3_START (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_18pclk_timer3_END (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_19pclk_timer4_START (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_19pclk_timer4_END (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_20pclk_timer5_START (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_20pclk_timer5_END (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_21pclk_timer6_START (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_21pclk_timer6_END (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_22pclk_timer7_START (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_22pclk_timer7_END (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_23pclk_timer8_START (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_23pclk_timer8_END (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_24clk_uart0_START (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_24clk_uart0_END (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_25clk_rtc0_START (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_25clk_rtc0_END (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_26clk_rtc1_START (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_26clk_rtc1_END (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_27pclk_pmussi_START (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_27pclk_pmussi_END (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_28clk_jtag_auth_START (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_28clk_jtag_auth_END (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_29clk_cs_dapb_on_START (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_29clk_cs_dapb_on_END (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_30clk_pdm_START (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_30clk_pdm_END (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_31clk_ssi_pad_START (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_31clk_ssi_pad_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkstat4_0hclk_mcu : 1;
        unsigned int periph_clkstat4_lreserved : 1;
        unsigned int periph_clkstat4_2reserved : 1;
        unsigned int periph_clkstat4_3clk_mcu_dap : 1;
        unsigned int periph_clkstat4_4pclk_cm3_timer0 : 1;
        unsigned int periph_clkstat4_5pclk_cm3_timer1 : 1;
        unsigned int periph_clkstat4_6pclk_cm3_wdt0 : 1;
        unsigned int periph_clkstat4_7pclk_cm3_wdt1 : 1;
        unsigned int periph_clkstat4_8hclk_ipc_s : 1;
        unsigned int periph_clkstat4_9hclk_ipc_ns : 1;
        unsigned int periph_clkstat4_10pclk_efusec : 1;
        unsigned int periph_clkstat4_11pclk_tzpc : 1;
        unsigned int periph_clkstat4_12pclk_wdt0 : 1;
        unsigned int periph_clkstat4_13pclk_wdt1 : 1;
        unsigned int periph_clkstat4_14pclk_wdt2 : 1;
        unsigned int periph_clkstat4_15pclk_timer0 : 1;
        unsigned int periph_clkstat4_16pclk_timer1 : 1;
        unsigned int periph_clkstat4_17pclk_timer2 : 1;
        unsigned int periph_clkstat4_18pclk_timer3 : 1;
        unsigned int periph_clkstat4_19pclk_timer4 : 1;
        unsigned int periph_clkstat4_20pclk_timer5 : 1;
        unsigned int periph_clkstat4_21pclk_timer6 : 1;
        unsigned int periph_clkstat4_22pclk_timer7 : 1;
        unsigned int periph_clkstat4_23pclk_timer8 : 1;
        unsigned int periph_clkstat4_24clk_uart0 : 1;
        unsigned int periph_clkstat4_25clk_rtc0 : 1;
        unsigned int periph_clkstat4_26clk_rtc1 : 1;
        unsigned int periph_clkstat4_27pclk_pmussi : 1;
        unsigned int periph_clkstat4_28clk_jtag_auth : 1;
        unsigned int periph_clkstat4_29clk_cs_dapb_on : 1;
        unsigned int periph_clkstat4_30clk_pdm : 1;
        unsigned int periph_clkstat4_31clk_ssi_pad : 1;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_0hclk_mcu_START (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_0hclk_mcu_END (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_lreserved_START (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_lreserved_END (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_2reserved_START (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_2reserved_END (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_3clk_mcu_dap_START (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_3clk_mcu_dap_END (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_4pclk_cm3_timer0_START (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_4pclk_cm3_timer0_END (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_5pclk_cm3_timer1_START (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_5pclk_cm3_timer1_END (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_6pclk_cm3_wdt0_START (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_6pclk_cm3_wdt0_END (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_7pclk_cm3_wdt1_START (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_7pclk_cm3_wdt1_END (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_8hclk_ipc_s_START (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_8hclk_ipc_s_END (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_9hclk_ipc_ns_START (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_9hclk_ipc_ns_END (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_10pclk_efusec_START (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_10pclk_efusec_END (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_11pclk_tzpc_START (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_11pclk_tzpc_END (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_12pclk_wdt0_START (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_12pclk_wdt0_END (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_13pclk_wdt1_START (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_13pclk_wdt1_END (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_14pclk_wdt2_START (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_14pclk_wdt2_END (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_15pclk_timer0_START (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_15pclk_timer0_END (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_16pclk_timer1_START (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_16pclk_timer1_END (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_17pclk_timer2_START (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_17pclk_timer2_END (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_18pclk_timer3_START (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_18pclk_timer3_END (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_19pclk_timer4_START (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_19pclk_timer4_END (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_20pclk_timer5_START (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_20pclk_timer5_END (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_21pclk_timer6_START (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_21pclk_timer6_END (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_22pclk_timer7_START (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_22pclk_timer7_END (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_23pclk_timer8_START (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_23pclk_timer8_END (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_24clk_uart0_START (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_24clk_uart0_END (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_25clk_rtc0_START (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_25clk_rtc0_END (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_26clk_rtc1_START (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_26clk_rtc1_END (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_27pclk_pmussi_START (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_27pclk_pmussi_END (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_28clk_jtag_auth_START (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_28clk_jtag_auth_END (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_29clk_cs_dapb_on_START (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_29clk_cs_dapb_on_END (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_30clk_pdm_START (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_30clk_pdm_END (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_31clk_ssi_pad_START (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_31clk_ssi_pad_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clken5_0pclk_pmussi_ccpu : 1;
        unsigned int periph_clken5_1pclk_efusec_ccpu : 1;
        unsigned int periph_clken5_2hclk_ipc_ccpu : 1;
        unsigned int periph_clken5_3hclk_ipc_ns_ccpu : 1;
        unsigned int periph_clken5_4reserved : 1;
        unsigned int periph_clken5_5reserved : 1;
        unsigned int periph_clken5_6reserved : 1;
        unsigned int periph_clken5_7reserved : 1;
        unsigned int periph_clken5_8reserved : 1;
        unsigned int periph_clken5_9reserved : 1;
        unsigned int periph_clken5_10reserved : 1;
        unsigned int periph_clken5_11reserved : 1;
        unsigned int periph_clken5_12reserved : 1;
        unsigned int periph_clken5_13reserved : 1;
        unsigned int periph_clken5_14reserved : 1;
        unsigned int periph_clken5_15reserved : 1;
        unsigned int periph_clken5_16pclk_pmussi_mcu : 1;
        unsigned int periph_clken5_17pclk_efusec_mcu : 1;
        unsigned int periph_clken5_18hclk_ipc_mcu : 1;
        unsigned int periph_clken5_19hclk_ipc_ns_mcu : 1;
        unsigned int periph_clken5_20reserved : 1;
        unsigned int periph_clken5_21reserved : 1;
        unsigned int periph_clken5_22reserved : 1;
        unsigned int periph_clken5_23reserved : 1;
        unsigned int periph_clken5_24reserved : 1;
        unsigned int periph_clken5_25reserved : 1;
        unsigned int periph_clken5_26reserved : 1;
        unsigned int periph_clken5_27reserved : 1;
        unsigned int periph_clken5_28reserved : 1;
        unsigned int periph_clken5_29reserved : 1;
        unsigned int periph_clken5_30reserved : 1;
        unsigned int periph_clken5_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKEN5_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_0pclk_pmussi_ccpu_START (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_0pclk_pmussi_ccpu_END (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_1pclk_efusec_ccpu_START (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_1pclk_efusec_ccpu_END (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_2hclk_ipc_ccpu_START (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_2hclk_ipc_ccpu_END (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_3hclk_ipc_ns_ccpu_START (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_3hclk_ipc_ns_ccpu_END (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_4reserved_START (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_4reserved_END (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_5reserved_START (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_5reserved_END (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_8reserved_START (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_8reserved_END (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_12reserved_START (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_12reserved_END (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_16pclk_pmussi_mcu_START (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_16pclk_pmussi_mcu_END (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_17pclk_efusec_mcu_START (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_17pclk_efusec_mcu_END (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_18hclk_ipc_mcu_START (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_18hclk_ipc_mcu_END (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_19hclk_ipc_ns_mcu_START (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_19hclk_ipc_ns_mcu_END (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_20reserved_START (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_20reserved_END (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_21reserved_START (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_21reserved_END (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_22reserved_START (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_22reserved_END (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_23reserved_START (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_23reserved_END (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_24reserved_START (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_24reserved_END (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_25reserved_START (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_25reserved_END (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_26reserved_START (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_26reserved_END (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_27reserved_START (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_27reserved_END (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_28reserved_START (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_28reserved_END (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_29reserved_START (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_29reserved_END (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_30reserved_START (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_30reserved_END (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_31reserved_START (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkdis5_0pclk_pmussi_ccpu : 1;
        unsigned int periph_clkdis5_1pclk_efusec_ccpu : 1;
        unsigned int periph_clkdis5_2hclk_ipc_ccpu : 1;
        unsigned int periph_clkdis5_3hclk_ipc_ns_ccpu : 1;
        unsigned int periph_clkdis5_4reserved : 1;
        unsigned int periph_clkdis5_5reserved : 1;
        unsigned int periph_clkdis5_6reserved : 1;
        unsigned int periph_clkdis5_7reserved : 1;
        unsigned int periph_clkdis5_8reserved : 1;
        unsigned int periph_clkdis5_9reserved : 1;
        unsigned int periph_clkdis5_10reserved : 1;
        unsigned int periph_clkdis5_11reserved : 1;
        unsigned int periph_clkdis5_12reserved : 1;
        unsigned int periph_clkdis5_13reserved : 1;
        unsigned int periph_clkdis5_14reserved : 1;
        unsigned int periph_clkdis5_15reserved : 1;
        unsigned int periph_clkdis5_16pclk_pmussi_mcu : 1;
        unsigned int periph_clkdis5_17pclk_efusec_mcu : 1;
        unsigned int periph_clkdis5_18hclk_ipc_mcu : 1;
        unsigned int periph_clkdis5_19hclk_ipc_ns_mcu : 1;
        unsigned int periph_clkdis5_20reserved : 1;
        unsigned int periph_clkdis5_21reserved : 1;
        unsigned int periph_clkdis5_22reserved : 1;
        unsigned int periph_clkdis5_23reserved : 1;
        unsigned int periph_clkdis5_24reserved : 1;
        unsigned int periph_clkdis5_25reserved : 1;
        unsigned int periph_clkdis5_26reserved : 1;
        unsigned int periph_clkdis5_27reserved : 1;
        unsigned int periph_clkdis5_28reserved : 1;
        unsigned int periph_clkdis5_29reserved : 1;
        unsigned int periph_clkdis5_30reserved : 1;
        unsigned int periph_clkdis5_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_0pclk_pmussi_ccpu_START (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_0pclk_pmussi_ccpu_END (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_1pclk_efusec_ccpu_START (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_1pclk_efusec_ccpu_END (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_2hclk_ipc_ccpu_START (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_2hclk_ipc_ccpu_END (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_3hclk_ipc_ns_ccpu_START (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_3hclk_ipc_ns_ccpu_END (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_4reserved_START (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_4reserved_END (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_5reserved_START (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_5reserved_END (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_8reserved_START (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_8reserved_END (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_12reserved_START (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_12reserved_END (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_16pclk_pmussi_mcu_START (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_16pclk_pmussi_mcu_END (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_17pclk_efusec_mcu_START (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_17pclk_efusec_mcu_END (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_18hclk_ipc_mcu_START (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_18hclk_ipc_mcu_END (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_19hclk_ipc_ns_mcu_START (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_19hclk_ipc_ns_mcu_END (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_20reserved_START (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_20reserved_END (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_21reserved_START (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_21reserved_END (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_22reserved_START (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_22reserved_END (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_23reserved_START (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_23reserved_END (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_24reserved_START (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_24reserved_END (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_25reserved_START (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_25reserved_END (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_26reserved_START (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_26reserved_END (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_27reserved_START (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_27reserved_END (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_28reserved_START (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_28reserved_END (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_29reserved_START (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_29reserved_END (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_30reserved_START (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_30reserved_END (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_31reserved_START (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_clkstat5_0pclk_pmussi_ccpu : 1;
        unsigned int periph_clkstat5_1pclk_efusec_ccpu : 1;
        unsigned int periph_clkstat5_2hclk_ipc_ccpu : 1;
        unsigned int periph_clkstat5_3hclk_ipc_ns_ccpu : 1;
        unsigned int periph_clkstat5_4reserved : 1;
        unsigned int periph_clkstat5_5reserved : 1;
        unsigned int periph_clkstat5_6reserved : 1;
        unsigned int periph_clkstat5_7reserved : 1;
        unsigned int periph_clkstat5_8reserved : 1;
        unsigned int periph_clkstat5_9reserved : 1;
        unsigned int periph_clkstat5_10reserved : 1;
        unsigned int periph_clkstat5_11reserved : 1;
        unsigned int periph_clkstat5_12reserved : 1;
        unsigned int periph_clkstat5_13reserved : 1;
        unsigned int periph_clkstat5_14reserved : 1;
        unsigned int periph_clkstat5_15reserved : 1;
        unsigned int periph_clkstat5_16pclk_pmussi_mcu : 1;
        unsigned int periph_clkstat5_17pclk_efusec_mcu : 1;
        unsigned int periph_clkstat5_18hclk_ipc_mcu : 1;
        unsigned int periph_clkstat5_19hclk_ipc_ns_mcu : 1;
        unsigned int periph_clkstat5_20reserved : 1;
        unsigned int periph_clkstat5_21reserved : 1;
        unsigned int periph_clkstat5_22reserved : 1;
        unsigned int periph_clkstat5_23reserved : 1;
        unsigned int periph_clkstat5_24reserved : 1;
        unsigned int periph_clkstat5_25reserved : 1;
        unsigned int periph_clkstat5_26reserved : 1;
        unsigned int periph_clkstat5_27reserved : 1;
        unsigned int periph_clkstat5_28reserved : 1;
        unsigned int periph_clkstat5_29reserved : 1;
        unsigned int periph_clkstat5_30reserved : 1;
        unsigned int periph_clkstat5_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_0pclk_pmussi_ccpu_START (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_0pclk_pmussi_ccpu_END (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_1pclk_efusec_ccpu_START (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_1pclk_efusec_ccpu_END (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_2hclk_ipc_ccpu_START (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_2hclk_ipc_ccpu_END (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_3hclk_ipc_ns_ccpu_START (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_3hclk_ipc_ns_ccpu_END (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_4reserved_START (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_4reserved_END (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_5reserved_START (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_5reserved_END (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_8reserved_START (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_8reserved_END (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_12reserved_START (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_12reserved_END (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_16pclk_pmussi_mcu_START (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_16pclk_pmussi_mcu_END (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_17pclk_efusec_mcu_START (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_17pclk_efusec_mcu_END (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_18hclk_ipc_mcu_START (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_18hclk_ipc_mcu_END (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_19hclk_ipc_ns_mcu_START (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_19hclk_ipc_ns_mcu_END (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_20reserved_START (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_20reserved_END (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_21reserved_START (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_21reserved_END (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_22reserved_START (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_22reserved_END (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_23reserved_START (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_23reserved_END (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_24reserved_START (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_24reserved_END (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_25reserved_START (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_25reserved_END (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_26reserved_START (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_26reserved_END (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_27reserved_START (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_27reserved_END (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_28reserved_START (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_28reserved_END (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_29reserved_START (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_29reserved_END (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_30reserved_START (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_30reserved_END (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_31reserved_START (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rsten4_0reset_mcu_ectr_n : 1;
        unsigned int periph_rsten4_1reset_mcu_sys_n : 1;
        unsigned int periph_rsten4_2reset_mcu_por_n : 1;
        unsigned int periph_rsten4_3reset_mcu_dap_n : 1;
        unsigned int periph_rsten4_4preset_cm3_timer0_n : 1;
        unsigned int periph_rsten4_5preset_cm3_timer1_n : 1;
        unsigned int periph_rsten4_6preset_cm3_wdt0_n : 1;
        unsigned int periph_rsten4_7preset_cm3_wdt1_n : 1;
        unsigned int periph_rsten4_8hreset_ipc_s_n : 1;
        unsigned int periph_rsten4_9hreset_ipc_ns_n : 1;
        unsigned int periph_rsten4_10preset_efusec_n : 1;
        unsigned int periph_rsten4_11reserved : 1;
        unsigned int periph_rsten4_12preset_wdt0_n : 1;
        unsigned int periph_rsten4_13preset_wdt1_n : 1;
        unsigned int periph_rsten4_14preset_wdt2_n : 1;
        unsigned int periph_rsten4_15preset_timer0_n : 1;
        unsigned int periph_rsten4_16preset_timer1_n : 1;
        unsigned int periph_rsten4_17preset_timer2_n : 1;
        unsigned int periph_rsten4_18preset_timer3_n : 1;
        unsigned int periph_rsten4_19preset_timer4_n : 1;
        unsigned int periph_rsten4_20preset_timer5_n : 1;
        unsigned int periph_rsten4_21preset_timer6_n : 1;
        unsigned int periph_rsten4_22preset_timer7_n : 1;
        unsigned int periph_rsten4_23preset_timer8_n : 1;
        unsigned int periph_rsten4_24preset_uart0_n : 1;
        unsigned int periph_rsten4_25reset_rtc0_n : 1;
        unsigned int periph_rsten4_26reset_rtc1_n : 1;
        unsigned int periph_rsten4_27preset_pmussi_n : 1;
        unsigned int periph_rsten4_28reset_jtag_auth_n : 1;
        unsigned int periph_rsten4_29reset_cs_dapb_on_n : 1;
        unsigned int periph_rsten4_30mdm_subsys_glb : 1;
        unsigned int periph_rsten4_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTEN4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_0reset_mcu_ectr_n_START (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_0reset_mcu_ectr_n_END (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_1reset_mcu_sys_n_START (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_1reset_mcu_sys_n_END (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_2reset_mcu_por_n_START (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_2reset_mcu_por_n_END (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_3reset_mcu_dap_n_START (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_3reset_mcu_dap_n_END (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_4preset_cm3_timer0_n_START (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_4preset_cm3_timer0_n_END (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_5preset_cm3_timer1_n_START (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_5preset_cm3_timer1_n_END (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_6preset_cm3_wdt0_n_START (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_6preset_cm3_wdt0_n_END (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_7preset_cm3_wdt1_n_START (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_7preset_cm3_wdt1_n_END (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_8hreset_ipc_s_n_START (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_8hreset_ipc_s_n_END (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_9hreset_ipc_ns_n_START (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_9hreset_ipc_ns_n_END (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_10preset_efusec_n_START (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_10preset_efusec_n_END (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_12preset_wdt0_n_START (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_12preset_wdt0_n_END (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_13preset_wdt1_n_START (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_13preset_wdt1_n_END (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_14preset_wdt2_n_START (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_14preset_wdt2_n_END (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_15preset_timer0_n_START (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_15preset_timer0_n_END (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_16preset_timer1_n_START (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_16preset_timer1_n_END (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_17preset_timer2_n_START (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_17preset_timer2_n_END (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_18preset_timer3_n_START (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_18preset_timer3_n_END (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_19preset_timer4_n_START (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_19preset_timer4_n_END (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_20preset_timer5_n_START (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_20preset_timer5_n_END (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_21preset_timer6_n_START (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_21preset_timer6_n_END (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_22preset_timer7_n_START (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_22preset_timer7_n_END (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_23preset_timer8_n_START (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_23preset_timer8_n_END (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_24preset_uart0_n_START (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_24preset_uart0_n_END (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_25reset_rtc0_n_START (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_25reset_rtc0_n_END (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_26reset_rtc1_n_START (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_26reset_rtc1_n_END (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_27preset_pmussi_n_START (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_27preset_pmussi_n_END (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_28reset_jtag_auth_n_START (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_28reset_jtag_auth_n_END (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_29reset_cs_dapb_on_n_START (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_29reset_cs_dapb_on_n_END (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_30mdm_subsys_glb_START (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_30mdm_subsys_glb_END (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_31reserved_START (31)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rstdis4_0reset_mcu_ectr_n : 1;
        unsigned int periph_rstdis4_1reset_mcu_sys_n : 1;
        unsigned int periph_rstdis4_2reset_mcu_por_n : 1;
        unsigned int periph_rstdis4_3reset_mcu_dap_n : 1;
        unsigned int periph_rstdis4_4preset_cm3_timer0_n : 1;
        unsigned int periph_rstdis4_5preset_cm3_timer1_n : 1;
        unsigned int periph_rstdis4_6preset_cm3_wdt0_n : 1;
        unsigned int periph_rstdis4_7preset_cm3_wdt1_n : 1;
        unsigned int periph_rstdis4_8hreset_ipc_s_n : 1;
        unsigned int periph_rstdis4_9hreset_ipc_ns_n : 1;
        unsigned int periph_rstdis4_10preset_efusec_n : 1;
        unsigned int periph_rstdis4_11reserved : 1;
        unsigned int periph_rstdis4_12preset_wdt0_n : 1;
        unsigned int periph_rstdis4_13preset_wdt1_n : 1;
        unsigned int periph_rstdis4_14preset_wdt2_n : 1;
        unsigned int periph_rstdis4_15preset_timer0_n : 1;
        unsigned int periph_rstdis4_16preset_timer1_n : 1;
        unsigned int periph_rstdis4_17preset_timer2_n : 1;
        unsigned int periph_rstdis4_18preset_timer3_n : 1;
        unsigned int periph_rstdis4_19preset_timer4_n : 1;
        unsigned int periph_rstdis4_20preset_timer5_n : 1;
        unsigned int periph_rstdis4_21preset_timer6_n : 1;
        unsigned int periph_rstdis4_22preset_timer7_n : 1;
        unsigned int periph_rstdis4_23preset_timer8_n : 1;
        unsigned int periph_rstdis4_24preset_uart0_n : 1;
        unsigned int periph_rstdis4_25reset_rtc0_n : 1;
        unsigned int periph_rstdis4_26reset_rtc1_n : 1;
        unsigned int periph_rstdis4_27preset_pmussi_n : 1;
        unsigned int periph_rstdis4_28reset_jtag_auth_n : 1;
        unsigned int periph_rstdis4_29reset_cs_dapb_on_n : 1;
        unsigned int periph_rstdis4_30mdm_subsys_glb : 1;
        unsigned int periph_rstdis4_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_0reset_mcu_ectr_n_START (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_0reset_mcu_ectr_n_END (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_1reset_mcu_sys_n_START (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_1reset_mcu_sys_n_END (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_2reset_mcu_por_n_START (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_2reset_mcu_por_n_END (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_3reset_mcu_dap_n_START (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_3reset_mcu_dap_n_END (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_4preset_cm3_timer0_n_START (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_4preset_cm3_timer0_n_END (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_5preset_cm3_timer1_n_START (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_5preset_cm3_timer1_n_END (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_6preset_cm3_wdt0_n_START (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_6preset_cm3_wdt0_n_END (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_7preset_cm3_wdt1_n_START (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_7preset_cm3_wdt1_n_END (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_8hreset_ipc_s_n_START (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_8hreset_ipc_s_n_END (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_9hreset_ipc_ns_n_START (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_9hreset_ipc_ns_n_END (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_10preset_efusec_n_START (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_10preset_efusec_n_END (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_12preset_wdt0_n_START (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_12preset_wdt0_n_END (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_13preset_wdt1_n_START (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_13preset_wdt1_n_END (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_14preset_wdt2_n_START (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_14preset_wdt2_n_END (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_15preset_timer0_n_START (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_15preset_timer0_n_END (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_16preset_timer1_n_START (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_16preset_timer1_n_END (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_17preset_timer2_n_START (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_17preset_timer2_n_END (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_18preset_timer3_n_START (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_18preset_timer3_n_END (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_19preset_timer4_n_START (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_19preset_timer4_n_END (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_20preset_timer5_n_START (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_20preset_timer5_n_END (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_21preset_timer6_n_START (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_21preset_timer6_n_END (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_22preset_timer7_n_START (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_22preset_timer7_n_END (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_23preset_timer8_n_START (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_23preset_timer8_n_END (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_24preset_uart0_n_START (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_24preset_uart0_n_END (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_25reset_rtc0_n_START (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_25reset_rtc0_n_END (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_26reset_rtc1_n_START (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_26reset_rtc1_n_END (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_27preset_pmussi_n_START (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_27preset_pmussi_n_END (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_28reset_jtag_auth_n_START (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_28reset_jtag_auth_n_END (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_29reset_cs_dapb_on_n_START (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_29reset_cs_dapb_on_n_END (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_30mdm_subsys_glb_START (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_30mdm_subsys_glb_END (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_31reserved_START (31)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int periph_rststat4_0reset_mcu_ectr_n : 1;
        unsigned int periph_rststat4_1reset_mcu_sys_n : 1;
        unsigned int periph_rststat4_2reset_mcu_por_n : 1;
        unsigned int periph_rststat4_3reset_mcu_dap_n : 1;
        unsigned int periph_rststat4_4preset_cm3_timer0_n : 1;
        unsigned int periph_rststat4_5preset_cm3_timer1_n : 1;
        unsigned int periph_rststat4_6preset_cm3_wdt0_n : 1;
        unsigned int periph_rststat4_7preset_cm3_wdt1_n : 1;
        unsigned int periph_rststat4_8hreset_ipc_s_n : 1;
        unsigned int periph_rststat4_9hreset_ipc_ns_n : 1;
        unsigned int periph_rststat4_10preset_efusec_n : 1;
        unsigned int periph_rststat4_11reserved : 1;
        unsigned int periph_rststat4_12preset_wdt0_n : 1;
        unsigned int periph_rststat4_13preset_wdt1_n : 1;
        unsigned int periph_rststat4_14preset_wdt2_n : 1;
        unsigned int periph_rststat4_15preset_timer0_n : 1;
        unsigned int periph_rststat4_16preset_timer1_n : 1;
        unsigned int periph_rststat4_17preset_timer2_n : 1;
        unsigned int periph_rststat4_18preset_timer3_n : 1;
        unsigned int periph_rststat4_19preset_timer4_n : 1;
        unsigned int periph_rststat4_20preset_timer5_n : 1;
        unsigned int periph_rststat4_21preset_timer6_n : 1;
        unsigned int periph_rststat4_22preset_timer7_n : 1;
        unsigned int periph_rststat4_23preset_timer8_n : 1;
        unsigned int periph_rststat4_24preset_uart0_n : 1;
        unsigned int periph_rststat4_25reset_rtc0_n : 1;
        unsigned int periph_rststat4_26reset_rtc1_n : 1;
        unsigned int periph_rststat4_27preset_pmussi_n : 1;
        unsigned int periph_rststat4_28reset_jtag_auth_n : 1;
        unsigned int periph_rststat4_29reset_cs_dapb_on_n : 1;
        unsigned int periph_rststat4_30mdm_subsys_glb : 1;
        unsigned int periph_rststat4_31reserved : 1;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_0reset_mcu_ectr_n_START (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_0reset_mcu_ectr_n_END (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_1reset_mcu_sys_n_START (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_1reset_mcu_sys_n_END (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_2reset_mcu_por_n_START (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_2reset_mcu_por_n_END (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_3reset_mcu_dap_n_START (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_3reset_mcu_dap_n_END (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_4preset_cm3_timer0_n_START (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_4preset_cm3_timer0_n_END (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_5preset_cm3_timer1_n_START (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_5preset_cm3_timer1_n_END (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_6preset_cm3_wdt0_n_START (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_6preset_cm3_wdt0_n_END (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_7preset_cm3_wdt1_n_START (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_7preset_cm3_wdt1_n_END (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_8hreset_ipc_s_n_START (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_8hreset_ipc_s_n_END (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_9hreset_ipc_ns_n_START (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_9hreset_ipc_ns_n_END (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_10preset_efusec_n_START (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_10preset_efusec_n_END (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_12preset_wdt0_n_START (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_12preset_wdt0_n_END (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_13preset_wdt1_n_START (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_13preset_wdt1_n_END (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_14preset_wdt2_n_START (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_14preset_wdt2_n_END (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_15preset_timer0_n_START (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_15preset_timer0_n_END (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_16preset_timer1_n_START (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_16preset_timer1_n_END (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_17preset_timer2_n_START (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_17preset_timer2_n_END (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_18preset_timer3_n_START (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_18preset_timer3_n_END (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_19preset_timer4_n_START (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_19preset_timer4_n_END (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_20preset_timer5_n_START (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_20preset_timer5_n_END (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_21preset_timer6_n_START (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_21preset_timer6_n_END (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_22preset_timer7_n_START (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_22preset_timer7_n_END (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_23preset_timer8_n_START (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_23preset_timer8_n_END (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_24preset_uart0_n_START (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_24preset_uart0_n_END (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_25reset_rtc0_n_START (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_25reset_rtc0_n_END (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_26reset_rtc1_n_START (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_26reset_rtc1_n_END (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_27preset_pmussi_n_START (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_27preset_pmussi_n_END (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_28reset_jtag_auth_n_START (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_28reset_jtag_auth_n_END (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_29reset_cs_dapb_on_n_START (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_29reset_cs_dapb_on_n_END (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_30mdm_subsys_glb_START (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_30mdm_subsys_glb_END (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_31reserved_START (31)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTEN5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTDIS5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTSTAT5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_clken0_0peri : 1;
        unsigned int pw_clken0_1g3d : 1;
        unsigned int pw_clken0_2codecisp : 1;
        unsigned int pw_clken0_3reserved : 1;
        unsigned int pw_clken0_4mcpu : 1;
        unsigned int pw_clken0_5bbpharqmem : 1;
        unsigned int pw_clken0_6reserved : 1;
        unsigned int pw_clken0_7reserved : 1;
        unsigned int pw_clken0_8hifi : 1;
        unsigned int pw_clken0_9reserved : 1;
        unsigned int pw_clken0_10reserved : 1;
        unsigned int pw_clken0_11reserved : 1;
        unsigned int pw_clken0_12acpucluster : 1;
        unsigned int pw_clken0_13reserved : 1;
        unsigned int pw_clken0_14reserved : 1;
        unsigned int pw_clken0_15reserved : 1;
        unsigned int pw_clken0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_CLKEN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_clkdis0_0peri : 1;
        unsigned int pw_clkdis0_1g3d : 1;
        unsigned int pw_clkdis0_2codecisp : 1;
        unsigned int pw_clkdis0_3reserved : 1;
        unsigned int pw_clkdis0_4mcpu : 1;
        unsigned int pw_clkdis0_5bbpharqmem : 1;
        unsigned int pw_clkdis0_6reserved : 1;
        unsigned int pw_clkdis0_7reserved : 1;
        unsigned int pw_clkdis0_8hifi : 1;
        unsigned int pw_clkdis0_9reserved : 1;
        unsigned int pw_clkdis0_10reserved : 1;
        unsigned int pw_clkdis0_11reserved : 1;
        unsigned int pw_clkdis0_12acpucluster : 1;
        unsigned int pw_clkdis0_13reserved : 1;
        unsigned int pw_clkdis0_14reserved : 1;
        unsigned int pw_clkdis0_15reserved : 1;
        unsigned int pw_clkdis0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_CLKDIS0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_clk_stat0_0peri : 1;
        unsigned int pw_clk_stat0_1g3d : 1;
        unsigned int pw_clk_stat0_2codecisp : 1;
        unsigned int pw_clk_stat0_3reserved : 1;
        unsigned int pw_clk_stat0_4mcpu : 1;
        unsigned int pw_clk_stat0_5bbpharqmem : 1;
        unsigned int pw_clk_stat0_6reserved : 1;
        unsigned int pw_clk_stat0_7reserved : 1;
        unsigned int pw_clk_stat0_8hifi : 1;
        unsigned int pw_clk_stat0_9reserved : 1;
        unsigned int pw_clk_stat0_10reserved : 1;
        unsigned int pw_clk_stat0_11reserved : 1;
        unsigned int pw_clk_stat0_12acpucluster : 1;
        unsigned int pw_clk_stat0_13reserved : 1;
        unsigned int pw_clk_stat0_14reserved : 1;
        unsigned int pw_clk_stat0_15reserved : 1;
        unsigned int pw_clk_stat0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_CLK_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_rsten0_0peri : 1;
        unsigned int pw_rsten0_1g3d : 1;
        unsigned int pw_rsten0_2codecisp : 1;
        unsigned int pw_rsten0_3reserved : 1;
        unsigned int pw_rsten0_4mcpu : 1;
        unsigned int pw_rsten0_5bbpharqmem : 1;
        unsigned int pw_rsten0_6reserved : 1;
        unsigned int pw_rsten0_7reserved : 1;
        unsigned int pw_rsten0_8hifi : 1;
        unsigned int pw_rsten0_9reserved : 1;
        unsigned int pw_rsten0_10reserved : 1;
        unsigned int pw_rsten0_11reserved : 1;
        unsigned int pw_rsten0_12acpucluster : 1;
        unsigned int pw_rsten0_13reserved : 1;
        unsigned int pw_rsten0_14reserved : 1;
        unsigned int pw_rsten0_15reserved : 1;
        unsigned int pw_rsten0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_RSTEN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_rstdis0_0peri : 1;
        unsigned int pw_rstdis0_1g3d : 1;
        unsigned int pw_rstdis0_2codecisp : 1;
        unsigned int pw_rstdis0_3reserved : 1;
        unsigned int pw_rstdis0_4mcpu : 1;
        unsigned int pw_rstdis0_5bbpharqmem : 1;
        unsigned int pw_rstdis0_6reserved : 1;
        unsigned int pw_rstdis0_7reserved : 1;
        unsigned int pw_rstdis0_8hifi : 1;
        unsigned int pw_rstdis0_9reserved : 1;
        unsigned int pw_rstdis0_10reserved : 1;
        unsigned int pw_rstdis0_11reserved : 1;
        unsigned int pw_rstdis0_12acpucluster : 1;
        unsigned int pw_rstdis0_13reserved : 1;
        unsigned int pw_rstdis0_14reserved : 1;
        unsigned int pw_rstdis0_15reserved : 1;
        unsigned int pw_rstdis0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_RSTDIS0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_rst_stat0_0peri : 1;
        unsigned int pw_rst_stat0_1g3d : 1;
        unsigned int pw_rst_stat0_2codecisp : 1;
        unsigned int pw_rst_stat0_3reserved : 1;
        unsigned int pw_rst_stat0_4mcpu : 1;
        unsigned int pw_rst_stat0_5bbpharqmem : 1;
        unsigned int pw_rst_stat0_6reserved : 1;
        unsigned int pw_rst_stat0_7reserved : 1;
        unsigned int pw_rst_stat0_8hifi : 1;
        unsigned int pw_rst_stat0_9reserved : 1;
        unsigned int pw_rst_stat0_10reserved : 1;
        unsigned int pw_rst_stat0_11reserved : 1;
        unsigned int pw_rst_stat0_12acpucluster : 1;
        unsigned int pw_rst_stat0_13reserved : 1;
        unsigned int pw_rst_stat0_14reserved : 1;
        unsigned int pw_rst_stat0_15reserved : 1;
        unsigned int pw_rst_stat0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_RST_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_isoen0_0peri : 1;
        unsigned int pw_isoen0_1g3d : 1;
        unsigned int pw_isoen0_2codecisp : 1;
        unsigned int pw_isoen0_3reserved : 1;
        unsigned int pw_isoen0_4mcpu : 1;
        unsigned int pw_isoen0_5bbpharqmem : 1;
        unsigned int pw_isoen0_6reserved : 1;
        unsigned int pw_isoen0_7reserved : 1;
        unsigned int pw_isoen0_8hifi : 1;
        unsigned int pw_isoen0_9reserved : 1;
        unsigned int pw_isoen0_10reserved : 1;
        unsigned int pw_isoen0_11reserved : 1;
        unsigned int pw_isoen0_12acpucluster : 1;
        unsigned int pw_isoen0_13reserved : 1;
        unsigned int pw_isoen0_14reserved : 1;
        unsigned int pw_isoen0_15reserved : 1;
        unsigned int pw_isoen0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_ISOEN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_isodis0_0peri : 1;
        unsigned int pw_isodis0_1g3d : 1;
        unsigned int pw_isodis0_2codecisp : 1;
        unsigned int pw_isodis0_3reserved : 1;
        unsigned int pw_isodis0_4mcpu : 1;
        unsigned int pw_isodis0_5bbpharqmem : 1;
        unsigned int pw_isodis0_6reserved : 1;
        unsigned int pw_isodis0_7reserved : 1;
        unsigned int pw_isodis0_8hifi : 1;
        unsigned int pw_isodis0_9reserved : 1;
        unsigned int pw_isodis0_10reserved : 1;
        unsigned int pw_isodis0_11reserved : 1;
        unsigned int pw_isodis0_12acpucluster : 1;
        unsigned int pw_isodis0_13reserved : 1;
        unsigned int pw_isodis0_14reserved : 1;
        unsigned int pw_isodis0_15reserved : 1;
        unsigned int pw_isodis0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_ISODIS0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_iso_stat0_0peri : 1;
        unsigned int pw_iso_stat0_1g3d : 1;
        unsigned int pw_iso_stat0_2codecisp : 1;
        unsigned int pw_iso_stat0_3reserved : 1;
        unsigned int pw_iso_stat0_4mcpu : 1;
        unsigned int pw_iso_stat0_5bbpharqmem : 1;
        unsigned int pw_iso_stat0_6reserved : 1;
        unsigned int pw_iso_stat0_7reserved : 1;
        unsigned int pw_iso_stat0_8hifi : 1;
        unsigned int pw_iso_stat0_9reserved : 1;
        unsigned int pw_iso_stat0_10reserved : 1;
        unsigned int pw_iso_stat0_11reserved : 1;
        unsigned int pw_iso_stat0_12acpucluster : 1;
        unsigned int pw_iso_stat0_13reserved : 1;
        unsigned int pw_iso_stat0_14reserved : 1;
        unsigned int pw_iso_stat0_15reserved : 1;
        unsigned int pw_iso_stat0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_ISO_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_en0_0peri : 1;
        unsigned int pw_en0_1g3d : 1;
        unsigned int pw_en0_2codecisp : 1;
        unsigned int pw_en0_3reserved : 1;
        unsigned int pw_en0_4mcpu : 1;
        unsigned int pw_en0_5bbpharqmem : 1;
        unsigned int pw_en0_6reserved : 1;
        unsigned int pw_en0_7reserved : 1;
        unsigned int pw_en0_8hifi : 1;
        unsigned int pw_en0_9reserved : 1;
        unsigned int pw_en0_10reserved : 1;
        unsigned int pw_en0_11reserved : 1;
        unsigned int pw_en0_12acpucluster : 1;
        unsigned int pw_en0_13reserved : 1;
        unsigned int pw_en0_14reserved : 1;
        unsigned int pw_en0_15reserved : 1;
        unsigned int pw_en0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_dis0_0peri : 1;
        unsigned int pw_dis0_1g3d : 1;
        unsigned int pw_dis0_2codecisp : 1;
        unsigned int pw_dis0_3reserved : 1;
        unsigned int pw_dis0_4mcpu : 1;
        unsigned int pw_dis0_5bbpharqmem : 1;
        unsigned int pw_dis0_6reserved : 1;
        unsigned int pw_dis0_7reserved : 1;
        unsigned int pw_dis0_8hifi : 1;
        unsigned int pw_dis0_9reserved : 1;
        unsigned int pw_dis0_10reserved : 1;
        unsigned int pw_dis0_11reserved : 1;
        unsigned int pw_dis0_12acpucluster : 1;
        unsigned int pw_dis0_13reserved : 1;
        unsigned int pw_dis0_14reserved : 1;
        unsigned int pw_dis0_15reserved : 1;
        unsigned int pw_dis0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_mtcmos_ack_stat0_0peri : 1;
        unsigned int pw_mtcmos_ack_stat0_1g3d : 1;
        unsigned int pw_mtcmos_ack_stat0_2codecisp : 1;
        unsigned int pw_mtcmos_ack_stat0_3reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_4mcpu : 1;
        unsigned int pw_mtcmos_ack_stat0_5bbpharqmem : 1;
        unsigned int pw_mtcmos_ack_stat0_6reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_7reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_8hifi : 1;
        unsigned int pw_mtcmos_ack_stat0_9reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_10reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_11reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_12acpucluster : 1;
        unsigned int pw_mtcmos_ack_stat0_13reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_14reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_15reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_mtcmos_ack_stat0_0peri : 1;
        unsigned int pw_mtcmos_ack_stat0_1g3d : 1;
        unsigned int pw_mtcmos_ack_stat0_2codecisp : 1;
        unsigned int pw_mtcmos_ack_stat0_3reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_4mcpu : 1;
        unsigned int pw_mtcmos_ack_stat0_5bbpharqmem : 1;
        unsigned int pw_mtcmos_ack_stat0_6reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_7reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_8hifi : 1;
        unsigned int pw_mtcmos_ack_stat0_9reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_10reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_11reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_12acpucluster : 1;
        unsigned int pw_mtcmos_ack_stat0_13reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_14reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_15reserved : 1;
        unsigned int pw_mtcmos_ack_stat0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_mtcmos_timeout_stat0_0peri : 1;
        unsigned int pw_mtcmos_timeout_stat0_1g3d : 1;
        unsigned int pw_mtcmos_timeout_stat0_2codecisp : 1;
        unsigned int pw_mtcmos_timeout_stat0_3reserved : 1;
        unsigned int pw_mtcmos_timeout_stat0_4mcpu : 1;
        unsigned int pw_mtcmos_timeout_stat0_5bbpharqmem : 1;
        unsigned int pw_mtcmos_timeout_stat0_6reserved : 1;
        unsigned int pw_mtcmos_timeout_stat0_7reserved : 1;
        unsigned int pw_mtcmos_timeout_stat0_8hifi : 1;
        unsigned int pw_mtcmos_timeout_stat0_9reserved : 1;
        unsigned int pw_mtcmos_timeout_stat0_10reserved : 1;
        unsigned int pw_mtcmos_timeout_stat0_11reserved : 1;
        unsigned int pw_mtcmos_timeout_stat0_12acpucluster : 1;
        unsigned int pw_mtcmos_timeout_stat0_13reserved : 1;
        unsigned int pw_mtcmos_timeout_stat0_14reserved : 1;
        unsigned int pw_mtcmos_timeout_stat0_15reserved : 1;
        unsigned int pw_mtcmos_timeout_stat0_31reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_0peri_START (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_0peri_END (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_1g3d_START (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_1g3d_END (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_2codecisp_START (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_2codecisp_END (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_3reserved_START (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_3reserved_END (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_4mcpu_START (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_4mcpu_END (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_5bbpharqmem_START (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_5bbpharqmem_END (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_6reserved_START (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_6reserved_END (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_7reserved_START (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_8hifi_START (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_8hifi_END (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_9reserved_START (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_9reserved_END (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_10reserved_START (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_10reserved_END (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_11reserved_START (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_11reserved_END (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_12acpucluster_START (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_12acpucluster_END (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_13reserved_START (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_13reserved_END (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_14reserved_START (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_14reserved_END (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_15reserved_START (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_15reserved_END (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_31reserved_START (16)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_31reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int buck3_rise_cnt : 8;
        unsigned int hifi2mcu_wakeup_int_out : 1;
        unsigned int mdm_wakeup_int : 1;
        unsigned int acpu2mcu_wakeup_int_out : 1;
        unsigned int mcu_wakeup_int_out : 1;
        unsigned int soc_pw_up_stat : 1;
        unsigned int mcu2mcu_wakeup_int_out : 1;
        unsigned int pll_sw_ok : 1;
        unsigned int xtal_sw_ok : 1;
        unsigned int reserved_0 : 8;
        unsigned int SLEEPHOLDREQn : 1;
        unsigned int SLEEPHOLDACKn : 1;
        unsigned int reserved_1 : 2;
        unsigned int pw_stat : 4;
    } reg;
} SOC_AO_SCTRL_SC_PW_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_STAT0_buck3_rise_cnt_START (0)
#define SOC_AO_SCTRL_SC_PW_STAT0_buck3_rise_cnt_END (7)
#define SOC_AO_SCTRL_SC_PW_STAT0_hifi2mcu_wakeup_int_out_START (8)
#define SOC_AO_SCTRL_SC_PW_STAT0_hifi2mcu_wakeup_int_out_END (8)
#define SOC_AO_SCTRL_SC_PW_STAT0_mdm_wakeup_int_START (9)
#define SOC_AO_SCTRL_SC_PW_STAT0_mdm_wakeup_int_END (9)
#define SOC_AO_SCTRL_SC_PW_STAT0_acpu2mcu_wakeup_int_out_START (10)
#define SOC_AO_SCTRL_SC_PW_STAT0_acpu2mcu_wakeup_int_out_END (10)
#define SOC_AO_SCTRL_SC_PW_STAT0_mcu_wakeup_int_out_START (11)
#define SOC_AO_SCTRL_SC_PW_STAT0_mcu_wakeup_int_out_END (11)
#define SOC_AO_SCTRL_SC_PW_STAT0_soc_pw_up_stat_START (12)
#define SOC_AO_SCTRL_SC_PW_STAT0_soc_pw_up_stat_END (12)
#define SOC_AO_SCTRL_SC_PW_STAT0_mcu2mcu_wakeup_int_out_START (13)
#define SOC_AO_SCTRL_SC_PW_STAT0_mcu2mcu_wakeup_int_out_END (13)
#define SOC_AO_SCTRL_SC_PW_STAT0_pll_sw_ok_START (14)
#define SOC_AO_SCTRL_SC_PW_STAT0_pll_sw_ok_END (14)
#define SOC_AO_SCTRL_SC_PW_STAT0_xtal_sw_ok_START (15)
#define SOC_AO_SCTRL_SC_PW_STAT0_xtal_sw_ok_END (15)
#define SOC_AO_SCTRL_SC_PW_STAT0_SLEEPHOLDREQn_START (24)
#define SOC_AO_SCTRL_SC_PW_STAT0_SLEEPHOLDREQn_END (24)
#define SOC_AO_SCTRL_SC_PW_STAT0_SLEEPHOLDACKn_START (25)
#define SOC_AO_SCTRL_SC_PW_STAT0_SLEEPHOLDACKn_END (25)
#define SOC_AO_SCTRL_SC_PW_STAT0_pw_stat_START (28)
#define SOC_AO_SCTRL_SC_PW_STAT0_pw_stat_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 8;
        unsigned int mdm_nsp_domain_idleack : 1;
        unsigned int mdm_nsp_domain_idle : 1;
        unsigned int dma_domain_idleack : 1;
        unsigned int dma_domain_idle : 1;
        unsigned int ao_domain_idleack : 1;
        unsigned int ao_domain_idle : 1;
        unsigned int sysnoc_domain_idleack : 1;
        unsigned int sysnoc_domain_idle : 1;
        unsigned int g3d_domain_idleack : 1;
        unsigned int g3d_domain_idle : 1;
        unsigned int ccpu_domain_idleack : 1;
        unsigned int ccpu_domain_idle : 1;
        unsigned int mnoc_domain_idleack : 1;
        unsigned int mnoc_domain_idle : 1;
        unsigned int video_domain_idleack : 1;
        unsigned int video_domain_idle : 1;
        unsigned int ade_domain_idleack : 1;
        unsigned int ade_domain_idle : 1;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_AO_SCTRL_SC_PW_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_STAT1_mdm_nsp_domain_idleack_START (8)
#define SOC_AO_SCTRL_SC_PW_STAT1_mdm_nsp_domain_idleack_END (8)
#define SOC_AO_SCTRL_SC_PW_STAT1_mdm_nsp_domain_idle_START (9)
#define SOC_AO_SCTRL_SC_PW_STAT1_mdm_nsp_domain_idle_END (9)
#define SOC_AO_SCTRL_SC_PW_STAT1_dma_domain_idleack_START (10)
#define SOC_AO_SCTRL_SC_PW_STAT1_dma_domain_idleack_END (10)
#define SOC_AO_SCTRL_SC_PW_STAT1_dma_domain_idle_START (11)
#define SOC_AO_SCTRL_SC_PW_STAT1_dma_domain_idle_END (11)
#define SOC_AO_SCTRL_SC_PW_STAT1_ao_domain_idleack_START (12)
#define SOC_AO_SCTRL_SC_PW_STAT1_ao_domain_idleack_END (12)
#define SOC_AO_SCTRL_SC_PW_STAT1_ao_domain_idle_START (13)
#define SOC_AO_SCTRL_SC_PW_STAT1_ao_domain_idle_END (13)
#define SOC_AO_SCTRL_SC_PW_STAT1_sysnoc_domain_idleack_START (14)
#define SOC_AO_SCTRL_SC_PW_STAT1_sysnoc_domain_idleack_END (14)
#define SOC_AO_SCTRL_SC_PW_STAT1_sysnoc_domain_idle_START (15)
#define SOC_AO_SCTRL_SC_PW_STAT1_sysnoc_domain_idle_END (15)
#define SOC_AO_SCTRL_SC_PW_STAT1_g3d_domain_idleack_START (16)
#define SOC_AO_SCTRL_SC_PW_STAT1_g3d_domain_idleack_END (16)
#define SOC_AO_SCTRL_SC_PW_STAT1_g3d_domain_idle_START (17)
#define SOC_AO_SCTRL_SC_PW_STAT1_g3d_domain_idle_END (17)
#define SOC_AO_SCTRL_SC_PW_STAT1_ccpu_domain_idleack_START (18)
#define SOC_AO_SCTRL_SC_PW_STAT1_ccpu_domain_idleack_END (18)
#define SOC_AO_SCTRL_SC_PW_STAT1_ccpu_domain_idle_START (19)
#define SOC_AO_SCTRL_SC_PW_STAT1_ccpu_domain_idle_END (19)
#define SOC_AO_SCTRL_SC_PW_STAT1_mnoc_domain_idleack_START (20)
#define SOC_AO_SCTRL_SC_PW_STAT1_mnoc_domain_idleack_END (20)
#define SOC_AO_SCTRL_SC_PW_STAT1_mnoc_domain_idle_START (21)
#define SOC_AO_SCTRL_SC_PW_STAT1_mnoc_domain_idle_END (21)
#define SOC_AO_SCTRL_SC_PW_STAT1_video_domain_idleack_START (22)
#define SOC_AO_SCTRL_SC_PW_STAT1_video_domain_idleack_END (22)
#define SOC_AO_SCTRL_SC_PW_STAT1_video_domain_idle_START (23)
#define SOC_AO_SCTRL_SC_PW_STAT1_video_domain_idle_END (23)
#define SOC_AO_SCTRL_SC_PW_STAT1_ade_domain_idleack_START (24)
#define SOC_AO_SCTRL_SC_PW_STAT1_ade_domain_idleack_END (24)
#define SOC_AO_SCTRL_SC_PW_STAT1_ade_domain_idle_START (25)
#define SOC_AO_SCTRL_SC_PW_STAT1_ade_domain_idle_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int efuse_hw_rd_finish : 1;
        unsigned int nand_boot_en : 1;
        unsigned int jtag_trst_n_pin : 1;
        unsigned int pmu_rstin_n_ff2 : 1;
        unsigned int usim0_hpd_de_bounce_sel_ff3 : 1;
        unsigned int usim1_hpd_de_bounce_sel_ff3 : 1;
        unsigned int usim0_hpd_oen : 1;
        unsigned int usim1_hpd_oen : 1;
        unsigned int reserved_0 : 8;
        unsigned int wdg_rst_req : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_AO_SCTRL_SC_SYSTEST_STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_efuse_hw_rd_finish_START (0)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_efuse_hw_rd_finish_END (0)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_nand_boot_en_START (1)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_nand_boot_en_END (1)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_jtag_trst_n_pin_START (2)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_jtag_trst_n_pin_END (2)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_pmu_rstin_n_ff2_START (3)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_pmu_rstin_n_ff2_END (3)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim0_hpd_de_bounce_sel_ff3_START (4)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim0_hpd_de_bounce_sel_ff3_END (4)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim1_hpd_de_bounce_sel_ff3_START (5)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim1_hpd_de_bounce_sel_ff3_END (5)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim0_hpd_oen_START (6)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim0_hpd_oen_END (6)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim1_hpd_oen_START (7)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim1_hpd_oen_END (7)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_wdg_rst_req_START (16)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_wdg_rst_req_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slicer_cnt : 32;
    } reg;
} SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT0_slicer_cnt_START (0)
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT0_slicer_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slicer_cnt_high : 32;
    } reg;
} SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT1_slicer_cnt_high_START (0)
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT1_slicer_cnt_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_sft_fiq_req : 1;
        unsigned int ccpu_sft_fiq_req : 1;
        unsigned int reserved_0 : 5;
        unsigned int mdm_nsp_domain_idlereq : 1;
        unsigned int dma_domain_idlereq : 1;
        unsigned int ao_domain_idlereq : 1;
        unsigned int sysnoc_domain_idlereq : 1;
        unsigned int g3d_domain_idlereq : 1;
        unsigned int ccpu_domain_idlereq : 1;
        unsigned int mnoc_domain_idlereq : 1;
        unsigned int video_domain_idlereq : 1;
        unsigned int ade_domain_idlereq : 1;
        unsigned int acpu_sft_fiq_req_msk : 1;
        unsigned int ccpu_sft_fiq_req_msk : 1;
        unsigned int reserved_1 : 5;
        unsigned int mdm_nsp_domain_idlereq_msk : 1;
        unsigned int dma_domain_idlereq_msk : 1;
        unsigned int ao_domain_idlereq_msk : 1;
        unsigned int sysnoc_domain_idlereq_msk : 1;
        unsigned int g3d_domain_idlereq_msk : 1;
        unsigned int ccpu_domain_idlereq_msk : 1;
        unsigned int mnoc_domain_idlereq_msk : 1;
        unsigned int video_domain_idlereq_msk : 1;
        unsigned int ade_domain_idlereq_msk : 1;
    } reg;
} SOC_AO_SCTRL_SC_PW_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_CTRL1_acpu_sft_fiq_req_START (0)
#define SOC_AO_SCTRL_SC_PW_CTRL1_acpu_sft_fiq_req_END (0)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_sft_fiq_req_START (1)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_sft_fiq_req_END (1)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mdm_nsp_domain_idlereq_START (7)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mdm_nsp_domain_idlereq_END (7)
#define SOC_AO_SCTRL_SC_PW_CTRL1_dma_domain_idlereq_START (8)
#define SOC_AO_SCTRL_SC_PW_CTRL1_dma_domain_idlereq_END (8)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ao_domain_idlereq_START (9)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ao_domain_idlereq_END (9)
#define SOC_AO_SCTRL_SC_PW_CTRL1_sysnoc_domain_idlereq_START (10)
#define SOC_AO_SCTRL_SC_PW_CTRL1_sysnoc_domain_idlereq_END (10)
#define SOC_AO_SCTRL_SC_PW_CTRL1_g3d_domain_idlereq_START (11)
#define SOC_AO_SCTRL_SC_PW_CTRL1_g3d_domain_idlereq_END (11)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_domain_idlereq_START (12)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_domain_idlereq_END (12)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mnoc_domain_idlereq_START (13)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mnoc_domain_idlereq_END (13)
#define SOC_AO_SCTRL_SC_PW_CTRL1_video_domain_idlereq_START (14)
#define SOC_AO_SCTRL_SC_PW_CTRL1_video_domain_idlereq_END (14)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ade_domain_idlereq_START (15)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ade_domain_idlereq_END (15)
#define SOC_AO_SCTRL_SC_PW_CTRL1_acpu_sft_fiq_req_msk_START (16)
#define SOC_AO_SCTRL_SC_PW_CTRL1_acpu_sft_fiq_req_msk_END (16)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_sft_fiq_req_msk_START (17)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_sft_fiq_req_msk_END (17)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mdm_nsp_domain_idlereq_msk_START (23)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mdm_nsp_domain_idlereq_msk_END (23)
#define SOC_AO_SCTRL_SC_PW_CTRL1_dma_domain_idlereq_msk_START (24)
#define SOC_AO_SCTRL_SC_PW_CTRL1_dma_domain_idlereq_msk_END (24)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ao_domain_idlereq_msk_START (25)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ao_domain_idlereq_msk_END (25)
#define SOC_AO_SCTRL_SC_PW_CTRL1_sysnoc_domain_idlereq_msk_START (26)
#define SOC_AO_SCTRL_SC_PW_CTRL1_sysnoc_domain_idlereq_msk_END (26)
#define SOC_AO_SCTRL_SC_PW_CTRL1_g3d_domain_idlereq_msk_START (27)
#define SOC_AO_SCTRL_SC_PW_CTRL1_g3d_domain_idlereq_msk_END (27)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_domain_idlereq_msk_START (28)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_domain_idlereq_msk_END (28)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mnoc_domain_idlereq_msk_START (29)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mnoc_domain_idlereq_msk_END (29)
#define SOC_AO_SCTRL_SC_PW_CTRL1_video_domain_idlereq_msk_START (30)
#define SOC_AO_SCTRL_SC_PW_CTRL1_video_domain_idlereq_msk_END (30)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ade_domain_idlereq_msk_START (31)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ade_domain_idlereq_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int soc_pw_dn_en : 1;
        unsigned int ao_noc_timeout_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int ddrphy0_ret_en_i : 1;
        unsigned int clk_en_sysnoc : 1;
        unsigned int clk_en_modemnoc : 1;
        unsigned int ipc_ns_auto_clk_gate_en : 1;
        unsigned int ipc_s_auto_clk_gate_en : 1;
        unsigned int reserved_1 : 1;
        unsigned int m3_ram_ctrl_sftbypass : 1;
        unsigned int aarm_l2_ram_ctrl_sftbypass : 1;
        unsigned int acpu0_pwctrl_lp_set : 1;
        unsigned int dual_tcxo_en : 1;
        unsigned int bbpdrx_tcxo1_sel : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int soc_pw_dn_en_msk : 1;
        unsigned int ao_noc_timeout_en_msk : 1;
        unsigned int reserved_4 : 1;
        unsigned int ddrphy0_ret_en_i_msk : 1;
        unsigned int clk_en_sysnoc_msk : 1;
        unsigned int clk_en_modemnoc_msk : 1;
        unsigned int ipc_ns_auto_clk_gate_en_msk : 1;
        unsigned int ipc_s_auto_clk_gate_en_msk : 1;
        unsigned int reserved_5 : 1;
        unsigned int m3_ram_ctrl_sftbypass_msk : 1;
        unsigned int aarm_l2_ram_ctrl_sftbypass_msk : 1;
        unsigned int acpu0_pwctrl_lp_set_msk : 1;
        unsigned int dual_tcxo_en_msk : 1;
        unsigned int bbpdrx_tcxo1_sel_msk : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
    } reg;
} SOC_AO_SCTRL_SC_PW_CTRL_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_CTRL_soc_pw_dn_en_START (0)
#define SOC_AO_SCTRL_SC_PW_CTRL_soc_pw_dn_en_END (0)
#define SOC_AO_SCTRL_SC_PW_CTRL_ao_noc_timeout_en_START (1)
#define SOC_AO_SCTRL_SC_PW_CTRL_ao_noc_timeout_en_END (1)
#define SOC_AO_SCTRL_SC_PW_CTRL_ddrphy0_ret_en_i_START (3)
#define SOC_AO_SCTRL_SC_PW_CTRL_ddrphy0_ret_en_i_END (3)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_sysnoc_START (4)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_sysnoc_END (4)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_modemnoc_START (5)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_modemnoc_END (5)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_ns_auto_clk_gate_en_START (6)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_ns_auto_clk_gate_en_END (6)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_s_auto_clk_gate_en_START (7)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_s_auto_clk_gate_en_END (7)
#define SOC_AO_SCTRL_SC_PW_CTRL_m3_ram_ctrl_sftbypass_START (9)
#define SOC_AO_SCTRL_SC_PW_CTRL_m3_ram_ctrl_sftbypass_END (9)
#define SOC_AO_SCTRL_SC_PW_CTRL_aarm_l2_ram_ctrl_sftbypass_START (10)
#define SOC_AO_SCTRL_SC_PW_CTRL_aarm_l2_ram_ctrl_sftbypass_END (10)
#define SOC_AO_SCTRL_SC_PW_CTRL_acpu0_pwctrl_lp_set_START (11)
#define SOC_AO_SCTRL_SC_PW_CTRL_acpu0_pwctrl_lp_set_END (11)
#define SOC_AO_SCTRL_SC_PW_CTRL_dual_tcxo_en_START (12)
#define SOC_AO_SCTRL_SC_PW_CTRL_dual_tcxo_en_END (12)
#define SOC_AO_SCTRL_SC_PW_CTRL_bbpdrx_tcxo1_sel_START (13)
#define SOC_AO_SCTRL_SC_PW_CTRL_bbpdrx_tcxo1_sel_END (13)
#define SOC_AO_SCTRL_SC_PW_CTRL_soc_pw_dn_en_msk_START (16)
#define SOC_AO_SCTRL_SC_PW_CTRL_soc_pw_dn_en_msk_END (16)
#define SOC_AO_SCTRL_SC_PW_CTRL_ao_noc_timeout_en_msk_START (17)
#define SOC_AO_SCTRL_SC_PW_CTRL_ao_noc_timeout_en_msk_END (17)
#define SOC_AO_SCTRL_SC_PW_CTRL_ddrphy0_ret_en_i_msk_START (19)
#define SOC_AO_SCTRL_SC_PW_CTRL_ddrphy0_ret_en_i_msk_END (19)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_sysnoc_msk_START (20)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_sysnoc_msk_END (20)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_modemnoc_msk_START (21)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_modemnoc_msk_END (21)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_ns_auto_clk_gate_en_msk_START (22)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_ns_auto_clk_gate_en_msk_END (22)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_s_auto_clk_gate_en_msk_START (23)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_s_auto_clk_gate_en_msk_END (23)
#define SOC_AO_SCTRL_SC_PW_CTRL_m3_ram_ctrl_sftbypass_msk_START (25)
#define SOC_AO_SCTRL_SC_PW_CTRL_m3_ram_ctrl_sftbypass_msk_END (25)
#define SOC_AO_SCTRL_SC_PW_CTRL_aarm_l2_ram_ctrl_sftbypass_msk_START (26)
#define SOC_AO_SCTRL_SC_PW_CTRL_aarm_l2_ram_ctrl_sftbypass_msk_END (26)
#define SOC_AO_SCTRL_SC_PW_CTRL_acpu0_pwctrl_lp_set_msk_START (27)
#define SOC_AO_SCTRL_SC_PW_CTRL_acpu0_pwctrl_lp_set_msk_END (27)
#define SOC_AO_SCTRL_SC_PW_CTRL_dual_tcxo_en_msk_START (28)
#define SOC_AO_SCTRL_SC_PW_CTRL_dual_tcxo_en_msk_END (28)
#define SOC_AO_SCTRL_SC_PW_CTRL_bbpdrx_tcxo1_sel_msk_START (29)
#define SOC_AO_SCTRL_SC_PW_CTRL_bbpdrx_tcxo1_sel_msk_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcpusleep_vote_en0_7reserved : 8;
        unsigned int sc_mcpusleep_vote_en0 : 24;
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTEEN_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTEEN_sc_mcpusleep_vote_en0_7reserved_START (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTEEN_sc_mcpusleep_vote_en0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_MCPU_VOTEEN_sc_mcpusleep_vote_en0_START (8)
#define SOC_AO_SCTRL_SC_MCPU_VOTEEN_sc_mcpusleep_vote_en0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcpusleep_vote_dis0_7reserved : 8;
        unsigned int sc_mcpusleep_vote_dis0 : 24;
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTEDIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTEDIS_sc_mcpusleep_vote_dis0_7reserved_START (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTEDIS_sc_mcpusleep_vote_dis0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_MCPU_VOTEDIS_sc_mcpusleep_vote_dis0_START (8)
#define SOC_AO_SCTRL_SC_MCPU_VOTEDIS_sc_mcpusleep_vote_dis0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcpusleep_vote_stat0_7reserved : 8;
        unsigned int sc_mcpusleep_vote_stat0 : 24;
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTESTAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT_sc_mcpusleep_vote_stat0_7reserved_START (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT_sc_mcpusleep_vote_stat0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT_sc_mcpusleep_vote_stat0_START (8)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT_sc_mcpusleep_vote_stat0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcpusleep_vote_msk0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTE_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK0_sc_mcpusleep_vote_msk0_START (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK0_sc_mcpusleep_vote_msk0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcpusleep_vote_msk1 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTE_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK1_sc_mcpusleep_vote_msk1_START (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK1_sc_mcpusleep_vote_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcpusleep_vote_stat0_msk_0coresight : 1;
        unsigned int sc_mcpusleep_vote_stat0_msk_1coresight : 1;
        unsigned int sc_mcpusleep_vote_stat0_msk_2ipf : 1;
        unsigned int sc_mcpusleep_vote_stat0_msk_3socp : 1;
        unsigned int sc_mcpusleep_vote_stat0_msk_7reserved : 4;
        unsigned int sc_mcpusleep_vote_stat0_msk : 24;
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_0coresight_START (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_0coresight_END (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_1coresight_START (1)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_1coresight_END (1)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_2ipf_START (2)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_2ipf_END (2)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_3socp_START (3)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_3socp_END (3)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_7reserved_START (4)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_7reserved_END (7)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_START (8)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcpusleep_vote_stat1_msk_0coresight : 1;
        unsigned int sc_mcpusleep_vote_stat1_msk_1coresight : 1;
        unsigned int sc_mcpusleep_vote_stat1_msk_2ipf : 1;
        unsigned int sc_mcpusleep_vote_stat1_msk_3socp : 1;
        unsigned int sc_mcpusleep_vote_stat1_msk_7reserved : 4;
        unsigned int sc_mcpusleep_vote_stat1_msk : 24;
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_0coresight_START (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_0coresight_END (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_1coresight_START (1)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_1coresight_END (1)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_2ipf_START (2)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_2ipf_END (2)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_3socp_START (3)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_3socp_END (3)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_7reserved_START (4)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_7reserved_END (7)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_START (8)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_perisleep_vote_en0_reserved : 8;
        unsigned int sc_perisleep_vote_en0 : 24;
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTEEN_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTEEN_sc_perisleep_vote_en0_reserved_START (0)
#define SOC_AO_SCTRL_SC_PERI_VOTEEN_sc_perisleep_vote_en0_reserved_END (7)
#define SOC_AO_SCTRL_SC_PERI_VOTEEN_sc_perisleep_vote_en0_START (8)
#define SOC_AO_SCTRL_SC_PERI_VOTEEN_sc_perisleep_vote_en0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_perisleep_vote_dis0_reserved : 8;
        unsigned int sc_perisleep_vote_dis0 : 24;
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTEDIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTEDIS_sc_perisleep_vote_dis0_reserved_START (0)
#define SOC_AO_SCTRL_SC_PERI_VOTEDIS_sc_perisleep_vote_dis0_reserved_END (7)
#define SOC_AO_SCTRL_SC_PERI_VOTEDIS_sc_perisleep_vote_dis0_START (8)
#define SOC_AO_SCTRL_SC_PERI_VOTEDIS_sc_perisleep_vote_dis0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_perisleep_vote_stat0_reserved : 8;
        unsigned int sc_perisleep_vote_stat0 : 24;
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTESTAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT_sc_perisleep_vote_stat0_reserved_START (0)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT_sc_perisleep_vote_stat0_reserved_END (7)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT_sc_perisleep_vote_stat0_START (8)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT_sc_perisleep_vote_stat0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_perisleep_vote_msk0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTE_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK0_sc_perisleep_vote_msk0_START (0)
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK0_sc_perisleep_vote_msk0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_perisleep_vote_msk1 : 32;
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTE_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK1_sc_perisleep_vote_msk1_START (0)
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK1_sc_perisleep_vote_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcpusleep_vote_stat0_msk_0coresight : 1;
        unsigned int sc_mcpusleep_vote_stat0_msk_1coresight : 1;
        unsigned int sc_perisleep_vote_stat0_msk_2ipf : 1;
        unsigned int sc_perisleep_vote_stat0_msk_3socp : 1;
        unsigned int sc_perisleep_vote_stat0_msk_acpu0 : 1;
        unsigned int sc_perisleep_vote_stat0_msk_mcpu : 1;
        unsigned int sc_perisleep_vote_stat0_msk_hifi : 1;
        unsigned int sc_perisleep_vote_stat0_msk_codec : 1;
        unsigned int sc_perisleep_vote_stat0_msk : 24;
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_0coresight_START (0)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_0coresight_END (0)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_1coresight_START (1)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_1coresight_END (1)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_2ipf_START (2)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_2ipf_END (2)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_3socp_START (3)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_3socp_END (3)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_acpu0_START (4)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_acpu0_END (4)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_mcpu_START (5)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_mcpu_END (5)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_hifi_START (6)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_hifi_END (6)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_codec_START (7)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_codec_END (7)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_START (8)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcpusleep_vote_stat1_msk_0coresight : 1;
        unsigned int sc_mcpusleep_vote_stat1_msk_1coresight : 1;
        unsigned int sc_perisleep_vote_stat1_msk_2ipf : 1;
        unsigned int sc_perisleep_vote_stat1_msk_3socp : 1;
        unsigned int sc_perisleep_vote_stat1_msk_acpu0 : 1;
        unsigned int sc_perisleep_vote_stat1_msk_mcpu : 1;
        unsigned int sc_perisleep_vote_stat1_msk_hifi : 1;
        unsigned int sc_perisleep_vote_stat1_msk_codec : 1;
        unsigned int sc_perisleep_vote_stat1_msk : 24;
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_0coresight_START (0)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_0coresight_END (0)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_1coresight_START (1)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_1coresight_END (1)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_2ipf_START (2)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_2ipf_END (2)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_3socp_START (3)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_3socp_END (3)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_acpu0_START (4)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_acpu0_END (4)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_mcpu_START (5)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_mcpu_END (5)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_hifi_START (6)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_hifi_END (6)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_codec_START (7)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_codec_END (7)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_START (8)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_acpusleep_vote_en0_7reserved : 8;
        unsigned int sc_acpusleep_vote_en0 : 24;
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTEEN_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTEEN_sc_acpusleep_vote_en0_7reserved_START (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTEEN_sc_acpusleep_vote_en0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_ACPU_VOTEEN_sc_acpusleep_vote_en0_START (8)
#define SOC_AO_SCTRL_SC_ACPU_VOTEEN_sc_acpusleep_vote_en0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_acpusleep_vote_dis0_7reserved : 8;
        unsigned int sc_acpusleep_vote_dis0 : 24;
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTEDIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTEDIS_sc_acpusleep_vote_dis0_7reserved_START (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTEDIS_sc_acpusleep_vote_dis0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_ACPU_VOTEDIS_sc_acpusleep_vote_dis0_START (8)
#define SOC_AO_SCTRL_SC_ACPU_VOTEDIS_sc_acpusleep_vote_dis0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_acpusleep_vote_stat0_7reserved : 8;
        unsigned int sc_acpusleep_vote_stat0 : 24;
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTESTAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT_sc_acpusleep_vote_stat0_7reserved_START (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT_sc_acpusleep_vote_stat0_7reserved_END (7)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT_sc_acpusleep_vote_stat0_START (8)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT_sc_acpusleep_vote_stat0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_acpusleep_vote_msk0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTE_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK0_sc_acpusleep_vote_msk0_START (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK0_sc_acpusleep_vote_msk0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_acpusleep_vote_msk1 : 32;
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTE_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK1_sc_acpusleep_vote_msk1_START (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK1_sc_acpusleep_vote_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_acpusleep_vote_stat0_msk_0coresight : 1;
        unsigned int sc_acpusleep_vote_stat0_msk_1coresight : 1;
        unsigned int sc_acpusleep_vote_stat0_msk_2ipf : 1;
        unsigned int sc_acpusleep_vote_stat0_msk_3socp : 1;
        unsigned int sc_acpusleep_vote_stat0_msk_7reserved : 4;
        unsigned int sc_acpusleep_vote_stat0_msk : 24;
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_0coresight_START (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_0coresight_END (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_1coresight_START (1)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_1coresight_END (1)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_2ipf_START (2)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_2ipf_END (2)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_3socp_START (3)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_3socp_END (3)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_7reserved_START (4)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_7reserved_END (7)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_START (8)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_acpusleep_vote_stat1_msk_0coresight : 1;
        unsigned int sc_acpusleep_vote_stat1_msk_1coresight : 1;
        unsigned int sc_acpusleep_vote_stat1_msk_2ipf : 1;
        unsigned int sc_acpusleep_vote_stat1_msk_3socp : 1;
        unsigned int sc_acpusleep_vote_stat1_msk_7reserved : 4;
        unsigned int sc_acpusleep_vote_stat1_msk : 24;
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_0coresight_START (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_0coresight_END (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_1coresight_START (1)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_1coresight_END (1)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_2ipf_START (2)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_2ipf_END (2)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_3socp_START (3)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_3socp_END (3)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_7reserved_START (4)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_7reserved_END (7)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_START (8)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote_en0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTEEN_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTEEN_sc_mcu_vote_en0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTEEN_sc_mcu_vote_en0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote_dis0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTEDIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTEDIS_sc_mcu_vote_dis0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTEDIS_sc_mcu_vote_dis0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote_stat0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTESTAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT_sc_mcu_vote_stat0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT_sc_mcu_vote_stat0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote_msk0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK0_sc_mcu_vote_msk0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK0_sc_mcu_vote_msk0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote_msk1 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK1_sc_mcu_vote_msk1_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK1_sc_mcu_vote_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote_stat0_msk : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTESTAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT0_MSK_sc_mcu_vote_stat0_msk_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT0_MSK_sc_mcu_vote_stat0_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote_stat1_msk : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTESTAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT1_MSK_sc_mcu_vote_stat1_msk_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT1_MSK_sc_mcu_vote_stat1_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote1_en0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1EN_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1EN_sc_mcu_vote1_en0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1EN_sc_mcu_vote1_en0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote1_dis0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1DIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1DIS_sc_mcu_vote1_dis0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1DIS_sc_mcu_vote1_dis0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote1_stat0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT_sc_mcu_vote1_stat0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT_sc_mcu_vote1_stat0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote1_msk0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK0_sc_mcu_vote1_msk0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK0_sc_mcu_vote1_msk0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote1_msk1 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK1_sc_mcu_vote1_msk1_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK1_sc_mcu_vote1_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote1_stat0_msk : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1STAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT0_MSK_sc_mcu_vote1_stat0_msk_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT0_MSK_sc_mcu_vote1_stat0_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote1_stat1_msk : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1STAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT1_MSK_sc_mcu_vote1_stat1_msk_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT1_MSK_sc_mcu_vote1_stat1_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote2_en0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2EN_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2EN_sc_mcu_vote2_en0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2EN_sc_mcu_vote2_en0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote2_dis0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2DIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2DIS_sc_mcu_vote2_dis0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2DIS_sc_mcu_vote2_dis0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote2_stat0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT_sc_mcu_vote2_stat0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT_sc_mcu_vote2_stat0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote2_msk0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK0_sc_mcu_vote2_msk0_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK0_sc_mcu_vote2_msk0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote2_msk1 : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK1_sc_mcu_vote2_msk1_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK1_sc_mcu_vote2_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote2_stat0_msk : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2STAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT0_MSK_sc_mcu_vote2_stat0_msk_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT0_MSK_sc_mcu_vote2_stat0_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_mcu_vote2_stat1_msk : 32;
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2STAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT1_MSK_sc_mcu_vote2_stat1_msk_START (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT1_MSK_sc_mcu_vote2_stat1_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vote0_reg_semphen_req : 1;
        unsigned int vote1_reg_semphen_req : 1;
        unsigned int vote2_reg_semphen_req : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_AO_SCTRL_SC_VOTE_CTRL_UNION;
#endif
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote0_reg_semphen_req_START (0)
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote0_reg_semphen_req_END (0)
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote1_reg_semphen_req_START (1)
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote1_reg_semphen_req_END (1)
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote2_reg_semphen_req_START (2)
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote2_reg_semphen_req_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vote0_semphsta : 1;
        unsigned int vote1_semphsta : 1;
        unsigned int vote2_semphsta : 1;
        unsigned int reserved_0 : 1;
        unsigned int coresight_wakeup_en : 2;
        unsigned int ipf_wakeup_en : 1;
        unsigned int socp_wakeup_en : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_AO_SCTRL_SC_VOTE_STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote0_semphsta_START (0)
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote0_semphsta_END (0)
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote1_semphsta_START (1)
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote1_semphsta_END (1)
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote2_semphsta_START (2)
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote2_semphsta_END (2)
#define SOC_AO_SCTRL_SC_VOTE_STAT_coresight_wakeup_en_START (4)
#define SOC_AO_SCTRL_SC_VOTE_STAT_coresight_wakeup_en_END (5)
#define SOC_AO_SCTRL_SC_VOTE_STAT_ipf_wakeup_en_START (6)
#define SOC_AO_SCTRL_SC_VOTE_STAT_ipf_wakeup_en_END (6)
#define SOC_AO_SCTRL_SC_VOTE_STAT_socp_wakeup_en_START (7)
#define SOC_AO_SCTRL_SC_VOTE_STAT_socp_wakeup_en_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_econum : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_AO_SCTRL_SC_ECONUM_UNION;
#endif
#define SOC_AO_SCTRL_SC_ECONUM_sc_econum_START (0)
#define SOC_AO_SCTRL_SC_ECONUM_sc_econum_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int chip_id : 16;
        unsigned int chip_designer : 16;
    } reg;
} SOC_AO_SCTRL_SCCHIPID_UNION;
#endif
#define SOC_AO_SCTRL_SCCHIPID_chip_id_START (0)
#define SOC_AO_SCTRL_SCCHIPID_chip_id_END (15)
#define SOC_AO_SCTRL_SCCHIPID_chip_designer_START (16)
#define SOC_AO_SCTRL_SCCHIPID_chip_designer_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int soc_id : 16;
        unsigned int soc_designer : 16;
    } reg;
} SOC_AO_SCTRL_SCSOCID_UNION;
#endif
#define SOC_AO_SCTRL_SCSOCID_soc_id_START (0)
#define SOC_AO_SCTRL_SCSOCID_soc_id_END (15)
#define SOC_AO_SCTRL_SCSOCID_soc_designer_START (16)
#define SOC_AO_SCTRL_SCSOCID_soc_designer_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int soc_fpga_rtl_def : 32;
    } reg;
} SOC_AO_SCTRL_SC_SOC_FPGA_RTL_DEF_UNION;
#endif
#define SOC_AO_SCTRL_SC_SOC_FPGA_RTL_DEF_soc_fpga_rtl_def_START (0)
#define SOC_AO_SCTRL_SC_SOC_FPGA_RTL_DEF_soc_fpga_rtl_def_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int soc_fpga_pr_def : 32;
    } reg;
} SOC_AO_SCTRL_SC_SOC_FPGA_PR_DEF_UNION;
#endif
#define SOC_AO_SCTRL_SC_SOC_FPGA_PR_DEF_soc_fpga_pr_def_START (0)
#define SOC_AO_SCTRL_SC_SOC_FPGA_PR_DEF_soc_fpga_pr_def_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int soc_fpga_res_def0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF0_soc_fpga_res_def0_START (0)
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF0_soc_fpga_res_def0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int soc_fpga_res_def1 : 32;
    } reg;
} SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF1_UNION;
#endif
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF1_soc_fpga_res_def1_START (0)
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF1_soc_fpga_res_def1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xtalover0 : 1;
        unsigned int xtalen0 : 1;
        unsigned int reserved_0 : 2;
        unsigned int xtal_time0 : 25;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_AO_SCTRL_SC_XTAL_CTRL0_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtalover0_START (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtalover0_END (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtalen0_START (1)
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtalen0_END (1)
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtal_time0_START (4)
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtal_time0_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xtalover1 : 1;
        unsigned int xtalen1 : 1;
        unsigned int tcxo1_hard_ctrl_en : 1;
        unsigned int xtal1_sft_cfg : 1;
        unsigned int xtal_time1 : 25;
        unsigned int reserved : 3;
    } reg;
} SOC_AO_SCTRL_SC_XTAL_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtalover1_START (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtalover1_END (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtalen1_START (1)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtalen1_END (1)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_tcxo1_hard_ctrl_en_START (2)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_tcxo1_hard_ctrl_en_END (2)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtal1_sft_cfg_START (3)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtal1_sft_cfg_END (3)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtal_time1_START (4)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtal_time1_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xtalover0_pmu_up : 1;
        unsigned int xtalen0_pmu_up : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_AO_SCTRL_SC_XTAL_CTRL3_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_CTRL3_xtalover0_pmu_up_START (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL3_xtalover0_pmu_up_END (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL3_xtalen0_pmu_up_START (1)
#define SOC_AO_SCTRL_SC_XTAL_CTRL3_xtalen0_pmu_up_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int xtal0_time_pmu_dn : 25;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_AO_SCTRL_SC_XTAL_CTRL5_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_CTRL5_xtal0_time_pmu_dn_START (4)
#define SOC_AO_SCTRL_SC_XTAL_CTRL5_xtal0_time_pmu_dn_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 19;
        unsigned int tcxo0_abb_timeout : 1;
        unsigned int tcxo0_pwdn_timeout : 1;
        unsigned int tcxo_en_hard : 1;
        unsigned int buck3_en_out : 1;
        unsigned int reserved_1 : 1;
        unsigned int tcxo0_curr_st : 4;
        unsigned int xtal_en0_pmu : 1;
        unsigned int xtal_en0_abb : 1;
        unsigned int reserved_2 : 2;
    } reg;
} SOC_AO_SCTRL_SC_XTAL_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_abb_timeout_START (19)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_abb_timeout_END (19)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_pwdn_timeout_START (20)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_pwdn_timeout_END (20)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo_en_hard_START (21)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo_en_hard_END (21)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_buck3_en_out_START (22)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_buck3_en_out_END (22)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_curr_st_START (24)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_curr_st_END (27)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_xtal_en0_pmu_START (28)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_xtal_en0_pmu_END (28)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_xtal_en0_abb_START (29)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_xtal_en0_abb_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 19;
        unsigned int tcxo1_abb_timeout : 1;
        unsigned int tcxo1_en_nosoc_drx : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int tcxo1_curr_st : 4;
        unsigned int reserved_4 : 1;
        unsigned int xtal_en1_abb : 1;
        unsigned int reserved_5 : 2;
    } reg;
} SOC_AO_SCTRL_SC_XTAL_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_abb_timeout_START (19)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_abb_timeout_END (19)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_en_nosoc_drx_START (20)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_en_nosoc_drx_END (20)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_curr_st_START (24)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_curr_st_END (27)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_xtal_en1_abb_START (29)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_xtal_en1_abb_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int efuse_chipio0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_EFUSE_CHIPID0_UNION;
#endif
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID0_efuse_chipio0_START (0)
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID0_efuse_chipio0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int efuse_chipio1 : 32;
    } reg;
} SOC_AO_SCTRL_SC_EFUSE_CHIPID1_UNION;
#endif
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID1_efuse_chipio1_START (0)
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID1_efuse_chipio1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int efuse_sys_ctrl : 32;
    } reg;
} SOC_AO_SCTRL_SC_EFUSE_SYS_CTRL_UNION;
#endif
#define SOC_AO_SCTRL_SC_EFUSE_SYS_CTRL_efuse_sys_ctrl_START (0)
#define SOC_AO_SCTRL_SC_EFUSE_SYS_CTRL_efuse_sys_ctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int aarm_spniden : 1;
        unsigned int aarm_spiden : 1;
        unsigned int aarm_niden : 1;
        unsigned int aarm_dbgen : 1;
        unsigned int carm_spniden : 1;
        unsigned int carm_spiden : 1;
        unsigned int carm_niden : 1;
        unsigned int carm_dbgen : 1;
        unsigned int cssys_spniden : 1;
        unsigned int cssys_spiden : 1;
        unsigned int cssys_niden : 1;
        unsigned int cssys_dbgen : 1;
        unsigned int cssys_device_en : 1;
        unsigned int m3_dbgen : 1;
        unsigned int hifi_jtag_en : 1;
        unsigned int bbe_jtag_en : 1;
        unsigned int g3d_dbgen : 1;
        unsigned int djtag_en : 1;
        unsigned int cssys_jtag_en : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
    } reg;
} SOC_AO_SCTRL_SC_DEBUG_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_spniden_START (8)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_spniden_END (8)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_spiden_START (9)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_spiden_END (9)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_niden_START (10)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_niden_END (10)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_dbgen_START (11)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_dbgen_END (11)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_spniden_START (12)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_spniden_END (12)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_spiden_START (13)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_spiden_END (13)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_niden_START (14)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_niden_END (14)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_dbgen_START (15)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_dbgen_END (15)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_spniden_START (16)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_spniden_END (16)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_spiden_START (17)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_spiden_END (17)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_niden_START (18)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_niden_END (18)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_dbgen_START (19)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_dbgen_END (19)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_device_en_START (20)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_device_en_END (20)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_m3_dbgen_START (21)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_m3_dbgen_END (21)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_hifi_jtag_en_START (22)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_hifi_jtag_en_END (22)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_bbe_jtag_en_START (23)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_bbe_jtag_en_END (23)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_g3d_dbgen_START (24)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_g3d_dbgen_END (24)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_djtag_en_START (25)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_djtag_en_END (25)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_jtag_en_START (26)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_jtag_en_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_cfg_arm_dbg_wr_dis : 1;
        unsigned int sc_cfg_arm_dbg_wr : 1;
        unsigned int reserved_0 : 1;
        unsigned int sc_arm_dbg_key_wr_en0 : 1;
        unsigned int reserved_1 : 2;
        unsigned int arm_dbg_key_cnt0 : 2;
        unsigned int sec_dbg_key_pass : 1;
        unsigned int reserved_2 : 23;
    } reg;
} SOC_AO_SCTRL_SC_DBG_STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_cfg_arm_dbg_wr_dis_START (0)
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_cfg_arm_dbg_wr_dis_END (0)
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_cfg_arm_dbg_wr_START (1)
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_cfg_arm_dbg_wr_END (1)
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_arm_dbg_key_wr_en0_START (3)
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_arm_dbg_key_wr_en0_END (3)
#define SOC_AO_SCTRL_SC_DBG_STAT_arm_dbg_key_cnt0_START (6)
#define SOC_AO_SCTRL_SC_DBG_STAT_arm_dbg_key_cnt0_END (7)
#define SOC_AO_SCTRL_SC_DBG_STAT_sec_dbg_key_pass_START (8)
#define SOC_AO_SCTRL_SC_DBG_STAT_sec_dbg_key_pass_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_arm_dbg_key0 : 32;
    } reg;
} SOC_AO_SCTRL_SC_ARM_DBG_KEY0_UNION;
#endif
#define SOC_AO_SCTRL_SC_ARM_DBG_KEY0_sc_arm_dbg_key0_START (0)
#define SOC_AO_SCTRL_SC_ARM_DBG_KEY0_sc_arm_dbg_key0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved31 : 32;
    } reg;
} SOC_AO_SCTRL_SC_RESERVED31_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED31_sc_reserved31_START (0)
#define SOC_AO_SCTRL_SC_RESERVED31_sc_reserved31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved32 : 32;
    } reg;
} SOC_AO_SCTRL_SC_RESERVED32_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED32_sc_reserved32_START (0)
#define SOC_AO_SCTRL_SC_RESERVED32_sc_reserved32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved33 : 32;
    } reg;
} SOC_AO_SCTRL_SC_RESERVED33_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED33_sc_reserved33_START (0)
#define SOC_AO_SCTRL_SC_RESERVED33_sc_reserved33_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved34 : 32;
    } reg;
} SOC_AO_SCTRL_SC_RESERVED34_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED34_sc_reserved34_START (0)
#define SOC_AO_SCTRL_SC_RESERVED34_sc_reserved34_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved35 : 32;
    } reg;
} SOC_AO_SCTRL_SC_RESERVED35_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED35_sc_reserved35_START (0)
#define SOC_AO_SCTRL_SC_RESERVED35_sc_reserved35_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved36 : 32;
    } reg;
} SOC_AO_SCTRL_SC_RESERVED36_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED36_sc_reserved36_START (0)
#define SOC_AO_SCTRL_SC_RESERVED36_sc_reserved36_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved37 : 32;
    } reg;
} SOC_AO_SCTRL_SC_RESERVED37_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED37_sc_reserved37_START (0)
#define SOC_AO_SCTRL_SC_RESERVED37_sc_reserved37_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_reserved38 : 32;
    } reg;
} SOC_AO_SCTRL_SC_RESERVED38_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED38_sc_reserved38_START (0)
#define SOC_AO_SCTRL_SC_RESERVED38_sc_reserved38_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clksys_on_div_cfg : 3;
        unsigned int clksys_on_div_cfg_hard_en : 1;
        unsigned int clksys_on_div_cfg_hard_wfi : 3;
        unsigned int reserved_0 : 9;
        unsigned int clksys_on_div_cfg_msk : 3;
        unsigned int clksys_on_div_cfg_hard_en_msk : 1;
        unsigned int clksys_on_div_cfg_hard_wfi_msk : 3;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_START (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_END (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_en_START (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_en_END (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_wfi_START (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_wfi_END (6)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_msk_START (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_msk_END (18)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_en_msk_START (19)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_en_msk_END (19)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_wfi_msk_START (20)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_wfi_msk_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdm_width : 4;
        unsigned int pdm_mode : 1;
        unsigned int pdm_en : 1;
        unsigned int reserved : 10;
        unsigned int pdm_modu : 16;
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_width_START (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_width_END (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_mode_START (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_mode_END (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_en_START (5)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_en_END (5)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_modu_START (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_modu_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdm_div1 : 16;
        unsigned int pdm_div2 : 16;
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_pdm_div1_START (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_pdm_div1_END (15)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_pdm_div2_START (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_pdm_div2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rtl_div_cfg : 15;
        unsigned int clk32k_sel_nv : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_rtl_div_cfg_START (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_rtl_div_cfg_END (14)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_clk32k_sel_nv_START (15)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_clk32k_sel_nv_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_monitor_cfg_cnt_periodcfg : 16;
        unsigned int reserved : 14;
        unsigned int clk_monitor_cnt_update_en : 1;
        unsigned int clk_monitor_cfg_cnt_en : 1;
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cfg_cnt_periodcfg_START (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cfg_cnt_periodcfg_END (15)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cnt_update_en_START (30)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cnt_update_en_END (30)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cfg_cnt_en_START (31)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cfg_cnt_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_monitor_int_mask : 1;
        unsigned int clk_monitor_tcxo_en : 1;
        unsigned int clk_monitor_int_clr : 1;
        unsigned int reserved : 13;
        unsigned int io_ret_pret_0 : 1;
        unsigned int io_ret_pret_1 : 1;
        unsigned int io_ret_pret_2 : 1;
        unsigned int io_ret_pret_3 : 1;
        unsigned int io_ret_pret_4 : 1;
        unsigned int io_ret_pret_sd : 1;
        unsigned int io_ret_pret_usim0 : 1;
        unsigned int io_ret_pret_usim1 : 1;
        unsigned int alwayson_and_periph_sys_ctrl11 : 8;
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_int_mask_START (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_int_mask_END (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_tcxo_en_START (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_tcxo_en_END (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_int_clr_START (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_int_clr_END (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_0_START (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_0_END (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_1_START (17)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_1_END (17)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_2_START (18)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_2_END (18)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_3_START (19)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_3_END (19)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_4_START (20)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_4_END (20)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_sd_START (21)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_sd_END (21)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_usim0_START (22)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_usim0_END (22)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_usim1_START (23)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_usim1_END (23)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_alwayson_and_periph_sys_ctrl11_START (24)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_alwayson_and_periph_sys_ctrl11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_s_clk_state : 3;
        unsigned int ipc_ns_clk_state : 3;
        unsigned int clk_monitor_mask_intr : 1;
        unsigned int clk_monitor_raw_intr : 1;
        unsigned int ahb_rev_bit : 1;
        unsigned int reserved : 7;
        unsigned int clk_monitor_clk_cnt : 16;
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ipc_s_clk_state_START (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ipc_s_clk_state_END (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ipc_ns_clk_state_START (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ipc_ns_clk_state_END (5)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_mask_intr_START (6)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_mask_intr_END (6)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_raw_intr_START (7)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_raw_intr_END (7)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ahb_rev_bit_START (8)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ahb_rev_bit_END (8)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_clk_cnt_START (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_clk_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdrx_depth_flag_1card : 1;
        unsigned int g1_gdrx_depth_flag : 1;
        unsigned int g2_gdrx_depth_flag : 1;
        unsigned int cdma_evdo_gdrx_depth_flag : 1;
        unsigned int cdma_1x_gdrx_depth_flag : 1;
        unsigned int alwayson_and_periph_sys_state1 : 27;
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_wdrx_depth_flag_1card_START (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_wdrx_depth_flag_1card_END (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_g1_gdrx_depth_flag_START (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_g1_gdrx_depth_flag_END (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_g2_gdrx_depth_flag_START (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_g2_gdrx_depth_flag_END (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_cdma_evdo_gdrx_depth_flag_START (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_cdma_evdo_gdrx_depth_flag_END (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_cdma_1x_gdrx_depth_flag_START (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_cdma_1x_gdrx_depth_flag_END (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_alwayson_and_periph_sys_state1_START (5)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_alwayson_and_periph_sys_state1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 6;
        unsigned int datcondet_sts : 1;
        unsigned int chgdet_sts : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_datcondet_sts_START (6)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_datcondet_sts_END (6)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_chgdet_sts_START (7)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_chgdet_sts_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sysnoc_cfpnoc_timeout : 1;
        unsigned int sysnoc_ddrc_timeout : 1;
        unsigned int sysnoc_xg2ram0_timeout : 1;
        unsigned int aonoc_modem_s_timeout : 1;
        unsigned int aonoc_mcu_s_timeout : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_cfpnoc_timeout_START (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_cfpnoc_timeout_END (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_ddrc_timeout_START (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_ddrc_timeout_END (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_xg2ram0_timeout_START (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_xg2ram0_timeout_END (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_aonoc_modem_s_timeout_START (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_aonoc_modem_s_timeout_END (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_aonoc_mcu_s_timeout_START (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_aonoc_mcu_s_timeout_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_up_time_0peri : 16;
        unsigned int pw_up_time_1g3d : 16;
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME0_pw_up_time_0peri_START (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME0_pw_up_time_0peri_END (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME0_pw_up_time_1g3d_START (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME0_pw_up_time_1g3d_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_up_time_2codecisp : 16;
        unsigned int pw_up_time_3reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME1_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME1_pw_up_time_2codecisp_START (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME1_pw_up_time_2codecisp_END (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME1_pw_up_time_3reserved_START (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME1_pw_up_time_3reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_up_time_4mcpu : 16;
        unsigned int pw_up_time_5bbpharqmem : 16;
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME2_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME2_pw_up_time_4mcpu_START (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME2_pw_up_time_4mcpu_END (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME2_pw_up_time_5bbpharqmem_START (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME2_pw_up_time_5bbpharqmem_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_up_time_6reserved : 16;
        unsigned int pw_up_time_7reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME3_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME3_pw_up_time_6reserved_START (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME3_pw_up_time_6reserved_END (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME3_pw_up_time_7reserved_START (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME3_pw_up_time_7reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_up_time_8hifi : 16;
        unsigned int pw_up_time_9reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME4_pw_up_time_8hifi_START (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME4_pw_up_time_8hifi_END (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME4_pw_up_time_9reserved_START (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME4_pw_up_time_9reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_up_time_10reserved : 16;
        unsigned int pw_up_time_11reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME5_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME5_pw_up_time_10reserved_START (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME5_pw_up_time_10reserved_END (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME5_pw_up_time_11reserved_START (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME5_pw_up_time_11reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_up_time_12acpucluster : 16;
        unsigned int pw_up_time_13reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME6_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME6_pw_up_time_12acpucluster_START (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME6_pw_up_time_12acpucluster_END (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME6_pw_up_time_13reserved_START (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME6_pw_up_time_13reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_up_time_14reserved : 16;
        unsigned int pw_up_time_15reserved : 16;
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME7_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME7_pw_up_time_14reserved_START (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME7_pw_up_time_14reserved_END (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME7_pw_up_time_15reserved_START (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME7_pw_up_time_15reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_secure_ctrl_bit_0rtc : 1;
        unsigned int sc_secure_ctrl_bit_1timer0 : 1;
        unsigned int sc_secure_ctrl_bit_2timer1 : 1;
        unsigned int sc_secure_ctrl_bit_3timer2 : 1;
        unsigned int sc_secure_ctrl_bit_4timer3 : 1;
        unsigned int sc_secure_ctrl_bit_5timer4 : 1;
        unsigned int sc_secure_ctrl_bit_6timer5 : 1;
        unsigned int sc_secure_ctrl_bit_7timer6 : 1;
        unsigned int sc_secure_ctrl_bit_8timer7 : 1;
        unsigned int sc_secure_ctrl_bit_9timer8 : 1;
        unsigned int sc_secure_ctrl_bit_10watchdog0 : 1;
        unsigned int sc_secure_ctrl_bit_11watchdog1 : 1;
        unsigned int sc_secure_ctrl_bit_12watchdog2 : 1;
        unsigned int sc_secure_ctrl_bit_13rtc1 : 1;
        unsigned int sc_secure_ctrl_bit_14tzpc : 1;
        unsigned int sc_secure_ctrl_bit_15ipc_s : 1;
        unsigned int sc_secure_ctrl_bit_16tzpc_clken : 1;
        unsigned int sc_secure_ctrl_bit_17ipc_s_clken : 1;
        unsigned int sc_secure_ctrl_bit : 14;
    } reg;
} SOC_AO_SCTRL_SC_SECURITY_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_0rtc_START (0)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_0rtc_END (0)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_1timer0_START (1)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_1timer0_END (1)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_2timer1_START (2)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_2timer1_END (2)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_3timer2_START (3)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_3timer2_END (3)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_4timer3_START (4)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_4timer3_END (4)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_5timer4_START (5)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_5timer4_END (5)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_6timer5_START (6)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_6timer5_END (6)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_7timer6_START (7)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_7timer6_END (7)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_8timer7_START (8)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_8timer7_END (8)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_9timer8_START (9)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_9timer8_END (9)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_10watchdog0_START (10)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_10watchdog0_END (10)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_11watchdog1_START (11)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_11watchdog1_END (11)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_12watchdog2_START (12)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_12watchdog2_END (12)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_13rtc1_START (13)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_13rtc1_END (13)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_14tzpc_START (14)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_14tzpc_END (14)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_15ipc_s_START (15)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_15ipc_s_END (15)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_16tzpc_clken_START (16)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_16tzpc_clken_END (16)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_17ipc_s_clken_START (17)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_17ipc_s_clken_END (17)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_START (18)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
