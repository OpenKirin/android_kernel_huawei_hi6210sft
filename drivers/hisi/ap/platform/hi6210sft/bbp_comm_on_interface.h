#include "soc_baseaddr_interface.h"
#ifndef __BBP_COMM_ON_INTERFACE_H__
#define __BBP_COMM_ON_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define BBPCOMM_AFC_PWM_SEL_MIX_ADDR (SOC_BBP_COMM_ON_BASE_ADDR + 0x1000)
#define BBPCOMM_AFC_EN_MIX_ADDR (SOC_BBP_COMM_ON_BASE_ADDR + 0x1004)
#define BBPCOMM_AFC_CFG_WIDTH_MIX_ADDR (SOC_BBP_COMM_ON_BASE_ADDR + 0x1008)
#define BBPCOMM_AFC_CFG_SEL_MIX_ADDR (SOC_BBP_COMM_ON_BASE_ADDR + 0x100C)
#define BBPCOMM_AFC_PWM_SEL_MIX_CH1_ADDR (SOC_BBP_COMM_ON_BASE_ADDR + 0x1200)
#define BBPCOMM_AFC_EN_MIX_CH1_ADDR (SOC_BBP_COMM_ON_BASE_ADDR + 0x1204)
#define BBPCOMM_AFC_CFG_WIDTH_MIX_CH1_ADDR (SOC_BBP_COMM_ON_BASE_ADDR + 0x1208)
#define BBPCOMM_AFC_CFG_SEL_MIX_CH1_ADDR (SOC_BBP_COMM_ON_BASE_ADDR + 0x120C)
typedef union
{
    unsigned long afc_pwm_sel_mix_reg;
    struct
    {
        unsigned long afc_pwm_sel : 1;
        unsigned long reserved : 31;
    } reg;
} BBPCOMM_AFC_PWM_SEL_MIX_UNION;
#define BBPCOMM_AFC_PWM_SEL_MIX_afc_pwm_sel_START (0)
#define BBPCOMM_AFC_PWM_SEL_MIX_afc_pwm_sel_END (0)
typedef union
{
    unsigned long afc_en_mix_reg;
    struct
    {
        unsigned long afc_en : 1;
        unsigned long reserved : 31;
    } reg;
} BBPCOMM_AFC_EN_MIX_UNION;
#define BBPCOMM_AFC_EN_MIX_afc_en_START (0)
#define BBPCOMM_AFC_EN_MIX_afc_en_END (0)
typedef union
{
    unsigned long afc_cfg_width_mix_reg;
    struct
    {
        unsigned long afc_cfg_width : 12;
        unsigned long reserved : 20;
    } reg;
} BBPCOMM_AFC_CFG_WIDTH_MIX_UNION;
#define BBPCOMM_AFC_CFG_WIDTH_MIX_afc_cfg_width_START (0)
#define BBPCOMM_AFC_CFG_WIDTH_MIX_afc_cfg_width_END (11)
typedef union
{
    unsigned long afc_cfg_sel_mix_reg;
    struct
    {
        unsigned long afc_cfg_sel : 1;
        unsigned long reserved : 31;
    } reg;
} BBPCOMM_AFC_CFG_SEL_MIX_UNION;
#define BBPCOMM_AFC_CFG_SEL_MIX_afc_cfg_sel_START (0)
#define BBPCOMM_AFC_CFG_SEL_MIX_afc_cfg_sel_END (0)
typedef union
{
    unsigned long afc_pwm_sel_mix_ch1_reg;
    struct
    {
        unsigned long afc_pwm_sel_ch1 : 1;
        unsigned long reserved : 31;
    } reg;
} BBPCOMM_AFC_PWM_SEL_MIX_CH1_UNION;
#define BBPCOMM_AFC_PWM_SEL_MIX_CH1_afc_pwm_sel_ch1_START (0)
#define BBPCOMM_AFC_PWM_SEL_MIX_CH1_afc_pwm_sel_ch1_END (0)
typedef union
{
    unsigned long afc_en_mix_ch1_reg;
    struct
    {
        unsigned long afc_en_ch1 : 1;
        unsigned long reserved : 31;
    } reg;
} BBPCOMM_AFC_EN_MIX_CH1_UNION;
#define BBPCOMM_AFC_EN_MIX_CH1_afc_en_ch1_START (0)
#define BBPCOMM_AFC_EN_MIX_CH1_afc_en_ch1_END (0)
typedef union
{
    unsigned long afc_cfg_width_mix_ch1_reg;
    struct
    {
        unsigned long afc_cfg_width_ch1 : 12;
        unsigned long reserved : 20;
    } reg;
} BBPCOMM_AFC_CFG_WIDTH_MIX_CH1_UNION;
#define BBPCOMM_AFC_CFG_WIDTH_MIX_CH1_afc_cfg_width_ch1_START (0)
#define BBPCOMM_AFC_CFG_WIDTH_MIX_CH1_afc_cfg_width_ch1_END (11)
typedef union
{
    unsigned long afc_cfg_sel_mix_ch1_reg;
    struct
    {
        unsigned long afc_cfg_sel_ch1 : 1;
        unsigned long reserved : 31;
    } reg;
} BBPCOMM_AFC_CFG_SEL_MIX_CH1_UNION;
#define BBPCOMM_AFC_CFG_SEL_MIX_CH1_afc_cfg_sel_ch1_START (0)
#define BBPCOMM_AFC_CFG_SEL_MIX_CH1_afc_cfg_sel_ch1_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
