#ifndef __SOC_HDMI_INTERFACE_H__
#define __SOC_HDMI_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_HDMI_VND_IDL_ADDR(base) ((base) + (0x000))
#define SOC_HDMI_VND_IDH_ADDR(base) ((base) + (0x004))
#define SOC_HDMI_DEV_IDL_ADDR(base) ((base) + (0x008))
#define SOC_HDMI_DEV_IDH_ADDR(base) ((base) + (0x00C))
#define SOC_HDMI_DEV_REV_ADDR(base) ((base) + (0x010))
#define SOC_HDMI_SRST_ADDR(base) ((base) + (0x014))
#define SOC_HDMI_SYS_CTRL1_ADDR(base) ((base) + (0x020))
#define SOC_HDMI_SYS_STAT_ADDR(base) ((base) + (0x024))
#define SOC_HDMI_SYS_CTRL3_ADDR(base) ((base) + (0x028))
#define SOC_HDMI_SYS_CTRL4_ADDR(base) ((base) + (0x030))
#define SOC_HDMI_DCTL_ADDR(base) ((base) + (0x034))
#define SOC_HDMI_HDCP_CTRL_ADDR(base) ((base) + (0x03C))
#define SOC_HDMI_BKSV1_ADDR(base) ((base) + (0x040))
#define SOC_HDMI_BKSV2_ADDR(base) ((base) + (0x044))
#define SOC_HDMI_BKSV3_ADDR(base) ((base) + (0x048))
#define SOC_HDMI_BKSV4_ADDR(base) ((base) + (0x04C))
#define SOC_HDMI_BKSV5_ADDR(base) ((base) + (0x050))
#define SOC_HDMI_AN1_ADDR(base) ((base) + (0x054))
#define SOC_HDMI_AN2_ADDR(base) ((base) + (0x058))
#define SOC_HDMI_AN3_ADDR(base) ((base) + (0x05C))
#define SOC_HDMI_AN4_ADDR(base) ((base) + (0x060))
#define SOC_HDMI_AN5_ADDR(base) ((base) + (0x064))
#define SOC_HDMI_AN6_ADDR(base) ((base) + (0x068))
#define SOC_HDMI_AN7_ADDR(base) ((base) + (0x06C))
#define SOC_HDMI_AN8_ADDR(base) ((base) + (0x070))
#define SOC_HDMI_AKSV1_ADDR(base) ((base) + (0x074))
#define SOC_HDMI_AKSV2_ADDR(base) ((base) + (0x078))
#define SOC_HDMI_AKSV3_ADDR(base) ((base) + (0x07C))
#define SOC_HDMI_AKSV4_ADDR(base) ((base) + (0x080))
#define SOC_HDMI_AKSV5_ADDR(base) ((base) + (0x084))
#define SOC_HDMI_RI1_ADDR(base) ((base) + (0x088))
#define SOC_HDMI_RI2_ADDR(base) ((base) + (0x08C))
#define SOC_HDMI_RI_128_COMP_ADDR(base) ((base) + (0x090))
#define SOC_HDMI_I_CNT_ADDR(base) ((base) + (0x094))
#define SOC_HDMI_RI_STAT_ADDR(base) ((base) + (0x098))
#define SOC_HDMI_RI_CMD_ADDR(base) ((base) + (0x09C))
#define SOC_HDMI_RI_LINE_START_ADDR(base) ((base) + (0x0A0))
#define SOC_HDMI_RI_RX_L_ADDR(base) ((base) + (0x0A4))
#define SOC_HDMI_RI_RX_H_ADDR(base) ((base) + (0x0A8))
#define SOC_HDMI_RI_DEBUG_ADDR(base) ((base) + (0x0AC))
#define SOC_HDMI_DE_DLY_ADDR(base) ((base) + (0x0C8))
#define SOC_HDMI_DE_CTRL_ADDR(base) ((base) + (0x0CC))
#define SOC_HDMI_DE_TOP_ADDR(base) ((base) + (0x0D0))
#define SOC_HDMI_DE_CNTL_ADDR(base) ((base) + (0x0D8))
#define SOC_HDMI_DE_CNTH_ADDR(base) ((base) + (0x0DC))
#define SOC_HDMI_DE_LINL_ADDR(base) ((base) + (0x0E0))
#define SOC_HDMI_DE_LINH_ADDR(base) ((base) + (0x0E4))
#define SOC_HDMI_HRES_L_ADDR(base) ((base) + (0x0E8))
#define SOC_HDMI_HRES_H_ADDR(base) ((base) + (0x0EC))
#define SOC_HDMI_VRES_L_ADDR(base) ((base) + (0x0F0))
#define SOC_HDMI_VREL_H_ADDR(base) ((base) + (0x0F4))
#define SOC_HDMI_IADJUST_ADDR(base) ((base) + (0x0F8))
#define SOC_HDMI_POL_DETECT_ADDR(base) ((base) + (0x0FC))
#define SOC_HDMI_HBIT_2HSYNC1_ADDR(base) ((base) + (0x100))
#define SOC_HDMI_HBIT_2HSYNC2_ADDR(base) ((base) + (0x104))
#define SOC_HDMI_FLD2_HS_OFSTL_ADDR(base) ((base) + (0x108))
#define SOC_HDMI_FLD2_HS_OFSTH_ADDR(base) ((base) + (0x10C))
#define SOC_HDMI_HWIDTH1_ADDR(base) ((base) + (0x110))
#define SOC_HDMI_HWIDTH2_ADDR(base) ((base) + (0x114))
#define SOC_HDMI_VBIT_TO_VSYNC_ADDR(base) ((base) + (0x118))
#define SOC_HDMI_VWIDTH_ADDR(base) ((base) + (0x11C))
#define SOC_HDMI_VID_CTRL_ADDR(base) ((base) + (0x120))
#define SOC_HDMI_VID_ACEN_ADDR(base) ((base) + (0x124))
#define SOC_HDMI_VID_MODE_ADDR(base) ((base) + (0x128))
#define SOC_HDMI_VID_BLANK1_ADDR(base) ((base) + (0x12C))
#define SOC_HDMI_VID_BLANK2_ADDR(base) ((base) + (0x130))
#define SOC_HDMI_VID_BLANK3_ADDR(base) ((base) + (0x134))
#define SOC_HDMI_DC_HEADER_ADDR(base) ((base) + (0x138))
#define SOC_HDMI_VID_DITHER_ADDR(base) ((base) + (0x13C))
#define SOC_HDMI_RGB2XVYCC_CT_ADDR(base) ((base) + (0x140))
#define SOC_HDMI_R2Y_COEFF_LOW_ADDR(base) ((base) + (0x144))
#define SOC_HDMI_R2Y_COEFF_UP_ADDR(base) ((base) + (0x148))
#define SOC_HDMI_G2Y_COEFF_LOW_ADDR(base) ((base) + (0x14C))
#define SOC_HDMI_G2Y_COEFF_UP_ADDR(base) ((base) + (0x150))
#define SOC_HDMI_B2Y_COEFF_LOW_ADDR(base) ((base) + (0x154))
#define SOC_HDMI_B2Y_COEFF_UP_ADDR(base) ((base) + (0x158))
#define SOC_HDMI_R2CB_COEFF_LOW_ADDR(base) ((base) + (0x15C))
#define SOC_HDMI_R2CB_COEFF_UP_ADDR(base) ((base) + (0x160))
#define SOC_HDMI_G2CB_COEFF_LOW_ADDR(base) ((base) + (0x164))
#define SOC_HDMI_G2CB_COEFF_UP_ADDR(base) ((base) + (0x168))
#define SOC_HDMI_B2CB_COEFF_LOW_ADDR(base) ((base) + (0x16C))
#define SOC_HDMI_B2CB_COEFF_UP_ADDR(base) ((base) + (0x170))
#define SOC_HDMI_R2CR_COEFF_LOW_ADDR(base) ((base) + (0x174))
#define SOC_HDMI_R2CR_COEFF_UP_ADDR(base) ((base) + (0x178))
#define SOC_HDMI_G2CR_COEFF_LOW_ADDR(base) ((base) + (0x17C))
#define SOC_HDMI_G2CR_COEFF_UP_ADDR(base) ((base) + (0x180))
#define SOC_HDMI_B2CR_COEFF_LOW_ADDR(base) ((base) + (0x184))
#define SOC_HDMI_B2CR_COEFF_UP_ADDR(base) ((base) + (0x188))
#define SOC_HDMI_RGB_OFFSET_LOW_ADDR(base) ((base) + (0x18C))
#define SOC_HDMI_RGB_OFFSET_UP_ADDR(base) ((base) + (0x190))
#define SOC_HDMI_Y_OFFSET_LOW_ADDR(base) ((base) + (0x194))
#define SOC_HDMI_Y_OFFSET_UP_ADDR(base) ((base) + (0x198))
#define SOC_HDMI_CBCR_OFFSET_LOW_ADDR(base) ((base) + (0x19C))
#define SOC_HDMI_CBCR_OFFSET_UP_ADDR(base) ((base) + (0x1A0))
#define SOC_HDMI_INTR_STATE_ADDR(base) ((base) + (0x1C0))
#define SOC_HDMI_INTR1_ADDR(base) ((base) + (0x1C4))
#define SOC_HDMI_INTR2_ADDR(base) ((base) + (0x1C8))
#define SOC_HDMI_INTR3_ADDR(base) ((base) + (0x1CC))
#define SOC_HDMI_INTR4_ADDR(base) ((base) + (0x1D0))
#define SOC_HDMI_INT_UNMASK1_ADDR(base) ((base) + (0x1D4))
#define SOC_HDMI_INT_UNMASK2_ADDR(base) ((base) + (0x1D8))
#define SOC_HDMI_INT_UNMASK3_ADDR(base) ((base) + (0x1DC))
#define SOC_HDMI_INT_UNMASK4_ADDR(base) ((base) + (0x1E0))
#define SOC_HDMI_INT_CTRL_ADDR(base) ((base) + (0x1E4))
#define SOC_HDMI_TMDS_CCTRL_ADDR(base) ((base) + (0x200))
#define SOC_HDMI_TMDS_CTRL_ADDR(base) ((base) + (0x208))
#define SOC_HDMI_TMDS_CTRL2_ADDR(base) ((base) + (0x20C))
#define SOC_HDMI_TMDS_CTRL3_ADDR(base) ((base) + (0x210))
#define SOC_HDMI_TMDS_CTRL4_ADDR(base) ((base) + (0x214))
#define SOC_HDMI_TMDS_CTRL5_ADDR(base) ((base) + (0x218))
#define SOC_HDMI_XVYCC2RGB_CTL_ADDR(base) ((base) + (0x240))
#define SOC_HDMI_Y2R_COEFF_LOW_ADDR(base) ((base) + (0x244))
#define SOC_HDMI_Y2R_COEFF_UP_ADDR(base) ((base) + (0x248))
#define SOC_HDMI_CR2R_COEFF_LOW_ADDR(base) ((base) + (0x24C))
#define SOC_HDMI_CR2R_COEFF_UP_ADDR(base) ((base) + (0x250))
#define SOC_HDMI_CB2B_COEFF_LOW_ADDR(base) ((base) + (0x254))
#define SOC_HDMI_CB2B_COEFF_UP_ADDR(base) ((base) + (0x258))
#define SOC_HDMI_CR2G_COEFF_LOW_ADDR(base) ((base) + (0x25C))
#define SOC_HDMI_CR2G_COEFF_UP_ADDR(base) ((base) + (0x260))
#define SOC_HDMI_CB2G_COEFF_LOW_ADDR(base) ((base) + (0x264))
#define SOC_HDMI_CB2G_COEFF_UP_ADDR(base) ((base) + (0x268))
#define SOC_HDMI_YOFFSET1_LOW_ADDR(base) ((base) + (0x26C))
#define SOC_HDMI_YOFFSET1_UP_ADDR(base) ((base) + (0x270))
#define SOC_HDMI_OFFSET1_LOW_ADDR(base) ((base) + (0x274))
#define SOC_HDMI_OFFSET1_MID_ADDR(base) ((base) + (0x278))
#define SOC_HDMI_OFFSET1_UP_ADDR(base) ((base) + (0x27C))
#define SOC_HDMI_OFFSET2_LOW_ADDR(base) ((base) + (0x280))
#define SOC_HDMI_OFFSET2_UP_ADDR(base) ((base) + (0x284))
#define SOC_HDMI_DCLEVEL_LOW_ADDR(base) ((base) + (0x288))
#define SOC_HDMI_DCLEVEL_UP_ADDR(base) ((base) + (0x28C))
#define SOC_HDMI_BIST_CNTL_CORE_ADDR(base) ((base) + (0x2CC))
#define SOC_HDMI_BIST_DURATION0_ADDR(base) ((base) + (0x2D0))
#define SOC_HDMI_BIST_DURATION1_ADDR(base) ((base) + (0x2D4))
#define SOC_HDMI_BIST_DURATION2_ADDR(base) ((base) + (0x2D8))
#define SOC_HDMI_TX_BIST_TEST_SEL_ADDR(base) ((base) + (0x2DC))
#define SOC_HDMI_TX_BIST_VIDEO_MODE_ADDR(base) ((base) + (0x2E0))
#define SOC_HDMI_TX_BIST_8BIT_PATTERN_ADDR(base) ((base) + (0x2E4))
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_L_ADDR(base) ((base) + (0x2E8))
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_U_ADDR(base) ((base) + (0x2EC))
#define SOC_HDMI_TX_BIST_STATUS_ADDR(base) ((base) + (0x2F0))
#define SOC_HDMI_TXSHA_CTRL_ADDR(base) ((base) + (0x330))
#define SOC_HDMI_TXKSV_FIFO_ADDR(base) ((base) + (0x334))
#define SOC_HDMI_TXDS_BSTATUS1_ADDR(base) ((base) + (0x338))
#define SOC_HDMI_TXDS_BSTATUS2_ADDR(base) ((base) + (0x33C))
#define SOC_HDMI_TXDS_M0_0_ADDR(base) ((base) + (0x340))
#define SOC_HDMI_TXDS_M0_1_ADDR(base) ((base) + (0x344))
#define SOC_HDMI_TXDS_M0_2_ADDR(base) ((base) + (0x348))
#define SOC_HDMI_TXDS_M0_3_ADDR(base) ((base) + (0x34C))
#define SOC_HDMI_TXDS_M0_4_ADDR(base) ((base) + (0x350))
#define SOC_HDMI_TXDS_M0_5_ADDR(base) ((base) + (0x354))
#define SOC_HDMI_TXDS_M0_6_ADDR(base) ((base) + (0x358))
#define SOC_HDMI_TXDS_M0_7_ADDR(base) ((base) + (0x35C))
#define SOC_HDMI_TXVH0_0_ADDR(base) ((base) + (0x360))
#define SOC_HDMI_TXVH0_1_ADDR(base) ((base) + (0x364))
#define SOC_HDMI_TXVH0_2_ADDR(base) ((base) + (0x368))
#define SOC_HDMI_TXVH0_3_ADDR(base) ((base) + (0x36C))
#define SOC_HDMI_TXVH1_0_ADDR(base) ((base) + (0x370))
#define SOC_HDMI_TXVH1_1_ADDR(base) ((base) + (0x374))
#define SOC_HDMI_TXVH1_2_ADDR(base) ((base) + (0x378))
#define SOC_HDMI_TXVH1_3_ADDR(base) ((base) + (0x37C))
#define SOC_HDMI_TXVH2_0_ADDR(base) ((base) + (0x380))
#define SOC_HDMI_TXVH2_1_ADDR(base) ((base) + (0x384))
#define SOC_HDMI_TXVH2_2_ADDR(base) ((base) + (0x388))
#define SOC_HDMI_TXVH2_3_ADDR(base) ((base) + (0x38C))
#define SOC_HDMI_TXVH3_0_ADDR(base) ((base) + (0x390))
#define SOC_HDMI_TXVH3_1_ADDR(base) ((base) + (0x394))
#define SOC_HDMI_TXVH3_2_ADDR(base) ((base) + (0x398))
#define SOC_HDMI_TXVH3_3_ADDR(base) ((base) + (0x39C))
#define SOC_HDMI_TXVH4_0_ADDR(base) ((base) + (0x3A0))
#define SOC_HDMI_TXVH4_1_ADDR(base) ((base) + (0x3A4))
#define SOC_HDMI_TXVH4_2_ADDR(base) ((base) + (0x3A8))
#define SOC_HDMI_TXVH4_3_ADDR(base) ((base) + (0x3AC))
#define SOC_HDMI_DDC_MAN_ADDR(base) ((base) + (0x3B0))
#define SOC_HDMI_DDC_ADDR_ADDR(base) ((base) + (0x3B4))
#define SOC_HDMI_DDC_SEGM_ADDR(base) ((base) + (0x3B8))
#define SOC_HDMI_DDC_OFFSET_ADDR(base) ((base) + (0x3BC))
#define SOC_HDMI_DDC_COUNT1_ADDR(base) ((base) + (0x3C0))
#define SOC_HDMI_DDC_COUNT2_ADDR(base) ((base) + (0x3C4))
#define SOC_HDMI_DDC_STATUS_ADDR(base) ((base) + (0x3C8))
#define SOC_HDMI_DDC_CMD_ADDR(base) ((base) + (0x3CC))
#define SOC_HDMI_DDC_DATA_ADDR(base) ((base) + (0x3D0))
#define SOC_HDMI_DDC_FIFOCNT_ADDR(base) ((base) + (0x3D4))
#define SOC_HDMI_EPST_ADDR(base) ((base) + (0x3E4))
#define SOC_HDMI_EPCM_ADDR(base) ((base) + (0x3E8))
#define SOC_HDMI_ACR_CTRL_ADDR(base) ((base) + (0x400+0x004))
#define SOC_HDMI_FREQ_SVAL_ADDR(base) ((base) + (0x400+0x008))
#define SOC_HDMI_N_SVAL1_ADDR(base) ((base) + (0x400+0x00C))
#define SOC_HDMI_N_SVAL2_ADDR(base) ((base) + (0x400+0x010))
#define SOC_HDMI_N_SVAL3_ADDR(base) ((base) + (0x400+0x014))
#define SOC_HDMI_CTS_SVAL1_ADDR(base) ((base) + (0x400+0x018))
#define SOC_HDMI_CTS_SVAL2_ADDR(base) ((base) + (0x400+0x01C))
#define SOC_HDMI_CTS_SVAL3_ADDR(base) ((base) + (0x400+0x020))
#define SOC_HDMI_CTS_HVAL1_ADDR(base) ((base) + (0x400+0x024))
#define SOC_HDMI_CTS_HVAL2_ADDR(base) ((base) + (0x400+0x028))
#define SOC_HDMI_CTS_HVAL3_ADDR(base) ((base) + (0x400+0x02C))
#define SOC_HDMI_AUD_MODE_ADDR(base) ((base) + (0x400+0x050))
#define SOC_HDMI_SPDIF_CTRL_ADDR(base) ((base) + (0x400+0x054))
#define SOC_HDMI_HW_SPDIF_FS_ADDR(base) ((base) + (0x400+0x060))
#define SOC_HDMI_SWAP_I2S_ADDR(base) ((base) + (0x400+0x064))
#define SOC_HDMI_SPDIF_ERTH_ADDR(base) ((base) + (0x400+0x06C))
#define SOC_HDMI_I2S_IN_MAP_ADDR(base) ((base) + (0x400+0x070))
#define SOC_HDMI_I2S_IN_CTRL_ADDR(base) ((base) + (0x400+0x074))
#define SOC_HDMI_I2S_CHST0_ADDR(base) ((base) + (0x400+0x078))
#define SOC_HDMI_I2S_CHST1_ADDR(base) ((base) + (0x400+0x07C))
#define SOC_HDMI_I2S_CHST2_ADDR(base) ((base) + (0x400+0x080))
#define SOC_HDMI_I2S_CHST4_ADDR(base) ((base) + (0x400+0x084))
#define SOC_HDMI_I2S_CHST5_ADDR(base) ((base) + (0x400+0x088))
#define SOC_HDMI_ASRC_ADDR(base) ((base) + (0x400+0x08C))
#define SOC_HDMI_I2S_IN_LEN_ADDR(base) ((base) + (0x400+0x090))
#define SOC_HDMI_CTRL_ADDR(base) ((base) + (0x400+0x0BC))
#define SOC_HDMI_AUDO_TXSTAT_ADDR(base) ((base) + (0x400+0x0C0))
#define SOC_HDMI_TEST_TXCTRL_ADDR(base) ((base) + (0x400+0x0F0))
#define SOC_HDMI_DPD_ADDR(base) ((base) + (0x400+0x0F4))
#define SOC_HDMI_PB_CTRL1_ADDR(base) ((base) + (0x400+0x0F8))
#define SOC_HDMI_PB_CTRL2_ADDR(base) ((base) + (0x400+0x0FC))
#define SOC_HDMI_AVI_TYPE_ADDR(base) ((base) + (0x400+0x100))
#define SOC_HDMI_AVI_VERS_ADDR(base) ((base) + (0x400+0x104))
#define SOC_HDMI_AVI_LEN_ADDR(base) ((base) + (0x400+0x108))
#define SOC_HDMI_AVI_CHSUM_ADDR(base) ((base) + (0x400+0x10C))
#define SOC_HDMI_AVI_DBYTE_ADDR(base) ((base) + (0x400+0x110))
#define SOC_HDMI_SPD_TYPE_ADDR(base) ((base) + (0x400+0x180))
#define SOC_HDMI_SPD_VERS_ADDR(base) ((base) + (0x400+0x184))
#define SOC_HDMI_SPD_LEN_ADDR(base) ((base) + (0x400+0x188))
#define SOC_HDMI_SPD_CHSUM_ADDR(base) ((base) + (0x400+0x18C))
#define SOC_HDMI_SPD_DBYTE_ADDR(base) ((base) + (0x400+0x190))
#define SOC_HDMI_AUDIO_TYPE_ADDR(base) ((base) + (0x400+0x200))
#define SOC_HDMI_AUDIO_VERS_ADDR(base) ((base) + (0x400+0x204))
#define SOC_HDMI_AUDIO_LEN_ADDR(base) ((base) + (0x400+0x208))
#define SOC_HDMI_AUDIO_CHSUM_ADDR(base) ((base) + (0x400+0x20C))
#define SOC_HDMI_AUDIO_DBYTE_ADDR(base) ((base) + (0x400+0x210))
#define SOC_HDMI_MPEG_TYPE_ADDR(base) ((base) + (0x400+0x280))
#define SOC_HDMI_MPEG_VERS_ADDR(base) ((base) + (0x400+0x284))
#define SOC_HDMI_MPEG_LEN_ADDR(base) ((base) + (0x400+0x288))
#define SOC_HDMI_MPEG_CHSUM_ADDR(base) ((base) + (0x400+0x28C))
#define SOC_HDMI_MPEG_DBYTE_ADDR(base) ((base) + (0x400+0x290))
#define SOC_HDMI_GEN_DBYTE_ADDR(base) ((base) + (0x400+0x300))
#define SOC_HDMI_CP_BYTE1_ADDR(base) ((base) + (0x400+0x37C))
#define SOC_HDMI_GEN2_DBYTE_ADDR(base) ((base) + (0x400+0x380))
#define SOC_HDMI_CEC_ADDR_ID_ADDR(base) ((base) + (0x400+0x3FC))
#define SOC_HDMI_TMDS_CTL1_ADDR(base) ((base) + (0x1800+'0x000))
#define SOC_HDMI_TMDS_CTL2_ADDR(base) ((base) + (0x1800+'0x004))
#define SOC_HDMI_TMDS_CTL3_ADDR(base) ((base) + (0x1800+'0x008))
#define SOC_HDMI_BIST_CNTL_ADDR(base) ((base) + (0x1800+'0x00C))
#define SOC_HDMI_BIST_PATTERN_ADDR(base) ((base) + (0x1800+'0x010))
#define SOC_HDMI_BIST_INSTR0_ADDR(base) ((base) + (0x1800+'0x014))
#define SOC_HDMI_BIST_INSTR1_ADDR(base) ((base) + (0x1800+'0x018))
#define SOC_HDMI_BIST_CONF0_ADDR(base) ((base) + (0x1800+'0x01C))
#define SOC_HDMI_TMDS_CNTL9_ADDR(base) ((base) + (0x1800+'0x020))
#define SOC_HDMI_TEST_MUX_CTRL_ADDR(base) ((base) + (0x1800+'0x024))
#define SOC_HDMI_CHIP_ID_ADDR(base) ((base) + (0x1800+'0x028))
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vnd_idl : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_VND_IDL_UNION;
#define SOC_HDMI_VND_IDL_vnd_idl_START (0)
#define SOC_HDMI_VND_IDL_vnd_idl_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vnd_idh : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_VND_IDH_UNION;
#define SOC_HDMI_VND_IDH_vnd_idh_START (0)
#define SOC_HDMI_VND_IDH_vnd_idh_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dev_idl : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DEV_IDL_UNION;
#define SOC_HDMI_DEV_IDL_dev_idl_START (0)
#define SOC_HDMI_DEV_IDL_dev_idl_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dev_idh : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DEV_IDH_UNION;
#define SOC_HDMI_DEV_IDH_dev_idh_START (0)
#define SOC_HDMI_DEV_IDH_dev_idh_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dev_rev : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DEV_REV_UNION;
#define SOC_HDMI_DEV_REV_dev_rev_START (0)
#define SOC_HDMI_DEV_REV_dev_rev_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int swrst : 1;
        unsigned int fiforst : 1;
        unsigned int reserved_0: 6;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_SRST_UNION;
#define SOC_HDMI_SRST_swrst_START (0)
#define SOC_HDMI_SRST_swrst_END (0)
#define SOC_HDMI_SRST_fiforst_START (1)
#define SOC_HDMI_SRST_fiforst_END (1)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd : 1;
        unsigned int edge : 1;
        unsigned int bsel : 1;
        unsigned int reserved_0: 1;
        unsigned int hen : 1;
        unsigned int ven : 1;
        unsigned int vsync : 1;
        unsigned int reserved_1: 1;
        unsigned int reserved_2: 24;
    } reg;
} SOC_HDMI_SYS_CTRL1_UNION;
#define SOC_HDMI_SYS_CTRL1_pd_START (0)
#define SOC_HDMI_SYS_CTRL1_pd_END (0)
#define SOC_HDMI_SYS_CTRL1_edge_START (1)
#define SOC_HDMI_SYS_CTRL1_edge_END (1)
#define SOC_HDMI_SYS_CTRL1_bsel_START (2)
#define SOC_HDMI_SYS_CTRL1_bsel_END (2)
#define SOC_HDMI_SYS_CTRL1_hen_START (4)
#define SOC_HDMI_SYS_CTRL1_hen_END (4)
#define SOC_HDMI_SYS_CTRL1_ven_START (5)
#define SOC_HDMI_SYS_CTRL1_ven_END (5)
#define SOC_HDMI_SYS_CTRL1_vsync_START (6)
#define SOC_HDMI_SYS_CTRL1_vsync_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p_stable : 1;
        unsigned int hpd : 1;
        unsigned int rsen : 1;
        unsigned int reserved_0: 4;
        unsigned int vlow : 1;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_SYS_STAT_UNION;
#define SOC_HDMI_SYS_STAT_p_stable_START (0)
#define SOC_HDMI_SYS_STAT_p_stable_END (0)
#define SOC_HDMI_SYS_STAT_hpd_START (1)
#define SOC_HDMI_SYS_STAT_hpd_END (1)
#define SOC_HDMI_SYS_STAT_rsen_START (2)
#define SOC_HDMI_SYS_STAT_rsen_END (2)
#define SOC_HDMI_SYS_STAT_vlow_START (7)
#define SOC_HDMI_SYS_STAT_vlow_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int ctl : 2;
        unsigned int reserved_1: 5;
        unsigned int reserved_2: 24;
    } reg;
} SOC_HDMI_SYS_CTRL3_UNION;
#define SOC_HDMI_SYS_CTRL3_ctl_START (1)
#define SOC_HDMI_SYS_CTRL3_ctl_END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pfen : 1;
        unsigned int pllf : 4;
        unsigned int reserved_0: 2;
        unsigned int reserved_1: 1;
        unsigned int reserved_2: 24;
    } reg;
} SOC_HDMI_SYS_CTRL4_UNION;
#define SOC_HDMI_SYS_CTRL4_pfen_START (0)
#define SOC_HDMI_SYS_CTRL4_pfen_END (0)
#define SOC_HDMI_SYS_CTRL4_pllf_START (1)
#define SOC_HDMI_SYS_CTRL4_pllf_END (4)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hdcp_sel : 1;
        unsigned int aud_mute : 1;
        unsigned int vid_blank : 1;
        unsigned int reserved_0: 5;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_DCTL_UNION;
#define SOC_HDMI_DCTL_hdcp_sel_START (0)
#define SOC_HDMI_DCTL_hdcp_sel_END (0)
#define SOC_HDMI_DCTL_aud_mute_START (1)
#define SOC_HDMI_DCTL_aud_mute_END (1)
#define SOC_HDMI_DCTL_vid_blank_START (2)
#define SOC_HDMI_DCTL_vid_blank_END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_en : 1;
        unsigned int ri_rdy : 1;
        unsigned int cp_restn : 1;
        unsigned int tx_anstop : 1;
        unsigned int rx_rptr : 1;
        unsigned int bksv_err : 1;
        unsigned int enc_on : 1;
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_HDCP_CTRL_UNION;
#define SOC_HDMI_HDCP_CTRL_enc_en_START (0)
#define SOC_HDMI_HDCP_CTRL_enc_en_END (0)
#define SOC_HDMI_HDCP_CTRL_ri_rdy_START (1)
#define SOC_HDMI_HDCP_CTRL_ri_rdy_END (1)
#define SOC_HDMI_HDCP_CTRL_cp_restn_START (2)
#define SOC_HDMI_HDCP_CTRL_cp_restn_END (2)
#define SOC_HDMI_HDCP_CTRL_tx_anstop_START (3)
#define SOC_HDMI_HDCP_CTRL_tx_anstop_END (3)
#define SOC_HDMI_HDCP_CTRL_rx_rptr_START (4)
#define SOC_HDMI_HDCP_CTRL_rx_rptr_END (4)
#define SOC_HDMI_HDCP_CTRL_bksv_err_START (5)
#define SOC_HDMI_HDCP_CTRL_bksv_err_END (5)
#define SOC_HDMI_HDCP_CTRL_enc_on_START (6)
#define SOC_HDMI_HDCP_CTRL_enc_on_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bksv1 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BKSV1_UNION;
#define SOC_HDMI_BKSV1_bksv1_START (0)
#define SOC_HDMI_BKSV1_bksv1_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bksv2 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BKSV2_UNION;
#define SOC_HDMI_BKSV2_bksv2_START (0)
#define SOC_HDMI_BKSV2_bksv2_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bksv3 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BKSV3_UNION;
#define SOC_HDMI_BKSV3_bksv3_START (0)
#define SOC_HDMI_BKSV3_bksv3_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bksv4 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BKSV4_UNION;
#define SOC_HDMI_BKSV4_bksv4_START (0)
#define SOC_HDMI_BKSV4_bksv4_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bksv5 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BKSV5_UNION;
#define SOC_HDMI_BKSV5_bksv5_START (0)
#define SOC_HDMI_BKSV5_bksv5_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int an1 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AN1_UNION;
#define SOC_HDMI_AN1_an1_START (0)
#define SOC_HDMI_AN1_an1_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int an2 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AN2_UNION;
#define SOC_HDMI_AN2_an2_START (0)
#define SOC_HDMI_AN2_an2_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int an2 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AN3_UNION;
#define SOC_HDMI_AN3_an2_START (0)
#define SOC_HDMI_AN3_an2_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int an4 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AN4_UNION;
#define SOC_HDMI_AN4_an4_START (0)
#define SOC_HDMI_AN4_an4_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int an5 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AN5_UNION;
#define SOC_HDMI_AN5_an5_START (0)
#define SOC_HDMI_AN5_an5_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int an6 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AN6_UNION;
#define SOC_HDMI_AN6_an6_START (0)
#define SOC_HDMI_AN6_an6_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int an7 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AN7_UNION;
#define SOC_HDMI_AN7_an7_START (0)
#define SOC_HDMI_AN7_an7_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int an8 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AN8_UNION;
#define SOC_HDMI_AN8_an8_START (0)
#define SOC_HDMI_AN8_an8_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aksv1 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AKSV1_UNION;
#define SOC_HDMI_AKSV1_aksv1_START (0)
#define SOC_HDMI_AKSV1_aksv1_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aksv2 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AKSV2_UNION;
#define SOC_HDMI_AKSV2_aksv2_START (0)
#define SOC_HDMI_AKSV2_aksv2_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aksv3 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AKSV3_UNION;
#define SOC_HDMI_AKSV3_aksv3_START (0)
#define SOC_HDMI_AKSV3_aksv3_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aksv4 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AKSV4_UNION;
#define SOC_HDMI_AKSV4_aksv4_START (0)
#define SOC_HDMI_AKSV4_aksv4_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aksv5 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AKSV5_UNION;
#define SOC_HDMI_AKSV5_aksv5_START (0)
#define SOC_HDMI_AKSV5_aksv5_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ri1 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_RI1_UNION;
#define SOC_HDMI_RI1_ri1_START (0)
#define SOC_HDMI_RI1_ri1_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ri2 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_RI2_UNION;
#define SOC_HDMI_RI2_ri2_START (0)
#define SOC_HDMI_RI2_ri2_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ri_128_comp : 7;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_RI_128_COMP_UNION;
#define SOC_HDMI_RI_128_COMP_ri_128_comp_START (0)
#define SOC_HDMI_RI_128_COMP_ri_128_comp_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int i_cnt : 7;
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_I_CNT_UNION;
#define SOC_HDMI_I_CNT_i_cnt_START (0)
#define SOC_HDMI_I_CNT_i_cnt_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ri_started : 1;
        unsigned int reserved_0 : 7;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_RI_STAT_UNION;
#define SOC_HDMI_RI_STAT_ri_started_START (0)
#define SOC_HDMI_RI_STAT_ri_started_END (0)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ri_en : 1;
        unsigned int bcap_en : 1;
        unsigned int _stst_en : 1;
        unsigned int reserved_0: 5;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_RI_CMD_UNION;
#define SOC_HDMI_RI_CMD_ri_en_START (0)
#define SOC_HDMI_RI_CMD_ri_en_END (0)
#define SOC_HDMI_RI_CMD_bcap_en_START (1)
#define SOC_HDMI_RI_CMD_bcap_en_END (1)
#define SOC_HDMI_RI_CMD__stst_en_START (2)
#define SOC_HDMI_RI_CMD__stst_en_END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ri_line_start : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_RI_LINE_START_UNION;
#define SOC_HDMI_RI_LINE_START_ri_line_start_START (0)
#define SOC_HDMI_RI_LINE_START_ri_line_start_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ri_rx_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_RI_RX_L_UNION;
#define SOC_HDMI_RI_RX_L_ri_rx_7_0__START (0)
#define SOC_HDMI_RI_RX_L_ri_rx_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ri_rx_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_RI_RX_H_UNION;
#define SOC_HDMI_RI_RX_H_ri_rx_15_8__START (0)
#define SOC_HDMI_RI_RX_H_ri_rx_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rsdvx : 6;
        unsigned int ri_dbg_hold : 1;
        unsigned int ri_dbg_trash : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_RI_DEBUG_UNION;
#define SOC_HDMI_RI_DEBUG_rsdvx_START (0)
#define SOC_HDMI_RI_DEBUG_rsdvx_END (5)
#define SOC_HDMI_RI_DEBUG_ri_dbg_hold_START (6)
#define SOC_HDMI_RI_DEBUG_ri_dbg_hold_END (6)
#define SOC_HDMI_RI_DEBUG_ri_dbg_trash_START (7)
#define SOC_HDMI_RI_DEBUG_ri_dbg_trash_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int de_dly : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DE_DLY_UNION;
#define SOC_HDMI_DE_DLY_de_dly_START (0)
#define SOC_HDMI_DE_DLY_de_dly_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int de_dly_11_8_ : 4;
        unsigned int hs_pol : 1;
        unsigned int vs_pol : 1;
        unsigned int de_gen : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_DE_CTRL_UNION;
#define SOC_HDMI_DE_CTRL_de_dly_11_8__START (0)
#define SOC_HDMI_DE_CTRL_de_dly_11_8__END (3)
#define SOC_HDMI_DE_CTRL_hs_pol_START (4)
#define SOC_HDMI_DE_CTRL_hs_pol_END (4)
#define SOC_HDMI_DE_CTRL_vs_pol_START (5)
#define SOC_HDMI_DE_CTRL_vs_pol_END (5)
#define SOC_HDMI_DE_CTRL_de_gen_START (6)
#define SOC_HDMI_DE_CTRL_de_gen_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int de_top : 7;
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_DE_TOP_UNION;
#define SOC_HDMI_DE_TOP_de_top_START (0)
#define SOC_HDMI_DE_TOP_de_top_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int de_cnt_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DE_CNTL_UNION;
#define SOC_HDMI_DE_CNTL_de_cnt_7_0__START (0)
#define SOC_HDMI_DE_CNTL_de_cnt_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int de_cnt_11_8_ : 4;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_DE_CNTH_UNION;
#define SOC_HDMI_DE_CNTH_de_cnt_11_8__START (0)
#define SOC_HDMI_DE_CNTH_de_cnt_11_8__END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int de_lin_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DE_LINL_UNION;
#define SOC_HDMI_DE_LINL_de_lin_7_0__START (0)
#define SOC_HDMI_DE_LINL_de_lin_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int de_lin_10_8_ : 3;
        unsigned int reserved_0 : 5;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_DE_LINH_UNION;
#define SOC_HDMI_DE_LINH_de_lin_10_8__START (0)
#define SOC_HDMI_DE_LINH_de_lin_10_8__END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int h_res_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_HRES_L_UNION;
#define SOC_HDMI_HRES_L_h_res_7_0__START (0)
#define SOC_HDMI_HRES_L_h_res_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int h_res_12_8_ : 5;
        unsigned int reserved_0 : 3;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_HRES_H_UNION;
#define SOC_HDMI_HRES_H_h_res_12_8__START (0)
#define SOC_HDMI_HRES_H_h_res_12_8__END (4)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_res_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_VRES_L_UNION;
#define SOC_HDMI_VRES_L_v_res_7_0__START (0)
#define SOC_HDMI_VRES_L_v_res_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_res_10_8_ : 3;
        unsigned int reserved_0 : 5;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_VREL_H_UNION;
#define SOC_HDMI_VREL_H_v_res_10_8__START (0)
#define SOC_HDMI_VREL_H_v_res_10_8__END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int f2vofst : 1;
        unsigned int f2vadj : 1;
        unsigned int de_adj : 1;
        unsigned int reserved_0: 5;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_IADJUST_UNION;
#define SOC_HDMI_IADJUST_f2vofst_START (0)
#define SOC_HDMI_IADJUST_f2vofst_END (0)
#define SOC_HDMI_IADJUST_f2vadj_START (1)
#define SOC_HDMI_IADJUST_f2vadj_END (1)
#define SOC_HDMI_IADJUST_de_adj_START (2)
#define SOC_HDMI_IADJUST_de_adj_END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hpol_det : 1;
        unsigned int vpol_det : 1;
        unsigned int i_det : 1;
        unsigned int reserved_0: 5;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_POL_DETECT_UNION;
#define SOC_HDMI_POL_DETECT_hpol_det_START (0)
#define SOC_HDMI_POL_DETECT_hpol_det_END (0)
#define SOC_HDMI_POL_DETECT_vpol_det_START (1)
#define SOC_HDMI_POL_DETECT_vpol_det_END (1)
#define SOC_HDMI_POL_DETECT_i_det_START (2)
#define SOC_HDMI_POL_DETECT_i_det_END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hbit_to_hsync_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_HBIT_2HSYNC1_UNION;
#define SOC_HDMI_HBIT_2HSYNC1_hbit_to_hsync_7_0__START (0)
#define SOC_HDMI_HBIT_2HSYNC1_hbit_to_hsync_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hbit_to_hsync9_8_ : 2;
        unsigned int reserved_0 : 6;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_HBIT_2HSYNC2_UNION;
#define SOC_HDMI_HBIT_2HSYNC2_hbit_to_hsync9_8__START (0)
#define SOC_HDMI_HBIT_2HSYNC2_hbit_to_hsync9_8__END (1)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int field2_ofst_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_FLD2_HS_OFSTL_UNION;
#define SOC_HDMI_FLD2_HS_OFSTL_field2_ofst_7_0__START (0)
#define SOC_HDMI_FLD2_HS_OFSTL_field2_ofst_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int field2_ofst_11_8_ : 4;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_FLD2_HS_OFSTH_UNION;
#define SOC_HDMI_FLD2_HS_OFSTH_field2_ofst_11_8__START (0)
#define SOC_HDMI_FLD2_HS_OFSTH_field2_ofst_11_8__END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hwidth_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_HWIDTH1_UNION;
#define SOC_HDMI_HWIDTH1_hwidth_7_0__START (0)
#define SOC_HDMI_HWIDTH1_hwidth_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hwidth_9_8_ : 2;
        unsigned int reserved_0 : 6;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_HWIDTH2_UNION;
#define SOC_HDMI_HWIDTH2_hwidth_9_8__START (0)
#define SOC_HDMI_HWIDTH2_hwidth_9_8__END (1)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vbit_to_vsync : 6;
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_VBIT_TO_VSYNC_UNION;
#define SOC_HDMI_VBIT_TO_VSYNC_vbit_to_vsync_START (0)
#define SOC_HDMI_VBIT_TO_VSYNC_vbit_to_vsync_END (5)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vwidth : 6;
        unsigned int reserved_0: 2;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_VWIDTH_UNION;
#define SOC_HDMI_VWIDTH_vwidth_START (0)
#define SOC_HDMI_VWIDTH_vwidth_END (5)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iclk : 2;
        unsigned int reserved_0: 2;
        unsigned int cscsel : 1;
        unsigned int extn : 1;
        unsigned int reserved_1: 1;
        unsigned int ifpol : 1;
        unsigned int reserved_2: 24;
    } reg;
} SOC_HDMI_VID_CTRL_UNION;
#define SOC_HDMI_VID_CTRL_iclk_START (0)
#define SOC_HDMI_VID_CTRL_iclk_END (1)
#define SOC_HDMI_VID_CTRL_cscsel_START (4)
#define SOC_HDMI_VID_CTRL_cscsel_END (4)
#define SOC_HDMI_VID_CTRL_extn_START (5)
#define SOC_HDMI_VID_CTRL_extn_END (5)
#define SOC_HDMI_VID_CTRL_ifpol_START (7)
#define SOC_HDMI_VID_CTRL_ifpol_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int down_smpl : 1;
        unsigned int range_cmps : 1;
        unsigned int rgb_2_ycbcr : 1;
        unsigned int range_clip : 1;
        unsigned int clip_cs_id : 1;
        unsigned int reserved_0 : 1;
        unsigned int wide_bus : 2;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_VID_ACEN_UNION;
#define SOC_HDMI_VID_ACEN_down_smpl_START (0)
#define SOC_HDMI_VID_ACEN_down_smpl_END (0)
#define SOC_HDMI_VID_ACEN_range_cmps_START (1)
#define SOC_HDMI_VID_ACEN_range_cmps_END (1)
#define SOC_HDMI_VID_ACEN_rgb_2_ycbcr_START (2)
#define SOC_HDMI_VID_ACEN_rgb_2_ycbcr_END (2)
#define SOC_HDMI_VID_ACEN_range_clip_START (3)
#define SOC_HDMI_VID_ACEN_range_clip_END (3)
#define SOC_HDMI_VID_ACEN_clip_cs_id_START (4)
#define SOC_HDMI_VID_ACEN_clip_cs_id_END (4)
#define SOC_HDMI_VID_ACEN_wide_bus_START (6)
#define SOC_HDMI_VID_ACEN_wide_bus_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int syncex : 1;
        unsigned int demux : 1;
        unsigned int upsmp : 1;
        unsigned int csc : 1;
        unsigned int range : 1;
        unsigned int dither : 1;
        unsigned int dither_mode : 2;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_VID_MODE_UNION;
#define SOC_HDMI_VID_MODE_syncex_START (0)
#define SOC_HDMI_VID_MODE_syncex_END (0)
#define SOC_HDMI_VID_MODE_demux_START (1)
#define SOC_HDMI_VID_MODE_demux_END (1)
#define SOC_HDMI_VID_MODE_upsmp_START (2)
#define SOC_HDMI_VID_MODE_upsmp_END (2)
#define SOC_HDMI_VID_MODE_csc_START (3)
#define SOC_HDMI_VID_MODE_csc_END (3)
#define SOC_HDMI_VID_MODE_range_START (4)
#define SOC_HDMI_VID_MODE_range_END (4)
#define SOC_HDMI_VID_MODE_dither_START (5)
#define SOC_HDMI_VID_MODE_dither_END (5)
#define SOC_HDMI_VID_MODE_dither_mode_START (6)
#define SOC_HDMI_VID_MODE_dither_mode_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vid_blank1 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_VID_BLANK1_UNION;
#define SOC_HDMI_VID_BLANK1_vid_blank1_START (0)
#define SOC_HDMI_VID_BLANK1_vid_blank1_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vid_blank2 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_VID_BLANK2_UNION;
#define SOC_HDMI_VID_BLANK2_vid_blank2_START (0)
#define SOC_HDMI_VID_BLANK2_vid_blank2_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vid_blank3 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_VID_BLANK3_UNION;
#define SOC_HDMI_VID_BLANK3_vid_blank3_START (0)
#define SOC_HDMI_VID_BLANK3_vid_blank3_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dc_header : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DC_HEADER_UNION;
#define SOC_HDMI_DC_HEADER_dc_header_START (0)
#define SOC_HDMI_DC_HEADER_dc_header_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int drd : 1;
        unsigned int d_rc_en : 1;
        unsigned int d_gc_en : 1;
        unsigned int d_bc_en : 1;
        unsigned int _422_en : 1;
        unsigned int up2 : 1;
        unsigned int m_d2 : 1;
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_VID_DITHER_UNION;
#define SOC_HDMI_VID_DITHER_drd_START (0)
#define SOC_HDMI_VID_DITHER_drd_END (0)
#define SOC_HDMI_VID_DITHER_d_rc_en_START (1)
#define SOC_HDMI_VID_DITHER_d_rc_en_END (1)
#define SOC_HDMI_VID_DITHER_d_gc_en_START (2)
#define SOC_HDMI_VID_DITHER_d_gc_en_END (2)
#define SOC_HDMI_VID_DITHER_d_bc_en_START (3)
#define SOC_HDMI_VID_DITHER_d_bc_en_END (3)
#define SOC_HDMI_VID_DITHER__422_en_START (4)
#define SOC_HDMI_VID_DITHER__422_en_END (4)
#define SOC_HDMI_VID_DITHER_up2_START (5)
#define SOC_HDMI_VID_DITHER_up2_END (5)
#define SOC_HDMI_VID_DITHER_m_d2_START (6)
#define SOC_HDMI_VID_DITHER_m_d2_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xv_en : 1;
        unsigned int xv_fus : 1;
        unsigned int xv_co_ov : 1;
        unsigned int reserved_0: 5;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_RGB2XVYCC_CT_UNION;
#define SOC_HDMI_RGB2XVYCC_CT_xv_en_START (0)
#define SOC_HDMI_RGB2XVYCC_CT_xv_en_END (0)
#define SOC_HDMI_RGB2XVYCC_CT_xv_fus_START (1)
#define SOC_HDMI_RGB2XVYCC_CT_xv_fus_END (1)
#define SOC_HDMI_RGB2XVYCC_CT_xv_co_ov_START (2)
#define SOC_HDMI_RGB2XVYCC_CT_xv_co_ov_END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int r2ycoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_R2Y_COEFF_LOW_UNION;
#define SOC_HDMI_R2Y_COEFF_LOW_r2ycoeff_l_START (0)
#define SOC_HDMI_R2Y_COEFF_LOW_r2ycoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int r2ycoeff_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_R2Y_COEFF_UP_UNION;
#define SOC_HDMI_R2Y_COEFF_UP_r2ycoeff_h_START (0)
#define SOC_HDMI_R2Y_COEFF_UP_r2ycoeff_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g2ycoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_G2Y_COEFF_LOW_UNION;
#define SOC_HDMI_G2Y_COEFF_LOW_g2ycoeff_l_START (0)
#define SOC_HDMI_G2Y_COEFF_LOW_g2ycoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g2ycoeff_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_G2Y_COEFF_UP_UNION;
#define SOC_HDMI_G2Y_COEFF_UP_g2ycoeff_h_START (0)
#define SOC_HDMI_G2Y_COEFF_UP_g2ycoeff_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int b2ycoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_B2Y_COEFF_LOW_UNION;
#define SOC_HDMI_B2Y_COEFF_LOW_b2ycoeff_l_START (0)
#define SOC_HDMI_B2Y_COEFF_LOW_b2ycoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int b2ycoeff_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_B2Y_COEFF_UP_UNION;
#define SOC_HDMI_B2Y_COEFF_UP_b2ycoeff_h_START (0)
#define SOC_HDMI_B2Y_COEFF_UP_b2ycoeff_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int r2cbcoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_R2CB_COEFF_LOW_UNION;
#define SOC_HDMI_R2CB_COEFF_LOW_r2cbcoeff_l_START (0)
#define SOC_HDMI_R2CB_COEFF_LOW_r2cbcoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int r2cbcoeff_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_R2CB_COEFF_UP_UNION;
#define SOC_HDMI_R2CB_COEFF_UP_r2cbcoeff_h_START (0)
#define SOC_HDMI_R2CB_COEFF_UP_r2cbcoeff_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g2cbcoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_G2CB_COEFF_LOW_UNION;
#define SOC_HDMI_G2CB_COEFF_LOW_g2cbcoeff_l_START (0)
#define SOC_HDMI_G2CB_COEFF_LOW_g2cbcoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g2cbcoeff_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_G2CB_COEFF_UP_UNION;
#define SOC_HDMI_G2CB_COEFF_UP_g2cbcoeff_h_START (0)
#define SOC_HDMI_G2CB_COEFF_UP_g2cbcoeff_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int b2cbcoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_B2CB_COEFF_LOW_UNION;
#define SOC_HDMI_B2CB_COEFF_LOW_b2cbcoeff_l_START (0)
#define SOC_HDMI_B2CB_COEFF_LOW_b2cbcoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int b2cbcoeff_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_B2CB_COEFF_UP_UNION;
#define SOC_HDMI_B2CB_COEFF_UP_b2cbcoeff_h_START (0)
#define SOC_HDMI_B2CB_COEFF_UP_b2cbcoeff_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int r2crcoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_R2CR_COEFF_LOW_UNION;
#define SOC_HDMI_R2CR_COEFF_LOW_r2crcoeff_l_START (0)
#define SOC_HDMI_R2CR_COEFF_LOW_r2crcoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int r2crcoeff_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_R2CR_COEFF_UP_UNION;
#define SOC_HDMI_R2CR_COEFF_UP_r2crcoeff_h_START (0)
#define SOC_HDMI_R2CR_COEFF_UP_r2crcoeff_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g2crcoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_G2CR_COEFF_LOW_UNION;
#define SOC_HDMI_G2CR_COEFF_LOW_g2crcoeff_l_START (0)
#define SOC_HDMI_G2CR_COEFF_LOW_g2crcoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g2crcoeff_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_G2CR_COEFF_UP_UNION;
#define SOC_HDMI_G2CR_COEFF_UP_g2crcoeff_h_START (0)
#define SOC_HDMI_G2CR_COEFF_UP_g2crcoeff_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int b2crcoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_B2CR_COEFF_LOW_UNION;
#define SOC_HDMI_B2CR_COEFF_LOW_b2crcoeff_l_START (0)
#define SOC_HDMI_B2CR_COEFF_LOW_b2crcoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int b2crcoeff_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_B2CR_COEFF_UP_UNION;
#define SOC_HDMI_B2CR_COEFF_UP_b2crcoeff_h_START (0)
#define SOC_HDMI_B2CR_COEFF_UP_b2crcoeff_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rgb_offs_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_RGB_OFFSET_LOW_UNION;
#define SOC_HDMI_RGB_OFFSET_LOW_rgb_offs_l_START (0)
#define SOC_HDMI_RGB_OFFSET_LOW_rgb_offs_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rgb_offs_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_RGB_OFFSET_UP_UNION;
#define SOC_HDMI_RGB_OFFSET_UP_rgb_offs_h_START (0)
#define SOC_HDMI_RGB_OFFSET_UP_rgb_offs_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int y_offs_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_Y_OFFSET_LOW_UNION;
#define SOC_HDMI_Y_OFFSET_LOW_y_offs_l_START (0)
#define SOC_HDMI_Y_OFFSET_LOW_y_offs_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int y_offs_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_Y_OFFSET_UP_UNION;
#define SOC_HDMI_Y_OFFSET_UP_y_offs_h_START (0)
#define SOC_HDMI_Y_OFFSET_UP_y_offs_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbcr_offs_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CBCR_OFFSET_LOW_UNION;
#define SOC_HDMI_CBCR_OFFSET_LOW_cbcr_offs_l_START (0)
#define SOC_HDMI_CBCR_OFFSET_LOW_cbcr_offs_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbcr_offs_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CBCR_OFFSET_UP_UNION;
#define SOC_HDMI_CBCR_OFFSET_UP_cbcr_offs_h_START (0)
#define SOC_HDMI_CBCR_OFFSET_UP_cbcr_offs_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr : 1;
        unsigned int reserved_0: 7;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_INTR_STATE_UNION;
#define SOC_HDMI_INTR_STATE_intr_START (0)
#define SOC_HDMI_INTR_STATE_intr_END (0)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int under_run : 1;
        unsigned int over_run : 1;
        unsigned int ri_128 : 1;
        unsigned int bip_hase_err : 1;
        unsigned int drop_sample : 1;
        unsigned int rsen : 1;
        unsigned int hpd : 1;
        unsigned int soft : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_INTR1_UNION;
#define SOC_HDMI_INTR1_under_run_START (0)
#define SOC_HDMI_INTR1_under_run_END (0)
#define SOC_HDMI_INTR1_over_run_START (1)
#define SOC_HDMI_INTR1_over_run_END (1)
#define SOC_HDMI_INTR1_ri_128_START (2)
#define SOC_HDMI_INTR1_ri_128_END (2)
#define SOC_HDMI_INTR1_bip_hase_err_START (3)
#define SOC_HDMI_INTR1_bip_hase_err_END (3)
#define SOC_HDMI_INTR1_drop_sample_START (4)
#define SOC_HDMI_INTR1_drop_sample_END (4)
#define SOC_HDMI_INTR1_rsen_START (5)
#define SOC_HDMI_INTR1_rsen_END (5)
#define SOC_HDMI_INTR1_hpd_START (6)
#define SOC_HDMI_INTR1_hpd_END (6)
#define SOC_HDMI_INTR1_soft_START (7)
#define SOC_HDMI_INTR1_soft_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vsync_rec : 1;
        unsigned int tclk_stbl : 1;
        unsigned int acr_ovr : 1;
        unsigned int cts_chg : 1;
        unsigned int pream_err : 1;
        unsigned int enc_dis : 1;
        unsigned int spdif_par : 1;
        unsigned int bcap_done : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_INTR2_UNION;
#define SOC_HDMI_INTR2_vsync_rec_START (0)
#define SOC_HDMI_INTR2_vsync_rec_END (0)
#define SOC_HDMI_INTR2_tclk_stbl_START (1)
#define SOC_HDMI_INTR2_tclk_stbl_END (1)
#define SOC_HDMI_INTR2_acr_ovr_START (2)
#define SOC_HDMI_INTR2_acr_ovr_END (2)
#define SOC_HDMI_INTR2_cts_chg_START (3)
#define SOC_HDMI_INTR2_cts_chg_END (3)
#define SOC_HDMI_INTR2_pream_err_START (4)
#define SOC_HDMI_INTR2_pream_err_END (4)
#define SOC_HDMI_INTR2_enc_dis_START (5)
#define SOC_HDMI_INTR2_enc_dis_END (5)
#define SOC_HDMI_INTR2_spdif_par_START (6)
#define SOC_HDMI_INTR2_spdif_par_END (6)
#define SOC_HDMI_INTR2_bcap_done_START (7)
#define SOC_HDMI_INTR2_bcap_done_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddc_fifo_empty : 1;
        unsigned int ddc_fifo_full : 1;
        unsigned int ddc_fifo_half : 1;
        unsigned int ddc_cmd_done : 1;
        unsigned int ri_err_0 : 1;
        unsigned int ri_err_1 : 1;
        unsigned int ri_err_2 : 1;
        unsigned int ri_err_3 : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_INTR3_UNION;
#define SOC_HDMI_INTR3_ddc_fifo_empty_START (0)
#define SOC_HDMI_INTR3_ddc_fifo_empty_END (0)
#define SOC_HDMI_INTR3_ddc_fifo_full_START (1)
#define SOC_HDMI_INTR3_ddc_fifo_full_END (1)
#define SOC_HDMI_INTR3_ddc_fifo_half_START (2)
#define SOC_HDMI_INTR3_ddc_fifo_half_END (2)
#define SOC_HDMI_INTR3_ddc_cmd_done_START (3)
#define SOC_HDMI_INTR3_ddc_cmd_done_END (3)
#define SOC_HDMI_INTR3_ri_err_0_START (4)
#define SOC_HDMI_INTR3_ri_err_0_END (4)
#define SOC_HDMI_INTR3_ri_err_1_START (5)
#define SOC_HDMI_INTR3_ri_err_1_END (5)
#define SOC_HDMI_INTR3_ri_err_2_START (6)
#define SOC_HDMI_INTR3_ri_err_2_END (6)
#define SOC_HDMI_INTR3_ri_err_3_START (7)
#define SOC_HDMI_INTR3_ri_err_3_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsd_invalid : 1;
        unsigned int reg_intr4_stat1 : 1;
        unsigned int reg_intr4_stat2 : 1;
        unsigned int reg_intr4_stat3 : 1;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_INTR4_UNION;
#define SOC_HDMI_INTR4_dsd_invalid_START (0)
#define SOC_HDMI_INTR4_dsd_invalid_END (0)
#define SOC_HDMI_INTR4_reg_intr4_stat1_START (1)
#define SOC_HDMI_INTR4_reg_intr4_stat1_END (1)
#define SOC_HDMI_INTR4_reg_intr4_stat2_START (2)
#define SOC_HDMI_INTR4_reg_intr4_stat2_END (2)
#define SOC_HDMI_INTR4_reg_intr4_stat3_START (3)
#define SOC_HDMI_INTR4_reg_intr4_stat3_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_unmask1 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_INT_UNMASK1_UNION;
#define SOC_HDMI_INT_UNMASK1_int_unmask1_START (0)
#define SOC_HDMI_INT_UNMASK1_int_unmask1_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_unmask2 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_INT_UNMASK2_UNION;
#define SOC_HDMI_INT_UNMASK2_int_unmask2_START (0)
#define SOC_HDMI_INT_UNMASK2_int_unmask2_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_unmask3 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_INT_UNMASK3_UNION;
#define SOC_HDMI_INT_UNMASK3_int_unmask3_START (0)
#define SOC_HDMI_INT_UNMASK3_int_unmask3_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_unmask4 : 4;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_INT_UNMASK4_UNION;
#define SOC_HDMI_INT_UNMASK4_int_unmask4_START (0)
#define SOC_HDMI_INT_UNMASK4_int_unmask4_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int polarity : 1;
        unsigned int open_drain : 1;
        unsigned int soft_intr : 1;
        unsigned int reserved_1 : 4;
        unsigned int reserved_2 : 24;
    } reg;
} SOC_HDMI_INT_CTRL_UNION;
#define SOC_HDMI_INT_CTRL_polarity_START (1)
#define SOC_HDMI_INT_CTRL_polarity_END (1)
#define SOC_HDMI_INT_CTRL_open_drain_START (2)
#define SOC_HDMI_INT_CTRL_open_drain_END (2)
#define SOC_HDMI_INT_CTRL_soft_intr_START (3)
#define SOC_HDMI_INT_CTRL_soft_intr_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clkdetect_en : 1;
        unsigned int half_clk_en : 1;
        unsigned int reserved_0 : 3;
        unsigned int fapostcount : 1;
        unsigned int reserved_1 : 1;
        unsigned int slew_ctrl : 1;
        unsigned int reserved_2 : 24;
    } reg;
} SOC_HDMI_TMDS_CCTRL_UNION;
#define SOC_HDMI_TMDS_CCTRL_clkdetect_en_START (0)
#define SOC_HDMI_TMDS_CCTRL_clkdetect_en_END (0)
#define SOC_HDMI_TMDS_CCTRL_half_clk_en_START (1)
#define SOC_HDMI_TMDS_CCTRL_half_clk_en_END (1)
#define SOC_HDMI_TMDS_CCTRL_fapostcount_START (5)
#define SOC_HDMI_TMDS_CCTRL_fapostcount_END (5)
#define SOC_HDMI_TMDS_CCTRL_slew_ctrl_START (7)
#define SOC_HDMI_TMDS_CCTRL_slew_ctrl_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sterm : 1;
        unsigned int bgr_test : 1;
        unsigned int sw_ctl : 2;
        unsigned int reserved_0: 1;
        unsigned int tclk_sel : 2;
        unsigned int reserved_1: 1;
        unsigned int reserved_2: 24;
    } reg;
} SOC_HDMI_TMDS_CTRL_UNION;
#define SOC_HDMI_TMDS_CTRL_sterm_START (0)
#define SOC_HDMI_TMDS_CTRL_sterm_END (0)
#define SOC_HDMI_TMDS_CTRL_bgr_test_START (1)
#define SOC_HDMI_TMDS_CTRL_bgr_test_END (1)
#define SOC_HDMI_TMDS_CTRL_sw_ctl_START (2)
#define SOC_HDMI_TMDS_CTRL_sw_ctl_END (3)
#define SOC_HDMI_TMDS_CTRL_tclk_sel_START (5)
#define SOC_HDMI_TMDS_CTRL_tclk_sel_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ffr_count : 3;
        unsigned int ffb_count : 3;
        unsigned int tpost_count : 2;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TMDS_CTRL2_UNION;
#define SOC_HDMI_TMDS_CTRL2_ffr_count_START (0)
#define SOC_HDMI_TMDS_CTRL2_ffr_count_END (2)
#define SOC_HDMI_TMDS_CTRL2_ffb_count_START (3)
#define SOC_HDMI_TMDS_CTRL2_ffb_count_END (5)
#define SOC_HDMI_TMDS_CTRL2_tpost_count_START (6)
#define SOC_HDMI_TMDS_CTRL2_tpost_count_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fpost_count : 3;
        unsigned int bgr_ctrl : 3;
        unsigned int bw_ctrl : 2;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TMDS_CTRL3_UNION;
#define SOC_HDMI_TMDS_CTRL3_fpost_count_START (0)
#define SOC_HDMI_TMDS_CTRL3_fpost_count_END (2)
#define SOC_HDMI_TMDS_CTRL3_bgr_ctrl_START (3)
#define SOC_HDMI_TMDS_CTRL3_bgr_ctrl_END (5)
#define SOC_HDMI_TMDS_CTRL3_bw_ctrl_START (6)
#define SOC_HDMI_TMDS_CTRL3_bw_ctrl_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tfrcount : 2;
        unsigned int dpcolor_ctl : 2;
        unsigned int tmds_oe : 1;
        unsigned int sel_bgr : 1;
        unsigned int reserved_0 : 1;
        unsigned int no_osclkout : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_TMDS_CTRL4_UNION;
#define SOC_HDMI_TMDS_CTRL4_tfrcount_START (0)
#define SOC_HDMI_TMDS_CTRL4_tfrcount_END (1)
#define SOC_HDMI_TMDS_CTRL4_dpcolor_ctl_START (2)
#define SOC_HDMI_TMDS_CTRL4_dpcolor_ctl_END (3)
#define SOC_HDMI_TMDS_CTRL4_tmds_oe_START (4)
#define SOC_HDMI_TMDS_CTRL4_tmds_oe_END (4)
#define SOC_HDMI_TMDS_CTRL4_sel_bgr_START (5)
#define SOC_HDMI_TMDS_CTRL4_sel_bgr_END (5)
#define SOC_HDMI_TMDS_CTRL4_no_osclkout_START (7)
#define SOC_HDMI_TMDS_CTRL4_no_osclkout_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aclkcount : 3;
        unsigned int reserved_0: 5;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_TMDS_CTRL5_UNION;
#define SOC_HDMI_TMDS_CTRL5_aclkcount_START (0)
#define SOC_HDMI_TMDS_CTRL5_aclkcount_END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xvyccsel : 1;
        unsigned int fullrange : 1;
        unsigned int sw_ovr : 1;
        unsigned int byp_all : 1;
        unsigned int exp_only : 1;
        unsigned int reserved_0: 3;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_XVYCC2RGB_CTL_UNION;
#define SOC_HDMI_XVYCC2RGB_CTL_xvyccsel_START (0)
#define SOC_HDMI_XVYCC2RGB_CTL_xvyccsel_END (0)
#define SOC_HDMI_XVYCC2RGB_CTL_fullrange_START (1)
#define SOC_HDMI_XVYCC2RGB_CTL_fullrange_END (1)
#define SOC_HDMI_XVYCC2RGB_CTL_sw_ovr_START (2)
#define SOC_HDMI_XVYCC2RGB_CTL_sw_ovr_END (2)
#define SOC_HDMI_XVYCC2RGB_CTL_byp_all_START (3)
#define SOC_HDMI_XVYCC2RGB_CTL_byp_all_END (3)
#define SOC_HDMI_XVYCC2RGB_CTL_exp_only_START (4)
#define SOC_HDMI_XVYCC2RGB_CTL_exp_only_END (4)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int y2rcoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_Y2R_COEFF_LOW_UNION;
#define SOC_HDMI_Y2R_COEFF_LOW_y2rcoeff_l_START (0)
#define SOC_HDMI_Y2R_COEFF_LOW_y2rcoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int y2rcoeff_h : 5;
        unsigned int reserved_0 : 3;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_Y2R_COEFF_UP_UNION;
#define SOC_HDMI_Y2R_COEFF_UP_y2rcoeff_h_START (0)
#define SOC_HDMI_Y2R_COEFF_UP_y2rcoeff_h_END (4)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cr2rcoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CR2R_COEFF_LOW_UNION;
#define SOC_HDMI_CR2R_COEFF_LOW_cr2rcoeff_l_START (0)
#define SOC_HDMI_CR2R_COEFF_LOW_cr2rcoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cr2rcoeff_h : 5;
        unsigned int reserved_0 : 3;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_CR2R_COEFF_UP_UNION;
#define SOC_HDMI_CR2R_COEFF_UP_cr2rcoeff_h_START (0)
#define SOC_HDMI_CR2R_COEFF_UP_cr2rcoeff_h_END (4)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cb2bcoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CB2B_COEFF_LOW_UNION;
#define SOC_HDMI_CB2B_COEFF_LOW_cb2bcoeff_l_START (0)
#define SOC_HDMI_CB2B_COEFF_LOW_cb2bcoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cb2bcoeff_h : 5;
        unsigned int reserved_0 : 3;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_CB2B_COEFF_UP_UNION;
#define SOC_HDMI_CB2B_COEFF_UP_cb2bcoeff_h_START (0)
#define SOC_HDMI_CB2B_COEFF_UP_cb2bcoeff_h_END (4)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cr2gcoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CR2G_COEFF_LOW_UNION;
#define SOC_HDMI_CR2G_COEFF_LOW_cr2gcoeff_l_START (0)
#define SOC_HDMI_CR2G_COEFF_LOW_cr2gcoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cr2gcoeff_h : 5;
        unsigned int reserved_0 : 3;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_CR2G_COEFF_UP_UNION;
#define SOC_HDMI_CR2G_COEFF_UP_cr2gcoeff_h_START (0)
#define SOC_HDMI_CR2G_COEFF_UP_cr2gcoeff_h_END (4)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cb2gcoeff_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CB2G_COEFF_LOW_UNION;
#define SOC_HDMI_CB2G_COEFF_LOW_cb2gcoeff_l_START (0)
#define SOC_HDMI_CB2G_COEFF_LOW_cb2gcoeff_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cb2gcoeff_h : 5;
        unsigned int reserved_0 : 3;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_CB2G_COEFF_UP_UNION;
#define SOC_HDMI_CB2G_COEFF_UP_cb2gcoeff_h_START (0)
#define SOC_HDMI_CB2G_COEFF_UP_cb2gcoeff_h_END (4)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int yoffs1_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_YOFFSET1_LOW_UNION;
#define SOC_HDMI_YOFFSET1_LOW_yoffs1_l_START (0)
#define SOC_HDMI_YOFFSET1_LOW_yoffs1_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int yoffs1_h : 4;
        unsigned int reserved_0: 4;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_YOFFSET1_UP_UNION;
#define SOC_HDMI_YOFFSET1_UP_yoffs1_h_START (0)
#define SOC_HDMI_YOFFSET1_UP_yoffs1_h_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int offs1_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_OFFSET1_LOW_UNION;
#define SOC_HDMI_OFFSET1_LOW_offs1_l_START (0)
#define SOC_HDMI_OFFSET1_LOW_offs1_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int offs1_m : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_OFFSET1_MID_UNION;
#define SOC_HDMI_OFFSET1_MID_offs1_m_START (0)
#define SOC_HDMI_OFFSET1_MID_offs1_m_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int offs1_h : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_OFFSET1_UP_UNION;
#define SOC_HDMI_OFFSET1_UP_offs1_h_START (0)
#define SOC_HDMI_OFFSET1_UP_offs1_h_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int offs2_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_OFFSET2_LOW_UNION;
#define SOC_HDMI_OFFSET2_LOW_offs2_l_START (0)
#define SOC_HDMI_OFFSET2_LOW_offs2_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int offs2_h : 4;
        unsigned int reserved_0: 4;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_OFFSET2_UP_UNION;
#define SOC_HDMI_OFFSET2_UP_offs2_h_START (0)
#define SOC_HDMI_OFFSET2_UP_offs2_h_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dc_lev_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DCLEVEL_LOW_UNION;
#define SOC_HDMI_DCLEVEL_LOW_dc_lev_l_START (0)
#define SOC_HDMI_DCLEVEL_LOW_dc_lev_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dc_lev_h : 6;
        unsigned int reserved_0: 2;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_DCLEVEL_UP_UNION;
#define SOC_HDMI_DCLEVEL_UP_dc_lev_h_START (0)
#define SOC_HDMI_DCLEVEL_UP_dc_lev_h_END (5)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_enable : 1;
        unsigned int bist_reset : 1;
        unsigned int reserved_0 : 1;
        unsigned int bist_cont_prog : 1;
        unsigned int bist_start : 1;
        unsigned int bist_duration : 3;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_BIST_CNTL_CORE_UNION;
#define SOC_HDMI_BIST_CNTL_CORE_bist_enable_START (0)
#define SOC_HDMI_BIST_CNTL_CORE_bist_enable_END (0)
#define SOC_HDMI_BIST_CNTL_CORE_bist_reset_START (1)
#define SOC_HDMI_BIST_CNTL_CORE_bist_reset_END (1)
#define SOC_HDMI_BIST_CNTL_CORE_bist_cont_prog_START (3)
#define SOC_HDMI_BIST_CNTL_CORE_bist_cont_prog_END (3)
#define SOC_HDMI_BIST_CNTL_CORE_bist_start_START (4)
#define SOC_HDMI_BIST_CNTL_CORE_bist_start_END (4)
#define SOC_HDMI_BIST_CNTL_CORE_bist_duration_START (5)
#define SOC_HDMI_BIST_CNTL_CORE_bist_duration_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_duration0 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BIST_DURATION0_UNION;
#define SOC_HDMI_BIST_DURATION0_bist_duration0_START (0)
#define SOC_HDMI_BIST_DURATION0_bist_duration0_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_duration1 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BIST_DURATION1_UNION;
#define SOC_HDMI_BIST_DURATION1_bist_duration1_START (0)
#define SOC_HDMI_BIST_DURATION1_bist_duration1_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_duration2 : 4;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_BIST_DURATION2_UNION;
#define SOC_HDMI_BIST_DURATION2_bist_duration2_START (0)
#define SOC_HDMI_BIST_DURATION2_bist_duration2_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reg_bist_pattern_select : 4;
        unsigned int cntl_pattern_select : 2;
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_TX_BIST_TEST_SEL_UNION;
#define SOC_HDMI_TX_BIST_TEST_SEL_reg_bist_pattern_select_START (0)
#define SOC_HDMI_TX_BIST_TEST_SEL_reg_bist_pattern_select_END (3)
#define SOC_HDMI_TX_BIST_TEST_SEL_cntl_pattern_select_START (4)
#define SOC_HDMI_TX_BIST_TEST_SEL_cntl_pattern_select_END (5)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_video_mode : 3;
        unsigned int bist_force_de : 1;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_TX_BIST_VIDEO_MODE_UNION;
#define SOC_HDMI_TX_BIST_VIDEO_MODE_bist_video_mode_START (0)
#define SOC_HDMI_TX_BIST_VIDEO_MODE_bist_video_mode_END (2)
#define SOC_HDMI_TX_BIST_VIDEO_MODE_bist_force_de_START (3)
#define SOC_HDMI_TX_BIST_VIDEO_MODE_bist_force_de_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_8bit_pattern : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TX_BIST_8BIT_PATTERN_UNION;
#define SOC_HDMI_TX_BIST_8BIT_PATTERN_bist_8bit_pattern_START (0)
#define SOC_HDMI_TX_BIST_8BIT_PATTERN_bist_8bit_pattern_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_10bit_pattern_l : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TX_BIST_10BIT_PATTERN_L_UNION;
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_L_bist_10bit_pattern_l_START (0)
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_L_bist_10bit_pattern_l_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_10bit_pattern_u : 2;
        unsigned int reserved_0 : 6;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_TX_BIST_10BIT_PATTERN_U_UNION;
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_U_bist_10bit_pattern_u_START (0)
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_U_bist_10bit_pattern_u_END (1)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_config_status : 2;
        unsigned int reserved_0 : 6;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_TX_BIST_STATUS_UNION;
#define SOC_HDMI_TX_BIST_STATUS_bist_config_status_START (0)
#define SOC_HDMI_TX_BIST_STATUS_bist_config_status_END (1)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sha_go_stat : 1;
        unsigned int shactrl_stat1 : 1;
        unsigned int sha_mode : 1;
        unsigned int m0_rd_en : 1;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_TXSHA_CTRL_UNION;
#define SOC_HDMI_TXSHA_CTRL_sha_go_stat_START (0)
#define SOC_HDMI_TXSHA_CTRL_sha_go_stat_END (0)
#define SOC_HDMI_TXSHA_CTRL_shactrl_stat1_START (1)
#define SOC_HDMI_TXSHA_CTRL_shactrl_stat1_END (1)
#define SOC_HDMI_TXSHA_CTRL_sha_mode_START (2)
#define SOC_HDMI_TXSHA_CTRL_sha_mode_END (2)
#define SOC_HDMI_TXSHA_CTRL_m0_rd_en_START (3)
#define SOC_HDMI_TXSHA_CTRL_m0_rd_en_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ksv_fifo_out : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXKSV_FIFO_UNION;
#define SOC_HDMI_TXKSV_FIFO_ksv_fifo_out_START (0)
#define SOC_HDMI_TXKSV_FIFO_ksv_fifo_out_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ds_dev_cnt : 7;
        unsigned int ds_dev_exceed : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXDS_BSTATUS1_UNION;
#define SOC_HDMI_TXDS_BSTATUS1_ds_dev_cnt_START (0)
#define SOC_HDMI_TXDS_BSTATUS1_ds_dev_cnt_END (6)
#define SOC_HDMI_TXDS_BSTATUS1_ds_dev_exceed_START (7)
#define SOC_HDMI_TXDS_BSTATUS1_ds_dev_exceed_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ds_depth : 3;
        unsigned int ds_casc_exceed : 1;
        unsigned int ds_hdmi_mode : 1;
        unsigned int ds_bstatus : 3;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXDS_BSTATUS2_UNION;
#define SOC_HDMI_TXDS_BSTATUS2_ds_depth_START (0)
#define SOC_HDMI_TXDS_BSTATUS2_ds_depth_END (2)
#define SOC_HDMI_TXDS_BSTATUS2_ds_casc_exceed_START (3)
#define SOC_HDMI_TXDS_BSTATUS2_ds_casc_exceed_END (3)
#define SOC_HDMI_TXDS_BSTATUS2_ds_hdmi_mode_START (4)
#define SOC_HDMI_TXDS_BSTATUS2_ds_hdmi_mode_END (4)
#define SOC_HDMI_TXDS_BSTATUS2_ds_bstatus_START (5)
#define SOC_HDMI_TXDS_BSTATUS2_ds_bstatus_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int m0_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXDS_M0_0_UNION;
#define SOC_HDMI_TXDS_M0_0_m0_7_0__START (0)
#define SOC_HDMI_TXDS_M0_0_m0_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int m0_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXDS_M0_1_UNION;
#define SOC_HDMI_TXDS_M0_1_m0_15_8__START (0)
#define SOC_HDMI_TXDS_M0_1_m0_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int m0_23_16_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXDS_M0_2_UNION;
#define SOC_HDMI_TXDS_M0_2_m0_23_16__START (0)
#define SOC_HDMI_TXDS_M0_2_m0_23_16__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int m0_31_24_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXDS_M0_3_UNION;
#define SOC_HDMI_TXDS_M0_3_m0_31_24__START (0)
#define SOC_HDMI_TXDS_M0_3_m0_31_24__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int m0_39_32_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXDS_M0_4_UNION;
#define SOC_HDMI_TXDS_M0_4_m0_39_32__START (0)
#define SOC_HDMI_TXDS_M0_4_m0_39_32__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int m0_47_40_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXDS_M0_5_UNION;
#define SOC_HDMI_TXDS_M0_5_m0_47_40__START (0)
#define SOC_HDMI_TXDS_M0_5_m0_47_40__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int m0_55_48_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXDS_M0_6_UNION;
#define SOC_HDMI_TXDS_M0_6_m0_55_48__START (0)
#define SOC_HDMI_TXDS_M0_6_m0_55_48__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int m0_63_56_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXDS_M0_7_UNION;
#define SOC_HDMI_TXDS_M0_7_m0_63_56__START (0)
#define SOC_HDMI_TXDS_M0_7_m0_63_56__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h0_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH0_0_UNION;
#define SOC_HDMI_TXVH0_0_v_h0_7_0__START (0)
#define SOC_HDMI_TXVH0_0_v_h0_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h0_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH0_1_UNION;
#define SOC_HDMI_TXVH0_1_v_h0_15_8__START (0)
#define SOC_HDMI_TXVH0_1_v_h0_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h0_23_16_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH0_2_UNION;
#define SOC_HDMI_TXVH0_2_v_h0_23_16__START (0)
#define SOC_HDMI_TXVH0_2_v_h0_23_16__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h0_23_16_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH0_3_UNION;
#define SOC_HDMI_TXVH0_3_v_h0_23_16__START (0)
#define SOC_HDMI_TXVH0_3_v_h0_23_16__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h1_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH1_0_UNION;
#define SOC_HDMI_TXVH1_0_v_h1_7_0__START (0)
#define SOC_HDMI_TXVH1_0_v_h1_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h1_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH1_1_UNION;
#define SOC_HDMI_TXVH1_1_v_h1_15_8__START (0)
#define SOC_HDMI_TXVH1_1_v_h1_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h1_23_16_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH1_2_UNION;
#define SOC_HDMI_TXVH1_2_v_h1_23_16__START (0)
#define SOC_HDMI_TXVH1_2_v_h1_23_16__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h1_31_24_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH1_3_UNION;
#define SOC_HDMI_TXVH1_3_v_h1_31_24__START (0)
#define SOC_HDMI_TXVH1_3_v_h1_31_24__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h2_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH2_0_UNION;
#define SOC_HDMI_TXVH2_0_v_h2_7_0__START (0)
#define SOC_HDMI_TXVH2_0_v_h2_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h2_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH2_1_UNION;
#define SOC_HDMI_TXVH2_1_v_h2_15_8__START (0)
#define SOC_HDMI_TXVH2_1_v_h2_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h2_23_16_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH2_2_UNION;
#define SOC_HDMI_TXVH2_2_v_h2_23_16__START (0)
#define SOC_HDMI_TXVH2_2_v_h2_23_16__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h2_31_24_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH2_3_UNION;
#define SOC_HDMI_TXVH2_3_v_h2_31_24__START (0)
#define SOC_HDMI_TXVH2_3_v_h2_31_24__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h3_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH3_0_UNION;
#define SOC_HDMI_TXVH3_0_v_h3_7_0__START (0)
#define SOC_HDMI_TXVH3_0_v_h3_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h3_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH3_1_UNION;
#define SOC_HDMI_TXVH3_1_v_h3_15_8__START (0)
#define SOC_HDMI_TXVH3_1_v_h3_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h3_23_16_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH3_2_UNION;
#define SOC_HDMI_TXVH3_2_v_h3_23_16__START (0)
#define SOC_HDMI_TXVH3_2_v_h3_23_16__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h3_31_24_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH3_3_UNION;
#define SOC_HDMI_TXVH3_3_v_h3_31_24__START (0)
#define SOC_HDMI_TXVH3_3_v_h3_31_24__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h4_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH4_0_UNION;
#define SOC_HDMI_TXVH4_0_v_h4_7_0__START (0)
#define SOC_HDMI_TXVH4_0_v_h4_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h4_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH4_1_UNION;
#define SOC_HDMI_TXVH4_1_v_h4_15_8__START (0)
#define SOC_HDMI_TXVH4_1_v_h4_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h4_23_16_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH4_2_UNION;
#define SOC_HDMI_TXVH4_2_v_h4_23_16__START (0)
#define SOC_HDMI_TXVH4_2_v_h4_23_16__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int v_h4_31_24_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TXVH4_3_UNION;
#define SOC_HDMI_TXVH4_3_v_h4_31_24__START (0)
#define SOC_HDMI_TXVH4_3_v_h4_31_24__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int io_scl : 1;
        unsigned int io_sda : 1;
        unsigned int reserved_0: 2;
        unsigned int man_scl : 1;
        unsigned int man_sda : 1;
        unsigned int reserved_1: 1;
        unsigned int man_ovr : 1;
        unsigned int reserved_2: 24;
    } reg;
} SOC_HDMI_DDC_MAN_UNION;
#define SOC_HDMI_DDC_MAN_io_scl_START (0)
#define SOC_HDMI_DDC_MAN_io_scl_END (0)
#define SOC_HDMI_DDC_MAN_io_sda_START (1)
#define SOC_HDMI_DDC_MAN_io_sda_END (1)
#define SOC_HDMI_DDC_MAN_man_scl_START (4)
#define SOC_HDMI_DDC_MAN_man_scl_END (4)
#define SOC_HDMI_DDC_MAN_man_sda_START (5)
#define SOC_HDMI_DDC_MAN_man_sda_END (5)
#define SOC_HDMI_DDC_MAN_man_ovr_START (7)
#define SOC_HDMI_DDC_MAN_man_ovr_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int ddc_addr : 7;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_DDC_ADDR_UNION;
#define SOC_HDMI_DDC_ADDR_ddc_addr_START (1)
#define SOC_HDMI_DDC_ADDR_ddc_addr_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddc_segm : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DDC_SEGM_UNION;
#define SOC_HDMI_DDC_SEGM_ddc_segm_START (0)
#define SOC_HDMI_DDC_SEGM_ddc_segm_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddc_offset : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DDC_OFFSET_UNION;
#define SOC_HDMI_DDC_OFFSET_ddc_offset_START (0)
#define SOC_HDMI_DDC_OFFSET_ddc_offset_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddc_count_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DDC_COUNT1_UNION;
#define SOC_HDMI_DDC_COUNT1_ddc_count_7_0__START (0)
#define SOC_HDMI_DDC_COUNT1_ddc_count_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddc_count_9_8_ : 2;
        unsigned int reserved_0 : 6;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_DDC_COUNT2_UNION;
#define SOC_HDMI_DDC_COUNT2_ddc_count_9_8__START (0)
#define SOC_HDMI_DDC_COUNT2_ddc_count_9_8__END (1)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fwt_use : 1;
        unsigned int frd_use : 1;
        unsigned int fifo_emp : 1;
        unsigned int fifo_full : 1;
        unsigned int in_prog : 1;
        unsigned int no_ack : 1;
        unsigned int bus_low : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_DDC_STATUS_UNION;
#define SOC_HDMI_DDC_STATUS_fwt_use_START (0)
#define SOC_HDMI_DDC_STATUS_fwt_use_END (0)
#define SOC_HDMI_DDC_STATUS_frd_use_START (1)
#define SOC_HDMI_DDC_STATUS_frd_use_END (1)
#define SOC_HDMI_DDC_STATUS_fifo_emp_START (2)
#define SOC_HDMI_DDC_STATUS_fifo_emp_END (2)
#define SOC_HDMI_DDC_STATUS_fifo_full_START (3)
#define SOC_HDMI_DDC_STATUS_fifo_full_END (3)
#define SOC_HDMI_DDC_STATUS_in_prog_START (4)
#define SOC_HDMI_DDC_STATUS_in_prog_END (4)
#define SOC_HDMI_DDC_STATUS_no_ack_START (5)
#define SOC_HDMI_DDC_STATUS_no_ack_END (5)
#define SOC_HDMI_DDC_STATUS_bus_low_START (6)
#define SOC_HDMI_DDC_STATUS_bus_low_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddc_cmd : 4;
        unsigned int sda_del_en : 1;
        unsigned int ddc_flt_en : 1;
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_DDC_CMD_UNION;
#define SOC_HDMI_DDC_CMD_ddc_cmd_START (0)
#define SOC_HDMI_DDC_CMD_ddc_cmd_END (3)
#define SOC_HDMI_DDC_CMD_sda_del_en_START (4)
#define SOC_HDMI_DDC_CMD_sda_del_en_END (4)
#define SOC_HDMI_DDC_CMD_ddc_flt_en_START (5)
#define SOC_HDMI_DDC_CMD_ddc_flt_en_END (5)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddc_data : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_DDC_DATA_UNION;
#define SOC_HDMI_DDC_DATA_ddc_data_START (0)
#define SOC_HDMI_DDC_DATA_ddc_data_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddc_fifocnt : 5;
        unsigned int reserved_0 : 3;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_DDC_FIFOCNT_UNION;
#define SOC_HDMI_DDC_FIFOCNT_ddc_fifocnt_START (0)
#define SOC_HDMI_DDC_FIFOCNT_ddc_fifocnt_END (4)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmdd : 1;
        unsigned int crc_err : 1;
        unsigned int reserved_0: 3;
        unsigned int bist1_err : 1;
        unsigned int bist2_err : 1;
        unsigned int reserved_1: 1;
        unsigned int reserved_2: 24;
    } reg;
} SOC_HDMI_EPST_UNION;
#define SOC_HDMI_EPST_cmdd_START (0)
#define SOC_HDMI_EPST_cmdd_END (0)
#define SOC_HDMI_EPST_crc_err_START (1)
#define SOC_HDMI_EPST_crc_err_END (1)
#define SOC_HDMI_EPST_bist1_err_START (5)
#define SOC_HDMI_EPST_bist1_err_END (5)
#define SOC_HDMI_EPST_bist2_err_START (6)
#define SOC_HDMI_EPST_bist2_err_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int epcm : 5;
        unsigned int ld_ksv : 1;
        unsigned int reserved_0: 2;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_EPCM_UNION;
#define SOC_HDMI_EPCM_epcm_START (0)
#define SOC_HDMI_EPCM_epcm_END (4)
#define SOC_HDMI_EPCM_ld_ksv_START (5)
#define SOC_HDMI_EPCM_ld_ksv_END (5)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cts_sel : 1;
        unsigned int nctspkt_en : 1;
        unsigned int mclk_en : 1;
        unsigned int reserved_0 : 5;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_ACR_CTRL_UNION;
#define SOC_HDMI_ACR_CTRL_cts_sel_START (0)
#define SOC_HDMI_ACR_CTRL_cts_sel_END (0)
#define SOC_HDMI_ACR_CTRL_nctspkt_en_START (1)
#define SOC_HDMI_ACR_CTRL_nctspkt_en_END (1)
#define SOC_HDMI_ACR_CTRL_mclk_en_START (2)
#define SOC_HDMI_ACR_CTRL_mclk_en_END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mclk_conf : 3;
        unsigned int reserved_0: 5;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_FREQ_SVAL_UNION;
#define SOC_HDMI_FREQ_SVAL_mclk_conf_START (0)
#define SOC_HDMI_FREQ_SVAL_mclk_conf_END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int n_sval_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_N_SVAL1_UNION;
#define SOC_HDMI_N_SVAL1_n_sval_7_0__START (0)
#define SOC_HDMI_N_SVAL1_n_sval_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int n_sval_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_N_SVAL2_UNION;
#define SOC_HDMI_N_SVAL2_n_sval_15_8__START (0)
#define SOC_HDMI_N_SVAL2_n_sval_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int n_sval_19_16_ : 4;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_N_SVAL3_UNION;
#define SOC_HDMI_N_SVAL3_n_sval_19_16__START (0)
#define SOC_HDMI_N_SVAL3_n_sval_19_16__END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cts_sval_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CTS_SVAL1_UNION;
#define SOC_HDMI_CTS_SVAL1_cts_sval_7_0__START (0)
#define SOC_HDMI_CTS_SVAL1_cts_sval_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cts_sval_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CTS_SVAL2_UNION;
#define SOC_HDMI_CTS_SVAL2_cts_sval_15_8__START (0)
#define SOC_HDMI_CTS_SVAL2_cts_sval_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cts_sval_19_16_ : 4;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_CTS_SVAL3_UNION;
#define SOC_HDMI_CTS_SVAL3_cts_sval_19_16__START (0)
#define SOC_HDMI_CTS_SVAL3_cts_sval_19_16__END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cts_hval_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CTS_HVAL1_UNION;
#define SOC_HDMI_CTS_HVAL1_cts_hval_7_0__START (0)
#define SOC_HDMI_CTS_HVAL1_cts_hval_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cts_hval_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CTS_HVAL2_UNION;
#define SOC_HDMI_CTS_HVAL2_cts_hval_15_8__START (0)
#define SOC_HDMI_CTS_HVAL2_cts_hval_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cts_hval_19_16_ : 4;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_CTS_HVAL3_UNION;
#define SOC_HDMI_CTS_HVAL3_cts_hval_19_16__START (0)
#define SOC_HDMI_CTS_HVAL3_cts_hval_19_16__END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aud_en : 1;
        unsigned int spdif_en : 1;
        unsigned int aud_par_en : 1;
        unsigned int dsd_en : 1;
        unsigned int sd0_en : 1;
        unsigned int sd1_en : 1;
        unsigned int sd2_en : 1;
        unsigned int sd3_en : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AUD_MODE_UNION;
#define SOC_HDMI_AUD_MODE_aud_en_START (0)
#define SOC_HDMI_AUD_MODE_aud_en_END (0)
#define SOC_HDMI_AUD_MODE_spdif_en_START (1)
#define SOC_HDMI_AUD_MODE_spdif_en_END (1)
#define SOC_HDMI_AUD_MODE_aud_par_en_START (2)
#define SOC_HDMI_AUD_MODE_aud_par_en_END (2)
#define SOC_HDMI_AUD_MODE_dsd_en_START (3)
#define SOC_HDMI_AUD_MODE_dsd_en_END (3)
#define SOC_HDMI_AUD_MODE_sd0_en_START (4)
#define SOC_HDMI_AUD_MODE_sd0_en_END (4)
#define SOC_HDMI_AUD_MODE_sd1_en_START (5)
#define SOC_HDMI_AUD_MODE_sd1_en_END (5)
#define SOC_HDMI_AUD_MODE_sd2_en_START (6)
#define SOC_HDMI_AUD_MODE_sd2_en_END (6)
#define SOC_HDMI_AUD_MODE_sd3_en_START (7)
#define SOC_HDMI_AUD_MODE_sd3_en_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int fs_override : 1;
        unsigned int reserved_1 : 1;
        unsigned int noaudio : 1;
        unsigned int reserved_2 : 4;
        unsigned int reserved_3 : 24;
    } reg;
} SOC_HDMI_SPDIF_CTRL_UNION;
#define SOC_HDMI_SPDIF_CTRL_fs_override_START (1)
#define SOC_HDMI_SPDIF_CTRL_fs_override_END (1)
#define SOC_HDMI_SPDIF_CTRL_noaudio_START (3)
#define SOC_HDMI_SPDIF_CTRL_noaudio_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hw_spdif_fs : 4;
        unsigned int hw_maxlen : 1;
        unsigned int hw_spdif_len : 3;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_HW_SPDIF_FS_UNION;
#define SOC_HDMI_HW_SPDIF_FS_hw_spdif_fs_START (0)
#define SOC_HDMI_HW_SPDIF_FS_hw_spdif_fs_END (3)
#define SOC_HDMI_HW_SPDIF_FS_hw_maxlen_START (4)
#define SOC_HDMI_HW_SPDIF_FS_hw_maxlen_END (4)
#define SOC_HDMI_HW_SPDIF_FS_hw_spdif_len_START (5)
#define SOC_HDMI_HW_SPDIF_FS_hw_spdif_len_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 4;
        unsigned int swch0 : 1;
        unsigned int swch1 : 1;
        unsigned int swch2 : 1;
        unsigned int swch3 : 1;
        unsigned int reserved_1: 24;
    } reg;
} SOC_HDMI_SWAP_I2S_UNION;
#define SOC_HDMI_SWAP_I2S_swch0_START (4)
#define SOC_HDMI_SWAP_I2S_swch0_END (4)
#define SOC_HDMI_SWAP_I2S_swch1_START (5)
#define SOC_HDMI_SWAP_I2S_swch1_END (5)
#define SOC_HDMI_SWAP_I2S_swch2_START (6)
#define SOC_HDMI_SWAP_I2S_swch2_END (6)
#define SOC_HDMI_SWAP_I2S_swch3_START (7)
#define SOC_HDMI_SWAP_I2S_swch3_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aud_err_thresh : 6;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 24;
    } reg;
} SOC_HDMI_SPDIF_ERTH_UNION;
#define SOC_HDMI_SPDIF_ERTH_aud_err_thresh_START (0)
#define SOC_HDMI_SPDIF_ERTH_aud_err_thresh_END (5)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fifo0_map : 2;
        unsigned int fifo1_map : 2;
        unsigned int fifo2_map : 2;
        unsigned int fifo3_map : 2;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_I2S_IN_MAP_UNION;
#define SOC_HDMI_I2S_IN_MAP_fifo0_map_START (0)
#define SOC_HDMI_I2S_IN_MAP_fifo0_map_END (1)
#define SOC_HDMI_I2S_IN_MAP_fifo1_map_START (2)
#define SOC_HDMI_I2S_IN_MAP_fifo1_map_END (3)
#define SOC_HDMI_I2S_IN_MAP_fifo2_map_START (4)
#define SOC_HDMI_I2S_IN_MAP_fifo2_map_END (5)
#define SOC_HDMI_I2S_IN_MAP_fifo3_map_START (6)
#define SOC_HDMI_I2S_IN_MAP_fifo3_map_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int i2s_shift : 1;
        unsigned int i2s_dir : 1;
        unsigned int i2s_just : 1;
        unsigned int i2s_ws : 1;
        unsigned int vbit : 1;
        unsigned int cbit_order : 1;
        unsigned int sck_edge : 1;
        unsigned int hbra_on : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_I2S_IN_CTRL_UNION;
#define SOC_HDMI_I2S_IN_CTRL_i2s_shift_START (0)
#define SOC_HDMI_I2S_IN_CTRL_i2s_shift_END (0)
#define SOC_HDMI_I2S_IN_CTRL_i2s_dir_START (1)
#define SOC_HDMI_I2S_IN_CTRL_i2s_dir_END (1)
#define SOC_HDMI_I2S_IN_CTRL_i2s_just_START (2)
#define SOC_HDMI_I2S_IN_CTRL_i2s_just_END (2)
#define SOC_HDMI_I2S_IN_CTRL_i2s_ws_START (3)
#define SOC_HDMI_I2S_IN_CTRL_i2s_ws_END (3)
#define SOC_HDMI_I2S_IN_CTRL_vbit_START (4)
#define SOC_HDMI_I2S_IN_CTRL_vbit_END (4)
#define SOC_HDMI_I2S_IN_CTRL_cbit_order_START (5)
#define SOC_HDMI_I2S_IN_CTRL_cbit_order_END (5)
#define SOC_HDMI_I2S_IN_CTRL_sck_edge_START (6)
#define SOC_HDMI_I2S_IN_CTRL_sck_edge_END (6)
#define SOC_HDMI_I2S_IN_CTRL_hbra_on_START (7)
#define SOC_HDMI_I2S_IN_CTRL_hbra_on_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbit0 : 1;
        unsigned int cbit1 : 1;
        unsigned int cbit2 : 1;
        unsigned int cbit3 : 1;
        unsigned int cbit4 : 1;
        unsigned int cbit5 : 1;
        unsigned int cbit6 : 1;
        unsigned int cbit7 : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_I2S_CHST0_UNION;
#define SOC_HDMI_I2S_CHST0_cbit0_START (0)
#define SOC_HDMI_I2S_CHST0_cbit0_END (0)
#define SOC_HDMI_I2S_CHST0_cbit1_START (1)
#define SOC_HDMI_I2S_CHST0_cbit1_END (1)
#define SOC_HDMI_I2S_CHST0_cbit2_START (2)
#define SOC_HDMI_I2S_CHST0_cbit2_END (2)
#define SOC_HDMI_I2S_CHST0_cbit3_START (3)
#define SOC_HDMI_I2S_CHST0_cbit3_END (3)
#define SOC_HDMI_I2S_CHST0_cbit4_START (4)
#define SOC_HDMI_I2S_CHST0_cbit4_END (4)
#define SOC_HDMI_I2S_CHST0_cbit5_START (5)
#define SOC_HDMI_I2S_CHST0_cbit5_END (5)
#define SOC_HDMI_I2S_CHST0_cbit6_START (6)
#define SOC_HDMI_I2S_CHST0_cbit6_END (6)
#define SOC_HDMI_I2S_CHST0_cbit7_START (7)
#define SOC_HDMI_I2S_CHST0_cbit7_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbit8 : 1;
        unsigned int cbit9 : 1;
        unsigned int cbit10 : 1;
        unsigned int cbit11 : 1;
        unsigned int cbit12 : 1;
        unsigned int cbit13 : 1;
        unsigned int cbit14 : 1;
        unsigned int cbit15 : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_I2S_CHST1_UNION;
#define SOC_HDMI_I2S_CHST1_cbit8_START (0)
#define SOC_HDMI_I2S_CHST1_cbit8_END (0)
#define SOC_HDMI_I2S_CHST1_cbit9_START (1)
#define SOC_HDMI_I2S_CHST1_cbit9_END (1)
#define SOC_HDMI_I2S_CHST1_cbit10_START (2)
#define SOC_HDMI_I2S_CHST1_cbit10_END (2)
#define SOC_HDMI_I2S_CHST1_cbit11_START (3)
#define SOC_HDMI_I2S_CHST1_cbit11_END (3)
#define SOC_HDMI_I2S_CHST1_cbit12_START (4)
#define SOC_HDMI_I2S_CHST1_cbit12_END (4)
#define SOC_HDMI_I2S_CHST1_cbit13_START (5)
#define SOC_HDMI_I2S_CHST1_cbit13_END (5)
#define SOC_HDMI_I2S_CHST1_cbit14_START (6)
#define SOC_HDMI_I2S_CHST1_cbit14_END (6)
#define SOC_HDMI_I2S_CHST1_cbit15_START (7)
#define SOC_HDMI_I2S_CHST1_cbit15_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int i2s_src_num : 4;
        unsigned int i2s_chan_num : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_I2S_CHST2_UNION;
#define SOC_HDMI_I2S_CHST2_i2s_src_num_START (0)
#define SOC_HDMI_I2S_CHST2_i2s_src_num_END (3)
#define SOC_HDMI_I2S_CHST2_i2s_chan_num_START (4)
#define SOC_HDMI_I2S_CHST2_i2s_chan_num_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_spdif_fs : 4;
        unsigned int clk_accur : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_I2S_CHST4_UNION;
#define SOC_HDMI_I2S_CHST4_sw_spdif_fs_START (0)
#define SOC_HDMI_I2S_CHST4_sw_spdif_fs_END (3)
#define SOC_HDMI_I2S_CHST4_clk_accur_START (4)
#define SOC_HDMI_I2S_CHST4_clk_accur_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int i2s_maxlen : 1;
        unsigned int i2s_len : 3;
        unsigned int fs_orig : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_I2S_CHST5_UNION;
#define SOC_HDMI_I2S_CHST5_i2s_maxlen_START (0)
#define SOC_HDMI_I2S_CHST5_i2s_maxlen_END (0)
#define SOC_HDMI_I2S_CHST5_i2s_len_START (1)
#define SOC_HDMI_I2S_CHST5_i2s_len_END (3)
#define SOC_HDMI_I2S_CHST5_fs_orig_START (4)
#define SOC_HDMI_I2S_CHST5_fs_orig_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int src_en : 1;
        unsigned int ratio : 1;
        unsigned int reserved_0 : 2;
        unsigned int hbr_spr_mask : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_ASRC_UNION;
#define SOC_HDMI_ASRC_src_en_START (0)
#define SOC_HDMI_ASRC_src_en_END (0)
#define SOC_HDMI_ASRC_ratio_START (1)
#define SOC_HDMI_ASRC_ratio_END (1)
#define SOC_HDMI_ASRC_hbr_spr_mask_START (4)
#define SOC_HDMI_ASRC_hbr_spr_mask_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int in_length : 4;
        unsigned int hbr_pkt_id : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_I2S_IN_LEN_UNION;
#define SOC_HDMI_I2S_IN_LEN_in_length_START (0)
#define SOC_HDMI_I2S_IN_LEN_in_length_END (3)
#define SOC_HDMI_I2S_IN_LEN_hbr_pkt_id_START (4)
#define SOC_HDMI_I2S_IN_LEN_hbr_pkt_id_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hdmi_mode : 1;
        unsigned int layout : 2;
        unsigned int packet_mode : 3;
        unsigned int dc_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_CTRL_UNION;
#define SOC_HDMI_CTRL_hdmi_mode_START (0)
#define SOC_HDMI_CTRL_hdmi_mode_END (0)
#define SOC_HDMI_CTRL_layout_START (1)
#define SOC_HDMI_CTRL_layout_END (2)
#define SOC_HDMI_CTRL_packet_mode_START (3)
#define SOC_HDMI_CTRL_packet_mode_END (5)
#define SOC_HDMI_CTRL_dc_en_START (6)
#define SOC_HDMI_CTRL_dc_en_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int npacket_en : 1;
        unsigned int npacket_envs_high : 1;
        unsigned int mute : 1;
        unsigned int reserved_0 : 5;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_AUDO_TXSTAT_UNION;
#define SOC_HDMI_AUDO_TXSTAT_npacket_en_START (0)
#define SOC_HDMI_AUDO_TXSTAT_npacket_en_END (0)
#define SOC_HDMI_AUDO_TXSTAT_npacket_envs_high_START (1)
#define SOC_HDMI_AUDO_TXSTAT_npacket_envs_high_END (1)
#define SOC_HDMI_AUDO_TXSTAT_mute_START (2)
#define SOC_HDMI_AUDO_TXSTAT_mute_END (2)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 2;
        unsigned int core_iso_en : 1;
        unsigned int dvi_enc_byp : 1;
        unsigned int reserved_1 : 4;
        unsigned int reserved_2 : 24;
    } reg;
} SOC_HDMI_TEST_TXCTRL_UNION;
#define SOC_HDMI_TEST_TXCTRL_core_iso_en_START (2)
#define SOC_HDMI_TEST_TXCTRL_core_iso_en_END (2)
#define SOC_HDMI_TEST_TXCTRL_dvi_enc_byp_START (3)
#define SOC_HDMI_TEST_TXCTRL_dvi_enc_byp_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdtot : 1;
        unsigned int pdosc : 1;
        unsigned int pdidck : 1;
        unsigned int tclkphz : 1;
        unsigned int reserved_0 : 3;
        unsigned int vid_byp_en : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_HDMI_DPD_UNION;
#define SOC_HDMI_DPD_pdtot_START (0)
#define SOC_HDMI_DPD_pdtot_END (0)
#define SOC_HDMI_DPD_pdosc_START (1)
#define SOC_HDMI_DPD_pdosc_END (1)
#define SOC_HDMI_DPD_pdidck_START (2)
#define SOC_HDMI_DPD_pdidck_END (2)
#define SOC_HDMI_DPD_tclkphz_START (3)
#define SOC_HDMI_DPD_tclkphz_END (3)
#define SOC_HDMI_DPD_vid_byp_en_START (7)
#define SOC_HDMI_DPD_vid_byp_en_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int avi_rpt : 1;
        unsigned int avi_en : 1;
        unsigned int spd_rpt : 1;
        unsigned int spd_en : 1;
        unsigned int aud_rpt : 1;
        unsigned int aud_en : 1;
        unsigned int mpeg_rpt : 1;
        unsigned int mpeg_en : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_PB_CTRL1_UNION;
#define SOC_HDMI_PB_CTRL1_avi_rpt_START (0)
#define SOC_HDMI_PB_CTRL1_avi_rpt_END (0)
#define SOC_HDMI_PB_CTRL1_avi_en_START (1)
#define SOC_HDMI_PB_CTRL1_avi_en_END (1)
#define SOC_HDMI_PB_CTRL1_spd_rpt_START (2)
#define SOC_HDMI_PB_CTRL1_spd_rpt_END (2)
#define SOC_HDMI_PB_CTRL1_spd_en_START (3)
#define SOC_HDMI_PB_CTRL1_spd_en_END (3)
#define SOC_HDMI_PB_CTRL1_aud_rpt_START (4)
#define SOC_HDMI_PB_CTRL1_aud_rpt_END (4)
#define SOC_HDMI_PB_CTRL1_aud_en_START (5)
#define SOC_HDMI_PB_CTRL1_aud_en_END (5)
#define SOC_HDMI_PB_CTRL1_mpeg_rpt_START (6)
#define SOC_HDMI_PB_CTRL1_mpeg_rpt_END (6)
#define SOC_HDMI_PB_CTRL1_mpeg_en_START (7)
#define SOC_HDMI_PB_CTRL1_mpeg_en_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gen_rpt : 1;
        unsigned int gen_en : 1;
        unsigned int cp_rpt : 1;
        unsigned int cp_en : 1;
        unsigned int gen2_rpt : 1;
        unsigned int gen2_en : 1;
        unsigned int gam_rpt : 1;
        unsigned int gam_en : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_PB_CTRL2_UNION;
#define SOC_HDMI_PB_CTRL2_gen_rpt_START (0)
#define SOC_HDMI_PB_CTRL2_gen_rpt_END (0)
#define SOC_HDMI_PB_CTRL2_gen_en_START (1)
#define SOC_HDMI_PB_CTRL2_gen_en_END (1)
#define SOC_HDMI_PB_CTRL2_cp_rpt_START (2)
#define SOC_HDMI_PB_CTRL2_cp_rpt_END (2)
#define SOC_HDMI_PB_CTRL2_cp_en_START (3)
#define SOC_HDMI_PB_CTRL2_cp_en_END (3)
#define SOC_HDMI_PB_CTRL2_gen2_rpt_START (4)
#define SOC_HDMI_PB_CTRL2_gen2_rpt_END (4)
#define SOC_HDMI_PB_CTRL2_gen2_en_START (5)
#define SOC_HDMI_PB_CTRL2_gen2_en_END (5)
#define SOC_HDMI_PB_CTRL2_gam_rpt_START (6)
#define SOC_HDMI_PB_CTRL2_gam_rpt_END (6)
#define SOC_HDMI_PB_CTRL2_gam_en_START (7)
#define SOC_HDMI_PB_CTRL2_gam_en_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int avi_hdr_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AVI_TYPE_UNION;
#define SOC_HDMI_AVI_TYPE_avi_hdr_7_0__START (0)
#define SOC_HDMI_AVI_TYPE_avi_hdr_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int avi_hdr_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AVI_VERS_UNION;
#define SOC_HDMI_AVI_VERS_avi_hdr_15_8__START (0)
#define SOC_HDMI_AVI_VERS_avi_hdr_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int avi_hdr_23_16_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AVI_LEN_UNION;
#define SOC_HDMI_AVI_LEN_avi_hdr_23_16__START (0)
#define SOC_HDMI_AVI_LEN_avi_hdr_23_16__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int avi_hdr_31_24_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AVI_CHSUM_UNION;
#define SOC_HDMI_AVI_CHSUM_avi_hdr_31_24__START (0)
#define SOC_HDMI_AVI_CHSUM_avi_hdr_31_24__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int avi_data : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AVI_DBYTE_UNION;
#define SOC_HDMI_AVI_DBYTE_avi_data_START (0)
#define SOC_HDMI_AVI_DBYTE_avi_data_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int spd_hdr_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_SPD_TYPE_UNION;
#define SOC_HDMI_SPD_TYPE_spd_hdr_7_0__START (0)
#define SOC_HDMI_SPD_TYPE_spd_hdr_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int spd_hdr_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_SPD_VERS_UNION;
#define SOC_HDMI_SPD_VERS_spd_hdr_15_8__START (0)
#define SOC_HDMI_SPD_VERS_spd_hdr_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int spd_hdr_23_16_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_SPD_LEN_UNION;
#define SOC_HDMI_SPD_LEN_spd_hdr_23_16__START (0)
#define SOC_HDMI_SPD_LEN_spd_hdr_23_16__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int spd_hdr_31_24_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_SPD_CHSUM_UNION;
#define SOC_HDMI_SPD_CHSUM_spd_hdr_31_24__START (0)
#define SOC_HDMI_SPD_CHSUM_spd_hdr_31_24__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int spd_data : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_SPD_DBYTE_UNION;
#define SOC_HDMI_SPD_DBYTE_spd_data_START (0)
#define SOC_HDMI_SPD_DBYTE_spd_data_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int audio_hdr_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AUDIO_TYPE_UNION;
#define SOC_HDMI_AUDIO_TYPE_audio_hdr_7_0__START (0)
#define SOC_HDMI_AUDIO_TYPE_audio_hdr_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int audio_hdr_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AUDIO_VERS_UNION;
#define SOC_HDMI_AUDIO_VERS_audio_hdr_15_8__START (0)
#define SOC_HDMI_AUDIO_VERS_audio_hdr_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int audio_hdr_23_16_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AUDIO_LEN_UNION;
#define SOC_HDMI_AUDIO_LEN_audio_hdr_23_16__START (0)
#define SOC_HDMI_AUDIO_LEN_audio_hdr_23_16__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int audio_hdr_31_24_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AUDIO_CHSUM_UNION;
#define SOC_HDMI_AUDIO_CHSUM_audio_hdr_31_24__START (0)
#define SOC_HDMI_AUDIO_CHSUM_audio_hdr_31_24__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int audio_data : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_AUDIO_DBYTE_UNION;
#define SOC_HDMI_AUDIO_DBYTE_audio_data_START (0)
#define SOC_HDMI_AUDIO_DBYTE_audio_data_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mpeg_hdr_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_MPEG_TYPE_UNION;
#define SOC_HDMI_MPEG_TYPE_mpeg_hdr_7_0__START (0)
#define SOC_HDMI_MPEG_TYPE_mpeg_hdr_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mpeg_hdr_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_MPEG_VERS_UNION;
#define SOC_HDMI_MPEG_VERS_mpeg_hdr_15_8__START (0)
#define SOC_HDMI_MPEG_VERS_mpeg_hdr_15_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mpeg_hdr_23_16_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_MPEG_LEN_UNION;
#define SOC_HDMI_MPEG_LEN_mpeg_hdr_23_16__START (0)
#define SOC_HDMI_MPEG_LEN_mpeg_hdr_23_16__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mpeg_hdr_31_24_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_MPEG_CHSUM_UNION;
#define SOC_HDMI_MPEG_CHSUM_mpeg_hdr_31_24__START (0)
#define SOC_HDMI_MPEG_CHSUM_mpeg_hdr_31_24__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mpeg_data : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_MPEG_DBYTE_UNION;
#define SOC_HDMI_MPEG_DBYTE_mpeg_data_START (0)
#define SOC_HDMI_MPEG_DBYTE_mpeg_data_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gen_data : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_GEN_DBYTE_UNION;
#define SOC_HDMI_GEN_DBYTE_gen_data_START (0)
#define SOC_HDMI_GEN_DBYTE_gen_data_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int setavm : 1;
        unsigned int reserved_0: 3;
        unsigned int clravm : 1;
        unsigned int reserved_1: 3;
        unsigned int reserved_2: 24;
    } reg;
} SOC_HDMI_CP_BYTE1_UNION;
#define SOC_HDMI_CP_BYTE1_setavm_START (0)
#define SOC_HDMI_CP_BYTE1_setavm_END (0)
#define SOC_HDMI_CP_BYTE1_clravm_START (4)
#define SOC_HDMI_CP_BYTE1_clravm_END (4)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gen2_data : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_GEN2_DBYTE_UNION;
#define SOC_HDMI_GEN2_DBYTE_gen2_data_START (0)
#define SOC_HDMI_GEN2_DBYTE_gen2_data_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cec_id : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CEC_ADDR_ID_UNION;
#define SOC_HDMI_CEC_ADDR_ID_cec_id_START (0)
#define SOC_HDMI_CEC_ADDR_ID_cec_id_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bgr_ctl : 3;
        unsigned int bgr_test : 1;
        unsigned int sw_ctl : 2;
        unsigned int bw_ctl : 2;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TMDS_CTL1_UNION;
#define SOC_HDMI_TMDS_CTL1_bgr_ctl_START (0)
#define SOC_HDMI_TMDS_CTL1_bgr_ctl_END (2)
#define SOC_HDMI_TMDS_CTL1_bgr_test_START (3)
#define SOC_HDMI_TMDS_CTL1_bgr_test_END (3)
#define SOC_HDMI_TMDS_CTL1_sw_ctl_START (4)
#define SOC_HDMI_TMDS_CTL1_sw_ctl_END (5)
#define SOC_HDMI_TMDS_CTL1_bw_ctl_START (6)
#define SOC_HDMI_TMDS_CTL1_bw_ctl_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clkdetect_en : 1;
        unsigned int rsen : 1;
        unsigned int clkdetect : 1;
        unsigned int sel_bgr : 1;
        unsigned int term_en : 1;
        unsigned int oe : 1;
        unsigned int cap_ctl : 2;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TMDS_CTL2_UNION;
#define SOC_HDMI_TMDS_CTL2_clkdetect_en_START (0)
#define SOC_HDMI_TMDS_CTL2_clkdetect_en_END (0)
#define SOC_HDMI_TMDS_CTL2_rsen_START (1)
#define SOC_HDMI_TMDS_CTL2_rsen_END (1)
#define SOC_HDMI_TMDS_CTL2_clkdetect_START (2)
#define SOC_HDMI_TMDS_CTL2_clkdetect_END (2)
#define SOC_HDMI_TMDS_CTL2_sel_bgr_START (3)
#define SOC_HDMI_TMDS_CTL2_sel_bgr_END (3)
#define SOC_HDMI_TMDS_CTL2_term_en_START (4)
#define SOC_HDMI_TMDS_CTL2_term_en_END (4)
#define SOC_HDMI_TMDS_CTL2_oe_START (5)
#define SOC_HDMI_TMDS_CTL2_oe_END (5)
#define SOC_HDMI_TMDS_CTL2_cap_ctl_START (6)
#define SOC_HDMI_TMDS_CTL2_cap_ctl_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdb : 1;
        unsigned int dpcolor_ctl : 2;
        unsigned int clkmult_ctl : 2;
        unsigned int fifo_byp : 1;
        unsigned int bist_sel : 1;
        unsigned int p_clk_select : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TMDS_CTL3_UNION;
#define SOC_HDMI_TMDS_CTL3_pdb_START (0)
#define SOC_HDMI_TMDS_CTL3_pdb_END (0)
#define SOC_HDMI_TMDS_CTL3_dpcolor_ctl_START (1)
#define SOC_HDMI_TMDS_CTL3_dpcolor_ctl_END (2)
#define SOC_HDMI_TMDS_CTL3_clkmult_ctl_START (3)
#define SOC_HDMI_TMDS_CTL3_clkmult_ctl_END (4)
#define SOC_HDMI_TMDS_CTL3_fifo_byp_START (5)
#define SOC_HDMI_TMDS_CTL3_fifo_byp_END (5)
#define SOC_HDMI_TMDS_CTL3_bist_sel_START (6)
#define SOC_HDMI_TMDS_CTL3_bist_sel_END (6)
#define SOC_HDMI_TMDS_CTL3_p_clk_select_START (7)
#define SOC_HDMI_TMDS_CTL3_p_clk_select_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_en : 1;
        unsigned int bist_on : 1;
        unsigned int enc_byp : 1;
        unsigned int scan_mode : 1;
        unsigned int bist_done : 1;
        unsigned int aclkcount_2_ : 1;
        unsigned int bgr_ext_res_en : 1;
        unsigned int pll_ibg_en : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BIST_CNTL_UNION;
#define SOC_HDMI_BIST_CNTL_bist_en_START (0)
#define SOC_HDMI_BIST_CNTL_bist_en_END (0)
#define SOC_HDMI_BIST_CNTL_bist_on_START (1)
#define SOC_HDMI_BIST_CNTL_bist_on_END (1)
#define SOC_HDMI_BIST_CNTL_enc_byp_START (2)
#define SOC_HDMI_BIST_CNTL_enc_byp_END (2)
#define SOC_HDMI_BIST_CNTL_scan_mode_START (3)
#define SOC_HDMI_BIST_CNTL_scan_mode_END (3)
#define SOC_HDMI_BIST_CNTL_bist_done_START (4)
#define SOC_HDMI_BIST_CNTL_bist_done_END (4)
#define SOC_HDMI_BIST_CNTL_aclkcount_2__START (5)
#define SOC_HDMI_BIST_CNTL_aclkcount_2__END (5)
#define SOC_HDMI_BIST_CNTL_bgr_ext_res_en_START (6)
#define SOC_HDMI_BIST_CNTL_bgr_ext_res_en_END (6)
#define SOC_HDMI_BIST_CNTL_pll_ibg_en_START (7)
#define SOC_HDMI_BIST_CNTL_pll_ibg_en_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pat_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BIST_PATTERN_UNION;
#define SOC_HDMI_BIST_PATTERN_pat_7_0__START (0)
#define SOC_HDMI_BIST_PATTERN_pat_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int instruct_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BIST_INSTR0_UNION;
#define SOC_HDMI_BIST_INSTR0_instruct_7_0__START (0)
#define SOC_HDMI_BIST_INSTR0_instruct_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pat_9_8_ : 2;
        unsigned int conf_9_8_ : 2;
        unsigned int cec_osc_en : 1;
        unsigned int instruct_10_8_ : 3;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BIST_INSTR1_UNION;
#define SOC_HDMI_BIST_INSTR1_pat_9_8__START (0)
#define SOC_HDMI_BIST_INSTR1_pat_9_8__END (1)
#define SOC_HDMI_BIST_INSTR1_conf_9_8__START (2)
#define SOC_HDMI_BIST_INSTR1_conf_9_8__END (3)
#define SOC_HDMI_BIST_INSTR1_cec_osc_en_START (4)
#define SOC_HDMI_BIST_INSTR1_cec_osc_en_END (4)
#define SOC_HDMI_BIST_INSTR1_instruct_10_8__START (5)
#define SOC_HDMI_BIST_INSTR1_instruct_10_8__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int conf_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_BIST_CONF0_UNION;
#define SOC_HDMI_BIST_CONF0_conf_7_0__START (0)
#define SOC_HDMI_BIST_CONF0_conf_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int testmode : 1;
        unsigned int cec_osc_ctl : 4;
        unsigned int aclkcount_1_0_ : 2;
        unsigned int ten_bit_bypass : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TMDS_CNTL9_UNION;
#define SOC_HDMI_TMDS_CNTL9_testmode_START (0)
#define SOC_HDMI_TMDS_CNTL9_testmode_END (0)
#define SOC_HDMI_TMDS_CNTL9_cec_osc_ctl_START (1)
#define SOC_HDMI_TMDS_CNTL9_cec_osc_ctl_END (4)
#define SOC_HDMI_TMDS_CNTL9_aclkcount_1_0__START (5)
#define SOC_HDMI_TMDS_CNTL9_aclkcount_1_0__END (6)
#define SOC_HDMI_TMDS_CNTL9_ten_bit_bypass_START (7)
#define SOC_HDMI_TMDS_CNTL9_ten_bit_bypass_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int test_mux_ctrl_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_TEST_MUX_CTRL_UNION;
#define SOC_HDMI_TEST_MUX_CTRL_test_mux_ctrl_7_0__START (0)
#define SOC_HDMI_TEST_MUX_CTRL_test_mux_ctrl_7_0__END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int chipid : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HDMI_CHIP_ID_UNION;
#define SOC_HDMI_CHIP_ID_chipid_START (0)
#define SOC_HDMI_CHIP_ID_chipid_END (7)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
