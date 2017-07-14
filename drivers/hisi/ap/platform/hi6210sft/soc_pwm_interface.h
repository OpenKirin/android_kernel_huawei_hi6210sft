#ifndef __SOC_PWM_INTERFACE_H__
#define __SOC_PWM_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_PWM_LOCK_ADDR(base) ((base) + (0x000))
#define SOC_PWM_CTL_ADDR(base) ((base) + (0x004))
#define SOC_PWM_CFG_ADDR(base) ((base) + (0x008))
#define SOC_PWM_LPIF_STATE_ADDR(base) ((base) + (0x020))
#define SOC_PWM_STATUS_ADDR(base) ((base) + (0x0024))
#define SOC_PWM_PR0_ADDR(base) ((base) + (0x0100))
#define SOC_PWM_PR1_ADDR(base) ((base) + (0x0104))
#define SOC_PWM_PCNT0_ADDR(base) ((base) + (0x0108))
#define SOC_PWM_PCNT1_ADDR(base) ((base) + (0x010C))
#define SOC_PWM_RIS_ADDR(base) ((base) + (0x200))
#define SOC_PWM_MSK_ADDR(base) ((base) + (0x204))
#define SOC_PWM_EOI_ADDR(base) ((base) + (0x208))
#define SOC_PWM_INT_ADDR(base) ((base) + (0x20C))
#define SOC_PWM_C0_MR_ADDR(base) ((base) + (0x0300))
#define SOC_PWM_C1_MR_ADDR(base) ((base) + (0x0400))
#define SOC_PWM_C0_MR0_ADDR(base) ((base) + (0x0304))
#define SOC_PWM_C1_MR0_ADDR(base) ((base) + (0x0404))
#define SOC_PWM_C0_MR1_ADDR(base) ((base) + (0x0308))
#define SOC_PWM_C1_MR1_ADDR(base) ((base) + (0x0408))
#define SOC_PWM_C0_TCNT_ADDR(base) ((base) + (0x030C))
#define SOC_PWM_C1_TCNT_ADDR(base) ((base) + (0x040C))
#define SOC_PWM_C0_PHA_ADDR(base) ((base) + (0x0310))
#define SOC_PWM_C1_PHA_ADDR(base) ((base) + (0x0410))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_lock : 32;
    } reg;
} SOC_PWM_LOCK_UNION;
#endif
#define SOC_PWM_LOCK_pwm_lock_START (0)
#define SOC_PWM_LOCK_pwm_lock_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_en : 1;
        unsigned int pwm_rst : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_PWM_CTL_UNION;
#endif
#define SOC_PWM_CTL_pwm_en_START (0)
#define SOC_PWM_CTL_pwm_en_END (0)
#define SOC_PWM_CTL_pwm_rst_START (1)
#define SOC_PWM_CTL_pwm_rst_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_mode_0 : 1;
        unsigned int pwm_oen_0 : 1;
        unsigned int pwm_mode_1 : 1;
        unsigned int pwm_oen_1 : 1;
        unsigned int pwm_mode_2 : 1;
        unsigned int pwm_oen_2 : 1;
        unsigned int pwm_mode_3 : 1;
        unsigned int pwm_oen_3 : 1;
        unsigned int pwm_mode_4 : 1;
        unsigned int pwm_oen_4 : 1;
        unsigned int pwm_mode_5 : 1;
        unsigned int pwm_oen_5 : 1;
        unsigned int pwm_mode_6 : 1;
        unsigned int pwm_oen_6 : 1;
        unsigned int pwm_mode_7 : 1;
        unsigned int pwm_oen_7 : 1;
        unsigned int pwm_int_en_0 : 1;
        unsigned int pwm_int_en_1 : 1;
        unsigned int pwm_int_en_2 : 1;
        unsigned int pwm_int_en_3 : 1;
        unsigned int pwm_int_en_4 : 1;
        unsigned int pwm_int_en_5 : 1;
        unsigned int pwm_int_en_6 : 1;
        unsigned int pwm_int_en_7 : 1;
        unsigned int pwm_int_en_8 : 1;
        unsigned int pwm_int_en_9 : 1;
        unsigned int pwm_int_en_10 : 1;
        unsigned int pwm_int_en_11 : 1;
        unsigned int pwm_int_en_12 : 1;
        unsigned int pwm_int_en_13 : 1;
        unsigned int pwm_int_en_14 : 1;
        unsigned int pwm_int_en_15 : 1;
    } reg;
} SOC_PWM_CFG_UNION;
#endif
#define SOC_PWM_CFG_pwm_mode_0_START (0)
#define SOC_PWM_CFG_pwm_mode_0_END (0)
#define SOC_PWM_CFG_pwm_oen_0_START (1)
#define SOC_PWM_CFG_pwm_oen_0_END (1)
#define SOC_PWM_CFG_pwm_mode_1_START (2)
#define SOC_PWM_CFG_pwm_mode_1_END (2)
#define SOC_PWM_CFG_pwm_oen_1_START (3)
#define SOC_PWM_CFG_pwm_oen_1_END (3)
#define SOC_PWM_CFG_pwm_mode_2_START (4)
#define SOC_PWM_CFG_pwm_mode_2_END (4)
#define SOC_PWM_CFG_pwm_oen_2_START (5)
#define SOC_PWM_CFG_pwm_oen_2_END (5)
#define SOC_PWM_CFG_pwm_mode_3_START (6)
#define SOC_PWM_CFG_pwm_mode_3_END (6)
#define SOC_PWM_CFG_pwm_oen_3_START (7)
#define SOC_PWM_CFG_pwm_oen_3_END (7)
#define SOC_PWM_CFG_pwm_mode_4_START (8)
#define SOC_PWM_CFG_pwm_mode_4_END (8)
#define SOC_PWM_CFG_pwm_oen_4_START (9)
#define SOC_PWM_CFG_pwm_oen_4_END (9)
#define SOC_PWM_CFG_pwm_mode_5_START (10)
#define SOC_PWM_CFG_pwm_mode_5_END (10)
#define SOC_PWM_CFG_pwm_oen_5_START (11)
#define SOC_PWM_CFG_pwm_oen_5_END (11)
#define SOC_PWM_CFG_pwm_mode_6_START (12)
#define SOC_PWM_CFG_pwm_mode_6_END (12)
#define SOC_PWM_CFG_pwm_oen_6_START (13)
#define SOC_PWM_CFG_pwm_oen_6_END (13)
#define SOC_PWM_CFG_pwm_mode_7_START (14)
#define SOC_PWM_CFG_pwm_mode_7_END (14)
#define SOC_PWM_CFG_pwm_oen_7_START (15)
#define SOC_PWM_CFG_pwm_oen_7_END (15)
#define SOC_PWM_CFG_pwm_int_en_0_START (16)
#define SOC_PWM_CFG_pwm_int_en_0_END (16)
#define SOC_PWM_CFG_pwm_int_en_1_START (17)
#define SOC_PWM_CFG_pwm_int_en_1_END (17)
#define SOC_PWM_CFG_pwm_int_en_2_START (18)
#define SOC_PWM_CFG_pwm_int_en_2_END (18)
#define SOC_PWM_CFG_pwm_int_en_3_START (19)
#define SOC_PWM_CFG_pwm_int_en_3_END (19)
#define SOC_PWM_CFG_pwm_int_en_4_START (20)
#define SOC_PWM_CFG_pwm_int_en_4_END (20)
#define SOC_PWM_CFG_pwm_int_en_5_START (21)
#define SOC_PWM_CFG_pwm_int_en_5_END (21)
#define SOC_PWM_CFG_pwm_int_en_6_START (22)
#define SOC_PWM_CFG_pwm_int_en_6_END (22)
#define SOC_PWM_CFG_pwm_int_en_7_START (23)
#define SOC_PWM_CFG_pwm_int_en_7_END (23)
#define SOC_PWM_CFG_pwm_int_en_8_START (24)
#define SOC_PWM_CFG_pwm_int_en_8_END (24)
#define SOC_PWM_CFG_pwm_int_en_9_START (25)
#define SOC_PWM_CFG_pwm_int_en_9_END (25)
#define SOC_PWM_CFG_pwm_int_en_10_START (26)
#define SOC_PWM_CFG_pwm_int_en_10_END (26)
#define SOC_PWM_CFG_pwm_int_en_11_START (27)
#define SOC_PWM_CFG_pwm_int_en_11_END (27)
#define SOC_PWM_CFG_pwm_int_en_12_START (28)
#define SOC_PWM_CFG_pwm_int_en_12_END (28)
#define SOC_PWM_CFG_pwm_int_en_13_START (29)
#define SOC_PWM_CFG_pwm_int_en_13_END (29)
#define SOC_PWM_CFG_pwm_int_en_14_START (30)
#define SOC_PWM_CFG_pwm_int_en_14_END (30)
#define SOC_PWM_CFG_pwm_int_en_15_START (31)
#define SOC_PWM_CFG_pwm_int_en_15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_lpif_state : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_PWM_LPIF_STATE_UNION;
#endif
#define SOC_PWM_LPIF_STATE_pwm_lpif_state_START (0)
#define SOC_PWM_LPIF_STATE_pwm_lpif_state_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_status : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PWM_STATUS_UNION;
#endif
#define SOC_PWM_STATUS_pwm_status_START (0)
#define SOC_PWM_STATUS_pwm_status_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_pr0 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_PWM_PR0_UNION;
#endif
#define SOC_PWM_PR0_pwm_pr0_START (0)
#define SOC_PWM_PR0_pwm_pr0_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_pr1 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_PWM_PR1_UNION;
#endif
#define SOC_PWM_PR1_pwm_pr1_START (0)
#define SOC_PWM_PR1_pwm_pr1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_pcnt1 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_PWM_PCNT0_UNION;
#endif
#define SOC_PWM_PCNT0_pwm_pcnt1_START (0)
#define SOC_PWM_PCNT0_pwm_pcnt1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_pcnt1 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_PWM_PCNT1_UNION;
#endif
#define SOC_PWM_PCNT1_pwm_pcnt1_START (0)
#define SOC_PWM_PCNT1_pwm_pcnt1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_ris_0 : 1;
        unsigned int pwm_ris_1 : 1;
        unsigned int pwm_ris_2 : 1;
        unsigned int pwm_ris_3 : 1;
        unsigned int pwm_ris_4 : 1;
        unsigned int pwm_ris_5 : 1;
        unsigned int pwm_ris_6 : 1;
        unsigned int pwm_ris_7 : 1;
        unsigned int pwm_ris_8 : 1;
        unsigned int pwm_ris_9 : 1;
        unsigned int pwm_ris_10 : 1;
        unsigned int pwm_ris_11 : 1;
        unsigned int pwm_ris_12 : 1;
        unsigned int pwm_ris_13 : 1;
        unsigned int pwm_ris_14 : 1;
        unsigned int pwm_ris_15 : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_PWM_RIS_UNION;
#endif
#define SOC_PWM_RIS_pwm_ris_0_START (0)
#define SOC_PWM_RIS_pwm_ris_0_END (0)
#define SOC_PWM_RIS_pwm_ris_1_START (1)
#define SOC_PWM_RIS_pwm_ris_1_END (1)
#define SOC_PWM_RIS_pwm_ris_2_START (2)
#define SOC_PWM_RIS_pwm_ris_2_END (2)
#define SOC_PWM_RIS_pwm_ris_3_START (3)
#define SOC_PWM_RIS_pwm_ris_3_END (3)
#define SOC_PWM_RIS_pwm_ris_4_START (4)
#define SOC_PWM_RIS_pwm_ris_4_END (4)
#define SOC_PWM_RIS_pwm_ris_5_START (5)
#define SOC_PWM_RIS_pwm_ris_5_END (5)
#define SOC_PWM_RIS_pwm_ris_6_START (6)
#define SOC_PWM_RIS_pwm_ris_6_END (6)
#define SOC_PWM_RIS_pwm_ris_7_START (7)
#define SOC_PWM_RIS_pwm_ris_7_END (7)
#define SOC_PWM_RIS_pwm_ris_8_START (8)
#define SOC_PWM_RIS_pwm_ris_8_END (8)
#define SOC_PWM_RIS_pwm_ris_9_START (9)
#define SOC_PWM_RIS_pwm_ris_9_END (9)
#define SOC_PWM_RIS_pwm_ris_10_START (10)
#define SOC_PWM_RIS_pwm_ris_10_END (10)
#define SOC_PWM_RIS_pwm_ris_11_START (11)
#define SOC_PWM_RIS_pwm_ris_11_END (11)
#define SOC_PWM_RIS_pwm_ris_12_START (12)
#define SOC_PWM_RIS_pwm_ris_12_END (12)
#define SOC_PWM_RIS_pwm_ris_13_START (13)
#define SOC_PWM_RIS_pwm_ris_13_END (13)
#define SOC_PWM_RIS_pwm_ris_14_START (14)
#define SOC_PWM_RIS_pwm_ris_14_END (14)
#define SOC_PWM_RIS_pwm_ris_15_START (15)
#define SOC_PWM_RIS_pwm_ris_15_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_msk0 : 1;
        unsigned int pwm_msk1 : 1;
        unsigned int pwm_msk2 : 1;
        unsigned int pwm_msk3 : 1;
        unsigned int pwm_msk4 : 1;
        unsigned int pwm_msk5 : 1;
        unsigned int pwm_msk6 : 1;
        unsigned int pwm_msk7 : 1;
        unsigned int pwm_msk8 : 1;
        unsigned int pwm_msk9 : 1;
        unsigned int pwm_msk10 : 1;
        unsigned int pwm_msk11 : 1;
        unsigned int pwm_msk12 : 1;
        unsigned int pwm_msk13 : 1;
        unsigned int pwm_msk14 : 1;
        unsigned int pwm_msk15 : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_PWM_MSK_UNION;
#endif
#define SOC_PWM_MSK_pwm_msk0_START (0)
#define SOC_PWM_MSK_pwm_msk0_END (0)
#define SOC_PWM_MSK_pwm_msk1_START (1)
#define SOC_PWM_MSK_pwm_msk1_END (1)
#define SOC_PWM_MSK_pwm_msk2_START (2)
#define SOC_PWM_MSK_pwm_msk2_END (2)
#define SOC_PWM_MSK_pwm_msk3_START (3)
#define SOC_PWM_MSK_pwm_msk3_END (3)
#define SOC_PWM_MSK_pwm_msk4_START (4)
#define SOC_PWM_MSK_pwm_msk4_END (4)
#define SOC_PWM_MSK_pwm_msk5_START (5)
#define SOC_PWM_MSK_pwm_msk5_END (5)
#define SOC_PWM_MSK_pwm_msk6_START (6)
#define SOC_PWM_MSK_pwm_msk6_END (6)
#define SOC_PWM_MSK_pwm_msk7_START (7)
#define SOC_PWM_MSK_pwm_msk7_END (7)
#define SOC_PWM_MSK_pwm_msk8_START (8)
#define SOC_PWM_MSK_pwm_msk8_END (8)
#define SOC_PWM_MSK_pwm_msk9_START (9)
#define SOC_PWM_MSK_pwm_msk9_END (9)
#define SOC_PWM_MSK_pwm_msk10_START (10)
#define SOC_PWM_MSK_pwm_msk10_END (10)
#define SOC_PWM_MSK_pwm_msk11_START (11)
#define SOC_PWM_MSK_pwm_msk11_END (11)
#define SOC_PWM_MSK_pwm_msk12_START (12)
#define SOC_PWM_MSK_pwm_msk12_END (12)
#define SOC_PWM_MSK_pwm_msk13_START (13)
#define SOC_PWM_MSK_pwm_msk13_END (13)
#define SOC_PWM_MSK_pwm_msk14_START (14)
#define SOC_PWM_MSK_pwm_msk14_END (14)
#define SOC_PWM_MSK_pwm_msk15_START (15)
#define SOC_PWM_MSK_pwm_msk15_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_eoi_0 : 1;
        unsigned int pwm_eoi_1 : 1;
        unsigned int pwm_eoi_2 : 1;
        unsigned int pwm_eoi_3 : 1;
        unsigned int pwm_eoi_4 : 1;
        unsigned int pwm_eoi_5 : 1;
        unsigned int pwm_eoi_6 : 1;
        unsigned int pwm_eoi_7 : 1;
        unsigned int pwm_eoi_8 : 1;
        unsigned int pwm_eoi_9 : 1;
        unsigned int pwm_eoi_10 : 1;
        unsigned int pwm_eoi_11 : 1;
        unsigned int pwm_eoi_12 : 1;
        unsigned int pwm_eoi_13 : 1;
        unsigned int pwm_eoi_14 : 1;
        unsigned int pwm_eoi_15 : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_PWM_EOI_UNION;
#endif
#define SOC_PWM_EOI_pwm_eoi_0_START (0)
#define SOC_PWM_EOI_pwm_eoi_0_END (0)
#define SOC_PWM_EOI_pwm_eoi_1_START (1)
#define SOC_PWM_EOI_pwm_eoi_1_END (1)
#define SOC_PWM_EOI_pwm_eoi_2_START (2)
#define SOC_PWM_EOI_pwm_eoi_2_END (2)
#define SOC_PWM_EOI_pwm_eoi_3_START (3)
#define SOC_PWM_EOI_pwm_eoi_3_END (3)
#define SOC_PWM_EOI_pwm_eoi_4_START (4)
#define SOC_PWM_EOI_pwm_eoi_4_END (4)
#define SOC_PWM_EOI_pwm_eoi_5_START (5)
#define SOC_PWM_EOI_pwm_eoi_5_END (5)
#define SOC_PWM_EOI_pwm_eoi_6_START (6)
#define SOC_PWM_EOI_pwm_eoi_6_END (6)
#define SOC_PWM_EOI_pwm_eoi_7_START (7)
#define SOC_PWM_EOI_pwm_eoi_7_END (7)
#define SOC_PWM_EOI_pwm_eoi_8_START (8)
#define SOC_PWM_EOI_pwm_eoi_8_END (8)
#define SOC_PWM_EOI_pwm_eoi_9_START (9)
#define SOC_PWM_EOI_pwm_eoi_9_END (9)
#define SOC_PWM_EOI_pwm_eoi_10_START (10)
#define SOC_PWM_EOI_pwm_eoi_10_END (10)
#define SOC_PWM_EOI_pwm_eoi_11_START (11)
#define SOC_PWM_EOI_pwm_eoi_11_END (11)
#define SOC_PWM_EOI_pwm_eoi_12_START (12)
#define SOC_PWM_EOI_pwm_eoi_12_END (12)
#define SOC_PWM_EOI_pwm_eoi_13_START (13)
#define SOC_PWM_EOI_pwm_eoi_13_END (13)
#define SOC_PWM_EOI_pwm_eoi_14_START (14)
#define SOC_PWM_EOI_pwm_eoi_14_END (14)
#define SOC_PWM_EOI_pwm_eoi_15_START (15)
#define SOC_PWM_EOI_pwm_eoi_15_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_imsk_0 : 1;
        unsigned int pwm_imsk_1 : 1;
        unsigned int pwm_imsk_2 : 1;
        unsigned int pwm_imsk_3 : 1;
        unsigned int pwm_imsk_4 : 1;
        unsigned int pwm_imsk_5 : 1;
        unsigned int pwm_imsk_6 : 1;
        unsigned int pwm_imsk_7 : 1;
        unsigned int pwm_imsk_8 : 1;
        unsigned int pwm_imsk_9 : 1;
        unsigned int pwm_imsk_10 : 1;
        unsigned int pwm_imsk_11 : 1;
        unsigned int pwm_imsk_12 : 1;
        unsigned int pwm_imsk_13 : 1;
        unsigned int pwm_imsk_14 : 1;
        unsigned int pwm_imsk_15 : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_PWM_INT_UNION;
#endif
#define SOC_PWM_INT_pwm_imsk_0_START (0)
#define SOC_PWM_INT_pwm_imsk_0_END (0)
#define SOC_PWM_INT_pwm_imsk_1_START (1)
#define SOC_PWM_INT_pwm_imsk_1_END (1)
#define SOC_PWM_INT_pwm_imsk_2_START (2)
#define SOC_PWM_INT_pwm_imsk_2_END (2)
#define SOC_PWM_INT_pwm_imsk_3_START (3)
#define SOC_PWM_INT_pwm_imsk_3_END (3)
#define SOC_PWM_INT_pwm_imsk_4_START (4)
#define SOC_PWM_INT_pwm_imsk_4_END (4)
#define SOC_PWM_INT_pwm_imsk_5_START (5)
#define SOC_PWM_INT_pwm_imsk_5_END (5)
#define SOC_PWM_INT_pwm_imsk_6_START (6)
#define SOC_PWM_INT_pwm_imsk_6_END (6)
#define SOC_PWM_INT_pwm_imsk_7_START (7)
#define SOC_PWM_INT_pwm_imsk_7_END (7)
#define SOC_PWM_INT_pwm_imsk_8_START (8)
#define SOC_PWM_INT_pwm_imsk_8_END (8)
#define SOC_PWM_INT_pwm_imsk_9_START (9)
#define SOC_PWM_INT_pwm_imsk_9_END (9)
#define SOC_PWM_INT_pwm_imsk_10_START (10)
#define SOC_PWM_INT_pwm_imsk_10_END (10)
#define SOC_PWM_INT_pwm_imsk_11_START (11)
#define SOC_PWM_INT_pwm_imsk_11_END (11)
#define SOC_PWM_INT_pwm_imsk_12_START (12)
#define SOC_PWM_INT_pwm_imsk_12_END (12)
#define SOC_PWM_INT_pwm_imsk_13_START (13)
#define SOC_PWM_INT_pwm_imsk_13_END (13)
#define SOC_PWM_INT_pwm_imsk_14_START (14)
#define SOC_PWM_INT_pwm_imsk_14_END (14)
#define SOC_PWM_INT_pwm_imsk_15_START (15)
#define SOC_PWM_INT_pwm_imsk_15_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_c0_mr : 32;
    } reg;
} SOC_PWM_C0_MR_UNION;
#endif
#define SOC_PWM_C0_MR_pwm_c0_mr_START (0)
#define SOC_PWM_C0_MR_pwm_c0_mr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_c1_mr : 32;
    } reg;
} SOC_PWM_C1_MR_UNION;
#endif
#define SOC_PWM_C1_MR_pwm_c1_mr_START (0)
#define SOC_PWM_C1_MR_pwm_c1_mr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_c0_mr0 : 32;
    } reg;
} SOC_PWM_C0_MR0_UNION;
#endif
#define SOC_PWM_C0_MR0_pwm_c0_mr0_START (0)
#define SOC_PWM_C0_MR0_pwm_c0_mr0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_c1_mr0 : 32;
    } reg;
} SOC_PWM_C1_MR0_UNION;
#endif
#define SOC_PWM_C1_MR0_pwm_c1_mr0_START (0)
#define SOC_PWM_C1_MR0_pwm_c1_mr0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_c0_mr1 : 32;
    } reg;
} SOC_PWM_C0_MR1_UNION;
#endif
#define SOC_PWM_C0_MR1_pwm_c0_mr1_START (0)
#define SOC_PWM_C0_MR1_pwm_c0_mr1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_c1_mr1 : 32;
    } reg;
} SOC_PWM_C1_MR1_UNION;
#endif
#define SOC_PWM_C1_MR1_pwm_c1_mr1_START (0)
#define SOC_PWM_C1_MR1_pwm_c1_mr1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_c0_tcnt : 32;
    } reg;
} SOC_PWM_C0_TCNT_UNION;
#endif
#define SOC_PWM_C0_TCNT_pwm_c0_tcnt_START (0)
#define SOC_PWM_C0_TCNT_pwm_c0_tcnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_c1_tcnt : 32;
    } reg;
} SOC_PWM_C1_TCNT_UNION;
#endif
#define SOC_PWM_C1_TCNT_pwm_c1_tcnt_START (0)
#define SOC_PWM_C1_TCNT_pwm_c1_tcnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_ch0_pha : 32;
    } reg;
} SOC_PWM_C0_PHA_UNION;
#endif
#define SOC_PWM_C0_PHA_pwm_ch0_pha_START (0)
#define SOC_PWM_C0_PHA_pwm_ch0_pha_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_ch1_pha : 32;
    } reg;
} SOC_PWM_C1_PHA_UNION;
#endif
#define SOC_PWM_C1_PHA_pwm_ch1_pha_START (0)
#define SOC_PWM_C1_PHA_pwm_ch1_pha_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
