#ifndef __SOC_NANDC_INTERFACE_H__
#define __SOC_NANDC_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_NANDC_NfDataNum_ADDR(base) ((base) + (0x21000))
#define SOC_NANDC_NfWSC_ADDR(base) ((base) + (0x21004))
#define SOC_NANDC_NfDeviceCfg_ADDR(base) ((base) + (0x21008))
#define SOC_NANDC_NfCmdCfg_ADDR(base) ((base) + (0x2100C))
#define SOC_NANDC_NfCmd_ADDR(base) ((base) + (0x21010))
#define SOC_NANDC_NfAddrL_ADDR(base) ((base) + (0x21014))
#define SOC_NANDC_NfAddrH_ADDR(base) ((base) + (0x21018))
#define SOC_NANDC_NfCfg_ADDR(base) ((base) + (0x2101C))
#define SOC_NANDC_NfBufReady_ADDR(base) ((base) + (0x21020))
#define SOC_NANDC_NfIntEn_ADDR(base) ((base) + (0x21024))
#define SOC_NANDC_NfIntStatus_ADDR(base) ((base) + (0x21028))
#define SOC_NANDC_NfIntClr_ADDR(base) ((base) + (0x2102C))
#define SOC_NANDC_StartRd_ADDR(base) ((base) + (0x21030))
#define SOC_NANDC_CsdnEn_ADDR(base) ((base) + (0x21034))
#define SOC_NANDC_NfLockStartAddr1_ADDR(base) ((base) + (0x21038))
#define SOC_NANDC_NfLockEndAddr1_ADDR(base) ((base) + (0x2103C))
#define SOC_NANDC_NfLockStartAddr2_ADDR(base) ((base) + (0x21040))
#define SOC_NANDC_NfLockEndAddr2_ADDR(base) ((base) + (0x21044))
#define SOC_NANDC_NfLockStartAddr3_ADDR(base) ((base) + (0x21048))
#define SOC_NANDC_NfLockEndAddr3_ADDR(base) ((base) + (0x2104C))
#define SOC_NANDC_NfLockStartAddr4_ADDR(base) ((base) + (0x21050))
#define SOC_NANDC_NfLockEndAddr4_ADDR(base) ((base) + (0x21054))
#define SOC_NANDC_NfLockEn_ADDR(base) ((base) + (0x21058))
#define SOC_NANDC_NfLockCont_ADDR(base) ((base) + (0x2105C))
#define SOC_NANDC_NflockCommand1_ADDR(base) ((base) + (0x21060))
#define SOC_NANDC_NflockCommand2_ADDR(base) ((base) + (0x21064))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int NfDataNum : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_NANDC_NfDataNum_UNION;
#endif
#define SOC_NANDC_NfDataNum_NfDataNum_START (0)
#define SOC_NANDC_NfDataNum_NfDataNum_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wt pulse : 4;
        unsigned int rd pulse : 4;
        unsigned int rd/wt high wide : 4;
        unsigned int wait busy delay : 4;
        unsigned int cs not care delay : 4;
        unsigned int reserved : 12;
    } reg;
} SOC_NANDC_NfWSC_UNION;
#endif
#define SOC_NANDC_NfWSC_wt pulse_START (0)
#define SOC_NANDC_NfWSC_wt pulse_END (3)
#define SOC_NANDC_NfWSC_rd pulse_START (4)
#define SOC_NANDC_NfWSC_rd pulse_END (7)
#define SOC_NANDC_NfWSC_rd /wt high wide_START (8)
#define SOC_NANDC_NfWSC_rd /wt high wide_END (11)
#define SOC_NANDC_NfWSC_wait busy delay_START (12)
#define SOC_NANDC_NfWSC_wait busy delay_END (15)
#define SOC_NANDC_NfWSC_cs not care delay_START (16)
#define SOC_NANDC_NfWSC_cs not care delay_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int page size : 1;
        unsigned int data bus wide : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_NANDC_NfDeviceCfg_UNION;
#endif
#define SOC_NANDC_NfDeviceCfg_page size_START (0)
#define SOC_NANDC_NfDeviceCfg_page size_END (0)
#define SOC_NANDC_NfDeviceCfg_data bus wide_START (1)
#define SOC_NANDC_NfDeviceCfg_data bus wide_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int address cycles : 3;
        unsigned int reserved_0 : 1;
        unsigned int command address format : 1;
        unsigned int command only : 1;
        unsigned int read/write mode : 1;
        unsigned int Busy Not Care : 1;
        unsigned int CSSEL : 2;
        unsigned int EBI_N : 1;
        unsigned int reserved_1 : 21;
    } reg;
} SOC_NANDC_NfCmdCfg_UNION;
#endif
#define SOC_NANDC_NfCmdCfg_address cycles_START (0)
#define SOC_NANDC_NfCmdCfg_address cycles_END (2)
#define SOC_NANDC_NfCmdCfg_command address format_START (4)
#define SOC_NANDC_NfCmdCfg_command address format_END (4)
#define SOC_NANDC_NfCmdCfg_command only_START (5)
#define SOC_NANDC_NfCmdCfg_command only_END (5)
#define SOC_NANDC_NfCmdCfg_read /write mode_START (6)
#define SOC_NANDC_NfCmdCfg_read /write mode_END (6)
#define SOC_NANDC_NfCmdCfg_Busy Not Care_START (7)
#define SOC_NANDC_NfCmdCfg_Busy Not Care_END (7)
#define SOC_NANDC_NfCmdCfg_CSSEL_START (8)
#define SOC_NANDC_NfCmdCfg_CSSEL_END (9)
#define SOC_NANDC_NfCmdCfg_EBI_N_START (10)
#define SOC_NANDC_NfCmdCfg_EBI_N_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int command 1 : 8;
        unsigned int command 2 : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_NANDC_NfCmd_UNION;
#endif
#define SOC_NANDC_NfCmd_command 1_START (0)
#define SOC_NANDC_NfCmd_command 1_END (7)
#define SOC_NANDC_NfCmd_command 2_START (8)
#define SOC_NANDC_NfCmd_command 2_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int low address : 32;
    } reg;
} SOC_NANDC_NfAddrL_UNION;
#endif
#define SOC_NANDC_NfAddrL_low address_START (0)
#define SOC_NANDC_NfAddrL_low address_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int high address : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_NANDC_NfAddrH_UNION;
#endif
#define SOC_NANDC_NfAddrH_high address_START (0)
#define SOC_NANDC_NfAddrH_high address_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int boot mode disable : 1;
        unsigned int ECC bypass : 1;
        unsigned int SECC bypass : 1;
        unsigned int ECC error correct disable : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_NANDC_NfCfg_UNION;
#endif
#define SOC_NANDC_NfCfg_boot mode disable_START (0)
#define SOC_NANDC_NfCfg_boot mode disable_END (0)
#define SOC_NANDC_NfCfg_ECC bypass_START (1)
#define SOC_NANDC_NfCfg_ECC bypass_END (1)
#define SOC_NANDC_NfCfg_SECC bypass_START (2)
#define SOC_NANDC_NfCfg_SECC bypass_END (2)
#define SOC_NANDC_NfCfg_ECC error correct disable_START (3)
#define SOC_NANDC_NfCfg_ECC error correct disable_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int buffer ready : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_NANDC_NfBufReady_UNION;
#endif
#define SOC_NANDC_NfBufReady_buffer ready_START (0)
#define SOC_NANDC_NfBufReady_buffer ready_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int command done CS0 : 1;
        unsigned int read done CS0 : 1;
        unsigned int write done CS0 : 1;
        unsigned int reserved_0 : 1;
        unsigned int command done CS1 : 1;
        unsigned int read done CS1 : 1;
        unsigned int write done CS1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int command done CS2 : 1;
        unsigned int read done CS2 : 1;
        unsigned int write done CS2 : 1;
        unsigned int reserved_2 : 1;
        unsigned int command done CS3 : 1;
        unsigned int read done CS3 : 1;
        unsigned int write done CS3 : 1;
        unsigned int reserved_3 : 1;
        unsigned int all buffer ready : 1;
        unsigned int buffer1 ready : 1;
        unsigned int buffer2 ready : 1;
        unsigned int buffer3 ready : 1;
        unsigned int buffer4 ready : 1;
        unsigned int data ecc 1bit error : 1;
        unsigned int data ecc 2bit error : 1;
        unsigned int lsn ecc 1bit error : 1;
        unsigned int lsn ecc 2bit error : 1;
        unsigned int flashlock error : 1;
        unsigned int reserved_4 : 6;
    } reg;
} SOC_NANDC_NfIntEn_UNION;
#endif
#define SOC_NANDC_NfIntEn_command done CS0_START (0)
#define SOC_NANDC_NfIntEn_command done CS0_END (0)
#define SOC_NANDC_NfIntEn_read done CS0_START (1)
#define SOC_NANDC_NfIntEn_read done CS0_END (1)
#define SOC_NANDC_NfIntEn_write done CS0_START (2)
#define SOC_NANDC_NfIntEn_write done CS0_END (2)
#define SOC_NANDC_NfIntEn_command done CS1_START (4)
#define SOC_NANDC_NfIntEn_command done CS1_END (4)
#define SOC_NANDC_NfIntEn_read done CS1_START (5)
#define SOC_NANDC_NfIntEn_read done CS1_END (5)
#define SOC_NANDC_NfIntEn_write done CS1_START (6)
#define SOC_NANDC_NfIntEn_write done CS1_END (6)
#define SOC_NANDC_NfIntEn_command done CS2_START (8)
#define SOC_NANDC_NfIntEn_command done CS2_END (8)
#define SOC_NANDC_NfIntEn_read done CS2_START (9)
#define SOC_NANDC_NfIntEn_read done CS2_END (9)
#define SOC_NANDC_NfIntEn_write done CS2_START (10)
#define SOC_NANDC_NfIntEn_write done CS2_END (10)
#define SOC_NANDC_NfIntEn_command done CS3_START (12)
#define SOC_NANDC_NfIntEn_command done CS3_END (12)
#define SOC_NANDC_NfIntEn_read done CS3_START (13)
#define SOC_NANDC_NfIntEn_read done CS3_END (13)
#define SOC_NANDC_NfIntEn_write done CS3_START (14)
#define SOC_NANDC_NfIntEn_write done CS3_END (14)
#define SOC_NANDC_NfIntEn_all buffer ready_START (16)
#define SOC_NANDC_NfIntEn_all buffer ready_END (16)
#define SOC_NANDC_NfIntEn_buffer1 ready_START (17)
#define SOC_NANDC_NfIntEn_buffer1 ready_END (17)
#define SOC_NANDC_NfIntEn_buffer2 ready_START (18)
#define SOC_NANDC_NfIntEn_buffer2 ready_END (18)
#define SOC_NANDC_NfIntEn_buffer3 ready_START (19)
#define SOC_NANDC_NfIntEn_buffer3 ready_END (19)
#define SOC_NANDC_NfIntEn_buffer4 ready_START (20)
#define SOC_NANDC_NfIntEn_buffer4 ready_END (20)
#define SOC_NANDC_NfIntEn_data ecc 1bit error_START (21)
#define SOC_NANDC_NfIntEn_data ecc 1bit error_END (21)
#define SOC_NANDC_NfIntEn_data ecc 2bit error_START (22)
#define SOC_NANDC_NfIntEn_data ecc 2bit error_END (22)
#define SOC_NANDC_NfIntEn_lsn ecc 1bit error_START (23)
#define SOC_NANDC_NfIntEn_lsn ecc 1bit error_END (23)
#define SOC_NANDC_NfIntEn_lsn ecc 2bit error_START (24)
#define SOC_NANDC_NfIntEn_lsn ecc 2bit error_END (24)
#define SOC_NANDC_NfIntEn_flashlock error_START (25)
#define SOC_NANDC_NfIntEn_flashlock error_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int command done CS0 : 1;
        unsigned int read done CS0 : 1;
        unsigned int write done CS0 : 1;
        unsigned int reserved_0 : 1;
        unsigned int command done CS1 : 1;
        unsigned int read done CS1 : 1;
        unsigned int write done CS1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int command done CS2 : 1;
        unsigned int read done CS2 : 1;
        unsigned int write done CS2 : 1;
        unsigned int reserved_2 : 1;
        unsigned int command done CS3 : 1;
        unsigned int read done CS3 : 1;
        unsigned int write done CS3 : 1;
        unsigned int reserved_3 : 1;
        unsigned int all buffer ready : 1;
        unsigned int buffer1 ready : 1;
        unsigned int buffer2 ready : 1;
        unsigned int buffer3 ready : 1;
        unsigned int buffer4 ready : 1;
        unsigned int data ecc 1bit error : 1;
        unsigned int data ecc 2bit error : 1;
        unsigned int lsn ecc 1bit error : 1;
        unsigned int lsn ecc 2bit error : 1;
        unsigned int flashlock error : 1;
        unsigned int reserved_4 : 6;
    } reg;
} SOC_NANDC_NfIntStatus_UNION;
#endif
#define SOC_NANDC_NfIntStatus_command done CS0_START (0)
#define SOC_NANDC_NfIntStatus_command done CS0_END (0)
#define SOC_NANDC_NfIntStatus_read done CS0_START (1)
#define SOC_NANDC_NfIntStatus_read done CS0_END (1)
#define SOC_NANDC_NfIntStatus_write done CS0_START (2)
#define SOC_NANDC_NfIntStatus_write done CS0_END (2)
#define SOC_NANDC_NfIntStatus_command done CS1_START (4)
#define SOC_NANDC_NfIntStatus_command done CS1_END (4)
#define SOC_NANDC_NfIntStatus_read done CS1_START (5)
#define SOC_NANDC_NfIntStatus_read done CS1_END (5)
#define SOC_NANDC_NfIntStatus_write done CS1_START (6)
#define SOC_NANDC_NfIntStatus_write done CS1_END (6)
#define SOC_NANDC_NfIntStatus_command done CS2_START (8)
#define SOC_NANDC_NfIntStatus_command done CS2_END (8)
#define SOC_NANDC_NfIntStatus_read done CS2_START (9)
#define SOC_NANDC_NfIntStatus_read done CS2_END (9)
#define SOC_NANDC_NfIntStatus_write done CS2_START (10)
#define SOC_NANDC_NfIntStatus_write done CS2_END (10)
#define SOC_NANDC_NfIntStatus_command done CS3_START (12)
#define SOC_NANDC_NfIntStatus_command done CS3_END (12)
#define SOC_NANDC_NfIntStatus_read done CS3_START (13)
#define SOC_NANDC_NfIntStatus_read done CS3_END (13)
#define SOC_NANDC_NfIntStatus_write done CS3_START (14)
#define SOC_NANDC_NfIntStatus_write done CS3_END (14)
#define SOC_NANDC_NfIntStatus_all buffer ready_START (16)
#define SOC_NANDC_NfIntStatus_all buffer ready_END (16)
#define SOC_NANDC_NfIntStatus_buffer1 ready_START (17)
#define SOC_NANDC_NfIntStatus_buffer1 ready_END (17)
#define SOC_NANDC_NfIntStatus_buffer2 ready_START (18)
#define SOC_NANDC_NfIntStatus_buffer2 ready_END (18)
#define SOC_NANDC_NfIntStatus_buffer3 ready_START (19)
#define SOC_NANDC_NfIntStatus_buffer3 ready_END (19)
#define SOC_NANDC_NfIntStatus_buffer4 ready_START (20)
#define SOC_NANDC_NfIntStatus_buffer4 ready_END (20)
#define SOC_NANDC_NfIntStatus_data ecc 1bit error_START (21)
#define SOC_NANDC_NfIntStatus_data ecc 1bit error_END (21)
#define SOC_NANDC_NfIntStatus_data ecc 2bit error_START (22)
#define SOC_NANDC_NfIntStatus_data ecc 2bit error_END (22)
#define SOC_NANDC_NfIntStatus_lsn ecc 1bit error_START (23)
#define SOC_NANDC_NfIntStatus_lsn ecc 1bit error_END (23)
#define SOC_NANDC_NfIntStatus_lsn ecc 2bit error_START (24)
#define SOC_NANDC_NfIntStatus_lsn ecc 2bit error_END (24)
#define SOC_NANDC_NfIntStatus_flashlock error_START (25)
#define SOC_NANDC_NfIntStatus_flashlock error_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int command done CS0 : 1;
        unsigned int read done CS0 : 1;
        unsigned int write done CS0 : 1;
        unsigned int reserved_0 : 1;
        unsigned int command done CS1 : 1;
        unsigned int read done CS1 : 1;
        unsigned int write done CS1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int command done CS2 : 1;
        unsigned int read done CS2 : 1;
        unsigned int write done CS2 : 1;
        unsigned int reserved_2 : 1;
        unsigned int command done CS3 : 1;
        unsigned int read done CS3 : 1;
        unsigned int write done CS3 : 1;
        unsigned int reserved_3 : 1;
        unsigned int all buffer ready : 1;
        unsigned int buffer1 ready : 1;
        unsigned int buffer2 ready : 1;
        unsigned int buffer3 ready : 1;
        unsigned int buffer4 ready : 1;
        unsigned int data ecc 1bit error : 1;
        unsigned int data ecc 2bit error : 1;
        unsigned int lsn ecc 1bit error : 1;
        unsigned int lsn ecc 2bit error : 1;
        unsigned int flashlock error : 1;
        unsigned int reserved_4 : 6;
    } reg;
} SOC_NANDC_NfIntClr_UNION;
#endif
#define SOC_NANDC_NfIntClr_command done CS0_START (0)
#define SOC_NANDC_NfIntClr_command done CS0_END (0)
#define SOC_NANDC_NfIntClr_read done CS0_START (1)
#define SOC_NANDC_NfIntClr_read done CS0_END (1)
#define SOC_NANDC_NfIntClr_write done CS0_START (2)
#define SOC_NANDC_NfIntClr_write done CS0_END (2)
#define SOC_NANDC_NfIntClr_command done CS1_START (4)
#define SOC_NANDC_NfIntClr_command done CS1_END (4)
#define SOC_NANDC_NfIntClr_read done CS1_START (5)
#define SOC_NANDC_NfIntClr_read done CS1_END (5)
#define SOC_NANDC_NfIntClr_write done CS1_START (6)
#define SOC_NANDC_NfIntClr_write done CS1_END (6)
#define SOC_NANDC_NfIntClr_command done CS2_START (8)
#define SOC_NANDC_NfIntClr_command done CS2_END (8)
#define SOC_NANDC_NfIntClr_read done CS2_START (9)
#define SOC_NANDC_NfIntClr_read done CS2_END (9)
#define SOC_NANDC_NfIntClr_write done CS2_START (10)
#define SOC_NANDC_NfIntClr_write done CS2_END (10)
#define SOC_NANDC_NfIntClr_command done CS3_START (12)
#define SOC_NANDC_NfIntClr_command done CS3_END (12)
#define SOC_NANDC_NfIntClr_read done CS3_START (13)
#define SOC_NANDC_NfIntClr_read done CS3_END (13)
#define SOC_NANDC_NfIntClr_write done CS3_START (14)
#define SOC_NANDC_NfIntClr_write done CS3_END (14)
#define SOC_NANDC_NfIntClr_all buffer ready_START (16)
#define SOC_NANDC_NfIntClr_all buffer ready_END (16)
#define SOC_NANDC_NfIntClr_buffer1 ready_START (17)
#define SOC_NANDC_NfIntClr_buffer1 ready_END (17)
#define SOC_NANDC_NfIntClr_buffer2 ready_START (18)
#define SOC_NANDC_NfIntClr_buffer2 ready_END (18)
#define SOC_NANDC_NfIntClr_buffer3 ready_START (19)
#define SOC_NANDC_NfIntClr_buffer3 ready_END (19)
#define SOC_NANDC_NfIntClr_buffer4 ready_START (20)
#define SOC_NANDC_NfIntClr_buffer4 ready_END (20)
#define SOC_NANDC_NfIntClr_data ecc 1bit error_START (21)
#define SOC_NANDC_NfIntClr_data ecc 1bit error_END (21)
#define SOC_NANDC_NfIntClr_data ecc 2bit error_START (22)
#define SOC_NANDC_NfIntClr_data ecc 2bit error_END (22)
#define SOC_NANDC_NfIntClr_lsn ecc 1bit error_START (23)
#define SOC_NANDC_NfIntClr_lsn ecc 1bit error_END (23)
#define SOC_NANDC_NfIntClr_lsn ecc 2bit error_START (24)
#define SOC_NANDC_NfIntClr_lsn ecc 2bit error_END (24)
#define SOC_NANDC_NfIntClr_flashlock error_START (25)
#define SOC_NANDC_NfIntClr_flashlock error_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Start Read : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_NANDC_StartRd_UNION;
#endif
#define SOC_NANDC_StartRd_Start Read_START (0)
#define SOC_NANDC_StartRd_Start Read_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int CS don¡¯t care Enable : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_NANDC_CsdnEn_UNION;
#endif
#define SOC_NANDC_CsdnEn_CS don¡¯t care Enable_START (0)
#define SOC_NANDC_CsdnEn_CS don¡¯t care Enable_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flashlock start addr1 : 26;
        unsigned int reserved : 6;
    } reg;
} SOC_NANDC_NfLockStartAddr1_UNION;
#endif
#define SOC_NANDC_NfLockStartAddr1_flashlock start addr1_START (0)
#define SOC_NANDC_NfLockStartAddr1_flashlock start addr1_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flashlock end addr1 : 26;
        unsigned int reserved : 6;
    } reg;
} SOC_NANDC_NfLockEndAddr1_UNION;
#endif
#define SOC_NANDC_NfLockEndAddr1_flashlock end addr1_START (0)
#define SOC_NANDC_NfLockEndAddr1_flashlock end addr1_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flashlock start addr2 : 26;
        unsigned int reserved : 6;
    } reg;
} SOC_NANDC_NfLockStartAddr2_UNION;
#endif
#define SOC_NANDC_NfLockStartAddr2_flashlock start addr2_START (0)
#define SOC_NANDC_NfLockStartAddr2_flashlock start addr2_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flashlock end addr2 : 26;
        unsigned int reserved : 6;
    } reg;
} SOC_NANDC_NfLockEndAddr2_UNION;
#endif
#define SOC_NANDC_NfLockEndAddr2_flashlock end addr2_START (0)
#define SOC_NANDC_NfLockEndAddr2_flashlock end addr2_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flashlock start addr3 : 26;
        unsigned int reserved : 6;
    } reg;
} SOC_NANDC_NfLockStartAddr3_UNION;
#endif
#define SOC_NANDC_NfLockStartAddr3_flashlock start addr3_START (0)
#define SOC_NANDC_NfLockStartAddr3_flashlock start addr3_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flashlock end addr3 : 26;
        unsigned int reserved : 6;
    } reg;
} SOC_NANDC_NfLockEndAddr3_UNION;
#endif
#define SOC_NANDC_NfLockEndAddr3_flashlock end addr3_START (0)
#define SOC_NANDC_NfLockEndAddr3_flashlock end addr3_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flashlock start addr4 : 26;
        unsigned int reserved : 6;
    } reg;
} SOC_NANDC_NfLockStartAddr4_UNION;
#endif
#define SOC_NANDC_NfLockStartAddr4_flashlock start addr4_START (0)
#define SOC_NANDC_NfLockStartAddr4_flashlock start addr4_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flashlock end addr4 : 26;
        unsigned int reserved : 6;
    } reg;
} SOC_NANDC_NfLockEndAddr4_UNION;
#endif
#define SOC_NANDC_NfLockEndAddr4_flashlock end addr4_START (0)
#define SOC_NANDC_NfLockEndAddr4_flashlock end addr4_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flashlock whole enable : 1;
        unsigned int flashlock enable : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_NANDC_NfLockEn_UNION;
#endif
#define SOC_NANDC_NfLockEn_flashlock whole enable_START (0)
#define SOC_NANDC_NfLockEn_flashlock whole enable_END (0)
#define SOC_NANDC_NfLockEn_flashlock enable_START (1)
#define SOC_NANDC_NfLockEn_flashlock enable_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flashlock control : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_NANDC_NfLockCont_UNION;
#endif
#define SOC_NANDC_NfLockCont_flashlock control_START (0)
#define SOC_NANDC_NfLockCont_flashlock control_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Block_command1 : 8;
        unsigned int Block_command2 : 8;
        unsigned int Page_command1 : 8;
        unsigned int Page_command2 : 8;
    } reg;
} SOC_NANDC_NflockCommand1_UNION;
#endif
#define SOC_NANDC_NflockCommand1_Block_command1_START (0)
#define SOC_NANDC_NflockCommand1_Block_command1_END (7)
#define SOC_NANDC_NflockCommand1_Block_command2_START (8)
#define SOC_NANDC_NflockCommand1_Block_command2_END (15)
#define SOC_NANDC_NflockCommand1_Page_command1_START (16)
#define SOC_NANDC_NflockCommand1_Page_command1_END (23)
#define SOC_NANDC_NflockCommand1_Page_command2_START (24)
#define SOC_NANDC_NflockCommand1_Page_command2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Page_command3 : 8;
        unsigned int Page_command4 : 8;
        unsigned int Page_command5 : 8;
        unsigned int Page_command6 : 8;
    } reg;
} SOC_NANDC_NflockCommand2_UNION;
#endif
#define SOC_NANDC_NflockCommand2_Page_command3_START (0)
#define SOC_NANDC_NflockCommand2_Page_command3_END (7)
#define SOC_NANDC_NflockCommand2_Page_command4_START (8)
#define SOC_NANDC_NflockCommand2_Page_command4_END (15)
#define SOC_NANDC_NflockCommand2_Page_command5_START (16)
#define SOC_NANDC_NflockCommand2_Page_command5_END (23)
#define SOC_NANDC_NflockCommand2_Page_command6_START (24)
#define SOC_NANDC_NflockCommand2_Page_command6_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
