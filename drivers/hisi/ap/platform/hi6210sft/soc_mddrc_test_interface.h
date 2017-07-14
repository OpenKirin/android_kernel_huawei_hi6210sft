#ifndef __SOC_MDDRC_TEST_INTERFACE_H__
#define __SOC_MDDRC_TEST_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_0_ADDR(base) ((base) + (0x000))
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_1_ADDR(base) ((base) + (0x004))
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_2_ADDR(base) ((base) + (0x008))
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_0_ADDR(base) ((base) + (0x010))
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_1_ADDR(base) ((base) + (0x014))
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_2_ADDR(base) ((base) + (0x018))
#define SOC_MDDRC_TEST_PHY_IOTST_O_0_ADDR(base) ((base) + (0x020))
#define SOC_MDDRC_TEST_PHY_IOTST_O_1_ADDR(base) ((base) + (0x024))
#define SOC_MDDRC_TEST_PHY_IOTST_O_2_ADDR(base) ((base) + (0x028))
#define SOC_MDDRC_TEST_PHY_IOTST_OE_0_ADDR(base) ((base) + (0x030))
#define SOC_MDDRC_TEST_PHY_IOTST_OE_1_ADDR(base) ((base) + (0x034))
#define SOC_MDDRC_TEST_PHY_IOTST_OE_2_ADDR(base) ((base) + (0x038))
#define SOC_MDDRC_TEST_PHY_IOTST_IE_0_ADDR(base) ((base) + (0x040))
#define SOC_MDDRC_TEST_PHY_IOTST_IE_1_ADDR(base) ((base) + (0x044))
#define SOC_MDDRC_TEST_PHY_IOTST_IE_2_ADDR(base) ((base) + (0x048))
#define SOC_MDDRC_TEST_PHY_IOTST_NE_0_ADDR(base) ((base) + (0x050))
#define SOC_MDDRC_TEST_PHY_IOTST_NE_1_ADDR(base) ((base) + (0x054))
#define SOC_MDDRC_TEST_PHY_IOTST_NE_2_ADDR(base) ((base) + (0x058))
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_0_ADDR(base) ((base) + (0x060))
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_1_ADDR(base) ((base) + (0x064))
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_2_ADDR(base) ((base) + (0x068))
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_0_ADDR(base) ((base) + (0x070))
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_1_ADDR(base) ((base) + (0x074))
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_2_ADDR(base) ((base) + (0x078))
#define SOC_MDDRC_TEST_PHY_IOTST_I_0_ADDR(base) ((base) + (0x080))
#define SOC_MDDRC_TEST_PHY_IOTST_I_1_ADDR(base) ((base) + (0x084))
#define SOC_MDDRC_TEST_PHY_IOTST_I_2_ADDR(base) ((base) + (0x088))
#define SOC_MDDRC_TEST_PACK_DBG_SEL_ADDR(base) ((base) + (0x090))
#define SOC_MDDRC_TEST_PACK_DBG_STATE_ADDR(base) ((base) + (0x094))
#define SOC_MDDRC_TEST_DBG_PCLK_GATED_ADDR(base) ((base) + (0x098))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_iotest_0 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IOTEST_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_0_iotst_iotest_0_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_0_iotst_iotest_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_iotest_1 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IOTEST_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_1_iotst_iotest_1_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_1_iotst_iotest_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_iotest_2 : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IOTEST_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_2_iotst_iotest_2_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IOTEST_2_iotst_iotest_2_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_ietest_0 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IETEST_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_0_iotst_ietest_0_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_0_iotst_ietest_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_ietest_1 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IETEST_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_1_iotst_ietest_1_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_1_iotst_ietest_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_ietest_2 : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IETEST_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_2_iotst_ietest_2_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IETEST_2_iotst_ietest_2_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_o_0 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_O_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_O_0_iotst_o_0_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_O_0_iotst_o_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_o_1 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_O_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_O_1_iotst_o_1_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_O_1_iotst_o_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int : 10;
        unsigned int iotst_o_2 : 22;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_O_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_O_2__START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_O_2__END (9)
#define SOC_MDDRC_TEST_PHY_IOTST_O_2_iotst_o_2_START (10)
#define SOC_MDDRC_TEST_PHY_IOTST_O_2_iotst_o_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_oe_0 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_OE_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_OE_0_iotst_oe_0_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_OE_0_iotst_oe_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_oe_1 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_OE_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_OE_1_iotst_oe_1_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_OE_1_iotst_oe_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_oe_2 : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_OE_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_OE_2_iotst_oe_2_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_OE_2_iotst_oe_2_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_ie_0 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IE_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IE_0_iotst_ie_0_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IE_0_iotst_ie_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_ie_1 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IE_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IE_1_iotst_ie_1_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IE_1_iotst_ie_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_IE_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_IE_2__START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_IE_2__END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_ne_0 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_NE_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_NE_0_iotst_ne_0_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_NE_0_iotst_ne_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_ne_1 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_NE_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_NE_1_iotst_ne_1_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_NE_1_iotst_ne_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_ne_2 : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_NE_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_NE_2_iotst_ne_2_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_NE_2_iotst_ne_2_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_odttest_0 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_0_iotst_odttest_0_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_0_iotst_odttest_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_odttest_1 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_1_iotst_odttest_1_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_1_iotst_odttest_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_odttest_2 : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_2_iotst_odttest_2_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTTEST_2_iotst_odttest_2_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_odten_0 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTEN_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_0_iotst_odten_0_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_0_iotst_odten_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_odten_1 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTEN_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_1_iotst_odten_1_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_1_iotst_odten_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_odten_2 : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_ODTEN_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_2_iotst_odten_2_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_ODTEN_2_iotst_odten_2_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_i_0 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_I_0_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_I_0_iotst_i_0_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_I_0_iotst_i_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_i_1 : 32;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_I_1_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_I_1_iotst_i_1_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_I_1_iotst_i_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iotst_i_2 : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MDDRC_TEST_PHY_IOTST_I_2_UNION;
#endif
#define SOC_MDDRC_TEST_PHY_IOTST_I_2_iotst_i_2_START (0)
#define SOC_MDDRC_TEST_PHY_IOTST_I_2_iotst_i_2_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_sel : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MDDRC_TEST_PACK_DBG_SEL_UNION;
#endif
#define SOC_MDDRC_TEST_PACK_DBG_SEL_dbg_sel_START (0)
#define SOC_MDDRC_TEST_PACK_DBG_SEL_dbg_sel_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_state : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_MDDRC_TEST_PACK_DBG_STATE_UNION;
#endif
#define SOC_MDDRC_TEST_PACK_DBG_STATE_dbg_state_START (0)
#define SOC_MDDRC_TEST_PACK_DBG_STATE_dbg_state_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sta_ckg_dbg : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MDDRC_TEST_DBG_PCLK_GATED_UNION;
#endif
#define SOC_MDDRC_TEST_DBG_PCLK_GATED_sta_ckg_dbg_START (0)
#define SOC_MDDRC_TEST_DBG_PCLK_GATED_sta_ckg_dbg_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
