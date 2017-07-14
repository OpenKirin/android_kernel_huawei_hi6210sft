#ifndef __SSIINTERFACE_H_
#define __SSIINTERFACE_H_ 

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif







#define HAL_SSI0_SSICR0_ADDR ( 0x0000 )
#define HAL_SSI0_SSICR1_ADDR ( 0x0004 )
#define HAL_SSI0_SSICR2_ADDR ( 0x0008 )
#define HAL_SSI0_SSICR3_ADDR ( 0x000C )
#define HAL_SSI0_SSICR4_ADDR ( 0x0010 )
#define HAL_SSI0_SSIDR_ADDR ( 0x0014 )
#define HAL_SSI0_SSISR_ADDR ( 0x0018 )
typedef union
{
    PHY_UINT32 uwValue;
    struct
    {
        PHY_UINT32 ASS : 3;
        PHY_UINT32 DSS : 5;
        PHY_UINT32 RESVERED : 24;
    }stReg;
}HAL_SSI_SSICR0_UNION;
typedef union
{
    PHY_UINT32 uwValue;
    struct
    {
        PHY_UINT32 TXFIFO_WL : 3;
        PHY_UINT32 RXFIFO_WL : 3;
        PHY_UINT32 RESVERED : 26;
    }stReg;
}HAL_SSI_SSICR3_UNION;
typedef union
{
    PHY_UINT32 uwValue;
    struct
    {
        PHY_UINT32 TFE : 1;
        PHY_UINT32 TNF : 1;
        PHY_UINT32 RNE : 1;
        PHY_UINT32 RFF : 1;
        PHY_UINT32 BSY : 1;
        PHY_UINT32 RXFIFO_LV : 3;
        PHY_UINT32 TXFIFO_LV : 3;
        PHY_UINT32 RESVERED : 20;
    }stReg;
}HAL_SSI_SSISR_UNION;
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
