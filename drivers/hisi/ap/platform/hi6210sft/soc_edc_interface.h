#ifndef __SOC_EDC_INTERFACE_H__
#define __SOC_EDC_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_EDC_ID_ADDR(base) ((base) + (0x000))
#define SOC_EDC_CH1L_ADDR_ADDR(base) ((base) + (0x004))
#define SOC_EDC_CH1R_ADDR_ADDR(base) ((base) + (0x008))
#define SOC_EDC_CH1_STRIDE_ADDR(base) ((base) + (0x00C))
#define SOC_EDC_CH1_XY_ADDR(base) ((base) + (0x010))
#define SOC_EDC_CH1_SIZE_ADDR(base) ((base) + (0x014))
#define SOC_EDC_CH1_CTL_ADDR(base) ((base) + (0x018))
#define SOC_EDC_CH1_COLORK_MIN_ADDR(base) ((base) + (0x01C))
#define SOC_EDC_CH1_COLORK_MAX_ADDR(base) ((base) + (0x020))
#define SOC_EDC_CH2L_ADDR_ADDR(base) ((base) + (0x024))
#define SOC_EDC_CH2R_ADDR_ADDR(base) ((base) + (0x028))
#define SOC_EDC_CH2_STRIDE_ADDR(base) ((base) + (0x02C))
#define SOC_EDC_CH2_XY_ADDR(base) ((base) + (0x030))
#define SOC_EDC_CH2_SIZE_ADDR(base) ((base) + (0x034))
#define SOC_EDC_CH2_CTL_ADDR(base) ((base) + (0x0038))
#define SOC_EDC_CH2_COLORK_MIN_ADDR(base) ((base) + (0x003C))
#define SOC_EDC_CH2_COLORK_MAX_ADDR(base) ((base) + (0x0040))
#define SOC_EDC_CH12_OVLY_ADDR(base) ((base) + (0x0044))
#define SOC_EDC_CH12_GLB_ALP_VAL_ADDR(base) ((base) + (0x0048))
#define SOC_EDC_CH12_MSK_COLOR0_MIN_ADDR(base) ((base) + (0x004C))
#define SOC_EDC_CH12_MSK_COLOR0_MAX_ADDR(base) ((base) + (0x0050))
#define SOC_EDC_CH12_MSK_COLOR1_MIN_ADDR(base) ((base) + (0x0054))
#define SOC_EDC_CH12_MSK_COLOR1_MAX_ADDR(base) ((base) + (0x0058))
#define SOC_EDC_CH12_MSK_COLOR2_MIN_ADDR(base) ((base) + (0x005C))
#define SOC_EDC_CH12_MSK_COLOR2_MAX_ADDR(base) ((base) + (0x0060))
#define SOC_EDC_CH12_MSK_COLOR3_MIN_ADDR(base) ((base) + (0x0064))
#define SOC_EDC_CH12_MSK_COLOR3_MAX_ADDR(base) ((base) + (0x0068))
#define SOC_EDC_CRSL_ADDR_ADDR(base) ((base) + (0x006C))
#define SOC_EDC_CRSR_ADDR_ADDR(base) ((base) + (0x0070))
#define SOC_EDC_CRS_STRIDE_ADDR(base) ((base) + (0x0074))
#define SOC_EDC_CRS_XY_ADDR(base) ((base) + (0x0078))
#define SOC_EDC_CRS_SIZE_ADDR(base) ((base) + (0x07C))
#define SOC_EDC_CRS_CTL_ADDR(base) ((base) + (0x0080))
#define SOC_EDC_CRS_COLORK_MIN_ADDR(base) ((base) + (0x0084))
#define SOC_EDC_CRS_COLORK_MAX_ADDR(base) ((base) + (0x0088))
#define SOC_EDC_CRS_GLB_ALP_VAL_ADDR(base) ((base) + (0x008C))
#define SOC_EDC_DISP_SIZE_ADDR(base) ((base) + (0x090))
#define SOC_EDC_DISP_CTL_ADDR(base) ((base) + (0x094))
#define SOC_EDC_DISP_DPD_ADDR(base) ((base) + (0x098))
#define SOC_EDC_STS_ADDR(base) ((base) + (0x09C))
#define SOC_EDC_INTS_ADDR(base) ((base) + (0x0A0))
#define SOC_EDC_INTE_ADDR(base) ((base) + (0x0A4))
#define SOC_EDC_GAMCNT_CLR_ADDR(base) ((base) + (0x0A8))
#define SOC_EDC_TILE_SIZE_VRT_ADDR(base) ((base) + (0x0AC))
#define SOC_EDC_TILE_CROP_ADDR(base) ((base) + (0x0B0))
#define SOC_EDC_TL_ENGIN0_ADDR_ADDR(base) ((base) + (0x0B4))
#define SOC_EDC_TL_ENGIN1_ADDR_ADDR(base) ((base) + (0x0B8))
#define SOC_EDC_TR_ENGIN0_ADDR_ADDR(base) ((base) + (0x0BC))
#define SOC_EDC_TR_ENGIN1_ADDR_ADDR(base) ((base) + (0x0C0))
#define SOC_EDC_TRUST_INTS_ADDR(base) ((base) + (0x0D0))
#define SOC_EDC_TRUST_MASK_ADDR(base) ((base) + (0x00D4))
#define SOC_EDC_APROT_CFG_ADDR(base) ((base) + (0x00D8))
#define SOC_EDC_CRS_CLIP_ADDR(base) ((base) + (0x00DC))
#define SOC_EDC_CH1_CLIP_ADDR(base) ((base) + (0x00F0))
#define SOC_EDC_CH2_CLIP_ADDR(base) ((base) + (0x00F4))
#define SOC_EDC_GAMMA_ADDR(base,k) ((base) + (0x100+(k)*0x4))
#define SOC_EDC_CH1_CSCIDC_ADDR(base) ((base) + (0x200))
#define SOC_EDC_CH1_CSCODC_ADDR(base) ((base) + (0x204))
#define SOC_EDC_CH1_CSCP0_ADDR(base) ((base) + (0x208))
#define SOC_EDC_CH1_CSCP1_ADDR(base) ((base) + (0x20C))
#define SOC_EDC_CH1_CSCP2_ADDR(base) ((base) + (0x210))
#define SOC_EDC_CH1_CSCP3_ADDR(base) ((base) + (0x214))
#define SOC_EDC_CH1_CSCP4_ADDR(base) ((base) + (0x218))
#define SOC_EDC_CH2_CSCIDC_ADDR(base) ((base) + (0x300))
#define SOC_EDC_CH2_CSCODC_ADDR(base) ((base) + (0x304))
#define SOC_EDC_CH2_CSCP0_ADDR(base) ((base) + (0x308))
#define SOC_EDC_CH2_CSCP1_ADDR(base) ((base) + (0x30C))
#define SOC_EDC_CH2_CSCP2_ADDR(base) ((base) + (0x310))
#define SOC_EDC_CH2_CSCP3_ADDR(base) ((base) + (0x314))
#define SOC_EDC_CH2_CSCP4_ADDR(base) ((base) + (0x318))
#define SOC_EDC_OUT_CSCIDC_ADDR(base) ((base) + (0x400))
#define SOC_EDC_OUT_CSCODC_ADDR(base) ((base) + (0x404))
#define SOC_EDC_OUT_CSCP0_ADDR(base) ((base) + (0x408))
#define SOC_EDC_OUT_CSCP1_ADDR(base) ((base) + (0x40C))
#define SOC_EDC_OUT_CSCP2_ADDR(base) ((base) + (0x410))
#define SOC_EDC_OUT_CSCP3_ADDR(base) ((base) + (0x414))
#define SOC_EDC_OUT_CSCP4_ADDR(base) ((base) + (0x418))
#define SOC_EDC_CH1_SCL_HSP_ADDR(base) ((base) + (0x500))
#define SOC_EDC_CH1_SCL_HOFFSET_ADDR(base) ((base) + (0x504))
#define SOC_EDC_CH1_SCL_VSP_ADDR(base) ((base) + (0x508))
#define SOC_EDC_CH1_SCL_VSR_ADDR(base) ((base) + (0x50C))
#define SOC_EDC_CH1_SCL_VOFFSET_ADDR(base) ((base) + (0x510))
#define SOC_EDC_CH1_SCL_ORES_ADDR(base) ((base) + (0x514))
#define SOC_EDC_CH1_SCL_IRES_ADDR(base) ((base) + (0x518))
#define SOC_EDC_CH1_SCL_HPC_ADDR(base,m,i) ((base) + (0x600+((m)-1)*0x10+((i)-1)*0x4))
#define SOC_EDC_CH1_SCL_VPC_ADDR(base,n,j) ((base) + (0x700+((n)-1)*0x8+((j)-1)*0x4))
#define SOC_EDC_LDI_HRZ_CTRL0_ADDR(base) ((base) + (0x1000))
#define SOC_EDC_LDI_HRZ_CTRL1_ADDR(base) ((base) + (0x1004))
#define SOC_EDC_LDI_VRT_CTRL0_ADDR(base) ((base) + (0x1008))
#define SOC_EDC_LDI_VRT_CTRL1_ADDR(base) ((base) + (0x100C))
#define SOC_EDC_LDI_PLR_CTRL_ADDR(base) ((base) + (0x1010))
#define SOC_EDC_LDI_DSP_SIZE_ADDR(base) ((base) + (0x1014))
#define SOC_EDC_LDI_3D_CTRL_ADDR(base) ((base) + (0x1018))
#define SOC_EDC_LDI_INT_EN_ADDR(base) ((base) + (0x101C))
#define SOC_EDC_LDI_CTRL_ADDR(base) ((base) + (0x1020))
#define SOC_EDC_LDI_ORG_INT_ADDR(base) ((base) + (0x1024))
#define SOC_EDC_LDI_MSK_INT_ADDR(base) ((base) + (0x1028))
#define SOC_EDC_LDI_INT_CLR_ADDR(base) ((base) + (0x102C))
#define SOC_EDC_LDI_WORK_MODE_ADDR(base) ((base) + (0x1030))
#define SOC_EDC_LDI_HDMI_DSI_GT_ADDR(base) ((base) + (0x1034))
#define SOC_EDC_LDI_DE_SPACE_LOW_ADDR(base) ((base) + (0x1038))
#define SOC_EDC_DSI_CMD_MOD_CTRL_ADDR(base) ((base) + (0x103C))
#define SOC_EDC_DSI_TE_CTRL_ADDR(base) ((base) + (0x1040))
#define SOC_EDC_DSI_TE_HS_NUM_ADDR(base) ((base) + (0x1044))
#define SOC_EDC_DSI_TE_HS_WD_ADDR(base) ((base) + (0x1048))
#define SOC_EDC_DSI_TE_VS_WD_ADDR(base) ((base) + (0x104C))
#define SOC_EDC_LDI_MCU_INTS_ADDR(base) ((base) + (0x1050))
#define SOC_EDC_LDI_MCU_INTE_ADDR(base) ((base) + (0x1054))
#define SOC_EDC_LDI_MCU_INTC_ADDR(base) ((base) + (0x1058))
#define SOC_EDC_CONTROL_REG0_ADDR(base) ((base) + (0x2000))
#define SOC_EDC_CONTROL_REG1_ADDR(base) ((base) + (0x2004))
#define SOC_EDC_HS_POS0_ADDR(base) ((base) + (0x2008))
#define SOC_EDC_HS_POS1_ADDR(base) ((base) + (0x200C))
#define SOC_EDC_FRAME_WIDTH0_ADDR(base) ((base) + (0x2010))
#define SOC_EDC_FRAME_WIDTH1_ADDR(base) ((base) + (0x2014))
#define SOC_EDC_FRAME_HEIGHT0_ADDR(base) ((base) + (0x2018))
#define SOC_EDC_FRAME_HEIGHT1_ADDR(base) ((base) + (0x201C))
#define SOC_EDC_VS_POS0_ADDR(base) ((base) + (0x2020))
#define SOC_EDC_VS_POS1_ADDR(base) ((base) + (0x2024))
#define SOC_EDC_IRIDIX_CONTROL_0_ADDR(base) ((base) + (0x2400))
#define SOC_EDC_VARIANCE_ADDR(base) ((base) + (0x240C))
#define SOC_EDC_SLOPE_MAX_ADDR(base) ((base) + (0x2410))
#define SOC_EDC_SLOPE_MIN_ADDR(base) ((base) + (0x2414))
#define SOC_EDC_BLACK_LEVEL0_ADDR(base) ((base) + (0x2418))
#define SOC_EDC_BLACK_LEVEL1_ADDR(base) ((base) + (0x241C))
#define SOC_EDC_WHITE_LEVEL0_ADDR(base) ((base) + (0x2420))
#define SOC_EDC_WHITE_LEVEL1_ADDR(base) ((base) + (0x2424))
#define SOC_EDC_LIMIT_AMP_ADDR(base) ((base) + (0x2428))
#define SOC_EDC_DITHER_ADDR(base) ((base) + (0x242C))
#define SOC_EDC_LOGO_LEFT_ADDR(base) ((base) + (0x2800))
#define SOC_EDC_LOGO_RIGHT_ADDR(base) ((base) + (0x2804))
#define SOC_EDC_DITHER_CONTROL_ADDR(base) ((base) + (0x2840))
#define SOC_EDC_STRENGTH_SEL_ADDR(base) ((base) + (0x2C00))
#define SOC_EDC_STRENGTH_MANUAL_ADDR(base) ((base) + (0x2C04))
#define SOC_EDC_OPTION_SELECT_ADDR(base) ((base) + (0x2C08))
#define SOC_EDC_AMBIENT_LIGHT0_ADDR(base) ((base) + (0x2C10))
#define SOC_EDC_AMBIENT_LIGHT1_ADDR(base) ((base) + (0x2C14))
#define SOC_EDC_BACKLIGHT_LEVEL0_ADDR(base) ((base) + (0x2C18))
#define SOC_EDC_BACKLIGHT_LEVEL1_ADDR(base) ((base) + (0x2C1C))
#define SOC_EDC_BACKLIGHT_MAX0_ADDR(base) ((base) + (0x2C20))
#define SOC_EDC_BACKLIGHT_MAX1_ADDR(base) ((base) + (0x2C24))
#define SOC_EDC_STRENGTH_LIMIT_ADDR(base) ((base) + (0x2C28))
#define SOC_EDC_CALIBRATION_A_ADDR(base) ((base) + (0x2C2C))
#define SOC_EDC_CALIBRATION_B_ADDR(base) ((base) + (0x2C30))
#define SOC_EDC_DRC_IN0_ADDR(base) ((base) + (0x2C38))
#define SOC_EDC_DRC_IN1_ADDR(base) ((base) + (0x2C3C))
#define SOC_EDC_T_FILT_CONTROL_ADDR(base) ((base) + (0x2C34))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int id : 32;
    } reg;
} SOC_EDC_ID_UNION;
#endif
#define SOC_EDC_ID_id_START (0)
#define SOC_EDC_ID_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1l_addr : 32;
    } reg;
} SOC_EDC_CH1L_ADDR_UNION;
#endif
#define SOC_EDC_CH1L_ADDR_ch1l_addr_START (0)
#define SOC_EDC_CH1L_ADDR_ch1l_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1r_addr : 32;
    } reg;
} SOC_EDC_CH1R_ADDR_UNION;
#endif
#define SOC_EDC_CH1R_ADDR_ch1r_addr_START (0)
#define SOC_EDC_CH1R_ADDR_ch1r_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_ln_stride : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_EDC_CH1_STRIDE_UNION;
#endif
#define SOC_EDC_CH1_STRIDE_ch1_ln_stride_START (0)
#define SOC_EDC_CH1_STRIDE_ch1_ln_stride_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_y : 12;
        unsigned int reserved_0: 4;
        unsigned int ch1_x : 12;
        unsigned int reserved_1: 4;
    } reg;
} SOC_EDC_CH1_XY_UNION;
#endif
#define SOC_EDC_CH1_XY_ch1_y_START (0)
#define SOC_EDC_CH1_XY_ch1_y_END (11)
#define SOC_EDC_CH1_XY_ch1_x_START (16)
#define SOC_EDC_CH1_XY_ch1_x_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_size_vrt : 12;
        unsigned int reserved_0 : 4;
        unsigned int ch1_size_hrz : 12;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_EDC_CH1_SIZE_UNION;
#endif
#define SOC_EDC_CH1_SIZE_ch1_size_vrt_START (0)
#define SOC_EDC_CH1_SIZE_ch1_size_vrt_END (11)
#define SOC_EDC_CH1_SIZE_ch1_size_hrz_START (16)
#define SOC_EDC_CH1_SIZE_ch1_size_hrz_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_secu_line : 12;
        unsigned int ch1_y_flip : 1;
        unsigned int ch1_tile_fmt : 2;
        unsigned int ch1_tile_en : 1;
        unsigned int ch1_pix_fmt : 3;
        unsigned int ch_bgr : 1;
        unsigned int ch1_colork_en : 1;
        unsigned int ch1_rot : 2;
        unsigned int reserved_0 : 1;
        unsigned int ch1_en : 1;
        unsigned int reserved_1 : 1;
        unsigned int ch1_clk_en : 1;
        unsigned int reserved_2 : 5;
    } reg;
} SOC_EDC_CH1_CTL_UNION;
#endif
#define SOC_EDC_CH1_CTL_ch1_secu_line_START (0)
#define SOC_EDC_CH1_CTL_ch1_secu_line_END (11)
#define SOC_EDC_CH1_CTL_ch1_y_flip_START (12)
#define SOC_EDC_CH1_CTL_ch1_y_flip_END (12)
#define SOC_EDC_CH1_CTL_ch1_tile_fmt_START (13)
#define SOC_EDC_CH1_CTL_ch1_tile_fmt_END (14)
#define SOC_EDC_CH1_CTL_ch1_tile_en_START (15)
#define SOC_EDC_CH1_CTL_ch1_tile_en_END (15)
#define SOC_EDC_CH1_CTL_ch1_pix_fmt_START (16)
#define SOC_EDC_CH1_CTL_ch1_pix_fmt_END (18)
#define SOC_EDC_CH1_CTL_ch_bgr_START (19)
#define SOC_EDC_CH1_CTL_ch_bgr_END (19)
#define SOC_EDC_CH1_CTL_ch1_colork_en_START (20)
#define SOC_EDC_CH1_CTL_ch1_colork_en_END (20)
#define SOC_EDC_CH1_CTL_ch1_rot_START (21)
#define SOC_EDC_CH1_CTL_ch1_rot_END (22)
#define SOC_EDC_CH1_CTL_ch1_en_START (24)
#define SOC_EDC_CH1_CTL_ch1_en_END (24)
#define SOC_EDC_CH1_CTL_ch1_clk_en_START (26)
#define SOC_EDC_CH1_CTL_ch1_clk_en_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_colork_min : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH1_COLORK_MIN_UNION;
#endif
#define SOC_EDC_CH1_COLORK_MIN_ch1_colork_min_START (0)
#define SOC_EDC_CH1_COLORK_MIN_ch1_colork_min_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_colork_max : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH1_COLORK_MAX_UNION;
#endif
#define SOC_EDC_CH1_COLORK_MAX_ch1_colork_max_START (0)
#define SOC_EDC_CH1_COLORK_MAX_ch1_colork_max_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2l_addr : 32;
    } reg;
} SOC_EDC_CH2L_ADDR_UNION;
#endif
#define SOC_EDC_CH2L_ADDR_ch2l_addr_START (0)
#define SOC_EDC_CH2L_ADDR_ch2l_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2r_addr : 32;
    } reg;
} SOC_EDC_CH2R_ADDR_UNION;
#endif
#define SOC_EDC_CH2R_ADDR_ch2r_addr_START (0)
#define SOC_EDC_CH2R_ADDR_ch2r_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_ln_stride : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_EDC_CH2_STRIDE_UNION;
#endif
#define SOC_EDC_CH2_STRIDE_ch2_ln_stride_START (0)
#define SOC_EDC_CH2_STRIDE_ch2_ln_stride_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_y : 12;
        unsigned int reserved_0: 4;
        unsigned int ch2_x : 12;
        unsigned int reserved_1: 4;
    } reg;
} SOC_EDC_CH2_XY_UNION;
#endif
#define SOC_EDC_CH2_XY_ch2_y_START (0)
#define SOC_EDC_CH2_XY_ch2_y_END (11)
#define SOC_EDC_CH2_XY_ch2_x_START (16)
#define SOC_EDC_CH2_XY_ch2_x_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_size_vrt : 12;
        unsigned int reserved_0 : 4;
        unsigned int ch2_size_hrz : 12;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_EDC_CH2_SIZE_UNION;
#endif
#define SOC_EDC_CH2_SIZE_ch2_size_vrt_START (0)
#define SOC_EDC_CH2_SIZE_ch2_size_vrt_END (11)
#define SOC_EDC_CH2_SIZE_ch2_size_hrz_START (16)
#define SOC_EDC_CH2_SIZE_ch2_size_hrz_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_secu_line : 12;
        unsigned int reserved_0 : 4;
        unsigned int ch2_fmtin : 3;
        unsigned int ch2_bgr : 1;
        unsigned int ch2_colork_en : 1;
        unsigned int ch2_en : 1;
        unsigned int reserved_1 : 10;
    } reg;
} SOC_EDC_CH2_CTL_UNION;
#endif
#define SOC_EDC_CH2_CTL_ch2_secu_line_START (0)
#define SOC_EDC_CH2_CTL_ch2_secu_line_END (11)
#define SOC_EDC_CH2_CTL_ch2_fmtin_START (16)
#define SOC_EDC_CH2_CTL_ch2_fmtin_END (18)
#define SOC_EDC_CH2_CTL_ch2_bgr_START (19)
#define SOC_EDC_CH2_CTL_ch2_bgr_END (19)
#define SOC_EDC_CH2_CTL_ch2_colork_en_START (20)
#define SOC_EDC_CH2_CTL_ch2_colork_en_END (20)
#define SOC_EDC_CH2_CTL_ch2_en_START (21)
#define SOC_EDC_CH2_CTL_ch2_en_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_colork_min : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH2_COLORK_MIN_UNION;
#endif
#define SOC_EDC_CH2_COLORK_MIN_ch2_colork_min_START (0)
#define SOC_EDC_CH2_COLORK_MIN_ch2_colork_min_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_colork_max : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH2_COLORK_MAX_UNION;
#endif
#define SOC_EDC_CH2_COLORK_MAX_ch2_colork_max_START (0)
#define SOC_EDC_CH2_COLORK_MAX_ch2_colork_max_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int blend_mskc3_en : 1;
        unsigned int blend_mskc2_en : 1;
        unsigned int blend_mskc1_en : 1;
        unsigned int blend_mskc0_en : 1;
        unsigned int blend_mskc_src : 1;
        unsigned int alp_ch2_sel : 2;
        unsigned int alp_ch1_sel : 2;
        unsigned int pix_alp_src : 1;
        unsigned int alp_mode : 1;
        unsigned int blend_en : 1;
        unsigned int ch2_top : 1;
        unsigned int reserved : 19;
    } reg;
} SOC_EDC_CH12_OVLY_UNION;
#endif
#define SOC_EDC_CH12_OVLY_blend_mskc3_en_START (0)
#define SOC_EDC_CH12_OVLY_blend_mskc3_en_END (0)
#define SOC_EDC_CH12_OVLY_blend_mskc2_en_START (1)
#define SOC_EDC_CH12_OVLY_blend_mskc2_en_END (1)
#define SOC_EDC_CH12_OVLY_blend_mskc1_en_START (2)
#define SOC_EDC_CH12_OVLY_blend_mskc1_en_END (2)
#define SOC_EDC_CH12_OVLY_blend_mskc0_en_START (3)
#define SOC_EDC_CH12_OVLY_blend_mskc0_en_END (3)
#define SOC_EDC_CH12_OVLY_blend_mskc_src_START (4)
#define SOC_EDC_CH12_OVLY_blend_mskc_src_END (4)
#define SOC_EDC_CH12_OVLY_alp_ch2_sel_START (5)
#define SOC_EDC_CH12_OVLY_alp_ch2_sel_END (6)
#define SOC_EDC_CH12_OVLY_alp_ch1_sel_START (7)
#define SOC_EDC_CH12_OVLY_alp_ch1_sel_END (8)
#define SOC_EDC_CH12_OVLY_pix_alp_src_START (9)
#define SOC_EDC_CH12_OVLY_pix_alp_src_END (9)
#define SOC_EDC_CH12_OVLY_alp_mode_START (10)
#define SOC_EDC_CH12_OVLY_alp_mode_END (10)
#define SOC_EDC_CH12_OVLY_blend_en_START (11)
#define SOC_EDC_CH12_OVLY_blend_en_END (11)
#define SOC_EDC_CH12_OVLY_ch2_top_START (12)
#define SOC_EDC_CH12_OVLY_ch2_top_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch12_alp_value0 : 8;
        unsigned int ch12_alp_value1 : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_EDC_CH12_GLB_ALP_VAL_UNION;
#endif
#define SOC_EDC_CH12_GLB_ALP_VAL_ch12_alp_value0_START (0)
#define SOC_EDC_CH12_GLB_ALP_VAL_ch12_alp_value0_END (7)
#define SOC_EDC_CH12_GLB_ALP_VAL_ch12_alp_value1_START (8)
#define SOC_EDC_CH12_GLB_ALP_VAL_ch12_alp_value1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_msk_color0_min : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH12_MSK_COLOR0_MIN_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR0_MIN_ch2_msk_color0_min_START (0)
#define SOC_EDC_CH12_MSK_COLOR0_MIN_ch2_msk_color0_min_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_msk_color0_max : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH12_MSK_COLOR0_MAX_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR0_MAX_ch2_msk_color0_max_START (0)
#define SOC_EDC_CH12_MSK_COLOR0_MAX_ch2_msk_color0_max_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_msk_color1_min : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH12_MSK_COLOR1_MIN_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR1_MIN_ch2_msk_color1_min_START (0)
#define SOC_EDC_CH12_MSK_COLOR1_MIN_ch2_msk_color1_min_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_msk_color1_max : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH12_MSK_COLOR1_MAX_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR1_MAX_ch2_msk_color1_max_START (0)
#define SOC_EDC_CH12_MSK_COLOR1_MAX_ch2_msk_color1_max_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_msk_color2_min : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH12_MSK_COLOR2_MIN_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR2_MIN_ch2_msk_color2_min_START (0)
#define SOC_EDC_CH12_MSK_COLOR2_MIN_ch2_msk_color2_min_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_msk_color2_max : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH12_MSK_COLOR2_MAX_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR2_MAX_ch2_msk_color2_max_START (0)
#define SOC_EDC_CH12_MSK_COLOR2_MAX_ch2_msk_color2_max_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_msk_color3_min : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH12_MSK_COLOR3_MIN_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR3_MIN_ch2_msk_color3_min_START (0)
#define SOC_EDC_CH12_MSK_COLOR3_MIN_ch2_msk_color3_min_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_msk_color3_max : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH12_MSK_COLOR3_MAX_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR3_MAX_ch2_msk_color3_max_START (0)
#define SOC_EDC_CH12_MSK_COLOR3_MAX_ch2_msk_color3_max_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crsl_addr : 32;
    } reg;
} SOC_EDC_CRSL_ADDR_UNION;
#endif
#define SOC_EDC_CRSL_ADDR_crsl_addr_START (0)
#define SOC_EDC_CRSL_ADDR_crsl_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crsr_addr : 32;
    } reg;
} SOC_EDC_CRSR_ADDR_UNION;
#endif
#define SOC_EDC_CRSR_ADDR_crsr_addr_START (0)
#define SOC_EDC_CRSR_ADDR_crsr_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crs_ln_stride : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_EDC_CRS_STRIDE_UNION;
#endif
#define SOC_EDC_CRS_STRIDE_crs_ln_stride_START (0)
#define SOC_EDC_CRS_STRIDE_crs_ln_stride_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crs_y : 12;
        unsigned int reserved_0: 4;
        unsigned int crs_x : 12;
        unsigned int reserved_1: 4;
    } reg;
} SOC_EDC_CRS_XY_UNION;
#endif
#define SOC_EDC_CRS_XY_crs_y_START (0)
#define SOC_EDC_CRS_XY_crs_y_END (11)
#define SOC_EDC_CRS_XY_crs_x_START (16)
#define SOC_EDC_CRS_XY_crs_x_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crs_size_vrt : 12;
        unsigned int reserved_0 : 4;
        unsigned int crs_size_hrz : 12;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_EDC_CRS_SIZE_UNION;
#endif
#define SOC_EDC_CRS_SIZE_crs_size_vrt_START (0)
#define SOC_EDC_CRS_SIZE_crs_size_vrt_END (11)
#define SOC_EDC_CRS_SIZE_crs_size_hrz_START (16)
#define SOC_EDC_CRS_SIZE_crs_size_hrz_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crs_secu_line : 12;
        unsigned int alp_crs_sel : 2;
        unsigned int alp_under_sel : 2;
        unsigned int reserved_0 : 1;
        unsigned int crs_fmtin : 2;
        unsigned int crs_bgr : 1;
        unsigned int crs_des_colork_en : 1;
        unsigned int reserved_1 : 1;
        unsigned int crs_alp_mode : 1;
        unsigned int crs_src_blend_en : 1;
        unsigned int reserved_2 : 3;
        unsigned int crs_en : 1;
        unsigned int crs_cfg_ok : 1;
        unsigned int crs_cfg_ok_sel : 1;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_EDC_CRS_CTL_UNION;
#endif
#define SOC_EDC_CRS_CTL_crs_secu_line_START (0)
#define SOC_EDC_CRS_CTL_crs_secu_line_END (11)
#define SOC_EDC_CRS_CTL_alp_crs_sel_START (12)
#define SOC_EDC_CRS_CTL_alp_crs_sel_END (13)
#define SOC_EDC_CRS_CTL_alp_under_sel_START (14)
#define SOC_EDC_CRS_CTL_alp_under_sel_END (15)
#define SOC_EDC_CRS_CTL_crs_fmtin_START (17)
#define SOC_EDC_CRS_CTL_crs_fmtin_END (18)
#define SOC_EDC_CRS_CTL_crs_bgr_START (19)
#define SOC_EDC_CRS_CTL_crs_bgr_END (19)
#define SOC_EDC_CRS_CTL_crs_des_colork_en_START (20)
#define SOC_EDC_CRS_CTL_crs_des_colork_en_END (20)
#define SOC_EDC_CRS_CTL_crs_alp_mode_START (22)
#define SOC_EDC_CRS_CTL_crs_alp_mode_END (22)
#define SOC_EDC_CRS_CTL_crs_src_blend_en_START (23)
#define SOC_EDC_CRS_CTL_crs_src_blend_en_END (23)
#define SOC_EDC_CRS_CTL_crs_en_START (27)
#define SOC_EDC_CRS_CTL_crs_en_END (27)
#define SOC_EDC_CRS_CTL_crs_cfg_ok_START (28)
#define SOC_EDC_CRS_CTL_crs_cfg_ok_END (28)
#define SOC_EDC_CRS_CTL_crs_cfg_ok_sel_START (29)
#define SOC_EDC_CRS_CTL_crs_cfg_ok_sel_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crs_colork_min : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CRS_COLORK_MIN_UNION;
#endif
#define SOC_EDC_CRS_COLORK_MIN_crs_colork_min_START (0)
#define SOC_EDC_CRS_COLORK_MIN_crs_colork_min_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crs_colork_max : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CRS_COLORK_MAX_UNION;
#endif
#define SOC_EDC_CRS_COLORK_MAX_crs_colork_max_START (0)
#define SOC_EDC_CRS_COLORK_MAX_crs_colork_max_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crs_alp_value0 : 8;
        unsigned int crs_alp_value1 : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_EDC_CRS_GLB_ALP_VAL_UNION;
#endif
#define SOC_EDC_CRS_GLB_ALP_VAL_crs_alp_value0_START (0)
#define SOC_EDC_CRS_GLB_ALP_VAL_crs_alp_value0_END (7)
#define SOC_EDC_CRS_GLB_ALP_VAL_crs_alp_value1_START (8)
#define SOC_EDC_CRS_GLB_ALP_VAL_crs_alp_value1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int disp_size_vrt : 12;
        unsigned int reserved_0 : 4;
        unsigned int disp_size_hrz : 12;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_EDC_DISP_SIZE_UNION;
#endif
#define SOC_EDC_DISP_SIZE_disp_size_vrt_START (0)
#define SOC_EDC_DISP_SIZE_disp_size_vrt_END (11)
#define SOC_EDC_DISP_SIZE_disp_size_hrz_START (16)
#define SOC_EDC_DISP_SIZE_disp_size_hrz_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int edc_cfg_ok_sel : 1;
        unsigned int edc_cfg_ok : 1;
        unsigned int d3d_right_first : 1;
        unsigned int disp_frm_fmt : 3;
        unsigned int disp_pix_fmt : 2;
        unsigned int dither_en : 1;
        unsigned int disp_endian : 1;
        unsigned int edc_en : 1;
        unsigned int unflow_lev : 12;
        unsigned int gamma_en : 1;
        unsigned int ch_chg : 1;
        unsigned int nrot_burst16 : 1;
        unsigned int outstding_dep : 4;
        unsigned int frm_end_start : 1;
        unsigned int crg_gt_en : 1;
    } reg;
} SOC_EDC_DISP_CTL_UNION;
#endif
#define SOC_EDC_DISP_CTL_edc_cfg_ok_sel_START (0)
#define SOC_EDC_DISP_CTL_edc_cfg_ok_sel_END (0)
#define SOC_EDC_DISP_CTL_edc_cfg_ok_START (1)
#define SOC_EDC_DISP_CTL_edc_cfg_ok_END (1)
#define SOC_EDC_DISP_CTL_d3d_right_first_START (2)
#define SOC_EDC_DISP_CTL_d3d_right_first_END (2)
#define SOC_EDC_DISP_CTL_disp_frm_fmt_START (3)
#define SOC_EDC_DISP_CTL_disp_frm_fmt_END (5)
#define SOC_EDC_DISP_CTL_disp_pix_fmt_START (6)
#define SOC_EDC_DISP_CTL_disp_pix_fmt_END (7)
#define SOC_EDC_DISP_CTL_dither_en_START (8)
#define SOC_EDC_DISP_CTL_dither_en_END (8)
#define SOC_EDC_DISP_CTL_disp_endian_START (9)
#define SOC_EDC_DISP_CTL_disp_endian_END (9)
#define SOC_EDC_DISP_CTL_edc_en_START (10)
#define SOC_EDC_DISP_CTL_edc_en_END (10)
#define SOC_EDC_DISP_CTL_unflow_lev_START (11)
#define SOC_EDC_DISP_CTL_unflow_lev_END (22)
#define SOC_EDC_DISP_CTL_gamma_en_START (23)
#define SOC_EDC_DISP_CTL_gamma_en_END (23)
#define SOC_EDC_DISP_CTL_ch_chg_START (24)
#define SOC_EDC_DISP_CTL_ch_chg_END (24)
#define SOC_EDC_DISP_CTL_nrot_burst16_START (25)
#define SOC_EDC_DISP_CTL_nrot_burst16_END (25)
#define SOC_EDC_DISP_CTL_outstding_dep_START (26)
#define SOC_EDC_DISP_CTL_outstding_dep_END (29)
#define SOC_EDC_DISP_CTL_frm_end_start_START (30)
#define SOC_EDC_DISP_CTL_frm_end_start_END (30)
#define SOC_EDC_DISP_CTL_crg_gt_en_START (31)
#define SOC_EDC_DISP_CTL_crg_gt_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int disp_dpd : 24;
        unsigned int reserved : 4;
        unsigned int sbl_recover_bypass : 1;
        unsigned int sbl_clk_gt : 1;
        unsigned int sbl_en : 1;
        unsigned int outstd_ctl_disable : 1;
    } reg;
} SOC_EDC_DISP_DPD_UNION;
#endif
#define SOC_EDC_DISP_DPD_disp_dpd_START (0)
#define SOC_EDC_DISP_DPD_disp_dpd_END (23)
#define SOC_EDC_DISP_DPD_sbl_recover_bypass_START (28)
#define SOC_EDC_DISP_DPD_sbl_recover_bypass_END (28)
#define SOC_EDC_DISP_DPD_sbl_clk_gt_START (29)
#define SOC_EDC_DISP_DPD_sbl_clk_gt_END (29)
#define SOC_EDC_DISP_DPD_sbl_en_START (30)
#define SOC_EDC_DISP_DPD_sbl_en_END (30)
#define SOC_EDC_DISP_DPD_outstd_ctl_disable_START (31)
#define SOC_EDC_DISP_DPD_outstd_ctl_disable_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ovly_fifo_fill_lev : 12;
        unsigned int reserved : 18;
        unsigned int bas_vsync : 1;
        unsigned int outstding_zero : 1;
    } reg;
} SOC_EDC_STS_UNION;
#endif
#define SOC_EDC_STS_ovly_fifo_fill_lev_START (0)
#define SOC_EDC_STS_ovly_fifo_fill_lev_END (11)
#define SOC_EDC_STS_bas_vsync_START (30)
#define SOC_EDC_STS_bas_vsync_END (30)
#define SOC_EDC_STS_outstding_zero_START (31)
#define SOC_EDC_STS_outstding_zero_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crsr_end_int : 1;
        unsigned int crsl_end_int : 1;
        unsigned int ch2r_end_int : 1;
        unsigned int ch2l_end_int : 1;
        unsigned int ch1r_end_int : 1;
        unsigned int ch1l_end_int : 1;
        unsigned int bas_end_int : 1;
        unsigned int bas_stat_int : 1;
        unsigned int crs_err_int : 1;
        unsigned int ch2_line_int : 1;
        unsigned int ch1_line_int : 1;
        unsigned int crsr_err_int : 1;
        unsigned int crsl_err_int : 1;
        unsigned int ch2r_err_int : 1;
        unsigned int ch2l_err_int : 1;
        unsigned int ch1r_err_int : 1;
        unsigned int ch1l_err_int : 1;
        unsigned int unflow_int : 1;
        unsigned int reserved : 14;
    } reg;
} SOC_EDC_INTS_UNION;
#endif
#define SOC_EDC_INTS_crsr_end_int_START (0)
#define SOC_EDC_INTS_crsr_end_int_END (0)
#define SOC_EDC_INTS_crsl_end_int_START (1)
#define SOC_EDC_INTS_crsl_end_int_END (1)
#define SOC_EDC_INTS_ch2r_end_int_START (2)
#define SOC_EDC_INTS_ch2r_end_int_END (2)
#define SOC_EDC_INTS_ch2l_end_int_START (3)
#define SOC_EDC_INTS_ch2l_end_int_END (3)
#define SOC_EDC_INTS_ch1r_end_int_START (4)
#define SOC_EDC_INTS_ch1r_end_int_END (4)
#define SOC_EDC_INTS_ch1l_end_int_START (5)
#define SOC_EDC_INTS_ch1l_end_int_END (5)
#define SOC_EDC_INTS_bas_end_int_START (6)
#define SOC_EDC_INTS_bas_end_int_END (6)
#define SOC_EDC_INTS_bas_stat_int_START (7)
#define SOC_EDC_INTS_bas_stat_int_END (7)
#define SOC_EDC_INTS_crs_err_int_START (8)
#define SOC_EDC_INTS_crs_err_int_END (8)
#define SOC_EDC_INTS_ch2_line_int_START (9)
#define SOC_EDC_INTS_ch2_line_int_END (9)
#define SOC_EDC_INTS_ch1_line_int_START (10)
#define SOC_EDC_INTS_ch1_line_int_END (10)
#define SOC_EDC_INTS_crsr_err_int_START (11)
#define SOC_EDC_INTS_crsr_err_int_END (11)
#define SOC_EDC_INTS_crsl_err_int_START (12)
#define SOC_EDC_INTS_crsl_err_int_END (12)
#define SOC_EDC_INTS_ch2r_err_int_START (13)
#define SOC_EDC_INTS_ch2r_err_int_END (13)
#define SOC_EDC_INTS_ch2l_err_int_START (14)
#define SOC_EDC_INTS_ch2l_err_int_END (14)
#define SOC_EDC_INTS_ch1r_err_int_START (15)
#define SOC_EDC_INTS_ch1r_err_int_END (15)
#define SOC_EDC_INTS_ch1l_err_int_START (16)
#define SOC_EDC_INTS_ch1l_err_int_END (16)
#define SOC_EDC_INTS_unflow_int_START (17)
#define SOC_EDC_INTS_unflow_int_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crsr_end_int_msk : 1;
        unsigned int crsl_end_int_msk : 1;
        unsigned int ch2r_end_int_msk : 1;
        unsigned int ch2l_end_int_msk : 1;
        unsigned int ch1r_end_int_msk : 1;
        unsigned int ch1l_end_int_msk : 1;
        unsigned int bas_end_int_msk : 1;
        unsigned int bas_stat_int_msk : 1;
        unsigned int crs_err_int_msk : 1;
        unsigned int ch2_line_int_msk : 1;
        unsigned int ch1_line_int_msk : 1;
        unsigned int crsr_err_int_msk : 1;
        unsigned int crsl_err_int_msk : 1;
        unsigned int ch2r_err_int_msk : 1;
        unsigned int ch2l_err_int_msk : 1;
        unsigned int ch1r_err_int_msk : 1;
        unsigned int ch1l_err_int_msk : 1;
        unsigned int unflow_int_msk : 1;
        unsigned int reserved : 14;
    } reg;
} SOC_EDC_INTE_UNION;
#endif
#define SOC_EDC_INTE_crsr_end_int_msk_START (0)
#define SOC_EDC_INTE_crsr_end_int_msk_END (0)
#define SOC_EDC_INTE_crsl_end_int_msk_START (1)
#define SOC_EDC_INTE_crsl_end_int_msk_END (1)
#define SOC_EDC_INTE_ch2r_end_int_msk_START (2)
#define SOC_EDC_INTE_ch2r_end_int_msk_END (2)
#define SOC_EDC_INTE_ch2l_end_int_msk_START (3)
#define SOC_EDC_INTE_ch2l_end_int_msk_END (3)
#define SOC_EDC_INTE_ch1r_end_int_msk_START (4)
#define SOC_EDC_INTE_ch1r_end_int_msk_END (4)
#define SOC_EDC_INTE_ch1l_end_int_msk_START (5)
#define SOC_EDC_INTE_ch1l_end_int_msk_END (5)
#define SOC_EDC_INTE_bas_end_int_msk_START (6)
#define SOC_EDC_INTE_bas_end_int_msk_END (6)
#define SOC_EDC_INTE_bas_stat_int_msk_START (7)
#define SOC_EDC_INTE_bas_stat_int_msk_END (7)
#define SOC_EDC_INTE_crs_err_int_msk_START (8)
#define SOC_EDC_INTE_crs_err_int_msk_END (8)
#define SOC_EDC_INTE_ch2_line_int_msk_START (9)
#define SOC_EDC_INTE_ch2_line_int_msk_END (9)
#define SOC_EDC_INTE_ch1_line_int_msk_START (10)
#define SOC_EDC_INTE_ch1_line_int_msk_END (10)
#define SOC_EDC_INTE_crsr_err_int_msk_START (11)
#define SOC_EDC_INTE_crsr_err_int_msk_END (11)
#define SOC_EDC_INTE_crsl_err_int_msk_START (12)
#define SOC_EDC_INTE_crsl_err_int_msk_END (12)
#define SOC_EDC_INTE_ch2r_err_int_msk_START (13)
#define SOC_EDC_INTE_ch2r_err_int_msk_END (13)
#define SOC_EDC_INTE_ch2l_err_int_msk_START (14)
#define SOC_EDC_INTE_ch2l_err_int_msk_END (14)
#define SOC_EDC_INTE_ch1r_err_int_msk_START (15)
#define SOC_EDC_INTE_ch1r_err_int_msk_END (15)
#define SOC_EDC_INTE_ch1l_err_int_msk_START (16)
#define SOC_EDC_INTE_ch1l_err_int_msk_END (16)
#define SOC_EDC_INTE_unflow_int_msk_START (17)
#define SOC_EDC_INTE_unflow_int_msk_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gamcnt_clr : 32;
    } reg;
} SOC_EDC_GAMCNT_CLR_UNION;
#endif
#define SOC_EDC_GAMCNT_CLR_gamcnt_clr_START (0)
#define SOC_EDC_GAMCNT_CLR_gamcnt_clr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tile_size_vrt : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_EDC_TILE_SIZE_VRT_UNION;
#endif
#define SOC_EDC_TILE_SIZE_VRT_tile_size_vrt_START (0)
#define SOC_EDC_TILE_SIZE_VRT_tile_size_vrt_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tile_crop_x0 : 14;
        unsigned int reserved_0 : 2;
        unsigned int tile_crop_y0 : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_EDC_TILE_CROP_UNION;
#endif
#define SOC_EDC_TILE_CROP_tile_crop_x0_START (0)
#define SOC_EDC_TILE_CROP_tile_crop_x0_END (13)
#define SOC_EDC_TILE_CROP_tile_crop_y0_START (16)
#define SOC_EDC_TILE_CROP_tile_crop_y0_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tl_engin0_addr : 32;
    } reg;
} SOC_EDC_TL_ENGIN0_ADDR_UNION;
#endif
#define SOC_EDC_TL_ENGIN0_ADDR_tl_engin0_addr_START (0)
#define SOC_EDC_TL_ENGIN0_ADDR_tl_engin0_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tl_engin1_addr : 32;
    } reg;
} SOC_EDC_TL_ENGIN1_ADDR_UNION;
#endif
#define SOC_EDC_TL_ENGIN1_ADDR_tl_engin1_addr_START (0)
#define SOC_EDC_TL_ENGIN1_ADDR_tl_engin1_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tr_engin0_addr : 32;
    } reg;
} SOC_EDC_TR_ENGIN0_ADDR_UNION;
#endif
#define SOC_EDC_TR_ENGIN0_ADDR_tr_engin0_addr_START (0)
#define SOC_EDC_TR_ENGIN0_ADDR_tr_engin0_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tr_engin1_addr : 32;
    } reg;
} SOC_EDC_TR_ENGIN1_ADDR_UNION;
#endif
#define SOC_EDC_TR_ENGIN1_ADDR_tr_engin1_addr_START (0)
#define SOC_EDC_TR_ENGIN1_ADDR_tr_engin1_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trust_bas_start_int : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_EDC_TRUST_INTS_UNION;
#endif
#define SOC_EDC_TRUST_INTS_trust_bas_start_int_START (0)
#define SOC_EDC_TRUST_INTS_trust_bas_start_int_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trust_bas_start_int_msk : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_EDC_TRUST_MASK_UNION;
#endif
#define SOC_EDC_TRUST_MASK_trust_bas_start_int_msk_START (0)
#define SOC_EDC_TRUST_MASK_trust_bas_start_int_msk_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crs_aprot1 : 1;
        unsigned int ch2_aprot1 : 1;
        unsigned int ch1_aprot1 : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_EDC_APROT_CFG_UNION;
#endif
#define SOC_EDC_APROT_CFG_crs_aprot1_START (0)
#define SOC_EDC_APROT_CFG_crs_aprot1_END (0)
#define SOC_EDC_APROT_CFG_ch2_aprot1_START (1)
#define SOC_EDC_APROT_CFG_ch2_aprot1_END (1)
#define SOC_EDC_APROT_CFG_ch1_aprot1_START (2)
#define SOC_EDC_APROT_CFG_ch1_aprot1_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crsr_bot_clip : 4;
        unsigned int crsr_top_clip : 4;
        unsigned int crsr_right_clip : 4;
        unsigned int crsr_left_clip : 4;
        unsigned int crsl_bot_clip : 4;
        unsigned int crsl_top_clip : 4;
        unsigned int crsl_right_clip : 4;
        unsigned int crsl_left_clip : 4;
    } reg;
} SOC_EDC_CRS_CLIP_UNION;
#endif
#define SOC_EDC_CRS_CLIP_crsr_bot_clip_START (0)
#define SOC_EDC_CRS_CLIP_crsr_bot_clip_END (3)
#define SOC_EDC_CRS_CLIP_crsr_top_clip_START (4)
#define SOC_EDC_CRS_CLIP_crsr_top_clip_END (7)
#define SOC_EDC_CRS_CLIP_crsr_right_clip_START (8)
#define SOC_EDC_CRS_CLIP_crsr_right_clip_END (11)
#define SOC_EDC_CRS_CLIP_crsr_left_clip_START (12)
#define SOC_EDC_CRS_CLIP_crsr_left_clip_END (15)
#define SOC_EDC_CRS_CLIP_crsl_bot_clip_START (16)
#define SOC_EDC_CRS_CLIP_crsl_bot_clip_END (19)
#define SOC_EDC_CRS_CLIP_crsl_top_clip_START (20)
#define SOC_EDC_CRS_CLIP_crsl_top_clip_END (23)
#define SOC_EDC_CRS_CLIP_crsl_right_clip_START (24)
#define SOC_EDC_CRS_CLIP_crsl_right_clip_END (27)
#define SOC_EDC_CRS_CLIP_crsl_left_clip_START (28)
#define SOC_EDC_CRS_CLIP_crsl_left_clip_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1r_bot_clip : 4;
        unsigned int ch1r_top_clip : 4;
        unsigned int ch1r_right_clip : 4;
        unsigned int ch1r_left_clip : 4;
        unsigned int ch1l_bot_clip : 4;
        unsigned int ch1l_top_clip : 4;
        unsigned int ch1l_right_clip : 4;
        unsigned int ch1l_left_clip : 4;
    } reg;
} SOC_EDC_CH1_CLIP_UNION;
#endif
#define SOC_EDC_CH1_CLIP_ch1r_bot_clip_START (0)
#define SOC_EDC_CH1_CLIP_ch1r_bot_clip_END (3)
#define SOC_EDC_CH1_CLIP_ch1r_top_clip_START (4)
#define SOC_EDC_CH1_CLIP_ch1r_top_clip_END (7)
#define SOC_EDC_CH1_CLIP_ch1r_right_clip_START (8)
#define SOC_EDC_CH1_CLIP_ch1r_right_clip_END (11)
#define SOC_EDC_CH1_CLIP_ch1r_left_clip_START (12)
#define SOC_EDC_CH1_CLIP_ch1r_left_clip_END (15)
#define SOC_EDC_CH1_CLIP_ch1l_bot_clip_START (16)
#define SOC_EDC_CH1_CLIP_ch1l_bot_clip_END (19)
#define SOC_EDC_CH1_CLIP_ch1l_top_clip_START (20)
#define SOC_EDC_CH1_CLIP_ch1l_top_clip_END (23)
#define SOC_EDC_CH1_CLIP_ch1l_right_clip_START (24)
#define SOC_EDC_CH1_CLIP_ch1l_right_clip_END (27)
#define SOC_EDC_CH1_CLIP_ch1l_left_clip_START (28)
#define SOC_EDC_CH1_CLIP_ch1l_left_clip_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2r_bot_clip : 4;
        unsigned int ch2r_top_clip : 4;
        unsigned int ch2r_right_clip : 4;
        unsigned int ch2r_left_clip : 4;
        unsigned int ch2l_bot_clip : 4;
        unsigned int ch2l_top_clip : 4;
        unsigned int ch2l_right_clip : 4;
        unsigned int ch2l_left_clip : 4;
    } reg;
} SOC_EDC_CH2_CLIP_UNION;
#endif
#define SOC_EDC_CH2_CLIP_ch2r_bot_clip_START (0)
#define SOC_EDC_CH2_CLIP_ch2r_bot_clip_END (3)
#define SOC_EDC_CH2_CLIP_ch2r_top_clip_START (4)
#define SOC_EDC_CH2_CLIP_ch2r_top_clip_END (7)
#define SOC_EDC_CH2_CLIP_ch2r_right_clip_START (8)
#define SOC_EDC_CH2_CLIP_ch2r_right_clip_END (11)
#define SOC_EDC_CH2_CLIP_ch2r_left_clip_START (12)
#define SOC_EDC_CH2_CLIP_ch2r_left_clip_END (15)
#define SOC_EDC_CH2_CLIP_ch2l_bot_clip_START (16)
#define SOC_EDC_CH2_CLIP_ch2l_bot_clip_END (19)
#define SOC_EDC_CH2_CLIP_ch2l_top_clip_START (20)
#define SOC_EDC_CH2_CLIP_ch2l_top_clip_END (23)
#define SOC_EDC_CH2_CLIP_ch2l_right_clip_START (24)
#define SOC_EDC_CH2_CLIP_ch2l_right_clip_END (27)
#define SOC_EDC_CH2_CLIP_ch2l_left_clip_START (28)
#define SOC_EDC_CH2_CLIP_ch2l_left_clip_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 2;
        unsigned int gamma_b : 8;
        unsigned int reserved_1: 2;
        unsigned int gamma_g : 8;
        unsigned int reserved_2: 2;
        unsigned int gamma_r : 8;
        unsigned int reserved_3: 2;
    } reg;
} SOC_EDC_GAMMA_UNION;
#endif
#define SOC_EDC_GAMMA_gamma_b_START (2)
#define SOC_EDC_GAMMA_gamma_b_END (9)
#define SOC_EDC_GAMMA_gamma_g_START (12)
#define SOC_EDC_GAMMA_gamma_g_END (19)
#define SOC_EDC_GAMMA_gamma_r_START (22)
#define SOC_EDC_GAMMA_gamma_r_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_cscidc_v : 9;
        unsigned int ch1_cscidc_u : 9;
        unsigned int ch1_cscidc_y : 9;
        unsigned int ch1_csc_en : 1;
        unsigned int reserved : 4;
    } reg;
} SOC_EDC_CH1_CSCIDC_UNION;
#endif
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_v_START (0)
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_v_END (8)
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_u_START (9)
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_u_END (17)
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_y_START (18)
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_y_END (26)
#define SOC_EDC_CH1_CSCIDC_ch1_csc_en_START (27)
#define SOC_EDC_CH1_CSCIDC_ch1_csc_en_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_cscodc_b : 9;
        unsigned int ch1_cscodc_g : 9;
        unsigned int ch1_cscodc_r : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_EDC_CH1_CSCODC_UNION;
#endif
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_b_START (0)
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_b_END (8)
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_g_START (9)
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_g_END (17)
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_r_START (18)
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_r_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_csc_00p : 13;
        unsigned int reserved_0 : 3;
        unsigned int ch1_csc_01p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_CH1_CSCP0_UNION;
#endif
#define SOC_EDC_CH1_CSCP0_ch1_csc_00p_START (0)
#define SOC_EDC_CH1_CSCP0_ch1_csc_00p_END (12)
#define SOC_EDC_CH1_CSCP0_ch1_csc_01p_START (16)
#define SOC_EDC_CH1_CSCP0_ch1_csc_01p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_csc_02p : 13;
        unsigned int reserved_0 : 3;
        unsigned int ch1_csc_10p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_CH1_CSCP1_UNION;
#endif
#define SOC_EDC_CH1_CSCP1_ch1_csc_02p_START (0)
#define SOC_EDC_CH1_CSCP1_ch1_csc_02p_END (12)
#define SOC_EDC_CH1_CSCP1_ch1_csc_10p_START (16)
#define SOC_EDC_CH1_CSCP1_ch1_csc_10p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_csc_11p : 13;
        unsigned int reserved_0 : 3;
        unsigned int ch1_csc_12p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_CH1_CSCP2_UNION;
#endif
#define SOC_EDC_CH1_CSCP2_ch1_csc_11p_START (0)
#define SOC_EDC_CH1_CSCP2_ch1_csc_11p_END (12)
#define SOC_EDC_CH1_CSCP2_ch1_csc_12p_START (16)
#define SOC_EDC_CH1_CSCP2_ch1_csc_12p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_csc_20p : 13;
        unsigned int reserved_0 : 3;
        unsigned int ch1_csc_21p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_CH1_CSCP3_UNION;
#endif
#define SOC_EDC_CH1_CSCP3_ch1_csc_20p_START (0)
#define SOC_EDC_CH1_CSCP3_ch1_csc_20p_END (12)
#define SOC_EDC_CH1_CSCP3_ch1_csc_21p_START (16)
#define SOC_EDC_CH1_CSCP3_ch1_csc_21p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_csc_22p : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_EDC_CH1_CSCP4_UNION;
#endif
#define SOC_EDC_CH1_CSCP4_ch1_csc_22p_START (0)
#define SOC_EDC_CH1_CSCP4_ch1_csc_22p_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_cscidc_v : 9;
        unsigned int ch2_cscidc_u : 9;
        unsigned int ch2_cscidc_y : 9;
        unsigned int ch2_csc_en : 1;
        unsigned int reserved : 4;
    } reg;
} SOC_EDC_CH2_CSCIDC_UNION;
#endif
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_v_START (0)
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_v_END (8)
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_u_START (9)
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_u_END (17)
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_y_START (18)
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_y_END (26)
#define SOC_EDC_CH2_CSCIDC_ch2_csc_en_START (27)
#define SOC_EDC_CH2_CSCIDC_ch2_csc_en_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_cscodc_b : 9;
        unsigned int ch2_cscodc_g : 9;
        unsigned int ch2_cscodc_r : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_EDC_CH2_CSCODC_UNION;
#endif
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_b_START (0)
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_b_END (8)
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_g_START (9)
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_g_END (17)
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_r_START (18)
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_r_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_csc_00p : 13;
        unsigned int reserved_0 : 3;
        unsigned int ch2_csc_01p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_CH2_CSCP0_UNION;
#endif
#define SOC_EDC_CH2_CSCP0_ch2_csc_00p_START (0)
#define SOC_EDC_CH2_CSCP0_ch2_csc_00p_END (12)
#define SOC_EDC_CH2_CSCP0_ch2_csc_01p_START (16)
#define SOC_EDC_CH2_CSCP0_ch2_csc_01p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_csc_02p : 13;
        unsigned int reserved_0 : 3;
        unsigned int ch2_csc_10p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_CH2_CSCP1_UNION;
#endif
#define SOC_EDC_CH2_CSCP1_ch2_csc_02p_START (0)
#define SOC_EDC_CH2_CSCP1_ch2_csc_02p_END (12)
#define SOC_EDC_CH2_CSCP1_ch2_csc_10p_START (16)
#define SOC_EDC_CH2_CSCP1_ch2_csc_10p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_csc_11p : 13;
        unsigned int reserved_0 : 3;
        unsigned int ch2_csc_12p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_CH2_CSCP2_UNION;
#endif
#define SOC_EDC_CH2_CSCP2_ch2_csc_11p_START (0)
#define SOC_EDC_CH2_CSCP2_ch2_csc_11p_END (12)
#define SOC_EDC_CH2_CSCP2_ch2_csc_12p_START (16)
#define SOC_EDC_CH2_CSCP2_ch2_csc_12p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_csc_20p : 13;
        unsigned int reserved_0 : 3;
        unsigned int ch2_csc_21p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_CH2_CSCP3_UNION;
#endif
#define SOC_EDC_CH2_CSCP3_ch2_csc_20p_START (0)
#define SOC_EDC_CH2_CSCP3_ch2_csc_20p_END (12)
#define SOC_EDC_CH2_CSCP3_ch2_csc_21p_START (16)
#define SOC_EDC_CH2_CSCP3_ch2_csc_21p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_csc_22p : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_EDC_CH2_CSCP4_UNION;
#endif
#define SOC_EDC_CH2_CSCP4_ch2_csc_22p_START (0)
#define SOC_EDC_CH2_CSCP4_ch2_csc_22p_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int out_cscidc_v : 9;
        unsigned int out_cscidc_u : 9;
        unsigned int out_cscidc_y : 9;
        unsigned int out_csc_en : 1;
        unsigned int reserved : 4;
    } reg;
} SOC_EDC_OUT_CSCIDC_UNION;
#endif
#define SOC_EDC_OUT_CSCIDC_out_cscidc_v_START (0)
#define SOC_EDC_OUT_CSCIDC_out_cscidc_v_END (8)
#define SOC_EDC_OUT_CSCIDC_out_cscidc_u_START (9)
#define SOC_EDC_OUT_CSCIDC_out_cscidc_u_END (17)
#define SOC_EDC_OUT_CSCIDC_out_cscidc_y_START (18)
#define SOC_EDC_OUT_CSCIDC_out_cscidc_y_END (26)
#define SOC_EDC_OUT_CSCIDC_out_csc_en_START (27)
#define SOC_EDC_OUT_CSCIDC_out_csc_en_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int out_cscodc_b : 9;
        unsigned int out_cscodc_g : 9;
        unsigned int out_cscodc_r : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_EDC_OUT_CSCODC_UNION;
#endif
#define SOC_EDC_OUT_CSCODC_out_cscodc_b_START (0)
#define SOC_EDC_OUT_CSCODC_out_cscodc_b_END (8)
#define SOC_EDC_OUT_CSCODC_out_cscodc_g_START (9)
#define SOC_EDC_OUT_CSCODC_out_cscodc_g_END (17)
#define SOC_EDC_OUT_CSCODC_out_cscodc_r_START (18)
#define SOC_EDC_OUT_CSCODC_out_cscodc_r_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int out_csc_00p : 13;
        unsigned int reserved_0 : 3;
        unsigned int out_csc_01p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_OUT_CSCP0_UNION;
#endif
#define SOC_EDC_OUT_CSCP0_out_csc_00p_START (0)
#define SOC_EDC_OUT_CSCP0_out_csc_00p_END (12)
#define SOC_EDC_OUT_CSCP0_out_csc_01p_START (16)
#define SOC_EDC_OUT_CSCP0_out_csc_01p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int out_csc_02p : 13;
        unsigned int reserved_0 : 3;
        unsigned int out_csc_10p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_OUT_CSCP1_UNION;
#endif
#define SOC_EDC_OUT_CSCP1_out_csc_02p_START (0)
#define SOC_EDC_OUT_CSCP1_out_csc_02p_END (12)
#define SOC_EDC_OUT_CSCP1_out_csc_10p_START (16)
#define SOC_EDC_OUT_CSCP1_out_csc_10p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int out_csc_11p : 13;
        unsigned int reserved_0 : 3;
        unsigned int out_csc_12p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_OUT_CSCP2_UNION;
#endif
#define SOC_EDC_OUT_CSCP2_out_csc_11p_START (0)
#define SOC_EDC_OUT_CSCP2_out_csc_11p_END (12)
#define SOC_EDC_OUT_CSCP2_out_csc_12p_START (16)
#define SOC_EDC_OUT_CSCP2_out_csc_12p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int out_csc_20p : 13;
        unsigned int reserved_0 : 3;
        unsigned int out_csc_21p : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_EDC_OUT_CSCP3_UNION;
#endif
#define SOC_EDC_OUT_CSCP3_out_csc_20p_START (0)
#define SOC_EDC_OUT_CSCP3_out_csc_20p_END (12)
#define SOC_EDC_OUT_CSCP3_out_csc_21p_START (16)
#define SOC_EDC_OUT_CSCP3_out_csc_21p_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int out_csc_22p : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_EDC_OUT_CSCP4_UNION;
#endif
#define SOC_EDC_OUT_CSCP4_out_csc_22p_START (0)
#define SOC_EDC_OUT_CSCP4_out_csc_22p_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hratio : 16;
        unsigned int reserved_0 : 3;
        unsigned int hfir_order : 1;
        unsigned int reserved_1 : 3;
        unsigned int hafir_en : 1;
        unsigned int hfir_en : 1;
        unsigned int reserved_2 : 3;
        unsigned int hchmid_en : 1;
        unsigned int hlmid_en : 1;
        unsigned int hamid_en : 1;
        unsigned int hsc_en : 1;
    } reg;
} SOC_EDC_CH1_SCL_HSP_UNION;
#endif
#define SOC_EDC_CH1_SCL_HSP_hratio_START (0)
#define SOC_EDC_CH1_SCL_HSP_hratio_END (15)
#define SOC_EDC_CH1_SCL_HSP_hfir_order_START (19)
#define SOC_EDC_CH1_SCL_HSP_hfir_order_END (19)
#define SOC_EDC_CH1_SCL_HSP_hafir_en_START (23)
#define SOC_EDC_CH1_SCL_HSP_hafir_en_END (23)
#define SOC_EDC_CH1_SCL_HSP_hfir_en_START (24)
#define SOC_EDC_CH1_SCL_HSP_hfir_en_END (24)
#define SOC_EDC_CH1_SCL_HSP_hchmid_en_START (28)
#define SOC_EDC_CH1_SCL_HSP_hchmid_en_END (28)
#define SOC_EDC_CH1_SCL_HSP_hlmid_en_START (29)
#define SOC_EDC_CH1_SCL_HSP_hlmid_en_END (29)
#define SOC_EDC_CH1_SCL_HSP_hamid_en_START (30)
#define SOC_EDC_CH1_SCL_HSP_hamid_en_END (30)
#define SOC_EDC_CH1_SCL_HSP_hsc_en_START (31)
#define SOC_EDC_CH1_SCL_HSP_hsc_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hor_coffset : 16;
        unsigned int hor_loffset : 16;
    } reg;
} SOC_EDC_CH1_SCL_HOFFSET_UNION;
#endif
#define SOC_EDC_CH1_SCL_HOFFSET_hor_coffset_START (0)
#define SOC_EDC_CH1_SCL_HOFFSET_hor_coffset_END (15)
#define SOC_EDC_CH1_SCL_HOFFSET_hor_loffset_START (16)
#define SOC_EDC_CH1_SCL_HOFFSET_hor_loffset_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 23;
        unsigned int vafir_en : 1;
        unsigned int vfir_en : 1;
        unsigned int reserved_1 : 2;
        unsigned int vsc_luma_tap : 1;
        unsigned int vchmid_en : 1;
        unsigned int vlmid_en : 1;
        unsigned int vamid_en : 1;
        unsigned int vsc_en : 1;
    } reg;
} SOC_EDC_CH1_SCL_VSP_UNION;
#endif
#define SOC_EDC_CH1_SCL_VSP_vafir_en_START (23)
#define SOC_EDC_CH1_SCL_VSP_vafir_en_END (23)
#define SOC_EDC_CH1_SCL_VSP_vfir_en_START (24)
#define SOC_EDC_CH1_SCL_VSP_vfir_en_END (24)
#define SOC_EDC_CH1_SCL_VSP_vsc_luma_tap_START (27)
#define SOC_EDC_CH1_SCL_VSP_vsc_luma_tap_END (27)
#define SOC_EDC_CH1_SCL_VSP_vchmid_en_START (28)
#define SOC_EDC_CH1_SCL_VSP_vchmid_en_END (28)
#define SOC_EDC_CH1_SCL_VSP_vlmid_en_START (29)
#define SOC_EDC_CH1_SCL_VSP_vlmid_en_END (29)
#define SOC_EDC_CH1_SCL_VSP_vamid_en_START (30)
#define SOC_EDC_CH1_SCL_VSP_vamid_en_END (30)
#define SOC_EDC_CH1_SCL_VSP_vsc_en_START (31)
#define SOC_EDC_CH1_SCL_VSP_vsc_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vratio : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_EDC_CH1_SCL_VSR_UNION;
#endif
#define SOC_EDC_CH1_SCL_VSR_vratio_START (0)
#define SOC_EDC_CH1_SCL_VSR_vratio_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vbtm_offset : 16;
        unsigned int vtp_offset : 16;
    } reg;
} SOC_EDC_CH1_SCL_VOFFSET_UNION;
#endif
#define SOC_EDC_CH1_SCL_VOFFSET_vbtm_offset_START (0)
#define SOC_EDC_CH1_SCL_VOFFSET_vbtm_offset_END (15)
#define SOC_EDC_CH1_SCL_VOFFSET_vtp_offset_START (16)
#define SOC_EDC_CH1_SCL_VOFFSET_vtp_offset_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ow : 12;
        unsigned int oh : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH1_SCL_ORES_UNION;
#endif
#define SOC_EDC_CH1_SCL_ORES_ow_START (0)
#define SOC_EDC_CH1_SCL_ORES_ow_END (11)
#define SOC_EDC_CH1_SCL_ORES_oh_START (12)
#define SOC_EDC_CH1_SCL_ORES_oh_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iw : 12;
        unsigned int ih : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_CH1_SCL_IRES_UNION;
#endif
#define SOC_EDC_CH1_SCL_IRES_iw_START (0)
#define SOC_EDC_CH1_SCL_IRES_iw_END (11)
#define SOC_EDC_CH1_SCL_IRES_ih_START (12)
#define SOC_EDC_CH1_SCL_IRES_ih_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hlcoefn1 : 10;
        unsigned int reserved_0: 6;
        unsigned int hlcoefn2 : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_EDC_CH1_SCL_HPC_UNION;
#endif
#define SOC_EDC_CH1_SCL_HPC_hlcoefn1_START (0)
#define SOC_EDC_CH1_SCL_HPC_hlcoefn1_END (9)
#define SOC_EDC_CH1_SCL_HPC_hlcoefn2_START (16)
#define SOC_EDC_CH1_SCL_HPC_hlcoefn2_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcoefn1 : 10;
        unsigned int reserved_0: 6;
        unsigned int vlcoefn2 : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_EDC_CH1_SCL_VPC_UNION;
#endif
#define SOC_EDC_CH1_SCL_VPC_vlcoefn1_START (0)
#define SOC_EDC_CH1_SCL_VPC_vlcoefn1_END (9)
#define SOC_EDC_CH1_SCL_VPC_vlcoefn2_START (16)
#define SOC_EDC_CH1_SCL_VPC_vlcoefn2_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hfp : 12;
        unsigned int reserved : 8;
        unsigned int hbp : 12;
    } reg;
} SOC_EDC_LDI_HRZ_CTRL0_UNION;
#endif
#define SOC_EDC_LDI_HRZ_CTRL0_hfp_START (0)
#define SOC_EDC_LDI_HRZ_CTRL0_hfp_END (11)
#define SOC_EDC_LDI_HRZ_CTRL0_hbp_START (20)
#define SOC_EDC_LDI_HRZ_CTRL0_hbp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hsw : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_EDC_LDI_HRZ_CTRL1_UNION;
#endif
#define SOC_EDC_LDI_HRZ_CTRL1_hsw_START (0)
#define SOC_EDC_LDI_HRZ_CTRL1_hsw_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vfp : 12;
        unsigned int reserved : 8;
        unsigned int vbp : 12;
    } reg;
} SOC_EDC_LDI_VRT_CTRL0_UNION;
#endif
#define SOC_EDC_LDI_VRT_CTRL0_vfp_START (0)
#define SOC_EDC_LDI_VRT_CTRL0_vfp_END (11)
#define SOC_EDC_LDI_VRT_CTRL0_vbp_START (20)
#define SOC_EDC_LDI_VRT_CTRL0_vbp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vsw : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_EDC_LDI_VRT_CTRL1_UNION;
#endif
#define SOC_EDC_LDI_VRT_CTRL1_vsw_START (0)
#define SOC_EDC_LDI_VRT_CTRL1_vsw_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vsync_plr : 1;
        unsigned int hsync_plr : 1;
        unsigned int pixel_clk_plr : 1;
        unsigned int data_en_plr : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_EDC_LDI_PLR_CTRL_UNION;
#endif
#define SOC_EDC_LDI_PLR_CTRL_vsync_plr_START (0)
#define SOC_EDC_LDI_PLR_CTRL_vsync_plr_END (0)
#define SOC_EDC_LDI_PLR_CTRL_hsync_plr_START (1)
#define SOC_EDC_LDI_PLR_CTRL_hsync_plr_END (1)
#define SOC_EDC_LDI_PLR_CTRL_pixel_clk_plr_START (2)
#define SOC_EDC_LDI_PLR_CTRL_pixel_clk_plr_END (2)
#define SOC_EDC_LDI_PLR_CTRL_data_en_plr_START (3)
#define SOC_EDC_LDI_PLR_CTRL_data_en_plr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hsize : 12;
        unsigned int reserved : 8;
        unsigned int vsize : 12;
    } reg;
} SOC_EDC_LDI_DSP_SIZE_UNION;
#endif
#define SOC_EDC_LDI_DSP_SIZE_hsize_START (0)
#define SOC_EDC_LDI_DSP_SIZE_hsize_END (11)
#define SOC_EDC_LDI_DSP_SIZE_vsize_START (20)
#define SOC_EDC_LDI_DSP_SIZE_vsize_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int active_space : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_EDC_LDI_3D_CTRL_UNION;
#endif
#define SOC_EDC_LDI_3D_CTRL_active_space_START (0)
#define SOC_EDC_LDI_3D_CTRL_active_space_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int frame_start_int_en : 1;
        unsigned int frame_end_int_en : 1;
        unsigned int edc_afifo_underflow_int_en : 1;
        unsigned int vsync_int_en : 1;
        unsigned int vfrontporch_int_en : 1;
        unsigned int vfp_last_int_en : 1;
        unsigned int vactive0_start_int_en : 1;
        unsigned int vactive0_end_int_en : 1;
        unsigned int vactive1_start_int_en : 1;
        unsigned int vactive1_end_int_en : 1;
        unsigned int vfrontporch_end_int_en : 1;
        unsigned int dsi_te_tri_int_en : 1;
        unsigned int dsi_te0_pin_int_en : 1;
        unsigned int dsi_te1_pin_int_en : 1;
        unsigned int reserved : 18;
    } reg;
} SOC_EDC_LDI_INT_EN_UNION;
#endif
#define SOC_EDC_LDI_INT_EN_frame_start_int_en_START (0)
#define SOC_EDC_LDI_INT_EN_frame_start_int_en_END (0)
#define SOC_EDC_LDI_INT_EN_frame_end_int_en_START (1)
#define SOC_EDC_LDI_INT_EN_frame_end_int_en_END (1)
#define SOC_EDC_LDI_INT_EN_edc_afifo_underflow_int_en_START (2)
#define SOC_EDC_LDI_INT_EN_edc_afifo_underflow_int_en_END (2)
#define SOC_EDC_LDI_INT_EN_vsync_int_en_START (3)
#define SOC_EDC_LDI_INT_EN_vsync_int_en_END (3)
#define SOC_EDC_LDI_INT_EN_vfrontporch_int_en_START (4)
#define SOC_EDC_LDI_INT_EN_vfrontporch_int_en_END (4)
#define SOC_EDC_LDI_INT_EN_vfp_last_int_en_START (5)
#define SOC_EDC_LDI_INT_EN_vfp_last_int_en_END (5)
#define SOC_EDC_LDI_INT_EN_vactive0_start_int_en_START (6)
#define SOC_EDC_LDI_INT_EN_vactive0_start_int_en_END (6)
#define SOC_EDC_LDI_INT_EN_vactive0_end_int_en_START (7)
#define SOC_EDC_LDI_INT_EN_vactive0_end_int_en_END (7)
#define SOC_EDC_LDI_INT_EN_vactive1_start_int_en_START (8)
#define SOC_EDC_LDI_INT_EN_vactive1_start_int_en_END (8)
#define SOC_EDC_LDI_INT_EN_vactive1_end_int_en_START (9)
#define SOC_EDC_LDI_INT_EN_vactive1_end_int_en_END (9)
#define SOC_EDC_LDI_INT_EN_vfrontporch_end_int_en_START (10)
#define SOC_EDC_LDI_INT_EN_vfrontporch_end_int_en_END (10)
#define SOC_EDC_LDI_INT_EN_dsi_te_tri_int_en_START (11)
#define SOC_EDC_LDI_INT_EN_dsi_te_tri_int_en_END (11)
#define SOC_EDC_LDI_INT_EN_dsi_te0_pin_int_en_START (12)
#define SOC_EDC_LDI_INT_EN_dsi_te0_pin_int_en_END (12)
#define SOC_EDC_LDI_INT_EN_dsi_te1_pin_int_en_START (13)
#define SOC_EDC_LDI_INT_EN_dsi_te1_pin_int_en_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ldi_en : 1;
        unsigned int disp_mode_buf : 1;
        unsigned int date_gate_en : 1;
        unsigned int bpp : 2;
        unsigned int wait_vsync_en : 1;
        unsigned int corlorbar_width : 7;
        unsigned int bgr : 1;
        unsigned int color_mode : 1;
        unsigned int shutdown : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_EDC_LDI_CTRL_UNION;
#endif
#define SOC_EDC_LDI_CTRL_ldi_en_START (0)
#define SOC_EDC_LDI_CTRL_ldi_en_END (0)
#define SOC_EDC_LDI_CTRL_disp_mode_buf_START (1)
#define SOC_EDC_LDI_CTRL_disp_mode_buf_END (1)
#define SOC_EDC_LDI_CTRL_date_gate_en_START (2)
#define SOC_EDC_LDI_CTRL_date_gate_en_END (2)
#define SOC_EDC_LDI_CTRL_bpp_START (3)
#define SOC_EDC_LDI_CTRL_bpp_END (4)
#define SOC_EDC_LDI_CTRL_wait_vsync_en_START (5)
#define SOC_EDC_LDI_CTRL_wait_vsync_en_END (5)
#define SOC_EDC_LDI_CTRL_corlorbar_width_START (6)
#define SOC_EDC_LDI_CTRL_corlorbar_width_END (12)
#define SOC_EDC_LDI_CTRL_bgr_START (13)
#define SOC_EDC_LDI_CTRL_bgr_END (13)
#define SOC_EDC_LDI_CTRL_color_mode_START (14)
#define SOC_EDC_LDI_CTRL_color_mode_END (14)
#define SOC_EDC_LDI_CTRL_shutdown_START (15)
#define SOC_EDC_LDI_CTRL_shutdown_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int frame_start_int : 1;
        unsigned int frame_end_int : 1;
        unsigned int edc_afifo_underflow_int : 1;
        unsigned int vsync_int : 1;
        unsigned int vfrontporch_int : 1;
        unsigned int vbackporch_int : 1;
        unsigned int vactive0_start_int : 1;
        unsigned int vactive0_end_int : 1;
        unsigned int vactive1_start_int : 1;
        unsigned int vactive1_end_int : 1;
        unsigned int vfrontporch_end_int : 1;
        unsigned int dsi_te_tri_int : 1;
        unsigned int dsi_te0_pin_int : 1;
        unsigned int dsi_te1_pin_int : 1;
        unsigned int reserved : 18;
    } reg;
} SOC_EDC_LDI_ORG_INT_UNION;
#endif
#define SOC_EDC_LDI_ORG_INT_frame_start_int_START (0)
#define SOC_EDC_LDI_ORG_INT_frame_start_int_END (0)
#define SOC_EDC_LDI_ORG_INT_frame_end_int_START (1)
#define SOC_EDC_LDI_ORG_INT_frame_end_int_END (1)
#define SOC_EDC_LDI_ORG_INT_edc_afifo_underflow_int_START (2)
#define SOC_EDC_LDI_ORG_INT_edc_afifo_underflow_int_END (2)
#define SOC_EDC_LDI_ORG_INT_vsync_int_START (3)
#define SOC_EDC_LDI_ORG_INT_vsync_int_END (3)
#define SOC_EDC_LDI_ORG_INT_vfrontporch_int_START (4)
#define SOC_EDC_LDI_ORG_INT_vfrontporch_int_END (4)
#define SOC_EDC_LDI_ORG_INT_vbackporch_int_START (5)
#define SOC_EDC_LDI_ORG_INT_vbackporch_int_END (5)
#define SOC_EDC_LDI_ORG_INT_vactive0_start_int_START (6)
#define SOC_EDC_LDI_ORG_INT_vactive0_start_int_END (6)
#define SOC_EDC_LDI_ORG_INT_vactive0_end_int_START (7)
#define SOC_EDC_LDI_ORG_INT_vactive0_end_int_END (7)
#define SOC_EDC_LDI_ORG_INT_vactive1_start_int_START (8)
#define SOC_EDC_LDI_ORG_INT_vactive1_start_int_END (8)
#define SOC_EDC_LDI_ORG_INT_vactive1_end_int_START (9)
#define SOC_EDC_LDI_ORG_INT_vactive1_end_int_END (9)
#define SOC_EDC_LDI_ORG_INT_vfrontporch_end_int_START (10)
#define SOC_EDC_LDI_ORG_INT_vfrontporch_end_int_END (10)
#define SOC_EDC_LDI_ORG_INT_dsi_te_tri_int_START (11)
#define SOC_EDC_LDI_ORG_INT_dsi_te_tri_int_END (11)
#define SOC_EDC_LDI_ORG_INT_dsi_te0_pin_int_START (12)
#define SOC_EDC_LDI_ORG_INT_dsi_te0_pin_int_END (12)
#define SOC_EDC_LDI_ORG_INT_dsi_te1_pin_int_START (13)
#define SOC_EDC_LDI_ORG_INT_dsi_te1_pin_int_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int frame_start_int : 1;
        unsigned int frame_end_int : 1;
        unsigned int edc_afifo_underflow_int : 1;
        unsigned int vsync_int : 1;
        unsigned int vfrontporch_int : 1;
        unsigned int vbackport_int : 1;
        unsigned int vactive0_start_int : 1;
        unsigned int vactive0_end_int : 1;
        unsigned int vactive1_start_int : 1;
        unsigned int vactive1_end_int : 1;
        unsigned int vfrontporch_end_int : 1;
        unsigned int dsi_te_tri_int : 1;
        unsigned int dsi_te0_pin_int : 1;
        unsigned int dsi_te1_pin_int : 1;
        unsigned int reserved : 18;
    } reg;
} SOC_EDC_LDI_MSK_INT_UNION;
#endif
#define SOC_EDC_LDI_MSK_INT_frame_start_int_START (0)
#define SOC_EDC_LDI_MSK_INT_frame_start_int_END (0)
#define SOC_EDC_LDI_MSK_INT_frame_end_int_START (1)
#define SOC_EDC_LDI_MSK_INT_frame_end_int_END (1)
#define SOC_EDC_LDI_MSK_INT_edc_afifo_underflow_int_START (2)
#define SOC_EDC_LDI_MSK_INT_edc_afifo_underflow_int_END (2)
#define SOC_EDC_LDI_MSK_INT_vsync_int_START (3)
#define SOC_EDC_LDI_MSK_INT_vsync_int_END (3)
#define SOC_EDC_LDI_MSK_INT_vfrontporch_int_START (4)
#define SOC_EDC_LDI_MSK_INT_vfrontporch_int_END (4)
#define SOC_EDC_LDI_MSK_INT_vbackport_int_START (5)
#define SOC_EDC_LDI_MSK_INT_vbackport_int_END (5)
#define SOC_EDC_LDI_MSK_INT_vactive0_start_int_START (6)
#define SOC_EDC_LDI_MSK_INT_vactive0_start_int_END (6)
#define SOC_EDC_LDI_MSK_INT_vactive0_end_int_START (7)
#define SOC_EDC_LDI_MSK_INT_vactive0_end_int_END (7)
#define SOC_EDC_LDI_MSK_INT_vactive1_start_int_START (8)
#define SOC_EDC_LDI_MSK_INT_vactive1_start_int_END (8)
#define SOC_EDC_LDI_MSK_INT_vactive1_end_int_START (9)
#define SOC_EDC_LDI_MSK_INT_vactive1_end_int_END (9)
#define SOC_EDC_LDI_MSK_INT_vfrontporch_end_int_START (10)
#define SOC_EDC_LDI_MSK_INT_vfrontporch_end_int_END (10)
#define SOC_EDC_LDI_MSK_INT_dsi_te_tri_int_START (11)
#define SOC_EDC_LDI_MSK_INT_dsi_te_tri_int_END (11)
#define SOC_EDC_LDI_MSK_INT_dsi_te0_pin_int_START (12)
#define SOC_EDC_LDI_MSK_INT_dsi_te0_pin_int_END (12)
#define SOC_EDC_LDI_MSK_INT_dsi_te1_pin_int_START (13)
#define SOC_EDC_LDI_MSK_INT_dsi_te1_pin_int_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int frame_start_int_clr : 1;
        unsigned int frame_end_int_clr : 1;
        unsigned int edc_afifo_underflow_int_clr : 1;
        unsigned int vsync_int_clr : 1;
        unsigned int vbackporch_int_clr : 1;
        unsigned int vfrontporch_int_clr : 1;
        unsigned int vactive0_start_int_clr : 1;
        unsigned int vactive0_end_int_clr : 1;
        unsigned int vactive1_start_int_clr : 1;
        unsigned int vactive1_end_int_clr : 1;
        unsigned int vfrontporch_end_int_clr : 1;
        unsigned int dsi_te_tri_int_clr : 1;
        unsigned int dsi_te0_pin_int_clr : 1;
        unsigned int dsi_te1_pin_int_clr : 1;
        unsigned int reserved : 18;
    } reg;
} SOC_EDC_LDI_INT_CLR_UNION;
#endif
#define SOC_EDC_LDI_INT_CLR_frame_start_int_clr_START (0)
#define SOC_EDC_LDI_INT_CLR_frame_start_int_clr_END (0)
#define SOC_EDC_LDI_INT_CLR_frame_end_int_clr_START (1)
#define SOC_EDC_LDI_INT_CLR_frame_end_int_clr_END (1)
#define SOC_EDC_LDI_INT_CLR_edc_afifo_underflow_int_clr_START (2)
#define SOC_EDC_LDI_INT_CLR_edc_afifo_underflow_int_clr_END (2)
#define SOC_EDC_LDI_INT_CLR_vsync_int_clr_START (3)
#define SOC_EDC_LDI_INT_CLR_vsync_int_clr_END (3)
#define SOC_EDC_LDI_INT_CLR_vbackporch_int_clr_START (4)
#define SOC_EDC_LDI_INT_CLR_vbackporch_int_clr_END (4)
#define SOC_EDC_LDI_INT_CLR_vfrontporch_int_clr_START (5)
#define SOC_EDC_LDI_INT_CLR_vfrontporch_int_clr_END (5)
#define SOC_EDC_LDI_INT_CLR_vactive0_start_int_clr_START (6)
#define SOC_EDC_LDI_INT_CLR_vactive0_start_int_clr_END (6)
#define SOC_EDC_LDI_INT_CLR_vactive0_end_int_clr_START (7)
#define SOC_EDC_LDI_INT_CLR_vactive0_end_int_clr_END (7)
#define SOC_EDC_LDI_INT_CLR_vactive1_start_int_clr_START (8)
#define SOC_EDC_LDI_INT_CLR_vactive1_start_int_clr_END (8)
#define SOC_EDC_LDI_INT_CLR_vactive1_end_int_clr_START (9)
#define SOC_EDC_LDI_INT_CLR_vactive1_end_int_clr_END (9)
#define SOC_EDC_LDI_INT_CLR_vfrontporch_end_int_clr_START (10)
#define SOC_EDC_LDI_INT_CLR_vfrontporch_end_int_clr_END (10)
#define SOC_EDC_LDI_INT_CLR_dsi_te_tri_int_clr_START (11)
#define SOC_EDC_LDI_INT_CLR_dsi_te_tri_int_clr_END (11)
#define SOC_EDC_LDI_INT_CLR_dsi_te0_pin_int_clr_START (12)
#define SOC_EDC_LDI_INT_CLR_dsi_te0_pin_int_clr_END (12)
#define SOC_EDC_LDI_INT_CLR_dsi_te1_pin_int_clr_START (13)
#define SOC_EDC_LDI_INT_CLR_dsi_te1_pin_int_clr_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int work_mode : 1;
        unsigned int wback_en : 1;
        unsigned int colorbar_en : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_EDC_LDI_WORK_MODE_UNION;
#endif
#define SOC_EDC_LDI_WORK_MODE_work_mode_START (0)
#define SOC_EDC_LDI_WORK_MODE_work_mode_END (0)
#define SOC_EDC_LDI_WORK_MODE_wback_en_START (1)
#define SOC_EDC_LDI_WORK_MODE_wback_en_END (1)
#define SOC_EDC_LDI_WORK_MODE_colorbar_en_START (2)
#define SOC_EDC_LDI_WORK_MODE_colorbar_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsi_pclk_off : 1;
        unsigned int hdmi_pclk_off : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_EDC_LDI_HDMI_DSI_GT_UNION;
#endif
#define SOC_EDC_LDI_HDMI_DSI_GT_dsi_pclk_off_START (0)
#define SOC_EDC_LDI_HDMI_DSI_GT_dsi_pclk_off_END (0)
#define SOC_EDC_LDI_HDMI_DSI_GT_hdmi_pclk_off_START (1)
#define SOC_EDC_LDI_HDMI_DSI_GT_hdmi_pclk_off_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int de_space_low : 1;
        unsigned int clr_ldi_en_bypass : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_EDC_LDI_DE_SPACE_LOW_UNION;
#endif
#define SOC_EDC_LDI_DE_SPACE_LOW_de_space_low_START (0)
#define SOC_EDC_LDI_DE_SPACE_LOW_de_space_low_END (0)
#define SOC_EDC_LDI_DE_SPACE_LOW_clr_ldi_en_bypass_START (1)
#define SOC_EDC_LDI_DE_SPACE_LOW_clr_ldi_en_bypass_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsi_halt_cmd_en : 1;
        unsigned int dsi_halt_video_en : 1;
        unsigned int dsi_wms_3d_mode : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_EDC_DSI_CMD_MOD_CTRL_UNION;
#endif
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_halt_cmd_en_START (0)
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_halt_cmd_en_END (0)
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_halt_video_en_START (1)
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_halt_video_en_END (1)
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_wms_3d_mode_START (2)
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_wms_3d_mode_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsi_te_hard_en : 1;
        unsigned int dsi_te0_pin_p : 1;
        unsigned int dsi_te1_pin_p : 1;
        unsigned int dsi_te_hard_sel : 1;
        unsigned int dsi_te_pin_hd_sel : 1;
        unsigned int dsi_te_mask_en : 1;
        unsigned int dsi_te_mask_dis : 4;
        unsigned int dsi_te_mask_und : 4;
        unsigned int dsi_te_pin_en : 1;
        unsigned int reserved : 17;
    } reg;
} SOC_EDC_DSI_TE_CTRL_UNION;
#endif
#define SOC_EDC_DSI_TE_CTRL_dsi_te_hard_en_START (0)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_hard_en_END (0)
#define SOC_EDC_DSI_TE_CTRL_dsi_te0_pin_p_START (1)
#define SOC_EDC_DSI_TE_CTRL_dsi_te0_pin_p_END (1)
#define SOC_EDC_DSI_TE_CTRL_dsi_te1_pin_p_START (2)
#define SOC_EDC_DSI_TE_CTRL_dsi_te1_pin_p_END (2)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_hard_sel_START (3)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_hard_sel_END (3)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_pin_hd_sel_START (4)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_pin_hd_sel_END (4)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_en_START (5)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_en_END (5)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_dis_START (6)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_dis_END (9)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_und_START (10)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_und_END (13)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_pin_en_START (14)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_pin_en_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsi_te0_hs_num : 13;
        unsigned int dsi_te1_hs_num : 13;
        unsigned int reserved : 6;
    } reg;
} SOC_EDC_DSI_TE_HS_NUM_UNION;
#endif
#define SOC_EDC_DSI_TE_HS_NUM_dsi_te0_hs_num_START (0)
#define SOC_EDC_DSI_TE_HS_NUM_dsi_te0_hs_num_END (12)
#define SOC_EDC_DSI_TE_HS_NUM_dsi_te1_hs_num_START (13)
#define SOC_EDC_DSI_TE_HS_NUM_dsi_te1_hs_num_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsi_te0_hs_wd : 12;
        unsigned int dsi_te1_hs_wd : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_DSI_TE_HS_WD_UNION;
#endif
#define SOC_EDC_DSI_TE_HS_WD_dsi_te0_hs_wd_START (0)
#define SOC_EDC_DSI_TE_HS_WD_dsi_te0_hs_wd_END (11)
#define SOC_EDC_DSI_TE_HS_WD_dsi_te1_hs_wd_START (12)
#define SOC_EDC_DSI_TE_HS_WD_dsi_te1_hs_wd_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsi_te0_vs_wd : 12;
        unsigned int dsi_te1_vs_wd : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_EDC_DSI_TE_VS_WD_UNION;
#endif
#define SOC_EDC_DSI_TE_VS_WD_dsi_te0_vs_wd_START (0)
#define SOC_EDC_DSI_TE_VS_WD_dsi_te0_vs_wd_END (11)
#define SOC_EDC_DSI_TE_VS_WD_dsi_te1_vs_wd_START (12)
#define SOC_EDC_DSI_TE_VS_WD_dsi_te1_vs_wd_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_frm_end_ints : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_EDC_LDI_MCU_INTS_UNION;
#endif
#define SOC_EDC_LDI_MCU_INTS_mcu_frm_end_ints_START (0)
#define SOC_EDC_LDI_MCU_INTS_mcu_frm_end_ints_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_frm_end_int_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_EDC_LDI_MCU_INTE_UNION;
#endif
#define SOC_EDC_LDI_MCU_INTE_mcu_frm_end_int_en_START (0)
#define SOC_EDC_LDI_MCU_INTE_mcu_frm_end_int_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mcu_frm_end_clr : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_EDC_LDI_MCU_INTC_UNION;
#endif
#define SOC_EDC_LDI_MCU_INTC_mcu_frm_end_clr_START (0)
#define SOC_EDC_LDI_MCU_INTC_mcu_frm_end_clr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int data_format : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_EDC_CONTROL_REG0_UNION;
#endif
#define SOC_EDC_CONTROL_REG0_data_format_START (0)
#define SOC_EDC_CONTROL_REG0_data_format_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 6;
        unsigned int auto_pos : 1;
        unsigned int auto_size : 1;
        unsigned int reserved_1: 24;
    } reg;
} SOC_EDC_CONTROL_REG1_UNION;
#endif
#define SOC_EDC_CONTROL_REG1_auto_pos_START (6)
#define SOC_EDC_CONTROL_REG1_auto_pos_END (6)
#define SOC_EDC_CONTROL_REG1_auto_size_START (7)
#define SOC_EDC_CONTROL_REG1_auto_size_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pos_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_HS_POS0_UNION;
#endif
#define SOC_EDC_HS_POS0_pos_7_0__START (0)
#define SOC_EDC_HS_POS0_pos_7_0__END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pos_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_HS_POS1_UNION;
#endif
#define SOC_EDC_HS_POS1_pos_15_8__START (0)
#define SOC_EDC_HS_POS1_pos_15_8__END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int width_7_0 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_FRAME_WIDTH0_UNION;
#endif
#define SOC_EDC_FRAME_WIDTH0_width_7_0_START (0)
#define SOC_EDC_FRAME_WIDTH0_width_7_0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int width_15_8 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_FRAME_WIDTH1_UNION;
#endif
#define SOC_EDC_FRAME_WIDTH1_width_15_8_START (0)
#define SOC_EDC_FRAME_WIDTH1_width_15_8_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int height_7_0 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_FRAME_HEIGHT0_UNION;
#endif
#define SOC_EDC_FRAME_HEIGHT0_height_7_0_START (0)
#define SOC_EDC_FRAME_HEIGHT0_height_7_0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int height_15_8 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_FRAME_HEIGHT1_UNION;
#endif
#define SOC_EDC_FRAME_HEIGHT1_height_15_8_START (0)
#define SOC_EDC_FRAME_HEIGHT1_height_15_8_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pos_7_0 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_VS_POS0_UNION;
#endif
#define SOC_EDC_VS_POS0_pos_7_0_START (0)
#define SOC_EDC_VS_POS0_pos_7_0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pos_15_8 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_VS_POS1_UNION;
#endif
#define SOC_EDC_VS_POS1_pos_15_8_START (0)
#define SOC_EDC_VS_POS1_pos_15_8_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enable : 1;
        unsigned int local_contrast : 2;
        unsigned int reserved_0 : 1;
        unsigned int color_correction : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_EDC_IRIDIX_CONTROL_0_UNION;
#endif
#define SOC_EDC_IRIDIX_CONTROL_0_enable_START (0)
#define SOC_EDC_IRIDIX_CONTROL_0_enable_END (0)
#define SOC_EDC_IRIDIX_CONTROL_0_local_contrast_START (1)
#define SOC_EDC_IRIDIX_CONTROL_0_local_contrast_END (2)
#define SOC_EDC_IRIDIX_CONTROL_0_color_correction_START (4)
#define SOC_EDC_IRIDIX_CONTROL_0_color_correction_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int variance_space : 4;
        unsigned int variance_intensity : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_VARIANCE_UNION;
#endif
#define SOC_EDC_VARIANCE_variance_space_START (0)
#define SOC_EDC_VARIANCE_variance_space_END (3)
#define SOC_EDC_VARIANCE_variance_intensity_START (4)
#define SOC_EDC_VARIANCE_variance_intensity_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slope_max : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_SLOPE_MAX_UNION;
#endif
#define SOC_EDC_SLOPE_MAX_slope_max_START (0)
#define SOC_EDC_SLOPE_MAX_slope_max_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slope_min : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_SLOPE_MIN_UNION;
#endif
#define SOC_EDC_SLOPE_MIN_slope_min_START (0)
#define SOC_EDC_SLOPE_MIN_slope_min_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int black_level0 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_BLACK_LEVEL0_UNION;
#endif
#define SOC_EDC_BLACK_LEVEL0_black_level0_START (0)
#define SOC_EDC_BLACK_LEVEL0_black_level0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int black_level1 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_BLACK_LEVEL1_UNION;
#endif
#define SOC_EDC_BLACK_LEVEL1_black_level1_START (0)
#define SOC_EDC_BLACK_LEVEL1_black_level1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int white_level0 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_WHITE_LEVEL0_UNION;
#endif
#define SOC_EDC_WHITE_LEVEL0_white_level0_START (0)
#define SOC_EDC_WHITE_LEVEL0_white_level0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int white_level1 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_WHITE_LEVEL1_UNION;
#endif
#define SOC_EDC_WHITE_LEVEL1_white_level1_START (0)
#define SOC_EDC_WHITE_LEVEL1_white_level1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int drak_amp_light : 4;
        unsigned int bright_amp_limit : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_LIMIT_AMP_UNION;
#endif
#define SOC_EDC_LIMIT_AMP_drak_amp_light_START (0)
#define SOC_EDC_LIMIT_AMP_drak_amp_light_END (3)
#define SOC_EDC_LIMIT_AMP_bright_amp_limit_START (4)
#define SOC_EDC_LIMIT_AMP_bright_amp_limit_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dither_mode : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_EDC_DITHER_UNION;
#endif
#define SOC_EDC_DITHER_dither_mode_START (0)
#define SOC_EDC_DITHER_dither_mode_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int logo_left : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_LOGO_LEFT_UNION;
#endif
#define SOC_EDC_LOGO_LEFT_logo_left_START (0)
#define SOC_EDC_LOGO_LEFT_logo_left_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int logo_right : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_LOGO_RIGHT_UNION;
#endif
#define SOC_EDC_LOGO_RIGHT_logo_right_START (0)
#define SOC_EDC_LOGO_RIGHT_logo_right_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enable_dither : 1;
        unsigned int dither_amount : 1;
        unsigned int shift_mode : 1;
        unsigned int reserved_0 : 4;
        unsigned int dither_bypass : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_EDC_DITHER_CONTROL_UNION;
#endif
#define SOC_EDC_DITHER_CONTROL_enable_dither_START (0)
#define SOC_EDC_DITHER_CONTROL_enable_dither_END (0)
#define SOC_EDC_DITHER_CONTROL_dither_amount_START (1)
#define SOC_EDC_DITHER_CONTROL_dither_amount_END (1)
#define SOC_EDC_DITHER_CONTROL_shift_mode_START (2)
#define SOC_EDC_DITHER_CONTROL_shift_mode_END (2)
#define SOC_EDC_DITHER_CONTROL_dither_bypass_START (7)
#define SOC_EDC_DITHER_CONTROL_dither_bypass_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strength_sel : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_EDC_STRENGTH_SEL_UNION;
#endif
#define SOC_EDC_STRENGTH_SEL_strength_sel_START (0)
#define SOC_EDC_STRENGTH_SEL_strength_sel_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strength_manual : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_STRENGTH_MANUAL_UNION;
#endif
#define SOC_EDC_STRENGTH_MANUAL_strength_manual_START (0)
#define SOC_EDC_STRENGTH_MANUAL_strength_manual_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int option_select : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_EDC_OPTION_SELECT_UNION;
#endif
#define SOC_EDC_OPTION_SELECT_option_select_START (0)
#define SOC_EDC_OPTION_SELECT_option_select_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ambient_light_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_AMBIENT_LIGHT0_UNION;
#endif
#define SOC_EDC_AMBIENT_LIGHT0_ambient_light_7_0__START (0)
#define SOC_EDC_AMBIENT_LIGHT0_ambient_light_7_0__END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ambient_light_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_AMBIENT_LIGHT1_UNION;
#endif
#define SOC_EDC_AMBIENT_LIGHT1_ambient_light_15_8__START (0)
#define SOC_EDC_AMBIENT_LIGHT1_ambient_light_15_8__END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int backlight_level_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_BACKLIGHT_LEVEL0_UNION;
#endif
#define SOC_EDC_BACKLIGHT_LEVEL0_backlight_level_7_0__START (0)
#define SOC_EDC_BACKLIGHT_LEVEL0_backlight_level_7_0__END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int backlight_level_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_BACKLIGHT_LEVEL1_UNION;
#endif
#define SOC_EDC_BACKLIGHT_LEVEL1_backlight_level_15_8__START (0)
#define SOC_EDC_BACKLIGHT_LEVEL1_backlight_level_15_8__END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int backlight_max_7_0_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_BACKLIGHT_MAX0_UNION;
#endif
#define SOC_EDC_BACKLIGHT_MAX0_backlight_max_7_0__START (0)
#define SOC_EDC_BACKLIGHT_MAX0_backlight_max_7_0__END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int backlight_max1_15_8_ : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_BACKLIGHT_MAX1_UNION;
#endif
#define SOC_EDC_BACKLIGHT_MAX1_backlight_max1_15_8__START (0)
#define SOC_EDC_BACKLIGHT_MAX1_backlight_max1_15_8__END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strength_limit : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_STRENGTH_LIMIT_UNION;
#endif
#define SOC_EDC_STRENGTH_LIMIT_strength_limit_START (0)
#define SOC_EDC_STRENGTH_LIMIT_strength_limit_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int calibration_a : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_CALIBRATION_A_UNION;
#endif
#define SOC_EDC_CALIBRATION_A_calibration_a_START (0)
#define SOC_EDC_CALIBRATION_A_calibration_a_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int calibration_b : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_CALIBRATION_B_UNION;
#endif
#define SOC_EDC_CALIBRATION_B_calibration_b_START (0)
#define SOC_EDC_CALIBRATION_B_calibration_b_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int drc_in0 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_DRC_IN0_UNION;
#endif
#define SOC_EDC_DRC_IN0_drc_in0_START (0)
#define SOC_EDC_DRC_IN0_drc_in0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int drc_in1 : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_DRC_IN1_UNION;
#endif
#define SOC_EDC_DRC_IN1_drc_in1_START (0)
#define SOC_EDC_DRC_IN1_drc_in1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_filt_control : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_EDC_T_FILT_CONTROL_UNION;
#endif
#define SOC_EDC_T_FILT_CONTROL_t_filt_control_START (0)
#define SOC_EDC_T_FILT_CONTROL_t_filt_control_END (7)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
