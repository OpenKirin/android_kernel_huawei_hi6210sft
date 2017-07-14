#ifndef __SOC_TZPC_INTERFACE_H__
#define __SOC_TZPC_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_TZPC_TZPCR0SIZE_ADDR(base) ((base) + (0x0000))
#define SOC_TZPC_TZPCDECPROT0STAT_ADDR(base) ((base) + (0x0800))
#define SOC_TZPC_TZPCDECPROT0SET_ADDR(base) ((base) + (0x0804))
#define SOC_TZPC_TZPCDECPROT0CLR_ADDR(base) ((base) + (0x0808))
#define SOC_TZPC_TZPCDECPROT1STAT_ADDR(base) ((base) + (0x080C))
#define SOC_TZPC_TZPCDECPROT1SET_ADDR(base) ((base) + (0x0810))
#define SOC_TZPC_TZPCDECPROT1CLR_ADDR(base) ((base) + (0x0814))
#define SOC_TZPC_TZPCDECPROT2STAT_ADDR(base) ((base) + (0x0818))
#define SOC_TZPC_TZPCDECPROT2SET_ADDR(base) ((base) + (0x081C))
#define SOC_TZPC_TZPCDECPROT2CLR_ADDR(base) ((base) + (0x0820))
#define SOC_TZPC_TZPCDECPROT3STAT_ADDR(base) ((base) + (0x0824))
#define SOC_TZPC_TZPCDECPROT3SET_ADDR(base) ((base) + (0x0828))
#define SOC_TZPC_TZPCDECPROT3CLR_ADDR(base) ((base) + (0x082C))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tzpcr0size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_TZPC_TZPCR0SIZE_UNION;
#endif
#define SOC_TZPC_TZPCR0SIZE_tzpcr0size_START (0)
#define SOC_TZPC_TZPCR0SIZE_tzpcr0size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g2d_cfg_port : 1;
        unsigned int sio0_cfg_port : 1;
        unsigned int sio1_cfg_port : 1;
        unsigned int sio2_cfg_port : 1;
        unsigned int sio3_cfg_port : 1;
        unsigned int mmc0_cfg_port : 1;
        unsigned int mmc1_cfg_port : 1;
        unsigned int mmc2_cfg_port : 1;
        unsigned int dsi_cfg_port : 1;
        unsigned int vdec_cfg_port : 1;
        unsigned int venc_cfg_port : 1;
        unsigned int vpp_cfg_port : 1;
        unsigned int g3d_cfg_port : 1;
        unsigned int pwm0_cfg_port : 1;
        unsigned int pwm1_cfg_port : 1;
        unsigned int gpio_off4_cfg_port : 1;
        unsigned int gpio_off5_cfg_port : 1;
        unsigned int gpio_off6_cfg_port : 1;
        unsigned int gpio_off7_cfg_port : 1;
        unsigned int gpio_off8_cfg_port : 1;
        unsigned int gpio_off9_cfg_port : 1;
        unsigned int gpio_off10_cfg_port : 1;
        unsigned int gpio_off11_cfg_port : 1;
        unsigned int gpio_off12_cfg_port : 1;
        unsigned int gpio_off13_cfg_port : 1;
        unsigned int gpio_off14_cfg_port : 1;
        unsigned int gpio_off15_cfg_port : 1;
        unsigned int gpio_off16_cfg_port : 1;
        unsigned int gpio_off17_cfg_port : 1;
        unsigned int gpio_off18_cfg_port : 1;
        unsigned int gpio_off19_cfg_port : 1;
        unsigned int ioc_off_cfg_port : 1;
    } reg;
} SOC_TZPC_TZPCDECPROT0STAT_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT0STAT_g2d_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT0STAT_g2d_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT0STAT_sio0_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT0STAT_sio0_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT0STAT_sio1_cfg_port_START (2)
#define SOC_TZPC_TZPCDECPROT0STAT_sio1_cfg_port_END (2)
#define SOC_TZPC_TZPCDECPROT0STAT_sio2_cfg_port_START (3)
#define SOC_TZPC_TZPCDECPROT0STAT_sio2_cfg_port_END (3)
#define SOC_TZPC_TZPCDECPROT0STAT_sio3_cfg_port_START (4)
#define SOC_TZPC_TZPCDECPROT0STAT_sio3_cfg_port_END (4)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc0_cfg_port_START (5)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc0_cfg_port_END (5)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc1_cfg_port_START (6)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc1_cfg_port_END (6)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc2_cfg_port_START (7)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc2_cfg_port_END (7)
#define SOC_TZPC_TZPCDECPROT0STAT_dsi_cfg_port_START (8)
#define SOC_TZPC_TZPCDECPROT0STAT_dsi_cfg_port_END (8)
#define SOC_TZPC_TZPCDECPROT0STAT_vdec_cfg_port_START (9)
#define SOC_TZPC_TZPCDECPROT0STAT_vdec_cfg_port_END (9)
#define SOC_TZPC_TZPCDECPROT0STAT_venc_cfg_port_START (10)
#define SOC_TZPC_TZPCDECPROT0STAT_venc_cfg_port_END (10)
#define SOC_TZPC_TZPCDECPROT0STAT_vpp_cfg_port_START (11)
#define SOC_TZPC_TZPCDECPROT0STAT_vpp_cfg_port_END (11)
#define SOC_TZPC_TZPCDECPROT0STAT_g3d_cfg_port_START (12)
#define SOC_TZPC_TZPCDECPROT0STAT_g3d_cfg_port_END (12)
#define SOC_TZPC_TZPCDECPROT0STAT_pwm0_cfg_port_START (13)
#define SOC_TZPC_TZPCDECPROT0STAT_pwm0_cfg_port_END (13)
#define SOC_TZPC_TZPCDECPROT0STAT_pwm1_cfg_port_START (14)
#define SOC_TZPC_TZPCDECPROT0STAT_pwm1_cfg_port_END (14)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off4_cfg_port_START (15)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off4_cfg_port_END (15)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off5_cfg_port_START (16)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off5_cfg_port_END (16)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off6_cfg_port_START (17)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off6_cfg_port_END (17)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off7_cfg_port_START (18)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off7_cfg_port_END (18)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off8_cfg_port_START (19)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off8_cfg_port_END (19)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off9_cfg_port_START (20)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off9_cfg_port_END (20)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off10_cfg_port_START (21)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off10_cfg_port_END (21)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off11_cfg_port_START (22)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off11_cfg_port_END (22)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off12_cfg_port_START (23)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off12_cfg_port_END (23)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off13_cfg_port_START (24)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off13_cfg_port_END (24)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off14_cfg_port_START (25)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off14_cfg_port_END (25)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off15_cfg_port_START (26)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off15_cfg_port_END (26)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off16_cfg_port_START (27)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off16_cfg_port_END (27)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off17_cfg_port_START (28)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off17_cfg_port_END (28)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off18_cfg_port_START (29)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off18_cfg_port_END (29)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off19_cfg_port_START (30)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off19_cfg_port_END (30)
#define SOC_TZPC_TZPCDECPROT0STAT_ioc_off_cfg_port_START (31)
#define SOC_TZPC_TZPCDECPROT0STAT_ioc_off_cfg_port_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g2d_cfg_port : 1;
        unsigned int sio0_cfg_port : 1;
        unsigned int sio1_cfg_port : 1;
        unsigned int sio2_cfg_port : 1;
        unsigned int sio3_cfg_port : 1;
        unsigned int mmc0_cfg_port : 1;
        unsigned int mmc1_cfg_port : 1;
        unsigned int mmc2_cfg_port : 1;
        unsigned int dsi_cfg_port : 1;
        unsigned int vdec_cfg_port : 1;
        unsigned int venc_cfg_port : 1;
        unsigned int vpp_cfg_port : 1;
        unsigned int g3d_cfg_port : 1;
        unsigned int pwm0_cfg_port : 1;
        unsigned int pwm1_cfg_port : 1;
        unsigned int gpio_off4_cfg_port : 1;
        unsigned int gpio_off5_cfg_port : 1;
        unsigned int gpio_off6_cfg_port : 1;
        unsigned int gpio_off7_cfg_port : 1;
        unsigned int gpio_off8_cfg_port : 1;
        unsigned int gpio_off9_cfg_port : 1;
        unsigned int gpio_off10_cfg_port : 1;
        unsigned int gpio_off11_cfg_port : 1;
        unsigned int gpio_off12_cfg_port : 1;
        unsigned int gpio_off13_cfg_port : 1;
        unsigned int gpio_off14_cfg_port : 1;
        unsigned int gpio_off15_cfg_port : 1;
        unsigned int gpio_off16_cfg_port : 1;
        unsigned int gpio_off17_cfg_port : 1;
        unsigned int gpio_off18_cfg_port : 1;
        unsigned int gpio_off19_cfg_port : 1;
        unsigned int ioc_off_cfg_port : 1;
    } reg;
} SOC_TZPC_TZPCDECPROT0SET_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT0SET_g2d_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT0SET_g2d_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT0SET_sio0_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT0SET_sio0_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT0SET_sio1_cfg_port_START (2)
#define SOC_TZPC_TZPCDECPROT0SET_sio1_cfg_port_END (2)
#define SOC_TZPC_TZPCDECPROT0SET_sio2_cfg_port_START (3)
#define SOC_TZPC_TZPCDECPROT0SET_sio2_cfg_port_END (3)
#define SOC_TZPC_TZPCDECPROT0SET_sio3_cfg_port_START (4)
#define SOC_TZPC_TZPCDECPROT0SET_sio3_cfg_port_END (4)
#define SOC_TZPC_TZPCDECPROT0SET_mmc0_cfg_port_START (5)
#define SOC_TZPC_TZPCDECPROT0SET_mmc0_cfg_port_END (5)
#define SOC_TZPC_TZPCDECPROT0SET_mmc1_cfg_port_START (6)
#define SOC_TZPC_TZPCDECPROT0SET_mmc1_cfg_port_END (6)
#define SOC_TZPC_TZPCDECPROT0SET_mmc2_cfg_port_START (7)
#define SOC_TZPC_TZPCDECPROT0SET_mmc2_cfg_port_END (7)
#define SOC_TZPC_TZPCDECPROT0SET_dsi_cfg_port_START (8)
#define SOC_TZPC_TZPCDECPROT0SET_dsi_cfg_port_END (8)
#define SOC_TZPC_TZPCDECPROT0SET_vdec_cfg_port_START (9)
#define SOC_TZPC_TZPCDECPROT0SET_vdec_cfg_port_END (9)
#define SOC_TZPC_TZPCDECPROT0SET_venc_cfg_port_START (10)
#define SOC_TZPC_TZPCDECPROT0SET_venc_cfg_port_END (10)
#define SOC_TZPC_TZPCDECPROT0SET_vpp_cfg_port_START (11)
#define SOC_TZPC_TZPCDECPROT0SET_vpp_cfg_port_END (11)
#define SOC_TZPC_TZPCDECPROT0SET_g3d_cfg_port_START (12)
#define SOC_TZPC_TZPCDECPROT0SET_g3d_cfg_port_END (12)
#define SOC_TZPC_TZPCDECPROT0SET_pwm0_cfg_port_START (13)
#define SOC_TZPC_TZPCDECPROT0SET_pwm0_cfg_port_END (13)
#define SOC_TZPC_TZPCDECPROT0SET_pwm1_cfg_port_START (14)
#define SOC_TZPC_TZPCDECPROT0SET_pwm1_cfg_port_END (14)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off4_cfg_port_START (15)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off4_cfg_port_END (15)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off5_cfg_port_START (16)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off5_cfg_port_END (16)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off6_cfg_port_START (17)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off6_cfg_port_END (17)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off7_cfg_port_START (18)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off7_cfg_port_END (18)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off8_cfg_port_START (19)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off8_cfg_port_END (19)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off9_cfg_port_START (20)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off9_cfg_port_END (20)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off10_cfg_port_START (21)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off10_cfg_port_END (21)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off11_cfg_port_START (22)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off11_cfg_port_END (22)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off12_cfg_port_START (23)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off12_cfg_port_END (23)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off13_cfg_port_START (24)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off13_cfg_port_END (24)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off14_cfg_port_START (25)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off14_cfg_port_END (25)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off15_cfg_port_START (26)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off15_cfg_port_END (26)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off16_cfg_port_START (27)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off16_cfg_port_END (27)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off17_cfg_port_START (28)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off17_cfg_port_END (28)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off18_cfg_port_START (29)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off18_cfg_port_END (29)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off19_cfg_port_START (30)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off19_cfg_port_END (30)
#define SOC_TZPC_TZPCDECPROT0SET_ioc_off_cfg_port_START (31)
#define SOC_TZPC_TZPCDECPROT0SET_ioc_off_cfg_port_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int g2d_cfg_port : 1;
        unsigned int sio0_cfg_port : 1;
        unsigned int sio1_cfg_port : 1;
        unsigned int sio2_cfg_port : 1;
        unsigned int sio3_cfg_port : 1;
        unsigned int mmc0_cfg_port : 1;
        unsigned int mmc1_cfg_port : 1;
        unsigned int mmc2_cfg_port : 1;
        unsigned int dsi_cfg_port : 1;
        unsigned int vdec_cfg_port : 1;
        unsigned int venc_cfg_port : 1;
        unsigned int vpp_cfg_port : 1;
        unsigned int g3d_cfg_port : 1;
        unsigned int pwm0_cfg_port : 1;
        unsigned int pwm1_cfg_port : 1;
        unsigned int gpio_off4_cfg_port : 1;
        unsigned int gpio_off5_cfg_port : 1;
        unsigned int gpio_off6_cfg_port : 1;
        unsigned int gpio_off7_cfg_port : 1;
        unsigned int gpio_off8_cfg_port : 1;
        unsigned int gpio_off9_cfg_port : 1;
        unsigned int gpio_off10_cfg_port : 1;
        unsigned int gpio_off11_cfg_port : 1;
        unsigned int gpio_off12_cfg_port : 1;
        unsigned int gpio_off13_cfg_port : 1;
        unsigned int gpio_off14_cfg_port : 1;
        unsigned int gpio_off15_cfg_port : 1;
        unsigned int gpio_off16_cfg_port : 1;
        unsigned int gpio_off17_cfg_port : 1;
        unsigned int gpio_off18_cfg_port : 1;
        unsigned int gpio_off19_cfg_port : 1;
        unsigned int ioc_off_cfg_port : 1;
    } reg;
} SOC_TZPC_TZPCDECPROT0CLR_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT0CLR_g2d_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT0CLR_g2d_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT0CLR_sio0_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT0CLR_sio0_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT0CLR_sio1_cfg_port_START (2)
#define SOC_TZPC_TZPCDECPROT0CLR_sio1_cfg_port_END (2)
#define SOC_TZPC_TZPCDECPROT0CLR_sio2_cfg_port_START (3)
#define SOC_TZPC_TZPCDECPROT0CLR_sio2_cfg_port_END (3)
#define SOC_TZPC_TZPCDECPROT0CLR_sio3_cfg_port_START (4)
#define SOC_TZPC_TZPCDECPROT0CLR_sio3_cfg_port_END (4)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc0_cfg_port_START (5)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc0_cfg_port_END (5)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc1_cfg_port_START (6)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc1_cfg_port_END (6)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc2_cfg_port_START (7)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc2_cfg_port_END (7)
#define SOC_TZPC_TZPCDECPROT0CLR_dsi_cfg_port_START (8)
#define SOC_TZPC_TZPCDECPROT0CLR_dsi_cfg_port_END (8)
#define SOC_TZPC_TZPCDECPROT0CLR_vdec_cfg_port_START (9)
#define SOC_TZPC_TZPCDECPROT0CLR_vdec_cfg_port_END (9)
#define SOC_TZPC_TZPCDECPROT0CLR_venc_cfg_port_START (10)
#define SOC_TZPC_TZPCDECPROT0CLR_venc_cfg_port_END (10)
#define SOC_TZPC_TZPCDECPROT0CLR_vpp_cfg_port_START (11)
#define SOC_TZPC_TZPCDECPROT0CLR_vpp_cfg_port_END (11)
#define SOC_TZPC_TZPCDECPROT0CLR_g3d_cfg_port_START (12)
#define SOC_TZPC_TZPCDECPROT0CLR_g3d_cfg_port_END (12)
#define SOC_TZPC_TZPCDECPROT0CLR_pwm0_cfg_port_START (13)
#define SOC_TZPC_TZPCDECPROT0CLR_pwm0_cfg_port_END (13)
#define SOC_TZPC_TZPCDECPROT0CLR_pwm1_cfg_port_START (14)
#define SOC_TZPC_TZPCDECPROT0CLR_pwm1_cfg_port_END (14)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off4_cfg_port_START (15)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off4_cfg_port_END (15)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off5_cfg_port_START (16)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off5_cfg_port_END (16)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off6_cfg_port_START (17)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off6_cfg_port_END (17)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off7_cfg_port_START (18)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off7_cfg_port_END (18)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off8_cfg_port_START (19)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off8_cfg_port_END (19)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off9_cfg_port_START (20)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off9_cfg_port_END (20)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off10_cfg_port_START (21)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off10_cfg_port_END (21)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off11_cfg_port_START (22)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off11_cfg_port_END (22)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off12_cfg_port_START (23)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off12_cfg_port_END (23)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off13_cfg_port_START (24)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off13_cfg_port_END (24)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off14_cfg_port_START (25)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off14_cfg_port_END (25)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off15_cfg_port_START (26)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off15_cfg_port_END (26)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off16_cfg_port_START (27)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off16_cfg_port_END (27)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off17_cfg_port_START (28)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off17_cfg_port_END (28)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off18_cfg_port_START (29)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off18_cfg_port_END (29)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off19_cfg_port_START (30)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off19_cfg_port_END (30)
#define SOC_TZPC_TZPCDECPROT0CLR_ioc_off_cfg_port_START (31)
#define SOC_TZPC_TZPCDECPROT0CLR_ioc_off_cfg_port_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tzasc_cfg_port : 1;
        unsigned int ddrc_cfg_port : 1;
        unsigned int i2c0_cfg_port : 1;
        unsigned int i2c1_cfg_port : 1;
        unsigned int i2c2_cfg_port : 1;
        unsigned int i2c3_cfg_port : 1;
        unsigned int i2c4_cfg_port : 1;
        unsigned int i2c5_cfg_port : 1;
        unsigned int uart0_cfg_port : 1;
        unsigned int uart1_cfg_port : 1;
        unsigned int uart2_cfg_port : 1;
        unsigned int uart3_cfg_port : 1;
        unsigned int uart4_cfg_port : 1;
        unsigned int uart5_cfg_port : 1;
        unsigned int uart6_cfg_port : 1;
        unsigned int ssp0_cfg_port : 1;
        unsigned int ssp1_cfg_port : 1;
        unsigned int asp_cfg_port : 1;
        unsigned int hifiitcm : 1;
        unsigned int hifidtcm : 1;
        unsigned int pmctrl_cfg_port : 1;
        unsigned int scoff_sec_ctrl : 1;
        unsigned int scoff_sec_ctrl_rd0 : 1;
        unsigned int scoff_sec_ctrl_rd1 : 1;
        unsigned int ap2mdm_tzasc_boot_lock : 1;
        unsigned int ddrc_tzasc_boot_lock : 1;
        unsigned int seceng_cfg_port : 2;
        unsigned int nandc_cfg_port : 1;
        unsigned int coresight_cfg_port : 1;
        unsigned int reserved : 2;
    } reg;
} SOC_TZPC_TZPCDECPROT1STAT_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT1STAT_tzasc_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT1STAT_tzasc_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT1STAT_ddrc_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT1STAT_ddrc_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c0_cfg_port_START (2)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c0_cfg_port_END (2)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c1_cfg_port_START (3)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c1_cfg_port_END (3)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c2_cfg_port_START (4)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c2_cfg_port_END (4)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c3_cfg_port_START (5)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c3_cfg_port_END (5)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c4_cfg_port_START (6)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c4_cfg_port_END (6)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c5_cfg_port_START (7)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c5_cfg_port_END (7)
#define SOC_TZPC_TZPCDECPROT1STAT_uart0_cfg_port_START (8)
#define SOC_TZPC_TZPCDECPROT1STAT_uart0_cfg_port_END (8)
#define SOC_TZPC_TZPCDECPROT1STAT_uart1_cfg_port_START (9)
#define SOC_TZPC_TZPCDECPROT1STAT_uart1_cfg_port_END (9)
#define SOC_TZPC_TZPCDECPROT1STAT_uart2_cfg_port_START (10)
#define SOC_TZPC_TZPCDECPROT1STAT_uart2_cfg_port_END (10)
#define SOC_TZPC_TZPCDECPROT1STAT_uart3_cfg_port_START (11)
#define SOC_TZPC_TZPCDECPROT1STAT_uart3_cfg_port_END (11)
#define SOC_TZPC_TZPCDECPROT1STAT_uart4_cfg_port_START (12)
#define SOC_TZPC_TZPCDECPROT1STAT_uart4_cfg_port_END (12)
#define SOC_TZPC_TZPCDECPROT1STAT_uart5_cfg_port_START (13)
#define SOC_TZPC_TZPCDECPROT1STAT_uart5_cfg_port_END (13)
#define SOC_TZPC_TZPCDECPROT1STAT_uart6_cfg_port_START (14)
#define SOC_TZPC_TZPCDECPROT1STAT_uart6_cfg_port_END (14)
#define SOC_TZPC_TZPCDECPROT1STAT_ssp0_cfg_port_START (15)
#define SOC_TZPC_TZPCDECPROT1STAT_ssp0_cfg_port_END (15)
#define SOC_TZPC_TZPCDECPROT1STAT_ssp1_cfg_port_START (16)
#define SOC_TZPC_TZPCDECPROT1STAT_ssp1_cfg_port_END (16)
#define SOC_TZPC_TZPCDECPROT1STAT_asp_cfg_port_START (17)
#define SOC_TZPC_TZPCDECPROT1STAT_asp_cfg_port_END (17)
#define SOC_TZPC_TZPCDECPROT1STAT_hifiitcm_START (18)
#define SOC_TZPC_TZPCDECPROT1STAT_hifiitcm_END (18)
#define SOC_TZPC_TZPCDECPROT1STAT_hifidtcm_START (19)
#define SOC_TZPC_TZPCDECPROT1STAT_hifidtcm_END (19)
#define SOC_TZPC_TZPCDECPROT1STAT_pmctrl_cfg_port_START (20)
#define SOC_TZPC_TZPCDECPROT1STAT_pmctrl_cfg_port_END (20)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_START (21)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_END (21)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_rd0_START (22)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_rd0_END (22)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_rd1_START (23)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_rd1_END (23)
#define SOC_TZPC_TZPCDECPROT1STAT_ap2mdm_tzasc_boot_lock_START (24)
#define SOC_TZPC_TZPCDECPROT1STAT_ap2mdm_tzasc_boot_lock_END (24)
#define SOC_TZPC_TZPCDECPROT1STAT_ddrc_tzasc_boot_lock_START (25)
#define SOC_TZPC_TZPCDECPROT1STAT_ddrc_tzasc_boot_lock_END (25)
#define SOC_TZPC_TZPCDECPROT1STAT_seceng_cfg_port_START (26)
#define SOC_TZPC_TZPCDECPROT1STAT_seceng_cfg_port_END (27)
#define SOC_TZPC_TZPCDECPROT1STAT_nandc_cfg_port_START (28)
#define SOC_TZPC_TZPCDECPROT1STAT_nandc_cfg_port_END (28)
#define SOC_TZPC_TZPCDECPROT1STAT_coresight_cfg_port_START (29)
#define SOC_TZPC_TZPCDECPROT1STAT_coresight_cfg_port_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tzasc_cfg_port : 1;
        unsigned int ddrc_cfg_port : 1;
        unsigned int i2c0_cfg_port : 1;
        unsigned int i2c1_cfg_port : 1;
        unsigned int i2c2_cfg_port : 1;
        unsigned int i2c3_cfg_port : 1;
        unsigned int i2c4_cfg_port : 1;
        unsigned int i2c5_cfg_port : 1;
        unsigned int uart0_cfg_port : 1;
        unsigned int uart1_cfg_port : 1;
        unsigned int uart2_cfg_port : 1;
        unsigned int uart3_cfg_port : 1;
        unsigned int uart4_cfg_port : 1;
        unsigned int uart5_cfg_port : 1;
        unsigned int uart6_cfg_port : 1;
        unsigned int ssp0_cfg_port : 1;
        unsigned int ssp1_cfg_port : 1;
        unsigned int asp_cfg_port : 1;
        unsigned int hifiitcm : 1;
        unsigned int hifidtcm : 1;
        unsigned int pmctrl_cfg_port : 1;
        unsigned int scoff_sec_ctrl : 1;
        unsigned int scoff_sec_ctrl_rd0 : 1;
        unsigned int scoff_sec_ctrl_rd1 : 1;
        unsigned int ap2mdm_tzasc_boot_lock : 1;
        unsigned int ddrc_tzasc_boot_lock : 1;
        unsigned int seceng_cfg_port : 2;
        unsigned int nandc_cfg_port : 1;
        unsigned int coresight_cfg_port : 1;
        unsigned int reserved : 2;
    } reg;
} SOC_TZPC_TZPCDECPROT1SET_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT1SET_tzasc_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT1SET_tzasc_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT1SET_ddrc_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT1SET_ddrc_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT1SET_i2c0_cfg_port_START (2)
#define SOC_TZPC_TZPCDECPROT1SET_i2c0_cfg_port_END (2)
#define SOC_TZPC_TZPCDECPROT1SET_i2c1_cfg_port_START (3)
#define SOC_TZPC_TZPCDECPROT1SET_i2c1_cfg_port_END (3)
#define SOC_TZPC_TZPCDECPROT1SET_i2c2_cfg_port_START (4)
#define SOC_TZPC_TZPCDECPROT1SET_i2c2_cfg_port_END (4)
#define SOC_TZPC_TZPCDECPROT1SET_i2c3_cfg_port_START (5)
#define SOC_TZPC_TZPCDECPROT1SET_i2c3_cfg_port_END (5)
#define SOC_TZPC_TZPCDECPROT1SET_i2c4_cfg_port_START (6)
#define SOC_TZPC_TZPCDECPROT1SET_i2c4_cfg_port_END (6)
#define SOC_TZPC_TZPCDECPROT1SET_i2c5_cfg_port_START (7)
#define SOC_TZPC_TZPCDECPROT1SET_i2c5_cfg_port_END (7)
#define SOC_TZPC_TZPCDECPROT1SET_uart0_cfg_port_START (8)
#define SOC_TZPC_TZPCDECPROT1SET_uart0_cfg_port_END (8)
#define SOC_TZPC_TZPCDECPROT1SET_uart1_cfg_port_START (9)
#define SOC_TZPC_TZPCDECPROT1SET_uart1_cfg_port_END (9)
#define SOC_TZPC_TZPCDECPROT1SET_uart2_cfg_port_START (10)
#define SOC_TZPC_TZPCDECPROT1SET_uart2_cfg_port_END (10)
#define SOC_TZPC_TZPCDECPROT1SET_uart3_cfg_port_START (11)
#define SOC_TZPC_TZPCDECPROT1SET_uart3_cfg_port_END (11)
#define SOC_TZPC_TZPCDECPROT1SET_uart4_cfg_port_START (12)
#define SOC_TZPC_TZPCDECPROT1SET_uart4_cfg_port_END (12)
#define SOC_TZPC_TZPCDECPROT1SET_uart5_cfg_port_START (13)
#define SOC_TZPC_TZPCDECPROT1SET_uart5_cfg_port_END (13)
#define SOC_TZPC_TZPCDECPROT1SET_uart6_cfg_port_START (14)
#define SOC_TZPC_TZPCDECPROT1SET_uart6_cfg_port_END (14)
#define SOC_TZPC_TZPCDECPROT1SET_ssp0_cfg_port_START (15)
#define SOC_TZPC_TZPCDECPROT1SET_ssp0_cfg_port_END (15)
#define SOC_TZPC_TZPCDECPROT1SET_ssp1_cfg_port_START (16)
#define SOC_TZPC_TZPCDECPROT1SET_ssp1_cfg_port_END (16)
#define SOC_TZPC_TZPCDECPROT1SET_asp_cfg_port_START (17)
#define SOC_TZPC_TZPCDECPROT1SET_asp_cfg_port_END (17)
#define SOC_TZPC_TZPCDECPROT1SET_hifiitcm_START (18)
#define SOC_TZPC_TZPCDECPROT1SET_hifiitcm_END (18)
#define SOC_TZPC_TZPCDECPROT1SET_hifidtcm_START (19)
#define SOC_TZPC_TZPCDECPROT1SET_hifidtcm_END (19)
#define SOC_TZPC_TZPCDECPROT1SET_pmctrl_cfg_port_START (20)
#define SOC_TZPC_TZPCDECPROT1SET_pmctrl_cfg_port_END (20)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_START (21)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_END (21)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_rd0_START (22)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_rd0_END (22)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_rd1_START (23)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_rd1_END (23)
#define SOC_TZPC_TZPCDECPROT1SET_ap2mdm_tzasc_boot_lock_START (24)
#define SOC_TZPC_TZPCDECPROT1SET_ap2mdm_tzasc_boot_lock_END (24)
#define SOC_TZPC_TZPCDECPROT1SET_ddrc_tzasc_boot_lock_START (25)
#define SOC_TZPC_TZPCDECPROT1SET_ddrc_tzasc_boot_lock_END (25)
#define SOC_TZPC_TZPCDECPROT1SET_seceng_cfg_port_START (26)
#define SOC_TZPC_TZPCDECPROT1SET_seceng_cfg_port_END (27)
#define SOC_TZPC_TZPCDECPROT1SET_nandc_cfg_port_START (28)
#define SOC_TZPC_TZPCDECPROT1SET_nandc_cfg_port_END (28)
#define SOC_TZPC_TZPCDECPROT1SET_coresight_cfg_port_START (29)
#define SOC_TZPC_TZPCDECPROT1SET_coresight_cfg_port_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tzasc_cfg_port : 1;
        unsigned int ddrc_cfg_port : 1;
        unsigned int i2c0_cfg_port : 1;
        unsigned int i2c1_cfg_port : 1;
        unsigned int i2c2_cfg_port : 1;
        unsigned int i2c3_cfg_port : 1;
        unsigned int i2c4_cfg_port : 1;
        unsigned int i2c5_cfg_port : 1;
        unsigned int uart0_cfg_port : 1;
        unsigned int uart1_cfg_port : 1;
        unsigned int uart2_cfg_port : 1;
        unsigned int uart3_cfg_port : 1;
        unsigned int uart4_cfg_port : 1;
        unsigned int uart5_cfg_port : 1;
        unsigned int uart6_cfg_port : 1;
        unsigned int ssp0_cfg_port : 1;
        unsigned int ssp1_cfg_port : 1;
        unsigned int asp_cfg_port : 1;
        unsigned int hifiitcm : 1;
        unsigned int hifidtcm : 1;
        unsigned int pmctrl_cfg_port : 1;
        unsigned int scoff_sec_ctrl : 1;
        unsigned int scoff_sec_ctrl_rd0 : 1;
        unsigned int scoff_sec_ctrl_rd1 : 1;
        unsigned int ap2mdm_tzasc_boot_lock : 1;
        unsigned int ddrc_tzasc_boot_lock : 1;
        unsigned int seceng_cfg_port : 2;
        unsigned int nandc_cfg_port : 1;
        unsigned int coresight_cfg_port : 1;
        unsigned int reserved : 2;
    } reg;
} SOC_TZPC_TZPCDECPROT1CLR_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT1CLR_tzasc_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT1CLR_tzasc_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT1CLR_ddrc_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT1CLR_ddrc_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c0_cfg_port_START (2)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c0_cfg_port_END (2)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c1_cfg_port_START (3)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c1_cfg_port_END (3)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c2_cfg_port_START (4)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c2_cfg_port_END (4)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c3_cfg_port_START (5)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c3_cfg_port_END (5)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c4_cfg_port_START (6)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c4_cfg_port_END (6)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c5_cfg_port_START (7)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c5_cfg_port_END (7)
#define SOC_TZPC_TZPCDECPROT1CLR_uart0_cfg_port_START (8)
#define SOC_TZPC_TZPCDECPROT1CLR_uart0_cfg_port_END (8)
#define SOC_TZPC_TZPCDECPROT1CLR_uart1_cfg_port_START (9)
#define SOC_TZPC_TZPCDECPROT1CLR_uart1_cfg_port_END (9)
#define SOC_TZPC_TZPCDECPROT1CLR_uart2_cfg_port_START (10)
#define SOC_TZPC_TZPCDECPROT1CLR_uart2_cfg_port_END (10)
#define SOC_TZPC_TZPCDECPROT1CLR_uart3_cfg_port_START (11)
#define SOC_TZPC_TZPCDECPROT1CLR_uart3_cfg_port_END (11)
#define SOC_TZPC_TZPCDECPROT1CLR_uart4_cfg_port_START (12)
#define SOC_TZPC_TZPCDECPROT1CLR_uart4_cfg_port_END (12)
#define SOC_TZPC_TZPCDECPROT1CLR_uart5_cfg_port_START (13)
#define SOC_TZPC_TZPCDECPROT1CLR_uart5_cfg_port_END (13)
#define SOC_TZPC_TZPCDECPROT1CLR_uart6_cfg_port_START (14)
#define SOC_TZPC_TZPCDECPROT1CLR_uart6_cfg_port_END (14)
#define SOC_TZPC_TZPCDECPROT1CLR_ssp0_cfg_port_START (15)
#define SOC_TZPC_TZPCDECPROT1CLR_ssp0_cfg_port_END (15)
#define SOC_TZPC_TZPCDECPROT1CLR_ssp1_cfg_port_START (16)
#define SOC_TZPC_TZPCDECPROT1CLR_ssp1_cfg_port_END (16)
#define SOC_TZPC_TZPCDECPROT1CLR_asp_cfg_port_START (17)
#define SOC_TZPC_TZPCDECPROT1CLR_asp_cfg_port_END (17)
#define SOC_TZPC_TZPCDECPROT1CLR_hifiitcm_START (18)
#define SOC_TZPC_TZPCDECPROT1CLR_hifiitcm_END (18)
#define SOC_TZPC_TZPCDECPROT1CLR_hifidtcm_START (19)
#define SOC_TZPC_TZPCDECPROT1CLR_hifidtcm_END (19)
#define SOC_TZPC_TZPCDECPROT1CLR_pmctrl_cfg_port_START (20)
#define SOC_TZPC_TZPCDECPROT1CLR_pmctrl_cfg_port_END (20)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_START (21)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_END (21)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_rd0_START (22)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_rd0_END (22)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_rd1_START (23)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_rd1_END (23)
#define SOC_TZPC_TZPCDECPROT1CLR_ap2mdm_tzasc_boot_lock_START (24)
#define SOC_TZPC_TZPCDECPROT1CLR_ap2mdm_tzasc_boot_lock_END (24)
#define SOC_TZPC_TZPCDECPROT1CLR_ddrc_tzasc_boot_lock_START (25)
#define SOC_TZPC_TZPCDECPROT1CLR_ddrc_tzasc_boot_lock_END (25)
#define SOC_TZPC_TZPCDECPROT1CLR_seceng_cfg_port_START (26)
#define SOC_TZPC_TZPCDECPROT1CLR_seceng_cfg_port_END (27)
#define SOC_TZPC_TZPCDECPROT1CLR_nandc_cfg_port_START (28)
#define SOC_TZPC_TZPCDECPROT1CLR_nandc_cfg_port_END (28)
#define SOC_TZPC_TZPCDECPROT1CLR_coresight_cfg_port_START (29)
#define SOC_TZPC_TZPCDECPROT1CLR_coresight_cfg_port_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int watch_dog_0_cfg_port : 1;
        unsigned int watch_dog_1_cfg_port : 1;
        unsigned int watch_dog_2_cfg_port : 1;
        unsigned int watch_dog_3_cfg_port : 1;
        unsigned int timer0_cfg_port : 1;
        unsigned int timer1_cfg_port : 1;
        unsigned int timer2_cfg_port : 1;
        unsigned int timer3_cfg_port : 1;
        unsigned int timer4_cfg_port : 1;
        unsigned int timer5_cfg_port : 1;
        unsigned int timer6_cfg_port : 1;
        unsigned int timer7_cfg_port : 1;
        unsigned int timer8_cfg_port : 1;
        unsigned int rtc_cfg_port : 1;
        unsigned int bbp_on_cfg_port : 1;
        unsigned int mtimer0_cfg_port : 1;
        unsigned int mtimer1_cfg_port : 1;
        unsigned int mtimer2_cfg_port : 1;
        unsigned int mtimer3_cfg_port : 1;
        unsigned int mtimer4_cfg_port : 1;
        unsigned int mtimer5_cfg_port : 1;
        unsigned int mtimer6_cfg_port : 1;
        unsigned int mtimer7_cfg_port : 1;
        unsigned int mtimer8_cfg_port : 1;
        unsigned int mtimer9_cfg_port : 1;
        unsigned int pmussi_cfg_port : 1;
        unsigned int ioc_on_cfg_port : 1;
        unsigned int gpio_on0_cfg_port : 1;
        unsigned int gpio_on1_cfg_port : 1;
        unsigned int gpio_on2_cfg_port : 1;
        unsigned int gpio_on3_cfg_port : 1;
        unsigned int mcu_subsys_cfg_port : 1;
    } reg;
} SOC_TZPC_TZPCDECPROT2STAT_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_0_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_0_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_1_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_1_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_2_cfg_port_START (2)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_2_cfg_port_END (2)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_3_cfg_port_START (3)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_3_cfg_port_END (3)
#define SOC_TZPC_TZPCDECPROT2STAT_timer0_cfg_port_START (4)
#define SOC_TZPC_TZPCDECPROT2STAT_timer0_cfg_port_END (4)
#define SOC_TZPC_TZPCDECPROT2STAT_timer1_cfg_port_START (5)
#define SOC_TZPC_TZPCDECPROT2STAT_timer1_cfg_port_END (5)
#define SOC_TZPC_TZPCDECPROT2STAT_timer2_cfg_port_START (6)
#define SOC_TZPC_TZPCDECPROT2STAT_timer2_cfg_port_END (6)
#define SOC_TZPC_TZPCDECPROT2STAT_timer3_cfg_port_START (7)
#define SOC_TZPC_TZPCDECPROT2STAT_timer3_cfg_port_END (7)
#define SOC_TZPC_TZPCDECPROT2STAT_timer4_cfg_port_START (8)
#define SOC_TZPC_TZPCDECPROT2STAT_timer4_cfg_port_END (8)
#define SOC_TZPC_TZPCDECPROT2STAT_timer5_cfg_port_START (9)
#define SOC_TZPC_TZPCDECPROT2STAT_timer5_cfg_port_END (9)
#define SOC_TZPC_TZPCDECPROT2STAT_timer6_cfg_port_START (10)
#define SOC_TZPC_TZPCDECPROT2STAT_timer6_cfg_port_END (10)
#define SOC_TZPC_TZPCDECPROT2STAT_timer7_cfg_port_START (11)
#define SOC_TZPC_TZPCDECPROT2STAT_timer7_cfg_port_END (11)
#define SOC_TZPC_TZPCDECPROT2STAT_timer8_cfg_port_START (12)
#define SOC_TZPC_TZPCDECPROT2STAT_timer8_cfg_port_END (12)
#define SOC_TZPC_TZPCDECPROT2STAT_rtc_cfg_port_START (13)
#define SOC_TZPC_TZPCDECPROT2STAT_rtc_cfg_port_END (13)
#define SOC_TZPC_TZPCDECPROT2STAT_bbp_on_cfg_port_START (14)
#define SOC_TZPC_TZPCDECPROT2STAT_bbp_on_cfg_port_END (14)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer0_cfg_port_START (15)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer0_cfg_port_END (15)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer1_cfg_port_START (16)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer1_cfg_port_END (16)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer2_cfg_port_START (17)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer2_cfg_port_END (17)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer3_cfg_port_START (18)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer3_cfg_port_END (18)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer4_cfg_port_START (19)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer4_cfg_port_END (19)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer5_cfg_port_START (20)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer5_cfg_port_END (20)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer6_cfg_port_START (21)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer6_cfg_port_END (21)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer7_cfg_port_START (22)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer7_cfg_port_END (22)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer8_cfg_port_START (23)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer8_cfg_port_END (23)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer9_cfg_port_START (24)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer9_cfg_port_END (24)
#define SOC_TZPC_TZPCDECPROT2STAT_pmussi_cfg_port_START (25)
#define SOC_TZPC_TZPCDECPROT2STAT_pmussi_cfg_port_END (25)
#define SOC_TZPC_TZPCDECPROT2STAT_ioc_on_cfg_port_START (26)
#define SOC_TZPC_TZPCDECPROT2STAT_ioc_on_cfg_port_END (26)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on0_cfg_port_START (27)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on0_cfg_port_END (27)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on1_cfg_port_START (28)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on1_cfg_port_END (28)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on2_cfg_port_START (29)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on2_cfg_port_END (29)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on3_cfg_port_START (30)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on3_cfg_port_END (30)
#define SOC_TZPC_TZPCDECPROT2STAT_mcu_subsys_cfg_port_START (31)
#define SOC_TZPC_TZPCDECPROT2STAT_mcu_subsys_cfg_port_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int watch_dog_0_cfg_port : 1;
        unsigned int watch_dog_1_cfg_port : 1;
        unsigned int watch_dog_2_cfg_port : 1;
        unsigned int watch_dog_3_cfg_port : 1;
        unsigned int timer0_cfg_port : 1;
        unsigned int timer1_cfg_port : 1;
        unsigned int timer2_cfg_port : 1;
        unsigned int timer3_cfg_port : 1;
        unsigned int timer4_cfg_port : 1;
        unsigned int timer5_cfg_port : 1;
        unsigned int timer6_cfg_port : 1;
        unsigned int timer7_cfg_port : 1;
        unsigned int timer8_cfg_port : 1;
        unsigned int rtc_cfg_port : 1;
        unsigned int bbp_on_cfg_port : 1;
        unsigned int mtimer0_cfg_port : 1;
        unsigned int mtimer1_cfg_port : 1;
        unsigned int mtimer2_cfg_port : 1;
        unsigned int mtimer3_cfg_port : 1;
        unsigned int mtimer4_cfg_port : 1;
        unsigned int mtimer5_cfg_port : 1;
        unsigned int mtimer6_cfg_port : 1;
        unsigned int mtimer7_cfg_port : 1;
        unsigned int mtimer8_cfg_port : 1;
        unsigned int mtimer9_cfg_port : 1;
        unsigned int pmussi_cfg_port : 1;
        unsigned int ioc_on_cfg_port : 1;
        unsigned int gpio_on0_cfg_port : 1;
        unsigned int gpio_on1_cfg_port : 1;
        unsigned int gpio_on2_cfg_port : 1;
        unsigned int gpio_on3_cfg_port : 1;
        unsigned int mcu_subsys_cfg_port : 1;
    } reg;
} SOC_TZPC_TZPCDECPROT2SET_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_0_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_0_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_1_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_1_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_2_cfg_port_START (2)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_2_cfg_port_END (2)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_3_cfg_port_START (3)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_3_cfg_port_END (3)
#define SOC_TZPC_TZPCDECPROT2SET_timer0_cfg_port_START (4)
#define SOC_TZPC_TZPCDECPROT2SET_timer0_cfg_port_END (4)
#define SOC_TZPC_TZPCDECPROT2SET_timer1_cfg_port_START (5)
#define SOC_TZPC_TZPCDECPROT2SET_timer1_cfg_port_END (5)
#define SOC_TZPC_TZPCDECPROT2SET_timer2_cfg_port_START (6)
#define SOC_TZPC_TZPCDECPROT2SET_timer2_cfg_port_END (6)
#define SOC_TZPC_TZPCDECPROT2SET_timer3_cfg_port_START (7)
#define SOC_TZPC_TZPCDECPROT2SET_timer3_cfg_port_END (7)
#define SOC_TZPC_TZPCDECPROT2SET_timer4_cfg_port_START (8)
#define SOC_TZPC_TZPCDECPROT2SET_timer4_cfg_port_END (8)
#define SOC_TZPC_TZPCDECPROT2SET_timer5_cfg_port_START (9)
#define SOC_TZPC_TZPCDECPROT2SET_timer5_cfg_port_END (9)
#define SOC_TZPC_TZPCDECPROT2SET_timer6_cfg_port_START (10)
#define SOC_TZPC_TZPCDECPROT2SET_timer6_cfg_port_END (10)
#define SOC_TZPC_TZPCDECPROT2SET_timer7_cfg_port_START (11)
#define SOC_TZPC_TZPCDECPROT2SET_timer7_cfg_port_END (11)
#define SOC_TZPC_TZPCDECPROT2SET_timer8_cfg_port_START (12)
#define SOC_TZPC_TZPCDECPROT2SET_timer8_cfg_port_END (12)
#define SOC_TZPC_TZPCDECPROT2SET_rtc_cfg_port_START (13)
#define SOC_TZPC_TZPCDECPROT2SET_rtc_cfg_port_END (13)
#define SOC_TZPC_TZPCDECPROT2SET_bbp_on_cfg_port_START (14)
#define SOC_TZPC_TZPCDECPROT2SET_bbp_on_cfg_port_END (14)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer0_cfg_port_START (15)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer0_cfg_port_END (15)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer1_cfg_port_START (16)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer1_cfg_port_END (16)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer2_cfg_port_START (17)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer2_cfg_port_END (17)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer3_cfg_port_START (18)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer3_cfg_port_END (18)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer4_cfg_port_START (19)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer4_cfg_port_END (19)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer5_cfg_port_START (20)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer5_cfg_port_END (20)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer6_cfg_port_START (21)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer6_cfg_port_END (21)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer7_cfg_port_START (22)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer7_cfg_port_END (22)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer8_cfg_port_START (23)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer8_cfg_port_END (23)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer9_cfg_port_START (24)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer9_cfg_port_END (24)
#define SOC_TZPC_TZPCDECPROT2SET_pmussi_cfg_port_START (25)
#define SOC_TZPC_TZPCDECPROT2SET_pmussi_cfg_port_END (25)
#define SOC_TZPC_TZPCDECPROT2SET_ioc_on_cfg_port_START (26)
#define SOC_TZPC_TZPCDECPROT2SET_ioc_on_cfg_port_END (26)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on0_cfg_port_START (27)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on0_cfg_port_END (27)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on1_cfg_port_START (28)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on1_cfg_port_END (28)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on2_cfg_port_START (29)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on2_cfg_port_END (29)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on3_cfg_port_START (30)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on3_cfg_port_END (30)
#define SOC_TZPC_TZPCDECPROT2SET_mcu_subsys_cfg_port_START (31)
#define SOC_TZPC_TZPCDECPROT2SET_mcu_subsys_cfg_port_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int watch_dog_0_cfg_port : 1;
        unsigned int watch_dog_1_cfg_port : 1;
        unsigned int watch_dog_2_cfg_port : 1;
        unsigned int watch_dog_3_cfg_port : 1;
        unsigned int timer0_cfg_port : 1;
        unsigned int timer1_cfg_port : 1;
        unsigned int timer2_cfg_port : 1;
        unsigned int timer3_cfg_port : 1;
        unsigned int timer4_cfg_port : 1;
        unsigned int timer5_cfg_port : 1;
        unsigned int timer6_cfg_port : 1;
        unsigned int timer7_cfg_port : 1;
        unsigned int timer8_cfg_port : 1;
        unsigned int rtc_cfg_port : 1;
        unsigned int bbp_on_cfg_port : 1;
        unsigned int mtimer0_cfg_port : 1;
        unsigned int mtimer1_cfg_port : 1;
        unsigned int mtimer2_cfg_port : 1;
        unsigned int mtimer3_cfg_port : 1;
        unsigned int mtimer4_cfg_port : 1;
        unsigned int mtimer5_cfg_port : 1;
        unsigned int mtimer6_cfg_port : 1;
        unsigned int mtimer7_cfg_port : 1;
        unsigned int mtimer8_cfg_port : 1;
        unsigned int mtimer9_cfg_port : 1;
        unsigned int pmussi_cfg_port : 1;
        unsigned int ioc_on_cfg_port : 1;
        unsigned int gpio_on0_cfg_port : 1;
        unsigned int gpio_on1_cfg_port : 1;
        unsigned int gpio_on2_cfg_port : 1;
        unsigned int gpio_on3_cfg_port : 1;
        unsigned int mcu_subsys_cfg_port : 1;
    } reg;
} SOC_TZPC_TZPCDECPROT2CLR_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_0_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_0_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_1_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_1_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_2_cfg_port_START (2)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_2_cfg_port_END (2)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_3_cfg_port_START (3)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_3_cfg_port_END (3)
#define SOC_TZPC_TZPCDECPROT2CLR_timer0_cfg_port_START (4)
#define SOC_TZPC_TZPCDECPROT2CLR_timer0_cfg_port_END (4)
#define SOC_TZPC_TZPCDECPROT2CLR_timer1_cfg_port_START (5)
#define SOC_TZPC_TZPCDECPROT2CLR_timer1_cfg_port_END (5)
#define SOC_TZPC_TZPCDECPROT2CLR_timer2_cfg_port_START (6)
#define SOC_TZPC_TZPCDECPROT2CLR_timer2_cfg_port_END (6)
#define SOC_TZPC_TZPCDECPROT2CLR_timer3_cfg_port_START (7)
#define SOC_TZPC_TZPCDECPROT2CLR_timer3_cfg_port_END (7)
#define SOC_TZPC_TZPCDECPROT2CLR_timer4_cfg_port_START (8)
#define SOC_TZPC_TZPCDECPROT2CLR_timer4_cfg_port_END (8)
#define SOC_TZPC_TZPCDECPROT2CLR_timer5_cfg_port_START (9)
#define SOC_TZPC_TZPCDECPROT2CLR_timer5_cfg_port_END (9)
#define SOC_TZPC_TZPCDECPROT2CLR_timer6_cfg_port_START (10)
#define SOC_TZPC_TZPCDECPROT2CLR_timer6_cfg_port_END (10)
#define SOC_TZPC_TZPCDECPROT2CLR_timer7_cfg_port_START (11)
#define SOC_TZPC_TZPCDECPROT2CLR_timer7_cfg_port_END (11)
#define SOC_TZPC_TZPCDECPROT2CLR_timer8_cfg_port_START (12)
#define SOC_TZPC_TZPCDECPROT2CLR_timer8_cfg_port_END (12)
#define SOC_TZPC_TZPCDECPROT2CLR_rtc_cfg_port_START (13)
#define SOC_TZPC_TZPCDECPROT2CLR_rtc_cfg_port_END (13)
#define SOC_TZPC_TZPCDECPROT2CLR_bbp_on_cfg_port_START (14)
#define SOC_TZPC_TZPCDECPROT2CLR_bbp_on_cfg_port_END (14)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer0_cfg_port_START (15)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer0_cfg_port_END (15)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer1_cfg_port_START (16)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer1_cfg_port_END (16)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer2_cfg_port_START (17)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer2_cfg_port_END (17)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer3_cfg_port_START (18)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer3_cfg_port_END (18)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer4_cfg_port_START (19)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer4_cfg_port_END (19)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer5_cfg_port_START (20)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer5_cfg_port_END (20)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer6_cfg_port_START (21)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer6_cfg_port_END (21)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer7_cfg_port_START (22)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer7_cfg_port_END (22)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer8_cfg_port_START (23)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer8_cfg_port_END (23)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer9_cfg_port_START (24)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer9_cfg_port_END (24)
#define SOC_TZPC_TZPCDECPROT2CLR_pmussi_cfg_port_START (25)
#define SOC_TZPC_TZPCDECPROT2CLR_pmussi_cfg_port_END (25)
#define SOC_TZPC_TZPCDECPROT2CLR_ioc_on_cfg_port_START (26)
#define SOC_TZPC_TZPCDECPROT2CLR_ioc_on_cfg_port_END (26)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on0_cfg_port_START (27)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on0_cfg_port_END (27)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on1_cfg_port_START (28)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on1_cfg_port_END (28)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on2_cfg_port_START (29)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on2_cfg_port_END (29)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on3_cfg_port_START (30)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on3_cfg_port_END (30)
#define SOC_TZPC_TZPCDECPROT2CLR_mcu_subsys_cfg_port_START (31)
#define SOC_TZPC_TZPCDECPROT2CLR_mcu_subsys_cfg_port_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sci0_cfg_port : 1;
        unsigned int sci1_cfg_port : 1;
        unsigned int sram_on_slave_port : 1;
        unsigned int scon_sec_ctrl : 1;
        unsigned int scon_sec_ctrl_rd0 : 1;
        unsigned int scon_sec_ctrl_rd1 : 1;
        unsigned int sec_cfg_edc0 : 8;
        unsigned int sec_cfg_dsi : 1;
        unsigned int sec_cfg_hdmi : 5;
        unsigned int sec_cfg_edc1 : 7;
        unsigned int ipc_sec_cfg_port : 1;
        unsigned int reserved : 4;
    } reg;
} SOC_TZPC_TZPCDECPROT3STAT_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT3STAT_sci0_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT3STAT_sci0_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT3STAT_sci1_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT3STAT_sci1_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT3STAT_sram_on_slave_port_START (2)
#define SOC_TZPC_TZPCDECPROT3STAT_sram_on_slave_port_END (2)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_START (3)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_END (3)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_rd0_START (4)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_rd0_END (4)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_rd1_START (5)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_rd1_END (5)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_edc0_START (6)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_edc0_END (13)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_dsi_START (14)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_dsi_END (14)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_hdmi_START (15)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_hdmi_END (19)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_edc1_START (20)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_edc1_END (26)
#define SOC_TZPC_TZPCDECPROT3STAT_ipc_sec_cfg_port_START (27)
#define SOC_TZPC_TZPCDECPROT3STAT_ipc_sec_cfg_port_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sci0_cfg_port : 1;
        unsigned int sci1_cfg_port : 1;
        unsigned int sram_on_slave_port : 1;
        unsigned int scon_sec_ctrl : 1;
        unsigned int scon_sec_ctrl_rd0 : 1;
        unsigned int scon_sec_ctrl_rd1 : 1;
        unsigned int sec_cfg_edc0 : 8;
        unsigned int sec_cfg_dsi : 1;
        unsigned int sec_cfg_hdmi : 5;
        unsigned int sec_cfg_edc1 : 7;
        unsigned int ipc_sec_cfg_port : 1;
        unsigned int reserved : 4;
    } reg;
} SOC_TZPC_TZPCDECPROT3SET_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT3SET_sci0_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT3SET_sci0_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT3SET_sci1_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT3SET_sci1_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT3SET_sram_on_slave_port_START (2)
#define SOC_TZPC_TZPCDECPROT3SET_sram_on_slave_port_END (2)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_START (3)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_END (3)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_rd0_START (4)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_rd0_END (4)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_rd1_START (5)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_rd1_END (5)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_edc0_START (6)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_edc0_END (13)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_dsi_START (14)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_dsi_END (14)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_hdmi_START (15)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_hdmi_END (19)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_edc1_START (20)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_edc1_END (26)
#define SOC_TZPC_TZPCDECPROT3SET_ipc_sec_cfg_port_START (27)
#define SOC_TZPC_TZPCDECPROT3SET_ipc_sec_cfg_port_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sci0_cfg_port : 1;
        unsigned int sci1_cfg_port : 1;
        unsigned int sram_on_slave_port : 1;
        unsigned int scon_sec_ctrl : 1;
        unsigned int scon_sec_ctrl_rd0 : 1;
        unsigned int scon_sec_ctrl_rd1 : 1;
        unsigned int sec_cfg_edc0 : 8;
        unsigned int sec_cfg_dsi : 1;
        unsigned int sec_cfg_hdmi : 5;
        unsigned int sec_cfg_edc1 : 7;
        unsigned int ipc_sec_cfg_port : 1;
        unsigned int reserved : 4;
    } reg;
} SOC_TZPC_TZPCDECPROT3CLR_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT3CLR_sci0_cfg_port_START (0)
#define SOC_TZPC_TZPCDECPROT3CLR_sci0_cfg_port_END (0)
#define SOC_TZPC_TZPCDECPROT3CLR_sci1_cfg_port_START (1)
#define SOC_TZPC_TZPCDECPROT3CLR_sci1_cfg_port_END (1)
#define SOC_TZPC_TZPCDECPROT3CLR_sram_on_slave_port_START (2)
#define SOC_TZPC_TZPCDECPROT3CLR_sram_on_slave_port_END (2)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_START (3)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_END (3)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_rd0_START (4)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_rd0_END (4)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_rd1_START (5)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_rd1_END (5)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_edc0_START (6)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_edc0_END (13)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_dsi_START (14)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_dsi_END (14)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_hdmi_START (15)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_hdmi_END (19)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_edc1_START (20)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_edc1_END (26)
#define SOC_TZPC_TZPCDECPROT3CLR_ipc_sec_cfg_port_START (27)
#define SOC_TZPC_TZPCDECPROT3CLR_ipc_sec_cfg_port_END (27)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
