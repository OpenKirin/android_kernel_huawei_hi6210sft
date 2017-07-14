#ifndef __SOC_UART_INTERFACE_H__
#define __SOC_UART_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_UART_DR_ADDR(base) ((base) + (0x000))
#define SOC_UART_RSR_ADDR(base) ((base) + (0x004))
#define SOC_UART_FR_ADDR(base) ((base) + (0x018))
#define SOC_UART_UARTLPR_ADDR(base) ((base) + (0x020))
#define SOC_UART_IBRD_ADDR(base) ((base) + (0x024))
#define SOC_UART_FBRD_ADDR(base) ((base) + (0x028))
#define SOC_UART_LCR_H_ADDR(base) ((base) + (0x02C))
#define SOC_UART_CR_ADDR(base) ((base) + (0x030))
#define SOC_UART_IFLS_ADDR(base) ((base) + (0x034))
#define SOC_UART_IMSC_ADDR(base) ((base) + (0x038))
#define SOC_UART_RIS_ADDR(base) ((base) + (0x03C))
#define SOC_UART_MIS_ADDR(base) ((base) + (0x040))
#define SOC_UART_ICR_ADDR(base) ((base) + (0x044))
#define SOC_UART_DMACR_ADDR(base) ((base) + (0x048))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short data : 8;
        unsigned short fe : 1;
        unsigned short pe : 1;
        unsigned short be : 1;
        unsigned short oe : 1;
        unsigned short reserved : 4;
    } reg;
} SOC_UART_DR_UNION;
#endif
#define SOC_UART_DR_data_START (0)
#define SOC_UART_DR_data_END (7)
#define SOC_UART_DR_fe_START (8)
#define SOC_UART_DR_fe_END (8)
#define SOC_UART_DR_pe_START (9)
#define SOC_UART_DR_pe_END (9)
#define SOC_UART_DR_be_START (10)
#define SOC_UART_DR_be_END (10)
#define SOC_UART_DR_oe_START (11)
#define SOC_UART_DR_oe_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char fe : 1;
        unsigned char pe : 1;
        unsigned char be : 1;
        unsigned char oe : 1;
        unsigned char reserved : 4;
    } reg;
} SOC_UART_RSR_UNION;
#endif
#define SOC_UART_RSR_fe_START (0)
#define SOC_UART_RSR_fe_END (0)
#define SOC_UART_RSR_pe_START (1)
#define SOC_UART_RSR_pe_END (1)
#define SOC_UART_RSR_be_START (2)
#define SOC_UART_RSR_be_END (2)
#define SOC_UART_RSR_oe_START (3)
#define SOC_UART_RSR_oe_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short cts : 1;
        unsigned short reserved_0: 2;
        unsigned short busy : 1;
        unsigned short rxfe : 1;
        unsigned short txff : 1;
        unsigned short rxff : 1;
        unsigned short txfe : 1;
        unsigned short reserved_1: 8;
    } reg;
} SOC_UART_FR_UNION;
#endif
#define SOC_UART_FR_cts_START (0)
#define SOC_UART_FR_cts_END (0)
#define SOC_UART_FR_busy_START (3)
#define SOC_UART_FR_busy_END (3)
#define SOC_UART_FR_rxfe_START (4)
#define SOC_UART_FR_rxfe_END (4)
#define SOC_UART_FR_txff_START (5)
#define SOC_UART_FR_txff_END (5)
#define SOC_UART_FR_rxff_START (6)
#define SOC_UART_FR_rxff_END (6)
#define SOC_UART_FR_txfe_START (7)
#define SOC_UART_FR_txfe_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short irda : 8;
        unsigned short reserved : 8;
    } reg;
} SOC_UART_UARTLPR_UNION;
#endif
#define SOC_UART_UARTLPR_irda_START (0)
#define SOC_UART_UARTLPR_irda_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short bauddivint : 16;
    } reg;
} SOC_UART_IBRD_UNION;
#endif
#define SOC_UART_IBRD_bauddivint_START (0)
#define SOC_UART_IBRD_bauddivint_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short banddivfrac : 16;
    } reg;
} SOC_UART_FBRD_UNION;
#endif
#define SOC_UART_FBRD_banddivfrac_START (0)
#define SOC_UART_FBRD_banddivfrac_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short brk : 1;
        unsigned short pen : 1;
        unsigned short eps : 1;
        unsigned short stp2 : 1;
        unsigned short fen : 1;
        unsigned short wlen : 2;
        unsigned short sps : 1;
        unsigned short reserved : 8;
    } reg;
} SOC_UART_LCR_H_UNION;
#endif
#define SOC_UART_LCR_H_brk_START (0)
#define SOC_UART_LCR_H_brk_END (0)
#define SOC_UART_LCR_H_pen_START (1)
#define SOC_UART_LCR_H_pen_END (1)
#define SOC_UART_LCR_H_eps_START (2)
#define SOC_UART_LCR_H_eps_END (2)
#define SOC_UART_LCR_H_stp2_START (3)
#define SOC_UART_LCR_H_stp2_END (3)
#define SOC_UART_LCR_H_fen_START (4)
#define SOC_UART_LCR_H_fen_END (4)
#define SOC_UART_LCR_H_wlen_START (5)
#define SOC_UART_LCR_H_wlen_END (6)
#define SOC_UART_LCR_H_sps_START (7)
#define SOC_UART_LCR_H_sps_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short uarten : 1;
        unsigned short reserved_0: 6;
        unsigned short lbe : 1;
        unsigned short txe : 1;
        unsigned short rxe : 1;
        unsigned short dtr : 1;
        unsigned short rts : 1;
        unsigned short reserved_1: 2;
        unsigned short rtsen : 1;
        unsigned short ctsen : 1;
    } reg;
} SOC_UART_CR_UNION;
#endif
#define SOC_UART_CR_uarten_START (0)
#define SOC_UART_CR_uarten_END (0)
#define SOC_UART_CR_lbe_START (7)
#define SOC_UART_CR_lbe_END (7)
#define SOC_UART_CR_txe_START (8)
#define SOC_UART_CR_txe_END (8)
#define SOC_UART_CR_rxe_START (9)
#define SOC_UART_CR_rxe_END (9)
#define SOC_UART_CR_dtr_START (10)
#define SOC_UART_CR_dtr_END (10)
#define SOC_UART_CR_rts_START (11)
#define SOC_UART_CR_rts_END (11)
#define SOC_UART_CR_rtsen_START (14)
#define SOC_UART_CR_rtsen_END (14)
#define SOC_UART_CR_ctsen_START (15)
#define SOC_UART_CR_ctsen_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short txiflsel : 3;
        unsigned short rxiflsel : 3;
        unsigned short rtsflsel : 3;
        unsigned short reserved : 7;
    } reg;
} SOC_UART_IFLS_UNION;
#endif
#define SOC_UART_IFLS_txiflsel_START (0)
#define SOC_UART_IFLS_txiflsel_END (2)
#define SOC_UART_IFLS_rxiflsel_START (3)
#define SOC_UART_IFLS_rxiflsel_END (5)
#define SOC_UART_IFLS_rtsflsel_START (6)
#define SOC_UART_IFLS_rtsflsel_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short reserved_0: 4;
        unsigned short rxim : 1;
        unsigned short txim : 1;
        unsigned short rtim : 1;
        unsigned short feim : 1;
        unsigned short peim : 1;
        unsigned short beim : 1;
        unsigned short oeim : 1;
        unsigned short reserved_1: 5;
    } reg;
} SOC_UART_IMSC_UNION;
#endif
#define SOC_UART_IMSC_rxim_START (4)
#define SOC_UART_IMSC_rxim_END (4)
#define SOC_UART_IMSC_txim_START (5)
#define SOC_UART_IMSC_txim_END (5)
#define SOC_UART_IMSC_rtim_START (6)
#define SOC_UART_IMSC_rtim_END (6)
#define SOC_UART_IMSC_feim_START (7)
#define SOC_UART_IMSC_feim_END (7)
#define SOC_UART_IMSC_peim_START (8)
#define SOC_UART_IMSC_peim_END (8)
#define SOC_UART_IMSC_beim_START (9)
#define SOC_UART_IMSC_beim_END (9)
#define SOC_UART_IMSC_oeim_START (10)
#define SOC_UART_IMSC_oeim_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short reserved_0: 4;
        unsigned short rxris : 1;
        unsigned short txris : 1;
        unsigned short rtris : 1;
        unsigned short feris : 1;
        unsigned short peris : 1;
        unsigned short beris : 1;
        unsigned short oeris : 1;
        unsigned short reserved_1: 5;
    } reg;
} SOC_UART_RIS_UNION;
#endif
#define SOC_UART_RIS_rxris_START (4)
#define SOC_UART_RIS_rxris_END (4)
#define SOC_UART_RIS_txris_START (5)
#define SOC_UART_RIS_txris_END (5)
#define SOC_UART_RIS_rtris_START (6)
#define SOC_UART_RIS_rtris_END (6)
#define SOC_UART_RIS_feris_START (7)
#define SOC_UART_RIS_feris_END (7)
#define SOC_UART_RIS_peris_START (8)
#define SOC_UART_RIS_peris_END (8)
#define SOC_UART_RIS_beris_START (9)
#define SOC_UART_RIS_beris_END (9)
#define SOC_UART_RIS_oeris_START (10)
#define SOC_UART_RIS_oeris_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short reserved_0: 4;
        unsigned short rxmis : 1;
        unsigned short txmis : 1;
        unsigned short rtmis : 1;
        unsigned short femis : 1;
        unsigned short pemis : 1;
        unsigned short bemis : 1;
        unsigned short oemis : 1;
        unsigned short reserved_1: 5;
    } reg;
} SOC_UART_MIS_UNION;
#endif
#define SOC_UART_MIS_rxmis_START (4)
#define SOC_UART_MIS_rxmis_END (4)
#define SOC_UART_MIS_txmis_START (5)
#define SOC_UART_MIS_txmis_END (5)
#define SOC_UART_MIS_rtmis_START (6)
#define SOC_UART_MIS_rtmis_END (6)
#define SOC_UART_MIS_femis_START (7)
#define SOC_UART_MIS_femis_END (7)
#define SOC_UART_MIS_pemis_START (8)
#define SOC_UART_MIS_pemis_END (8)
#define SOC_UART_MIS_bemis_START (9)
#define SOC_UART_MIS_bemis_END (9)
#define SOC_UART_MIS_oemis_START (10)
#define SOC_UART_MIS_oemis_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short reserved_0: 4;
        unsigned short rxic : 1;
        unsigned short txic : 1;
        unsigned short rtic : 1;
        unsigned short feic : 1;
        unsigned short peic : 1;
        unsigned short beic : 1;
        unsigned short oeic : 1;
        unsigned short reserved_1: 5;
    } reg;
} SOC_UART_ICR_UNION;
#endif
#define SOC_UART_ICR_rxic_START (4)
#define SOC_UART_ICR_rxic_END (4)
#define SOC_UART_ICR_txic_START (5)
#define SOC_UART_ICR_txic_END (5)
#define SOC_UART_ICR_rtic_START (6)
#define SOC_UART_ICR_rtic_END (6)
#define SOC_UART_ICR_feic_START (7)
#define SOC_UART_ICR_feic_END (7)
#define SOC_UART_ICR_peic_START (8)
#define SOC_UART_ICR_peic_END (8)
#define SOC_UART_ICR_beic_START (9)
#define SOC_UART_ICR_beic_END (9)
#define SOC_UART_ICR_oeic_START (10)
#define SOC_UART_ICR_oeic_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short rxdmae : 1;
        unsigned short txdmae : 1;
        unsigned short dmaonerr : 1;
        unsigned short reserved : 13;
    } reg;
} SOC_UART_DMACR_UNION;
#endif
#define SOC_UART_DMACR_rxdmae_START (0)
#define SOC_UART_DMACR_rxdmae_END (0)
#define SOC_UART_DMACR_txdmae_START (1)
#define SOC_UART_DMACR_txdmae_END (1)
#define SOC_UART_DMACR_dmaonerr_START (2)
#define SOC_UART_DMACR_dmaonerr_END (2)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
