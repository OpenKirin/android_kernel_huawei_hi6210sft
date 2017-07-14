#ifndef __SOC_TIMER_INTERFACE_H__
#define __SOC_TIMER_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_TIMER_TIMERN_LOAD_ADDR(base,n) ((base) + (0x000+(0x20*(n))))
#define SOC_TIMER_TIMERN_VALUE_ADDR(base,n) ((base) + (0x004+(0x20*(n))))
#define SOC_TIMER_TIMERN_CONTROL_ADDR(base,n) ((base) + (0x008+(0x20*(n))))
#define SOC_TIMER_TIMERN_INTCLR_ADDR(base,n) ((base) + (0x00C+(0x20*(n))))
#define SOC_TIMER_TIMERN_RIS_ADDR(base,n) ((base) + (0x010+(0x20*(n))))
#define SOC_TIMER_TIMERN_MIS_ADDR(base,n) ((base) + (0x014+(0x20*(n))))
#define SOC_TIMER_TIMERN_BGLOAD_ADDR(base) ((base) + (0x018))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer0_load : 32;
    } reg;
} SOC_TIMER_TIMERN_LOAD_UNION;
#endif
#define SOC_TIMER_TIMERN_LOAD_timer0_load_START (0)
#define SOC_TIMER_TIMERN_LOAD_timer0_load_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer0_value : 32;
    } reg;
} SOC_TIMER_TIMERN_VALUE_UNION;
#endif
#define SOC_TIMER_TIMERN_VALUE_timer0_value_START (0)
#define SOC_TIMER_TIMERN_VALUE_timer0_value_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int oneshot : 1;
        unsigned int timersize : 1;
        unsigned int timerpre : 2;
        unsigned int reserved_0: 1;
        unsigned int intenable : 1;
        unsigned int timermode : 1;
        unsigned int timeren : 1;
        unsigned int reserved_1: 24;
    } reg;
} SOC_TIMER_TIMERN_CONTROL_UNION;
#endif
#define SOC_TIMER_TIMERN_CONTROL_oneshot_START (0)
#define SOC_TIMER_TIMERN_CONTROL_oneshot_END (0)
#define SOC_TIMER_TIMERN_CONTROL_timersize_START (1)
#define SOC_TIMER_TIMERN_CONTROL_timersize_END (1)
#define SOC_TIMER_TIMERN_CONTROL_timerpre_START (2)
#define SOC_TIMER_TIMERN_CONTROL_timerpre_END (3)
#define SOC_TIMER_TIMERN_CONTROL_intenable_START (5)
#define SOC_TIMER_TIMERN_CONTROL_intenable_END (5)
#define SOC_TIMER_TIMERN_CONTROL_timermode_START (6)
#define SOC_TIMER_TIMERN_CONTROL_timermode_END (6)
#define SOC_TIMER_TIMERN_CONTROL_timeren_START (7)
#define SOC_TIMER_TIMERN_CONTROL_timeren_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timern_intclr : 1;
        unsigned int timer0_intclr : 31;
    } reg;
} SOC_TIMER_TIMERN_INTCLR_UNION;
#endif
#define SOC_TIMER_TIMERN_INTCLR_timern_intclr_START (0)
#define SOC_TIMER_TIMERN_INTCLR_timern_intclr_END (0)
#define SOC_TIMER_TIMERN_INTCLR_timer0_intclr_START (1)
#define SOC_TIMER_TIMERN_INTCLR_timer0_intclr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timernris : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_TIMER_TIMERN_RIS_UNION;
#endif
#define SOC_TIMER_TIMERN_RIS_timernris_START (0)
#define SOC_TIMER_TIMERN_RIS_timernris_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timernmis : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_TIMER_TIMERN_MIS_UNION;
#endif
#define SOC_TIMER_TIMERN_MIS_timernmis_START (0)
#define SOC_TIMER_TIMERN_MIS_timernmis_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer0bgload : 32;
    } reg;
} SOC_TIMER_TIMERN_BGLOAD_UNION;
#endif
#define SOC_TIMER_TIMERN_BGLOAD_timer0bgload_START (0)
#define SOC_TIMER_TIMERN_BGLOAD_timer0bgload_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
