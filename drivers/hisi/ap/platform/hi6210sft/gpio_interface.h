#ifndef __GPIOINTERFACE_H_
#define __GPIOINTERFACE_H_ 




#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif




#define GPIO_SHINE_DB4 ( DB4 )


#define GPIODATA ( 0x00 )
#define GPIODIR ( 0x04 )





#define UART_RBR_THR_DLL ( UART_BASE_ADDR_LOW + 0x000 )
#define UART_DLH_IER ( UART_BASE_ADDR_LOW + 0x004 )
#define UART_IIR_FCR ( UART_BASE_ADDR_LOW + 0x008 )
#define UART_LCR ( UART_BASE_ADDR_LOW + 0x00C )
#define UART_MCR ( UART_BASE_ADDR_LOW + 0x010 )
#define UART_LSR ( UART_BASE_ADDR_LOW + 0x014 )
#define UART_MSR ( UART_BASE_ADDR_LOW + 0x018 )
#define UART_SCR ( UART_BASE_ADDR_LOW + 0x01C )
#define UART_FAR ( UART_BASE_ADDR_LOW + 0x070 )
#define UART_TFR ( UART_BASE_ADDR_LOW + 0x074 )
#define UART_RFW ( UART_BASE_ADDR_LOW + 0x078 )
#define UART_USR ( UART_BASE_ADDR_LOW + 0x07C )
#define UART_TFL ( UART_BASE_ADDR_LOW + 0x080 )
#define UART_RFL ( UART_BASE_ADDR_LOW + 0x084 )
#define UART_HTX ( UART_BASE_ADDR_LOW + 0x0A4 )
#define UART_DMASA ( UART_BASE_ADDR_LOW + 0x0A8 )
#define UART_UCV ( UART_BASE_ADDR_LOW + 0x0F8 )
#define UART_CTR ( UART_BASE_ADDR_LOW + 0x0FC )




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif
