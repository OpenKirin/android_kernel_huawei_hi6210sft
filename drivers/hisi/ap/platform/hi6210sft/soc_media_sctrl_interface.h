#ifndef __SOC_MEDIA_SCTRL_INTERFACE_H__
#define __SOC_MEDIA_SCTRL_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_ADDR(base) ((base) + (0x00EC))
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_ADDR(base) ((base) + (0x00F0))
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ADDR(base) ((base) + (0x518))
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_ADDR(base) ((base) + (0x500))
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_ADDR(base) ((base) + (0x504))
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_ADDR(base) ((base) + (0x508))
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL3_ADDR(base) ((base) + (0x50C))
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ADDR(base) ((base) + (0x514))
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_ADDR(base) ((base) + (0x51C))
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_ADDR(base) ((base) + (0x540))
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_ADDR(base) ((base) + (0x544))
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_ADDR(base) ((base) + (0x548))
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT3_ADDR(base) ((base) + (0x54C))
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_ADDR(base) ((base) + (0x550))
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_ADDR(base) ((base) + (0x510))
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_ADDR(base) ((base) + (0xCBC))
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_ADDR(base) ((base) + (0xCC0))
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_ADDR(base) ((base) + (0xCC4))
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_ADDR(base) ((base) + (0x520))
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_ADDR(base) ((base) + (0x524))
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_ADDR(base) ((base) + (0x528))
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_ADDR(base) ((base) + (0x52C))
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_ADDR(base) ((base) + (0x530))
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_ADDR(base) ((base) + (0x534))
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_ADDR(base) ((base) + (0x538))
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_ADDR(base) ((base) + (0x53C))
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ADDR(base) ((base) + (0x554))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int codec_rad_ramctrl_ema : 3;
        unsigned int reserved_0 : 1;
        unsigned int codec_rad_ramctrl_emaw : 2;
        unsigned int codec_rad_ramctrl_emas : 1;
        unsigned int codec_rad_ramctrl_colldisn : 1;
        unsigned int reserved_1 : 2;
        unsigned int codec_rad_ramctrl_s_ret1n : 1;
        unsigned int codec_rad_ramctrl_s_ret2n : 1;
        unsigned int codec_rad_ramctrl_s_pgen : 1;
        unsigned int reserved_2 : 3;
        unsigned int codec_rfs_ramctrl_ema : 3;
        unsigned int reserved_3 : 1;
        unsigned int codec_rfs_ramctrl_emaw : 2;
        unsigned int codec_rfs_ramctrl_emas : 1;
        unsigned int reserved_4 : 3;
        unsigned int codec_rfs_ramctrl_s_ret1n : 1;
        unsigned int codec_rfs_ramctrl_s_ret2n : 1;
        unsigned int codec_rfs_ramctrl_s_pgen : 1;
        unsigned int reserved_5 : 3;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_ema_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_ema_END (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_emaw_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_emaw_END (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_emas_START (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_emas_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_colldisn_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_colldisn_END (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_ret1n_START (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_ret1n_END (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_ret2n_START (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_ret2n_END (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_pgen_START (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_pgen_END (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_ema_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_ema_END (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_emaw_START (20)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_emaw_END (21)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_emas_START (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_emas_END (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_ret1n_START (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_ret1n_END (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_ret2n_START (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_ret2n_END (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_pgen_START (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_pgen_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 16;
        unsigned int g3d_rfs_ramctrl_ema : 3;
        unsigned int reserved_1 : 1;
        unsigned int g3d_rfs_ramctrl_emaw : 2;
        unsigned int g3d_rfs_ramctrl_emas : 1;
        unsigned int reserved_2 : 3;
        unsigned int g3d_rfs_ramctrl_s_ret1n : 1;
        unsigned int g3d_rfs_ramctrl_s_ret2n : 1;
        unsigned int g3d_rfs_ramctrl_s_pgen : 1;
        unsigned int reserved_3 : 3;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_ema_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_ema_END (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_emaw_START (20)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_emaw_END (21)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_emas_START (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_emas_END (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_ret1n_START (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_ret1n_END (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_ret2n_START (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_ret2n_END (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_pgen_START (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_pgen_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_rfs_ramctrl_ema : 3;
        unsigned int reserved_0 : 1;
        unsigned int smmu_rfs_ramctrl_emaw : 2;
        unsigned int smmu_rfs_ramctrl_emas : 1;
        unsigned int reserved_1 : 3;
        unsigned int smmu_rfs_ramctrl_s_ret1n : 1;
        unsigned int smmu_rfs_ramctrl_s_ret2n : 1;
        unsigned int smmu_rfs_ramctrl_s_pgen : 1;
        unsigned int reserved_2 : 3;
        unsigned int ade_rfs_ramctrl_ema : 3;
        unsigned int reserved_3 : 1;
        unsigned int ade_rfs_ramctrl_emaw : 2;
        unsigned int ade_rfs_ramctrl_emas : 1;
        unsigned int reserved_4 : 3;
        unsigned int ade_rfs_ramctrl_s_ret1n : 1;
        unsigned int ade_rfs_ramctrl_s_ret2n : 1;
        unsigned int ade_rfs_ramctrl_s_pgen : 1;
        unsigned int reserved_5 : 3;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_ema_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_ema_END (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_emaw_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_emaw_END (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_emas_START (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_emas_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_ret1n_START (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_ret1n_END (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_ret2n_START (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_ret2n_END (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_pgen_START (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_pgen_END (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_ema_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_ema_END (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_emaw_START (20)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_emaw_END (21)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_emas_START (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_emas_END (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_ret1n_START (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_ret1n_END (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_ret2n_START (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_ret2n_END (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_pgen_START (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_pgen_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 16;
        unsigned int g3d_rfd_ramctrl_emaa : 3;
        unsigned int g3d_rfd_ramctrl_emab : 3;
        unsigned int g3d_rfd_ramctrl_emasa : 1;
        unsigned int g3d_rfd_ramctrl_colldisn : 1;
        unsigned int reserved_1 : 2;
        unsigned int g3d_rfd_ramctrl_s_ret1n : 1;
        unsigned int g3d_rfd_ramctrl_s_ret2n : 1;
        unsigned int g3d_rfd_ramctrl_s_pgen : 1;
        unsigned int reserved_2 : 3;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emaa_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emaa_END (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emab_START (19)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emab_END (21)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emasa_START (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emasa_END (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_colldisn_START (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_colldisn_END (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_ret1n_START (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_ret1n_END (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_ret2n_START (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_ret2n_END (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_pgen_START (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_pgen_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_subsys_ctrl1_lp_ctrl : 2;
        unsigned int media_subsys_ctrl1_i2c0_oden : 1;
        unsigned int media_subsys_ctrl1_i2c0_dly_en : 1;
        unsigned int media_subsys_ctrl1_i2c0_dly_time : 6;
        unsigned int media_subsys_ctrl1_i2c1_oden : 1;
        unsigned int media_subsys_ctrl1_i2c1_dly_en : 1;
        unsigned int media_subsys_ctrl1_i2c1_dly_time : 6;
        unsigned int media_subsys_ctrl1 : 14;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_lp_ctrl_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_lp_ctrl_END (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_oden_START (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_oden_END (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_dly_en_START (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_dly_en_END (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_dly_time_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_dly_time_END (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_oden_START (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_oden_END (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_dly_en_START (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_dly_en_END (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_dly_time_START (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_dly_time_END (17)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_START (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int auto_codec_vpu_clken : 1;
        unsigned int reserved_0 : 15;
        unsigned int codec_rfd_ramctrl_emaa : 3;
        unsigned int codec_rfd_ramctrl_emab : 3;
        unsigned int codec_rfd_ramctrl_emasa : 1;
        unsigned int codec_rfd_ramctrl_colldisn : 1;
        unsigned int reserved_1 : 2;
        unsigned int codec_rfd_ramctrl_s_ret1n : 1;
        unsigned int codec_rfd_ramctrl_s_ret2n : 1;
        unsigned int codec_rfd_ramctrl_s_pgen : 1;
        unsigned int reserved_2 : 3;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_auto_codec_vpu_clken_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_auto_codec_vpu_clken_END (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emaa_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emaa_END (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emab_START (19)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emab_END (21)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emasa_START (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emasa_END (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_colldisn_START (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_colldisn_END (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_ret1n_START (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_ret1n_END (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_ret2n_START (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_ret2n_END (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_pgen_START (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_pgen_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_subsys_ctrl3 : 32;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL3_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL3_media_subsys_ctrl3_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL3_media_subsys_ctrl3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ade_rfd_ramctrl_ema : 3;
        unsigned int ade_rfd_ramctrl_emab : 3;
        unsigned int ade_rfd_ramctrl_emasa : 1;
        unsigned int ade_rfd_ramctrl_colldisn : 1;
        unsigned int reserved_0 : 2;
        unsigned int ade_rfd_ramctrl_s_ret1n : 1;
        unsigned int ade_rfd_ramctrl_s_ret2n : 1;
        unsigned int ade_rfd_ramctrl_s_pgen : 1;
        unsigned int reserved_1 : 3;
        unsigned int media_subsys_ctrl4 : 16;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_ema_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_ema_END (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_emab_START (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_emab_END (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_emasa_START (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_emasa_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_colldisn_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_colldisn_END (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_ret1n_START (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_ret1n_END (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_ret2n_START (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_ret2n_END (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_pgen_START (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_pgen_END (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_media_subsys_ctrl4_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_media_subsys_ctrl4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_clk_sel_ade : 1;
        unsigned int media_clk_sel_g3d : 1;
        unsigned int media_mmu_sel : 1;
        unsigned int isp_fsin0_poen : 1;
        unsigned int isp_fsin1_poen : 1;
        unsigned int isp_dw_auto_clken : 1;
        unsigned int media_clk_sel_vpu : 1;
        unsigned int media_noc_time_out_en : 1;
        unsigned int vpu_mem_share_sel : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_ade_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_ade_END (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_g3d_START (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_g3d_END (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_mmu_sel_START (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_mmu_sel_END (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_fsin0_poen_START (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_fsin0_poen_END (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_fsin1_poen_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_fsin1_poen_END (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_dw_auto_clken_START (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_dw_auto_clken_END (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_vpu_START (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_vpu_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_noc_time_out_en_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_noc_time_out_en_END (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_vpu_mem_share_sel_START (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_vpu_mem_share_sel_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_subsys_g3d_state0 : 7;
        unsigned int media_subsys_state0 : 25;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_media_subsys_g3d_state0_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_media_subsys_g3d_state0_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_media_subsys_state0_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_media_subsys_state0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_subsys_isp_state1 : 1;
        unsigned int media_subsys_state1 : 31;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_media_subsys_isp_state1_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_media_subsys_isp_state1_END (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_media_subsys_state1_START (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_media_subsys_state1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_codec_vpu_idle : 1;
        unsigned int media_subsys_codec_vpu_state2 : 31;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_media_codec_vpu_idle_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_media_codec_vpu_idle_END (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_media_subsys_codec_vpu_state2_START (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_media_subsys_codec_vpu_state2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_subsys_codec_jpeg_state3 : 32;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT3_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT3_media_subsys_codec_jpeg_state3_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT3_media_subsys_codec_jpeg_state3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_timeout : 1;
        unsigned int harq_ram_timeout : 1;
        unsigned int media_subsys_ade_state4 : 30;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_smmu_timeout_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_smmu_timeout_END (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_harq_ram_timeout_START (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_harq_ram_timeout_END (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_media_subsys_ade_state4_START (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_media_subsys_ade_state4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_noc_lp_value0 : 4;
        unsigned int media_noc_lp_num_in : 12;
        unsigned int media_noc_lp_num_out : 12;
        unsigned int reserved : 4;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_value0_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_value0_END (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_num_in_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_num_in_END (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_num_out_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_num_out_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_clkcfg0_noc_value0 : 7;
        unsigned int media_clkcfg0_noc_vld0 : 1;
        unsigned int media_clkcfg0_isp_sck_value1 : 7;
        unsigned int media_clkcfg0_isp_sclk_vld1 : 1;
        unsigned int media_clkcfg0_noc_lp_value0 : 7;
        unsigned int media_clkcfg0_noc_lp_vld0 : 1;
        unsigned int media_clkcfg0_isp_sclk2_value3 : 7;
        unsigned int media_clkcfg0_isp_sclk2_vld3 : 1;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_value0_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_value0_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_vld0_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_vld0_END (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sck_value1_START (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sck_value1_END (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk_vld1_START (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk_vld1_END (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_lp_value0_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_lp_value0_END (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_lp_vld0_START (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_lp_vld0_END (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk2_value3_START (24)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk2_value3_END (30)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk2_vld3_START (31)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk2_vld3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_clkcfg1_value0 : 7;
        unsigned int media_clkcfg1_vld0 : 1;
        unsigned int media_clkcfg1_value1 : 7;
        unsigned int media_clkcfg1_cfg_vld1 : 1;
        unsigned int media_clkcfg1_ade_core_value2 : 7;
        unsigned int media_clkcfg1_ade_core_vld2 : 1;
        unsigned int media_clkcfg1_ade_pixel_value3 : 7;
        unsigned int media_clkcfg1_ade_pixel_vld3 : 1;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_value0_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_value0_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_vld0_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_vld0_END (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_value1_START (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_value1_END (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_cfg_vld1_START (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_cfg_vld1_END (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_core_value2_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_core_value2_END (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_core_vld2_START (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_core_vld2_END (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_pixel_value3_START (24)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_pixel_value3_END (30)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_pixel_vld3_START (31)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_pixel_vld3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_8bit_cfg8_value0 : 7;
        unsigned int clk_8bit_cfg8_vld0 : 1;
        unsigned int media_clkcfg2_g3d_value1 : 7;
        unsigned int media_clkcfg2_g3d_vld1 : 1;
        unsigned int media_clkcfg2_codec_jpeg_value2 : 7;
        unsigned int media_clkcfg2_codec_jpeg_vld2 : 1;
        unsigned int media_clkcfg2_codec_vpu_value3 : 7;
        unsigned int media_clkcfg2_codec_vpu_vld3 : 1;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_clk_8bit_cfg8_value0_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_clk_8bit_cfg8_value0_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_clk_8bit_cfg8_vld0_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_clk_8bit_cfg8_vld0_END (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_g3d_value1_START (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_g3d_value1_END (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_g3d_vld1_START (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_g3d_vld1_END (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_value2_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_value2_END (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_vld2_START (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_vld2_END (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_vpu_value3_START (24)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_vpu_value3_END (30)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_vpu_vld3_START (31)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_vpu_vld3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_clken_dsi_clk : 1;
        unsigned int media_clken_g3d_clk : 1;
        unsigned int reserved_0 : 1;
        unsigned int media_clken_codec_vpu_clk : 1;
        unsigned int media_clken_codec_jpeg_clk : 1;
        unsigned int media_clken_isp_clk : 1;
        unsigned int media_clken_ade_clk : 1;
        unsigned int media_clken_x2rm_hq_clk : 1;
        unsigned int media_clken_mmu : 1;
        unsigned int media_clken_csi4phy : 1;
        unsigned int media_clken_csi2phy : 1;
        unsigned int media_gating_sclk_isp : 1;
        unsigned int media_gating_sclk2_isp : 1;
        unsigned int reserved_1 : 1;
        unsigned int media_gating_ade_clk : 1;
        unsigned int media_gating_codec_vpu : 1;
        unsigned int media_gating_codec_jpeg : 1;
        unsigned int media_gating_sys_dsp : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 12;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_dsi_clk_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_dsi_clk_END (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_g3d_clk_START (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_g3d_clk_END (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_codec_vpu_clk_START (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_codec_vpu_clk_END (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_codec_jpeg_clk_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_codec_jpeg_clk_END (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_isp_clk_START (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_isp_clk_END (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_ade_clk_START (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_ade_clk_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_x2rm_hq_clk_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_x2rm_hq_clk_END (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_mmu_START (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_mmu_END (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_csi4phy_START (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_csi4phy_END (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_csi2phy_START (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_csi2phy_END (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sclk_isp_START (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sclk_isp_END (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sclk2_isp_START (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sclk2_isp_END (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_ade_clk_START (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_ade_clk_END (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_codec_vpu_START (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_codec_vpu_END (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_codec_jpeg_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_codec_jpeg_END (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sys_dsp_START (17)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sys_dsp_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_clken_dis_dsi_clk : 1;
        unsigned int media_clken_dis_g3d_clk : 1;
        unsigned int reserved_0 : 1;
        unsigned int media_clken_dis_codec_vpu_clk : 1;
        unsigned int media_clken_dis_codec_jpeg_clk : 1;
        unsigned int media_clken_dis_isp_clk : 1;
        unsigned int media_clken_dis_ade_clk : 1;
        unsigned int media_clken_dis_x2rm_hq_clk : 1;
        unsigned int media_clken_dis_mmu : 1;
        unsigned int media_clken_dis_csi4phy : 1;
        unsigned int media_clken_dis_csi2phy : 1;
        unsigned int media_gating_dis_sclk_isp : 1;
        unsigned int media_gating_dis_sclk2_isp : 1;
        unsigned int reserved_1 : 1;
        unsigned int media_gating_dis_ade_clk : 1;
        unsigned int media_gating_dis_codec_vpu : 1;
        unsigned int media_gating_dis_codec_jpeg : 1;
        unsigned int media_gating_dis_sys_dsp : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 12;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_dsi_clk_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_dsi_clk_END (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_g3d_clk_START (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_g3d_clk_END (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_codec_vpu_clk_START (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_codec_vpu_clk_END (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_codec_jpeg_clk_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_codec_jpeg_clk_END (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_isp_clk_START (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_isp_clk_END (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_ade_clk_START (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_ade_clk_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_x2rm_hq_clk_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_x2rm_hq_clk_END (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_mmu_START (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_mmu_END (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_csi4phy_START (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_csi4phy_END (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_csi2phy_START (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_csi2phy_END (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sclk_isp_START (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sclk_isp_END (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sclk2_isp_START (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sclk2_isp_END (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_ade_clk_START (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_ade_clk_END (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_codec_vpu_START (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_codec_vpu_END (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_codec_jpeg_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_codec_jpeg_END (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sys_dsp_START (17)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sys_dsp_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_clken_dsi_clk_stat : 1;
        unsigned int media_clken_g3d_clk_stat : 1;
        unsigned int reserved_0 : 1;
        unsigned int media_clken_codec_vpu_clk_stat : 1;
        unsigned int media_clken_codec_jpeg_clk_stat : 1;
        unsigned int media_clken_isp_clk_stat : 1;
        unsigned int media_clken_ade_clk_stat : 1;
        unsigned int media_clken_x2rm_hq_clk_stat : 1;
        unsigned int media_clken_mmu_stat : 1;
        unsigned int media_clken_csi4phy_stat : 1;
        unsigned int media_clken_csi2phy_stat : 1;
        unsigned int media_gating_sclk_isp_stat : 1;
        unsigned int media_gating_sclk2_isp_stat : 1;
        unsigned int reserved_1 : 1;
        unsigned int media_gating_ade_clk_stat : 1;
        unsigned int media_gating_codec_vpu_stat : 1;
        unsigned int media_gating_codec_jpeg_stat : 1;
        unsigned int media_gating_sys_dsp_stat : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 12;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_dsi_clk_stat_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_dsi_clk_stat_END (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_g3d_clk_stat_START (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_g3d_clk_stat_END (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_vpu_clk_stat_START (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_vpu_clk_stat_END (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_jpeg_clk_stat_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_jpeg_clk_stat_END (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_isp_clk_stat_START (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_isp_clk_stat_END (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_ade_clk_stat_START (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_ade_clk_stat_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_x2rm_hq_clk_stat_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_x2rm_hq_clk_stat_END (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_mmu_stat_START (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_mmu_stat_END (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_csi4phy_stat_START (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_csi4phy_stat_END (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_csi2phy_stat_START (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_csi2phy_stat_END (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sclk_isp_stat_START (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sclk_isp_stat_END (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sclk2_isp_stat_START (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sclk2_isp_stat_END (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_ade_clk_stat_START (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_ade_clk_stat_END (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_codec_vpu_stat_START (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_codec_vpu_stat_END (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_codec_jpeg_stat_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_codec_jpeg_stat_END (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sys_dsp_stat_START (17)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sys_dsp_stat_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_rsten_g3d : 1;
        unsigned int reserved_0 : 1;
        unsigned int media_rsten_codec_vpu : 1;
        unsigned int media_rsten_codec_jpeg : 1;
        unsigned int media_rsten_isp : 1;
        unsigned int media_rsten_ade : 1;
        unsigned int reset_med_mmu_en : 1;
        unsigned int reset_med_x2rm_en : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int reserved_18 : 1;
        unsigned int reserved_19 : 1;
        unsigned int reserved_20 : 1;
        unsigned int reserved_21 : 1;
        unsigned int reserved_22 : 1;
        unsigned int reserved_23 : 1;
        unsigned int reserved_24 : 1;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_g3d_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_g3d_END (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_codec_vpu_START (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_codec_vpu_END (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_codec_jpeg_START (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_codec_jpeg_END (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_isp_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_isp_END (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_ade_START (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_ade_END (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_reset_med_mmu_en_START (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_reset_med_mmu_en_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_reset_med_x2rm_en_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_reset_med_x2rm_en_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_rstdis_g3d : 1;
        unsigned int reserved_0 : 1;
        unsigned int media_rstdis_codec_vpu : 1;
        unsigned int media_rstdis_codec_jpeg : 1;
        unsigned int media_rstdis_isp : 1;
        unsigned int media_rstdis_ade : 1;
        unsigned int reset_med_mmu_dis : 1;
        unsigned int reset_med_x2rm_dis : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int reserved_18 : 1;
        unsigned int reserved_19 : 1;
        unsigned int reserved_20 : 1;
        unsigned int reserved_21 : 1;
        unsigned int reserved_22 : 1;
        unsigned int reserved_23 : 1;
        unsigned int reserved_24 : 1;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_g3d_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_g3d_END (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_codec_vpu_START (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_codec_vpu_END (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_codec_jpeg_START (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_codec_jpeg_END (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_isp_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_isp_END (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_ade_START (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_ade_END (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_reset_med_mmu_dis_START (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_reset_med_mmu_dis_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_reset_med_x2rm_dis_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_reset_med_x2rm_dis_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int media_rst_stat_g3d : 1;
        unsigned int reserved_0 : 1;
        unsigned int media_rst_stat_codec_vpu : 1;
        unsigned int media_rst_stat_codec_jpeg : 1;
        unsigned int media_rst_stat_isp : 1;
        unsigned int media_rst_stat_ade : 1;
        unsigned int reset_med_mmu_state : 1;
        unsigned int reset_med_x2rm_state : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int reserved_14 : 1;
        unsigned int reserved_15 : 1;
        unsigned int reserved_16 : 1;
        unsigned int reserved_17 : 1;
        unsigned int reserved_18 : 1;
        unsigned int reserved_19 : 1;
        unsigned int reserved_20 : 1;
        unsigned int reserved_21 : 1;
        unsigned int reserved_22 : 1;
        unsigned int reserved_23 : 1;
        unsigned int reserved_24 : 1;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_g3d_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_g3d_END (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_vpu_START (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_vpu_END (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_jpeg_START (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_jpeg_END (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_isp_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_isp_END (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_ade_START (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_ade_END (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_reset_med_mmu_state_START (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_reset_med_mmu_state_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_reset_med_x2rm_state_START (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_reset_med_x2rm_state_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int testpin_grp_sel : 16;
        unsigned int testpin_module_sel : 16;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_testpin_grp_sel_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_testpin_grp_sel_END (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_testpin_module_sel_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_testpin_module_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vpu_m0_press : 3;
        unsigned int reserved_0 : 1;
        unsigned int vpu_m0_hurry : 3;
        unsigned int reserved_1 : 1;
        unsigned int vpu_m1_press : 3;
        unsigned int reserved_2 : 1;
        unsigned int vpu_m1_hurry : 3;
        unsigned int reserved_3 : 1;
        unsigned int jpu_m_press : 3;
        unsigned int reserved_4 : 1;
        unsigned int jpu_m_hurry : 3;
        unsigned int reserved_5 : 1;
        unsigned int isp_m_press : 3;
        unsigned int reserved_6 : 1;
        unsigned int isp_m_hurry : 3;
        unsigned int reserved_7 : 1;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m0_press_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m0_press_END (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m0_hurry_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m0_hurry_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m1_press_START (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m1_press_END (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m1_hurry_START (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m1_hurry_END (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_jpu_m_press_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_jpu_m_press_END (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_jpu_m_hurry_START (20)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_jpu_m_hurry_END (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_isp_m_press_START (24)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_isp_m_press_END (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_isp_m_hurry_START (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_isp_m_hurry_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ade_m0_press : 3;
        unsigned int reserved_0 : 1;
        unsigned int ade_m0_hurry : 3;
        unsigned int reserved_1 : 1;
        unsigned int ade_m1_press : 3;
        unsigned int reserved_2 : 1;
        unsigned int ade_m1_hurry : 3;
        unsigned int reserved_3 : 1;
        unsigned int g3d_m_press : 3;
        unsigned int reserved_4 : 1;
        unsigned int g3d_m_hurry : 3;
        unsigned int reserved_5 : 1;
        unsigned int g3d_m_wr_qos : 3;
        unsigned int reserved_6 : 1;
        unsigned int g3d_m_rd_qos : 3;
        unsigned int reserved_7 : 1;
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m0_press_START (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m0_press_END (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m0_hurry_START (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m0_hurry_END (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m1_press_START (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m1_press_END (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m1_hurry_START (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m1_hurry_END (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_press_START (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_press_END (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_hurry_START (20)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_hurry_END (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_wr_qos_START (24)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_wr_qos_END (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_rd_qos_START (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_rd_qos_END (30)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
