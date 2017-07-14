#include "soc_baseaddr_interface.h"
#ifndef __BBP_GLB_ON_INTERFACE_H__
#define __BBP_GLB_ON_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define GLB_ON_MODE_SEL_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A00)
#define GLB_ON_RFIC2_RSTN_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A0C)
#define GLB_ON_RFIC0_RSTN_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A10)
#define GLB_ON_RFIC1_RSTN_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A14)
#define GLB_ON_COMM_TIMER_UPDATE_EN_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A18)
#define GLB_ON_COMM_TIMER_UPDATE_PARA_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A1C)
#define GLB_ON_COMM_TIMER_EN_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A20)
#define GLB_ON_COMM_TIMER_RPT1_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A24)
#define GLB_ON_COMM_TIMER_RPT2_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A28)
#define GLB_ON_DSDS_SIM_FLAG_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A2C)
#define GLB_ON_COMM_32K_INT_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A30)
#define GLB_ON_COMM_32K_INT_MASK_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A34)
#define GLB_ON_COMM_32K_INT_EN_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A38)
#define GLB_ON_COMM_32K_INT3_CLR_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A3C)
#define GLB_ON_COMM_32K_INT_PERIOD_ADDR (SOC_BBP_GLB_ON_BASE_ADDR + 0x1A40)
typedef union
{
    unsigned long mode_sel_reg;
    struct
    {
        unsigned long cpu_mode_sel : 2;
        unsigned long reserved : 30;
    } reg;
} GLB_ON_MODE_SEL_UNION;
#define GLB_ON_MODE_SEL_cpu_mode_sel_START (0)
#define GLB_ON_MODE_SEL_cpu_mode_sel_END (1)
typedef union
{
    unsigned long rfic2_rstn_reg;
    struct
    {
        unsigned long rfic2_rstn : 1;
        unsigned long reserved : 31;
    } reg;
} GLB_ON_RFIC2_RSTN_UNION;
#define GLB_ON_RFIC2_RSTN_rfic2_rstn_START (0)
#define GLB_ON_RFIC2_RSTN_rfic2_rstn_END (0)
typedef union
{
    unsigned long rfic0_rstn_reg;
    struct
    {
        unsigned long rfic0_rstn : 1;
        unsigned long reserved : 31;
    } reg;
} GLB_ON_RFIC0_RSTN_UNION;
#define GLB_ON_RFIC0_RSTN_rfic0_rstn_START (0)
#define GLB_ON_RFIC0_RSTN_rfic0_rstn_END (0)
typedef union
{
    unsigned long rfic1_rstn_reg;
    struct
    {
        unsigned long rfic1_rstn : 1;
        unsigned long reserved : 31;
    } reg;
} GLB_ON_RFIC1_RSTN_UNION;
#define GLB_ON_RFIC1_RSTN_rfic1_rstn_START (0)
#define GLB_ON_RFIC1_RSTN_rfic1_rstn_END (0)
typedef union
{
    unsigned long comm_timer_update_en_reg;
    struct
    {
        unsigned long cpu_adj_period_update_en : 1;
        unsigned long reserved : 31;
    } reg;
} GLB_ON_COMM_TIMER_UPDATE_EN_UNION;
#define GLB_ON_COMM_TIMER_UPDATE_EN_cpu_adj_period_update_en_START (0)
#define GLB_ON_COMM_TIMER_UPDATE_EN_cpu_adj_period_update_en_END (0)
typedef union
{
    unsigned long comm_timer_update_para_reg;
    struct
    {
        unsigned long cpu_adjust_period : 24;
        unsigned long reserved : 6;
        unsigned long cpu_adjust_en : 1;
        unsigned long cpu_adjust_direction : 1;
    } reg;
} GLB_ON_COMM_TIMER_UPDATE_PARA_UNION;
#define GLB_ON_COMM_TIMER_UPDATE_PARA_cpu_adjust_period_START (0)
#define GLB_ON_COMM_TIMER_UPDATE_PARA_cpu_adjust_period_END (23)
#define GLB_ON_COMM_TIMER_UPDATE_PARA_cpu_adjust_en_START (30)
#define GLB_ON_COMM_TIMER_UPDATE_PARA_cpu_adjust_en_END (30)
#define GLB_ON_COMM_TIMER_UPDATE_PARA_cpu_adjust_direction_START (31)
#define GLB_ON_COMM_TIMER_UPDATE_PARA_cpu_adjust_direction_END (31)
typedef union
{
    unsigned long comm_timer_en_reg;
    struct
    {
        unsigned long cpu_comm_timer_en : 1;
        unsigned long reserved : 31;
    } reg;
} GLB_ON_COMM_TIMER_EN_UNION;
#define GLB_ON_COMM_TIMER_EN_cpu_comm_timer_en_START (0)
#define GLB_ON_COMM_TIMER_EN_cpu_comm_timer_en_END (0)
typedef union
{
    unsigned long comm_timer_rpt2_reg;
    struct
    {
        unsigned long adjust_timer : 24;
        unsigned long reserved : 8;
    } reg;
} GLB_ON_COMM_TIMER_RPT2_UNION;
#define GLB_ON_COMM_TIMER_RPT2_adjust_timer_START (0)
#define GLB_ON_COMM_TIMER_RPT2_adjust_timer_END (23)
typedef union
{
    unsigned long dsds_sim_flag_reg;
    struct
    {
        unsigned long cpu_sim1_en : 1;
        unsigned long cpu_sim2_en : 1;
        unsigned long reserved : 30;
    } reg;
} GLB_ON_DSDS_SIM_FLAG_UNION;
#define GLB_ON_DSDS_SIM_FLAG_cpu_sim1_en_START (0)
#define GLB_ON_DSDS_SIM_FLAG_cpu_sim1_en_END (0)
#define GLB_ON_DSDS_SIM_FLAG_cpu_sim2_en_START (1)
#define GLB_ON_DSDS_SIM_FLAG_cpu_sim2_en_END (1)
typedef union
{
    unsigned long comm_32k_int_reg;
    struct
    {
        unsigned long comm_32k_int_sta : 1;
        unsigned long reserved : 31;
    } reg;
} GLB_ON_COMM_32K_INT_UNION;
#define GLB_ON_COMM_32K_INT_comm_32k_int_sta_START (0)
#define GLB_ON_COMM_32K_INT_comm_32k_int_sta_END (0)
typedef union
{
    unsigned long comm_32k_int_mask_reg;
    struct
    {
        unsigned long comm_32k_int_mask : 1;
        unsigned long reserved : 31;
    } reg;
} GLB_ON_COMM_32K_INT_MASK_UNION;
#define GLB_ON_COMM_32K_INT_MASK_comm_32k_int_mask_START (0)
#define GLB_ON_COMM_32K_INT_MASK_comm_32k_int_mask_END (0)
typedef union
{
    unsigned long comm_32k_int_en_reg;
    struct
    {
        unsigned long comm_32k_int_en : 1;
        unsigned long reserved : 31;
    } reg;
} GLB_ON_COMM_32K_INT_EN_UNION;
#define GLB_ON_COMM_32K_INT_EN_comm_32k_int_en_START (0)
#define GLB_ON_COMM_32K_INT_EN_comm_32k_int_en_END (0)
typedef union
{
    unsigned long comm_32k_int3_clr_reg;
    struct
    {
        unsigned long comm_32k_int_clr : 1;
        unsigned long reserved : 31;
    } reg;
} GLB_ON_COMM_32K_INT3_CLR_UNION;
#define GLB_ON_COMM_32K_INT3_CLR_comm_32k_int_clr_START (0)
#define GLB_ON_COMM_32K_INT3_CLR_comm_32k_int_clr_END (0)
typedef union
{
    unsigned long comm_32k_int_period_reg;
    struct
    {
        unsigned long cpu_int_period : 24;
        unsigned long reserved : 8;
    } reg;
} GLB_ON_COMM_32K_INT_PERIOD_UNION;
#define GLB_ON_COMM_32K_INT_PERIOD_cpu_int_period_START (0)
#define GLB_ON_COMM_32K_INT_PERIOD_cpu_int_period_END (23)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
