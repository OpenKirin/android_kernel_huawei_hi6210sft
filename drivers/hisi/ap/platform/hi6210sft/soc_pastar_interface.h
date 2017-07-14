#ifndef __SOC_PASTAR_INTERFACE_H__
#define __SOC_PASTAR_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_PASTAR_VERSION_ADDR(base) ((base) + (0x20))
#define SOC_PASTAR_STATUS1_ADDR(base) ((base) + (0x21))
#define SOC_PASTAR_PERIPH_CTRL1_ADDR(base) ((base) + (0x22))
#define SOC_PASTAR_ONOFF1_ADDR(base) ((base) + (0x23))
#define SOC_PASTAR_ONOFF2_ADDR(base) ((base) + (0x24))
#define SOC_PASTAR_SET_BUCK2_ADDR(base) ((base) + (0x26))
#define SOC_PASTAR_SET_BUCK1_ADDR(base) ((base) + (0x27))
#define SOC_PASTAR_SET_BUCK0_ADDR(base) ((base) + (0x28))
#define SOC_PASTAR_BUCK0_ADJ1_ADDR(base) ((base) + (0x29))
#define SOC_PASTAR_BUCK0_ADJ2_ADDR(base) ((base) + (0x2A))
#define SOC_PASTAR_BUCK0_ADJ3_ADDR(base) ((base) + (0x2B))
#define SOC_PASTAR_BUCK0_ADJ4_ADDR(base) ((base) + (0x2C))
#define SOC_PASTAR_BUCK0_ADJ5_ADDR(base) ((base) + (0x2D))
#define SOC_PASTAR_BUCK1_ADJ1_ADDR(base) ((base) + (0x30))
#define SOC_PASTAR_BUCK1_ADJ2_ADDR(base) ((base) + (0x31))
#define SOC_PASTAR_BUCK1_ADJ3_ADDR(base) ((base) + (0x32))
#define SOC_PASTAR_BUCK2_ADJ1_ADDR(base) ((base) + (0x36))
#define SOC_PASTAR_BUCK2_ADJ2_ADDR(base) ((base) + (0x37))
#define SOC_PASTAR_BUCK2_ADJ3_ADDR(base) ((base) + (0x38))
#define SOC_PASTAR_BUCK2_ADJ4_ADDR(base) ((base) + (0x39))
#define SOC_PASTAR_BUCK_CTRL1_ADDR(base) ((base) + (0x45))
#define SOC_PASTAR_BUCK_CTRL2_ADDR(base) ((base) + (0x46))
#define SOC_PASTAR_SET_LDO1_ADDR(base) ((base) + (0x48))
#define SOC_PASTAR_SET_LDO2_ADDR(base) ((base) + (0x49))
#define SOC_PASTAR_SET_LDO_CTRL_ADDR(base) ((base) + (0x4A))
#define SOC_PASTAR_PA_AMP_CTRL_ADDR(base) ((base) + (0x4B))
#define SOC_PASTAR_CLASSAB_CTRL_ADDR(base) ((base) + (0x4C))
#define SOC_PASTAR_ILIM_CTRL1_ADDR(base) ((base) + (0x4E))
#define SOC_PASTAR_ILIM_CTRL2_ADDR(base) ((base) + (0x4F))
#define SOC_PASTAR_BANDGAP_ADDR(base) ((base) + (0x55))
#define SOC_PASTAR_ANA_IN_ADDR(base) ((base) + (0x56))
#define SOC_PASTAR_RESERVED1_ADDR(base) ((base) + (0x57))
#define SOC_PASTAR_RESERVED2_ADDR(base) ((base) + (0x58))
#define SOC_PASTAR_RESERVED0_ADDR(base) ((base) + (0x59))
#define SOC_PASTAR_SET_OTP_ADDR(base) ((base) + (0x5A))
#define SOC_PASTAR_OTP_CTRL_ADDR(base) ((base) + (0x5B))
#define SOC_PASTAR_OTP_PDIN_ADDR(base) ((base) + (0x5C))
#define SOC_PASTAR_OTP_PDOB0_ADDR(base) ((base) + (0x5D))
#define SOC_PASTAR_OTP_PDOB1_ADDR(base) ((base) + (0x5E))
#define SOC_PASTAR_OTP_PDOB2_ADDR(base) ((base) + (0x5F))
#define SOC_PASTAR_OTP_PDOB3_ADDR(base) ((base) + (0x60))
#define SOC_PASTAR_NO_PWR_REG_RO_ADDR(base) ((base) + (0x6A))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char version : 8;
    } reg;
} SOC_PASTAR_VERSION_UNION;
#endif
#define SOC_PASTAR_VERSION_version_START (0)
#define SOC_PASTAR_VERSION_version_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ldo1 : 1;
        unsigned char ocp_ldo2 : 1;
        unsigned char ocp_buck0 : 1;
        unsigned char ocp_buck1 : 1;
        unsigned char ocp_buck2 : 1;
        unsigned char otmp150_d3r : 1;
        unsigned char otmp125_d3r : 1;
        unsigned char vdd_en_flag : 1;
    } reg;
} SOC_PASTAR_STATUS1_UNION;
#endif
#define SOC_PASTAR_STATUS1_ocp_ldo1_START (0)
#define SOC_PASTAR_STATUS1_ocp_ldo1_END (0)
#define SOC_PASTAR_STATUS1_ocp_ldo2_START (1)
#define SOC_PASTAR_STATUS1_ocp_ldo2_END (1)
#define SOC_PASTAR_STATUS1_ocp_buck0_START (2)
#define SOC_PASTAR_STATUS1_ocp_buck0_END (2)
#define SOC_PASTAR_STATUS1_ocp_buck1_START (3)
#define SOC_PASTAR_STATUS1_ocp_buck1_END (3)
#define SOC_PASTAR_STATUS1_ocp_buck2_START (4)
#define SOC_PASTAR_STATUS1_ocp_buck2_END (4)
#define SOC_PASTAR_STATUS1_otmp150_d3r_START (5)
#define SOC_PASTAR_STATUS1_otmp150_d3r_END (5)
#define SOC_PASTAR_STATUS1_otmp125_d3r_START (6)
#define SOC_PASTAR_STATUS1_otmp125_d3r_END (6)
#define SOC_PASTAR_STATUS1_vdd_en_flag_START (7)
#define SOC_PASTAR_STATUS1_vdd_en_flag_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_auto_off : 1;
        unsigned char otmp_off_ctrl : 1;
        unsigned char ocp_deb_sel : 2;
        unsigned char en_buck_ocp_debounce : 1;
        unsigned char en_ldo_ocp_debounce : 1;
        unsigned char reserved : 2;
    } reg;
} SOC_PASTAR_PERIPH_CTRL1_UNION;
#endif
#define SOC_PASTAR_PERIPH_CTRL1_ocp_auto_off_START (0)
#define SOC_PASTAR_PERIPH_CTRL1_ocp_auto_off_END (0)
#define SOC_PASTAR_PERIPH_CTRL1_otmp_off_ctrl_START (1)
#define SOC_PASTAR_PERIPH_CTRL1_otmp_off_ctrl_END (1)
#define SOC_PASTAR_PERIPH_CTRL1_ocp_deb_sel_START (2)
#define SOC_PASTAR_PERIPH_CTRL1_ocp_deb_sel_END (3)
#define SOC_PASTAR_PERIPH_CTRL1_en_buck_ocp_debounce_START (4)
#define SOC_PASTAR_PERIPH_CTRL1_en_buck_ocp_debounce_END (4)
#define SOC_PASTAR_PERIPH_CTRL1_en_ldo_ocp_debounce_START (5)
#define SOC_PASTAR_PERIPH_CTRL1_en_ldo_ocp_debounce_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved_0 : 1;
        unsigned char en_buck0_int : 1;
        unsigned char reserved_1 : 1;
        unsigned char en_buck1_int : 1;
        unsigned char reserved_2 : 1;
        unsigned char en_buck2_int : 1;
        unsigned char reserved_3 : 2;
    } reg;
} SOC_PASTAR_ONOFF1_UNION;
#endif
#define SOC_PASTAR_ONOFF1_en_buck0_int_START (1)
#define SOC_PASTAR_ONOFF1_en_buck0_int_END (1)
#define SOC_PASTAR_ONOFF1_en_buck1_int_START (3)
#define SOC_PASTAR_ONOFF1_en_buck1_int_END (3)
#define SOC_PASTAR_ONOFF1_en_buck2_int_START (5)
#define SOC_PASTAR_ONOFF1_en_buck2_int_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_eco_ldo1_int : 1;
        unsigned char en_ldo1_int : 1;
        unsigned char en_eco_ldo2_int : 1;
        unsigned char en_ldo2_int : 1;
        unsigned char reserved : 4;
    } reg;
} SOC_PASTAR_ONOFF2_UNION;
#endif
#define SOC_PASTAR_ONOFF2_en_eco_ldo1_int_START (0)
#define SOC_PASTAR_ONOFF2_en_eco_ldo1_int_END (0)
#define SOC_PASTAR_ONOFF2_en_ldo1_int_START (1)
#define SOC_PASTAR_ONOFF2_en_ldo1_int_END (1)
#define SOC_PASTAR_ONOFF2_en_eco_ldo2_int_START (2)
#define SOC_PASTAR_ONOFF2_en_eco_ldo2_int_END (2)
#define SOC_PASTAR_ONOFF2_en_ldo2_int_START (3)
#define SOC_PASTAR_ONOFF2_en_ldo2_int_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_buck2 : 4;
        unsigned char buck2_mod_sel_int : 2;
        unsigned char reserved : 2;
    } reg;
} SOC_PASTAR_SET_BUCK2_UNION;
#endif
#define SOC_PASTAR_SET_BUCK2_vset_buck2_START (0)
#define SOC_PASTAR_SET_BUCK2_vset_buck2_END (3)
#define SOC_PASTAR_SET_BUCK2_buck2_mod_sel_int_START (4)
#define SOC_PASTAR_SET_BUCK2_buck2_mod_sel_int_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_buck1 : 4;
        unsigned char buck1_mod_sel_int : 2;
        unsigned char reserved : 2;
    } reg;
} SOC_PASTAR_SET_BUCK1_UNION;
#endif
#define SOC_PASTAR_SET_BUCK1_vset_buck1_START (0)
#define SOC_PASTAR_SET_BUCK1_vset_buck1_END (3)
#define SOC_PASTAR_SET_BUCK1_buck1_mod_sel_int_START (4)
#define SOC_PASTAR_SET_BUCK1_buck1_mod_sel_int_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_buck0 : 4;
        unsigned char pdm_sel : 1;
        unsigned char buck0_mode_sel_int : 2;
        unsigned char reserved : 1;
    } reg;
} SOC_PASTAR_SET_BUCK0_UNION;
#endif
#define SOC_PASTAR_SET_BUCK0_vset_buck0_START (0)
#define SOC_PASTAR_SET_BUCK0_vset_buck0_END (3)
#define SOC_PASTAR_SET_BUCK0_pdm_sel_START (4)
#define SOC_PASTAR_SET_BUCK0_pdm_sel_END (4)
#define SOC_PASTAR_SET_BUCK0_buck0_mode_sel_int_START (5)
#define SOC_PASTAR_SET_BUCK0_buck0_mode_sel_int_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck0_comp_adj : 8;
    } reg;
} SOC_PASTAR_BUCK0_ADJ1_UNION;
#endif
#define SOC_PASTAR_BUCK0_ADJ1_buck0_comp_adj_START (0)
#define SOC_PASTAR_BUCK0_ADJ1_buck0_comp_adj_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char sg0_sel : 2;
        unsigned char sc0_sel : 2;
        unsigned char shortn_buck0 : 1;
        unsigned char ccm0_ctr : 1;
        unsigned char buck0_dt_sel : 1;
        unsigned char clampen_buck0 : 1;
    } reg;
} SOC_PASTAR_BUCK0_ADJ2_UNION;
#endif
#define SOC_PASTAR_BUCK0_ADJ2_sg0_sel_START (0)
#define SOC_PASTAR_BUCK0_ADJ2_sg0_sel_END (1)
#define SOC_PASTAR_BUCK0_ADJ2_sc0_sel_START (2)
#define SOC_PASTAR_BUCK0_ADJ2_sc0_sel_END (3)
#define SOC_PASTAR_BUCK0_ADJ2_shortn_buck0_START (4)
#define SOC_PASTAR_BUCK0_ADJ2_shortn_buck0_END (4)
#define SOC_PASTAR_BUCK0_ADJ2_ccm0_ctr_START (5)
#define SOC_PASTAR_BUCK0_ADJ2_ccm0_ctr_END (5)
#define SOC_PASTAR_BUCK0_ADJ2_buck0_dt_sel_START (6)
#define SOC_PASTAR_BUCK0_ADJ2_buck0_dt_sel_END (6)
#define SOC_PASTAR_BUCK0_ADJ2_clampen_buck0_START (7)
#define SOC_PASTAR_BUCK0_ADJ2_clampen_buck0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp0_shield : 1;
        unsigned char ocp0_3a_p : 1;
        unsigned char buck0_hyctrl : 1;
        unsigned char ramp_sel : 1;
        unsigned char ton_sel : 2;
        unsigned char buck0_dmd_sel : 2;
    } reg;
} SOC_PASTAR_BUCK0_ADJ3_UNION;
#endif
#define SOC_PASTAR_BUCK0_ADJ3_ocp0_shield_START (0)
#define SOC_PASTAR_BUCK0_ADJ3_ocp0_shield_END (0)
#define SOC_PASTAR_BUCK0_ADJ3_ocp0_3a_p_START (1)
#define SOC_PASTAR_BUCK0_ADJ3_ocp0_3a_p_END (1)
#define SOC_PASTAR_BUCK0_ADJ3_buck0_hyctrl_START (2)
#define SOC_PASTAR_BUCK0_ADJ3_buck0_hyctrl_END (2)
#define SOC_PASTAR_BUCK0_ADJ3_ramp_sel_START (3)
#define SOC_PASTAR_BUCK0_ADJ3_ramp_sel_END (3)
#define SOC_PASTAR_BUCK0_ADJ3_ton_sel_START (4)
#define SOC_PASTAR_BUCK0_ADJ3_ton_sel_END (5)
#define SOC_PASTAR_BUCK0_ADJ3_buck0_dmd_sel_START (6)
#define SOC_PASTAR_BUCK0_ADJ3_buck0_dmd_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck0_reserv : 8;
    } reg;
} SOC_PASTAR_BUCK0_ADJ4_UNION;
#endif
#define SOC_PASTAR_BUCK0_ADJ4_buck0_reserv_START (0)
#define SOC_PASTAR_BUCK0_ADJ4_buck0_reserv_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck0_reserv2 : 7;
        unsigned char en_vodet : 1;
    } reg;
} SOC_PASTAR_BUCK0_ADJ5_UNION;
#endif
#define SOC_PASTAR_BUCK0_ADJ5_buck0_reserv2_START (0)
#define SOC_PASTAR_BUCK0_ADJ5_buck0_reserv2_END (6)
#define SOC_PASTAR_BUCK0_ADJ5_en_vodet_START (7)
#define SOC_PASTAR_BUCK0_ADJ5_en_vodet_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck1_comp_adj : 8;
    } reg;
} SOC_PASTAR_BUCK1_ADJ1_UNION;
#endif
#define SOC_PASTAR_BUCK1_ADJ1_buck1_comp_adj_START (0)
#define SOC_PASTAR_BUCK1_ADJ1_buck1_comp_adj_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck1_sg_sel : 2;
        unsigned char buck1_sc_sel : 2;
        unsigned char buck1_shortn : 1;
        unsigned char buck1_ccm_ctr : 1;
        unsigned char buck1_dt_sel : 1;
        unsigned char buck1_clampen : 1;
    } reg;
} SOC_PASTAR_BUCK1_ADJ2_UNION;
#endif
#define SOC_PASTAR_BUCK1_ADJ2_buck1_sg_sel_START (0)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_sg_sel_END (1)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_sc_sel_START (2)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_sc_sel_END (3)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_shortn_START (4)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_shortn_END (4)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_ccm_ctr_START (5)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_ccm_ctr_END (5)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_dt_sel_START (6)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_dt_sel_END (6)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_clampen_START (7)
#define SOC_PASTAR_BUCK1_ADJ2_buck1_clampen_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck1_ocp_shield : 1;
        unsigned char buck1_nmos_shut : 1;
        unsigned char buck1_dmd_sel : 2;
        unsigned char buck1_reserv : 3;
        unsigned char reserved : 1;
    } reg;
} SOC_PASTAR_BUCK1_ADJ3_UNION;
#endif
#define SOC_PASTAR_BUCK1_ADJ3_buck1_ocp_shield_START (0)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_ocp_shield_END (0)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_nmos_shut_START (1)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_nmos_shut_END (1)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_dmd_sel_START (2)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_dmd_sel_END (3)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_reserv_START (4)
#define SOC_PASTAR_BUCK1_ADJ3_buck1_reserv_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_comp_adj : 8;
    } reg;
} SOC_PASTAR_BUCK2_ADJ1_UNION;
#endif
#define SOC_PASTAR_BUCK2_ADJ1_buck2_comp_adj_START (0)
#define SOC_PASTAR_BUCK2_ADJ1_buck2_comp_adj_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_sg_sel : 2;
        unsigned char buck2_sc_sel : 2;
        unsigned char buck2_shortn : 1;
        unsigned char buck2_ccm_ctr : 1;
        unsigned char buck2_dt_sel : 1;
        unsigned char buck2_clampen : 1;
    } reg;
} SOC_PASTAR_BUCK2_ADJ2_UNION;
#endif
#define SOC_PASTAR_BUCK2_ADJ2_buck2_sg_sel_START (0)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_sg_sel_END (1)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_sc_sel_START (2)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_sc_sel_END (3)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_shortn_START (4)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_shortn_END (4)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_ccm_ctr_START (5)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_ccm_ctr_END (5)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_dt_sel_START (6)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_dt_sel_END (6)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_clampen_START (7)
#define SOC_PASTAR_BUCK2_ADJ2_buck2_clampen_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_ocp_shield : 1;
        unsigned char buck2_nmos_shut : 1;
        unsigned char buck2_dmd_sel : 2;
        unsigned char buck2_reserv : 3;
        unsigned char reserved : 1;
    } reg;
} SOC_PASTAR_BUCK2_ADJ3_UNION;
#endif
#define SOC_PASTAR_BUCK2_ADJ3_buck2_ocp_shield_START (0)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_ocp_shield_END (0)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_nmos_shut_START (1)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_nmos_shut_END (1)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_dmd_sel_START (2)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_dmd_sel_END (3)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_reserv_START (4)
#define SOC_PASTAR_BUCK2_ADJ3_buck2_reserv_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_slope_gen : 2;
        unsigned char reserved : 6;
    } reg;
} SOC_PASTAR_BUCK2_ADJ4_UNION;
#endif
#define SOC_PASTAR_BUCK2_ADJ4_buck2_slope_gen_START (0)
#define SOC_PASTAR_BUCK2_ADJ4_buck2_slope_gen_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck_osc_f : 5;
        unsigned char reserved : 3;
    } reg;
} SOC_PASTAR_BUCK_CTRL1_UNION;
#endif
#define SOC_PASTAR_BUCK_CTRL1_buck_osc_f_START (0)
#define SOC_PASTAR_BUCK_CTRL1_buck_osc_f_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck_osc_random : 8;
    } reg;
} SOC_PASTAR_BUCK_CTRL2_UNION;
#endif
#define SOC_PASTAR_BUCK_CTRL2_buck_osc_random_START (0)
#define SOC_PASTAR_BUCK_CTRL2_buck_osc_random_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo1 : 4;
        unsigned char reserved : 4;
    } reg;
} SOC_PASTAR_SET_LDO1_UNION;
#endif
#define SOC_PASTAR_SET_LDO1_vset_ldo1_START (0)
#define SOC_PASTAR_SET_LDO1_vset_ldo1_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo2 : 4;
        unsigned char reserved : 4;
    } reg;
} SOC_PASTAR_SET_LDO2_UNION;
#endif
#define SOC_PASTAR_SET_LDO2_vset_ldo2_START (0)
#define SOC_PASTAR_SET_LDO2_vset_ldo2_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vs_delay_ldo_int : 2;
        unsigned char vs_en_ldo_delay_int : 2;
        unsigned char vs_ldo : 3;
        unsigned char reserved : 1;
    } reg;
} SOC_PASTAR_SET_LDO_CTRL_UNION;
#endif
#define SOC_PASTAR_SET_LDO_CTRL_vs_delay_ldo_int_START (0)
#define SOC_PASTAR_SET_LDO_CTRL_vs_delay_ldo_int_END (1)
#define SOC_PASTAR_SET_LDO_CTRL_vs_en_ldo_delay_int_START (2)
#define SOC_PASTAR_SET_LDO_CTRL_vs_en_ldo_delay_int_END (3)
#define SOC_PASTAR_SET_LDO_CTRL_vs_ldo_START (4)
#define SOC_PASTAR_SET_LDO_CTRL_vs_ldo_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reg_cap : 4;
        unsigned char set_ib_amp : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_PASTAR_PA_AMP_CTRL_UNION;
#endif
#define SOC_PASTAR_PA_AMP_CTRL_reg_cap_START (0)
#define SOC_PASTAR_PA_AMP_CTRL_reg_cap_END (3)
#define SOC_PASTAR_PA_AMP_CTRL_set_ib_amp_START (4)
#define SOC_PASTAR_PA_AMP_CTRL_set_ib_amp_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ibd : 3;
        unsigned char reserved : 5;
    } reg;
} SOC_PASTAR_CLASSAB_CTRL_UNION;
#endif
#define SOC_PASTAR_CLASSAB_CTRL_ibd_START (0)
#define SOC_PASTAR_CLASSAB_CTRL_ibd_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char lit_cur_set : 3;
        unsigned char clim_op_isel : 1;
        unsigned char pro_mode : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_PASTAR_ILIM_CTRL1_UNION;
#endif
#define SOC_PASTAR_ILIM_CTRL1_lit_cur_set_START (0)
#define SOC_PASTAR_ILIM_CTRL1_lit_cur_set_END (2)
#define SOC_PASTAR_ILIM_CTRL1_clim_op_isel_START (3)
#define SOC_PASTAR_ILIM_CTRL1_clim_op_isel_END (3)
#define SOC_PASTAR_ILIM_CTRL1_pro_mode_START (4)
#define SOC_PASTAR_ILIM_CTRL1_pro_mode_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char clim_vos : 4;
        unsigned char clim_ctl : 4;
    } reg;
} SOC_PASTAR_ILIM_CTRL2_UNION;
#endif
#define SOC_PASTAR_ILIM_CTRL2_clim_vos_START (0)
#define SOC_PASTAR_ILIM_CTRL2_clim_vos_END (3)
#define SOC_PASTAR_ILIM_CTRL2_clim_ctl_START (4)
#define SOC_PASTAR_ILIM_CTRL2_clim_ctl_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char test_bg : 2;
        unsigned char en_tmp : 1;
        unsigned char reserved : 5;
    } reg;
} SOC_PASTAR_BANDGAP_UNION;
#endif
#define SOC_PASTAR_BANDGAP_test_bg_START (0)
#define SOC_PASTAR_BANDGAP_test_bg_END (1)
#define SOC_PASTAR_BANDGAP_en_tmp_START (2)
#define SOC_PASTAR_BANDGAP_en_tmp_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ana_in_2d : 8;
    } reg;
} SOC_PASTAR_ANA_IN_UNION;
#endif
#define SOC_PASTAR_ANA_IN_ana_in_2d_START (0)
#define SOC_PASTAR_ANA_IN_ana_in_2d_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 8;
    } reg;
} SOC_PASTAR_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 8;
    } reg;
} SOC_PASTAR_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 8;
    } reg;
} SOC_PASTAR_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_por_pulse : 1;
        unsigned char otp_read_mask : 1;
        unsigned char otp_pwe_pulse : 1;
        unsigned char otp_write_mask : 1;
        unsigned char reserved : 4;
    } reg;
} SOC_PASTAR_SET_OTP_UNION;
#endif
#define SOC_PASTAR_SET_OTP_otp_por_pulse_START (0)
#define SOC_PASTAR_SET_OTP_otp_por_pulse_END (0)
#define SOC_PASTAR_SET_OTP_otp_read_mask_START (1)
#define SOC_PASTAR_SET_OTP_otp_read_mask_END (1)
#define SOC_PASTAR_SET_OTP_otp_pwe_pulse_START (2)
#define SOC_PASTAR_SET_OTP_otp_pwe_pulse_END (2)
#define SOC_PASTAR_SET_OTP_otp_write_mask_START (3)
#define SOC_PASTAR_SET_OTP_otp_write_mask_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pwe_int : 1;
        unsigned char otp_por_int : 1;
        unsigned char otp_pa : 2;
        unsigned char otp_ptm : 2;
        unsigned char otp_pprog : 1;
        unsigned char reserved : 1;
    } reg;
} SOC_PASTAR_OTP_CTRL_UNION;
#endif
#define SOC_PASTAR_OTP_CTRL_otp_pwe_int_START (0)
#define SOC_PASTAR_OTP_CTRL_otp_pwe_int_END (0)
#define SOC_PASTAR_OTP_CTRL_otp_por_int_START (1)
#define SOC_PASTAR_OTP_CTRL_otp_por_int_END (1)
#define SOC_PASTAR_OTP_CTRL_otp_pa_START (2)
#define SOC_PASTAR_OTP_CTRL_otp_pa_END (3)
#define SOC_PASTAR_OTP_CTRL_otp_ptm_START (4)
#define SOC_PASTAR_OTP_CTRL_otp_ptm_END (5)
#define SOC_PASTAR_OTP_CTRL_otp_pprog_START (6)
#define SOC_PASTAR_OTP_CTRL_otp_pprog_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pdin : 8;
    } reg;
} SOC_PASTAR_OTP_PDIN_UNION;
#endif
#define SOC_PASTAR_OTP_PDIN_otp_pdin_START (0)
#define SOC_PASTAR_OTP_PDIN_otp_pdin_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pdob0 : 8;
    } reg;
} SOC_PASTAR_OTP_PDOB0_UNION;
#endif
#define SOC_PASTAR_OTP_PDOB0_otp_pdob0_START (0)
#define SOC_PASTAR_OTP_PDOB0_otp_pdob0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pdob1 : 8;
    } reg;
} SOC_PASTAR_OTP_PDOB1_UNION;
#endif
#define SOC_PASTAR_OTP_PDOB1_otp_pdob1_START (0)
#define SOC_PASTAR_OTP_PDOB1_otp_pdob1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pdob2 : 8;
    } reg;
} SOC_PASTAR_OTP_PDOB2_UNION;
#endif
#define SOC_PASTAR_OTP_PDOB2_otp_pdob2_START (0)
#define SOC_PASTAR_OTP_PDOB2_otp_pdob2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pdob3 : 8;
    } reg;
} SOC_PASTAR_OTP_PDOB3_UNION;
#endif
#define SOC_PASTAR_OTP_PDOB3_otp_pdob3_START (0)
#define SOC_PASTAR_OTP_PDOB3_otp_pdob3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ldo1_masked : 1;
        unsigned char ocp_ldo2_masked : 1;
        unsigned char ocp_buck0_masked : 1;
        unsigned char ocp_buck1_masked : 1;
        unsigned char ocp_buck2_masked : 1;
        unsigned char otmp150_d3r : 1;
        unsigned char otmp125_d3r : 1;
        unsigned char vdd_en_flag : 1;
    } reg;
} SOC_PASTAR_NO_PWR_REG_RO_UNION;
#endif
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_ldo1_masked_START (0)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_ldo1_masked_END (0)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_ldo2_masked_START (1)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_ldo2_masked_END (1)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck0_masked_START (2)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck0_masked_END (2)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck1_masked_START (3)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck1_masked_END (3)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck2_masked_START (4)
#define SOC_PASTAR_NO_PWR_REG_RO_ocp_buck2_masked_END (4)
#define SOC_PASTAR_NO_PWR_REG_RO_otmp150_d3r_START (5)
#define SOC_PASTAR_NO_PWR_REG_RO_otmp150_d3r_END (5)
#define SOC_PASTAR_NO_PWR_REG_RO_otmp125_d3r_START (6)
#define SOC_PASTAR_NO_PWR_REG_RO_otmp125_d3r_END (6)
#define SOC_PASTAR_NO_PWR_REG_RO_vdd_en_flag_START (7)
#define SOC_PASTAR_NO_PWR_REG_RO_vdd_en_flag_END (7)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
