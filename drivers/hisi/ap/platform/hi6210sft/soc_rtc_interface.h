#ifndef __SOC_RTC_INTERFACE_H__
#define __SOC_RTC_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_RTC_RTCDR_ADDR(base) ((base) + (0x000))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int RTCDR : 32;
    } reg;
} SOC_RTC_RTCDR_UNION;
#endif
#define SOC_RTC_RTCDR_RTCDR_START (0)
#define SOC_RTC_RTCDR_RTCDR_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
