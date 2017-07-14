#include "soc_baseaddr_interface.h"
#include "soc_modem_sctrl_interface.h"
#ifndef __SOC_INTERFACE_H__
#define __SOC_INTERFACE_H__ 
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif
#ifndef BIT_X
#define BIT_X(num) (((unsigned long)0x01) << (num))
#endif
#define ZSP_ITCM_BASE_ADDR ((unsigned long)0x00000000)
#define ZSP_ITCM_BASE_ADDR_HIGH ((unsigned long)ZSP_ITCM_BASE_ADDR>>16)
#define ZSP_DTCM_BASE_ADDR ((unsigned long)0x00000000)
#define ZSP_DTCM_BASE_ADDR_HIGH ((unsigned long)ZSP_DTCM_BASE_ADDR>>16)
#define WBBP_BASE_ADDR (SOC_BBP_WCDMA_BASE_ADDR)
#define WBBP_BASE_ADDR_HIGH ((unsigned long)WBBP_BASE_ADDR>>16)
#ifdef INSTANCE_1
#define SOC_BBP_GSM_BASE_ADDR ((unsigned long)SOC_BBP_GSM1_BASE_ADDR)
#define SOC_BBP_GSM_BASE_ADDR_HIGH ((unsigned long)SOC_BBP_GSM1_BASE_ADDR>>16)
#define SOC_BBP_GSM_ON_BASE_ADDR ((unsigned long)SOC_BBP_GSM1_ON_BASE_ADDR)
#define SOC_BBP_GSM_ON_BASE_ADDR_HIGH ((unsigned long)SOC_BBP_GSM1_ON_BASE_ADDR>>16)
#else
#define SOC_BBP_GSM_BASE_ADDR ((unsigned long)SOC_BBP_GSM0_BASE_ADDR)
#define SOC_BBP_GSM_BASE_ADDR_HIGH ((unsigned long)SOC_BBP_GSM0_BASE_ADDR>>16)
#define SOC_BBP_GSM_ON_BASE_ADDR ((unsigned long)SOC_BBP_GSM0_ON_BASE_ADDR)
#define SOC_BBP_GSM_ON_BASE_ADDR_HIGH ((unsigned long)SOC_BBP_GSM0_ON_BASE_ADDR>>16)
#endif
#define GBBP_BASE_ADDR (SOC_BBP_GSM_BASE_ADDR)
#define AHB_BASE_ADDR (uwAhbBaseAddr)
#define AHB_BASE_ADDR_HIGH ((unsigned long)AHB_BASE_ADDR>>16)
#define BBPCOMM_BASE_ADDR (SOC_BBP_COMM_BASE_ADDR)
#define HSUPA_UPACC_BASE_ADDR (SOC_UPACC_BASE_ADDR)
#define HSUPA_UPACC_BASE_ADDR_HIGH ((unsigned long)HSUPA_UPACC_BASE_ADDR>>16)
#define DMAC_BASE_ADDR ((unsigned long)0x20380000)
#define DMAC_BASE_ADDR_HIGH ((unsigned long)DMAC_BASE_ADDR>>16)
#define SOC_BASE_ADDR ((unsigned long)0x5F050000)
#define SOC_BASE_ADDR_HIGH ((unsigned long)SOC_BASE_ADDR>>16)
#define SYS_CTRL_ADDRESS ( SOC_BASE_ADDR_HIGH )
#define APM_BASE_ADDR (0x0)
#define DMA_LLI_PARA_HIGH_ADDR (AHB_BASE_ADDR_HIGH)
#define ARM_SOC_CPUVIEW_TIMER_VALUE (0x90003000)
#define ARM_SOC_CPUVIEW_TIMER_LOAD (0x90003000)
#define ARM_SOC_CPUVIEW_TIMER_CTRL (0x90003000)
extern unsigned int uwAhbBaseAddr;
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
