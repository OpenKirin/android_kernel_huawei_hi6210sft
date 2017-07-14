#ifndef __SOC_IPC_INTERFACE_H__
#define __SOC_IPC_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_IPC_VERSION_ADDR(base) ((base) + (0x000))
#define SOC_IPC_CPU_RAW_INT_ADDR(base,i) ((base) + (0x400+(0x10*(i))))
#define SOC_IPC_CPU_INT_MASK_ADDR(base,i) ((base) + (0x404+(0x10*(i))))
#define SOC_IPC_CPU_INT_STAT_ADDR(base,i) ((base) + (0x408+(0x10*(i))))
#define SOC_IPC_CPU_INT_CLR_ADDR(base,i) ((base) + (0x40C+(0x10*(i))))
#define SOC_IPC_CPU_INT_EN_ADDR(base,i) ((base) + (0x500+(0x10*(i))))
#define SOC_IPC_CPU_INT_DIS_ADDR(base,i) ((base) + (0x504+(0x10*(i))))
#define SOC_IPC_SEM_RAW_INT_ADDR(base,j) ((base) + (0x600+(0x10*(j))))
#define SOC_IPC_SEM_INT_MASK_ADDR(base,j) ((base) + (0x604+(0x10*(j))))
#define SOC_IPC_SEM_INT_STAT_ADDR(base,j) ((base) + (0x608+(0x10*(j))))
#define SOC_IPC_SEM_INT_CLR_ADDR(base,j) ((base) + (0x60C+(0x10*(j))))
#define SOC_IPC_SEM_INT_EN_ADDR(base,j) ((base) + (0x700+(0x10*(j))))
#define SOC_IPC_SEM_INT_DIS_ADDR(base,j) ((base) + (0x704+(0x10*(j))))
#define SOC_IPC_HS_CTRL_ADDR(base,j,k) ((base) + (0x800+(0x100*(j))+(0x8*(k))))
#define SOC_IPC_HS_STAT_ADDR(base,j,k) ((base) + (0x804+(0x100*(j))+(0x8*(k))))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_version : 32;
    } reg;
} SOC_IPC_VERSION_UNION;
#endif
#define SOC_IPC_VERSION_ipc_version_START (0)
#define SOC_IPC_VERSION_ipc_version_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_cpu_raw_int : 32;
    } reg;
} SOC_IPC_CPU_RAW_INT_UNION;
#endif
#define SOC_IPC_CPU_RAW_INT_ipc_cpu_raw_int_START (0)
#define SOC_IPC_CPU_RAW_INT_ipc_cpu_raw_int_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_cpu_int_mask : 32;
    } reg;
} SOC_IPC_CPU_INT_MASK_UNION;
#endif
#define SOC_IPC_CPU_INT_MASK_ipc_cpu_int_mask_START (0)
#define SOC_IPC_CPU_INT_MASK_ipc_cpu_int_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_cpu_int_stat : 32;
    } reg;
} SOC_IPC_CPU_INT_STAT_UNION;
#endif
#define SOC_IPC_CPU_INT_STAT_ipc_cpu_int_stat_START (0)
#define SOC_IPC_CPU_INT_STAT_ipc_cpu_int_stat_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_cpu_int_clr : 32;
    } reg;
} SOC_IPC_CPU_INT_CLR_UNION;
#endif
#define SOC_IPC_CPU_INT_CLR_ipc_cpu_int_clr_START (0)
#define SOC_IPC_CPU_INT_CLR_ipc_cpu_int_clr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_cpu_int_en : 32;
    } reg;
} SOC_IPC_CPU_INT_EN_UNION;
#endif
#define SOC_IPC_CPU_INT_EN_ipc_cpu_int_en_START (0)
#define SOC_IPC_CPU_INT_EN_ipc_cpu_int_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_cpu_int_dis : 32;
    } reg;
} SOC_IPC_CPU_INT_DIS_UNION;
#endif
#define SOC_IPC_CPU_INT_DIS_ipc_cpu_int_dis_START (0)
#define SOC_IPC_CPU_INT_DIS_ipc_cpu_int_dis_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_sem_raw_int : 32;
    } reg;
} SOC_IPC_SEM_RAW_INT_UNION;
#endif
#define SOC_IPC_SEM_RAW_INT_ipc_sem_raw_int_START (0)
#define SOC_IPC_SEM_RAW_INT_ipc_sem_raw_int_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_sem_int_mask : 32;
    } reg;
} SOC_IPC_SEM_INT_MASK_UNION;
#endif
#define SOC_IPC_SEM_INT_MASK_ipc_sem_int_mask_START (0)
#define SOC_IPC_SEM_INT_MASK_ipc_sem_int_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_sem_int_stat : 32;
    } reg;
} SOC_IPC_SEM_INT_STAT_UNION;
#endif
#define SOC_IPC_SEM_INT_STAT_ipc_sem_int_stat_START (0)
#define SOC_IPC_SEM_INT_STAT_ipc_sem_int_stat_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_sem_int_clr : 32;
    } reg;
} SOC_IPC_SEM_INT_CLR_UNION;
#endif
#define SOC_IPC_SEM_INT_CLR_ipc_sem_int_clr_START (0)
#define SOC_IPC_SEM_INT_CLR_ipc_sem_int_clr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_sem_int_en : 32;
    } reg;
} SOC_IPC_SEM_INT_EN_UNION;
#endif
#define SOC_IPC_SEM_INT_EN_ipc_sem_int_en_START (0)
#define SOC_IPC_SEM_INT_EN_ipc_sem_int_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipc_sem_int_dis : 32;
    } reg;
} SOC_IPC_SEM_INT_DIS_UNION;
#endif
#define SOC_IPC_SEM_INT_DIS_ipc_sem_int_dis_START (0)
#define SOC_IPC_SEM_INT_DIS_ipc_sem_int_dis_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hs_ctrl_id : 3;
        unsigned int hs_ctrl_lock : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IPC_HS_CTRL_UNION;
#endif
#define SOC_IPC_HS_CTRL_hs_ctrl_id_START (0)
#define SOC_IPC_HS_CTRL_hs_ctrl_id_END (2)
#define SOC_IPC_HS_CTRL_hs_ctrl_lock_START (3)
#define SOC_IPC_HS_CTRL_hs_ctrl_lock_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hs_status_id : 3;
        unsigned int hs_status_lock : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IPC_HS_STAT_UNION;
#endif
#define SOC_IPC_HS_STAT_hs_status_id_START (0)
#define SOC_IPC_HS_STAT_hs_status_id_END (2)
#define SOC_IPC_HS_STAT_hs_status_lock_START (3)
#define SOC_IPC_HS_STAT_hs_status_lock_END (3)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
