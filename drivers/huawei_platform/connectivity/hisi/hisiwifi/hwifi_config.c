/*
 *
 * Copyright (C), 2001-2012, Huawei Tech. Co., Ltd.
 *
 *
 * File Name     : hwifi_ini_ctrl.c
 * Version       : Initial Draft
 * Author        : z00217036
 * Created       : 2013/3/11
 * Last Modified :
 * Description   :
 * Function List :
 * History       :
 * 1.Date        : 2013/11/14
 *   Author      : z00217036
 *   Modification: Created file
 *
 */

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*
 * 1 Header File Including
 */

#include <../hw-ini/hisi_ini.h>
#include <linux/mtd/hisi_nve_interface.h>
#include <linux/etherdevice.h>

#include "hwifi_cfg80211.h"
#include "hwifi_config.h"


/*
 * 2 Global Variable Definition
 */

/* DTS2013111108200 Hi110x bug fix z00217036 hangtianqi WX160629  2013/11/15 begin */
int32 g_host_init_params[256] = {0};
/* DTS2014010801661 Hi110x bug fix hongjiujin/hkf74032 2014/1/16 begin */
int8  custom_country_code[COUNTRY_CODE_LEN+1];
/* DTS2014010801661 Hi110x bug fix hongjiujin/hkf74032 2014/1/16 end */


/* DTS2015062606285  Hi110x bug fix zhanglu/z00217036 2015/6/29 begin */
uint8 g_wifimac_hisi[MAC_LEN] = {0x00,0x00,0x00,0x00,0x00,0x00};
/* DTS2015062606285  Hi110x bug fix zhanglu/z00217036 2015/6/29 end */
int8  puc_value[256] = {0};

struct hwifi_config_cmd  hwifi_config_cmds[] = {

    { "country_code",               HISI_CONFIG_WIFI_COUNTRY_CODE},

    { "data_rate_down",             HISI_CONFIG_WIFI_DATA_RATE_DOWN},
    { "data_rate_up",               HISI_CONFIG_WIFI_DATA_RATE_UP},
    { "ba_max_tx",                  HISI_CONFIG_WIFI_BA_MAX_TX},
    { "ba_max_rx",                  HISI_CONFIG_WIFI_BA_MAX_RX},
    { "ba_max_buffersize",          HISI_CONFIG_WIFI_BA_MAX_BUFFERSIZE},
    { "hcc_assemble_count",         HISI_CONFIG_WIFI_HCC_ASSEMBLE_COUNT},

    { "hcc_rx_lo_queue",            HISI_CONFIG_WIFI_HCC_RX_LO_QUEUE},
    { "hcc_rx_tcp_data_queue",      HISI_CONFIG_WIFI_HCC_RX_TCP_DATA_QUEUE},
    { "hcc_rx_tcp_ack_queue",       HISI_CONFIG_WIFI_HCC_RX_TCP_ACK_QUEUE},
    { "tx_ack_limit",               HISI_CONFIG_WIFI_TX_ACK_LIMIT},
    { "hcc_tx_lo_queue",            HISI_CONFIG_WIFI_HCC_TX_LO_QUEUE},
    { "hcc_tx_tcp_data_queue",      HISI_CONFIG_WIFI_HCC_TX_TCP_DATA_QUEUE},
    { "hcc_tx_tcp_ack_queue",       HISI_CONFIG_WIFI_HCC_TX_TCP_ACK_QUEUE},
    { "rx_ack_limit",               HISI_CONFIG_WIFI_RX_ACK_LIMIT},

    { "wmm_drop_cnt",               HISI_CONFIG_WIFI_WMM_DROP_CNT_PER_TIME},
    { "wmm_drop_interval",          HISI_CONFIG_WIFI_WMM_DROP_INTERVAL},
    { "wmm_que_len_for_drop",       HISI_CONFIG_WIFI_QUE_LEN_FOR_DROP},
    { "wmm_ac_opt",                 HISI_CONFIG_WIFI_WMM_AC_OPT},

    { "cur_cpufreq",                HISI_CONFIG_WIFI_CUR_CPUFREQ},
    { "sdio_rate_40M",              HISI_CONFIG_WIFI_SDIO_RATE_40M},
    { "sdio_rate_80M",              HISI_CONFIG_WIFI_SDIO_RATE_80M},
    { "sdio_rate_160M",             HISI_CONFIG_WIFI_SDIO_RATE_160M},
    { "powermgmt_switch",           HISI_CONFIG_WIFI_POWERMGMT_SWITCH},
    { "watchdog_timeout",           HISI_CONFIG_WIFI_WATCHDOG_TIMEOUT},

    { "band_5g_enabled",            HISI_CONFIG_WIFI_BAND_5G_ENABLEED},

    { "loglevel",                   HISI_CONFIG_WIFI_LOGLEVEL},
    { "panic_debug",                HISI_CONFIG_WIFI_PANIC_DEBUG},

   /* DTS2013101200304  Hi110x bug fix hWX160629 2013/11/21 begin */
    { "txrx_thread_type",           HISI_CONFIG_WIFI_TXRX_THREAD_TPYE},
    { "ap_data_rate_down",          HISI_CONFIG_WIFI_AP_DATA_RATE_DOWN},
    { "ap_data_rate_up",            HISI_CONFIG_WIFI_AP_DATA_RATE_UP},
   /* DTS2013101200304  Hi110x bug fix hWX160629 2013/11/21 end */
    /* DTS2013112501668   Hi110x bug fix zhouxinfeng/zwx165479 2013/11/27 begin */
    { "exception_enable",           HISI_CONFIG_WIFI_EXCEPTION_ENABLE},
    /* DTS2013112501668   Hi110x bug fix zhouxinfeng/zwx165479 2013/11/27 end */
    /*DTS2013120500048   Hi110x bug fix zhouxinfeng/zwx165479 2013/12/5 begin */
    { "hb_work_timeout",            HISI_CONFIG_WIFI_HB_WORK_TIMEOUT},
    { "hb_sleep_timeout",           HISI_CONFIG_WIFI_HB_SLEEP_TIMEOUT},
    /*DTS2013120500048   Hi110x bug fix zhouxinfeng/zwx165479 2013/12/5 end */
    /* DTS2013120502748   Hi110x bug fix ∫ºÃÏ∆Ê/hwx160629 2013/12/10 begin */
    { "countrycode_change_by_ie_enabled", HISI_CONFIG_WIFI_COUNTRYCODE_CHANGE_BY_IE},
    /* DTS2013120502748   Hi110x bug fix ∫ºÃÏ∆Ê/hwx160629 2013/12/10 end */
    /* DTS2014062307947 Hi110x bug fix  zhanglu/z00217036 2014/6/27  begin */
#ifdef __ROAM__
    {"roam_switch",                 HISI_CONFIG_WIFI_ROAM_SWITCH},
#endif
    /* DTS2014062307947 Hi110x bug fix  zhanglu/z00217036 2014/6/27  end */

    /* DTS2014070401143 Hi110x bug fix  luolingzhi/l00225940 2014/7/22  begin */
    {"ap_coex_2040m_enabled",       HISI_CONFIG_WIFI_AP_COEX_2040M_ENABLED},
    /* DTS2014070401143 Hi110x bug fix  luolingzhi/l00225940 2014/7/22  end */

    /* DTS2014072203281 Hi110x bug fix  luolingzhi/l00225940 2014/8/7  begin */
    {"sta_2040m_enabled",           HISI_CONFIG_WIFI_STA_2040M_ENABLED},
    {"ap_2040m_enabled",            HISI_CONFIG_WIFI_AP_2040M_ENABLED},
    /* DTS2014072203281 Hi110x bug fix  luolingzhi/l00225940 2014/8/7  end */

    /* DTS2014090601358 Hi110x bug fix  luolingzhi/l00225940 2014/9/12 begin */
#ifdef __ROAM__
    {"roam_trigger_rssi_threshold", HISI_CONFIG_WIFI_ROAM_TRIGGER_RSSI_THRESHOLD},
    {"roam_trigger_count_threshold",HISI_CONFIG_WIFI_ROAM_TRIGGER_COUNT_THRESHOLD},
#endif
    /* DTS2014090601358 Hi110x bug fix  luolingzhi/l00225940 2014/9/12 end */
};


static int32 host_params_init_orig(void)
{
    HWIFI_DEBUG("init host params");

    g_host_init_params[HISI_CONFIG_WIFI_DATA_RATE_DOWN] = 200;
    g_host_init_params[HISI_CONFIG_WIFI_DATA_RATE_UP] = 1000;
    g_host_init_params[HISI_CONFIG_WIFI_BA_MAX_TX] = 2;
    g_host_init_params[HISI_CONFIG_WIFI_BA_MAX_RX] = 2;
    g_host_init_params[HISI_CONFIG_WIFI_BA_MAX_BUFFERSIZE] =32 ;
    g_host_init_params[HISI_CONFIG_WIFI_HCC_ASSEMBLE_COUNT] = 8;

    g_host_init_params[HISI_CONFIG_WIFI_HCC_RX_LO_QUEUE] = 0xFFFFFFFF;
    g_host_init_params[HISI_CONFIG_WIFI_HCC_RX_TCP_DATA_QUEUE] = 0xFFFFFFFF;
    g_host_init_params[HISI_CONFIG_WIFI_HCC_RX_TCP_ACK_QUEUE] = 0xFFFFFFFF;
    g_host_init_params[HISI_CONFIG_WIFI_TX_ACK_LIMIT] = 1;
    g_host_init_params[HISI_CONFIG_WIFI_HCC_TX_LO_QUEUE] = 0xFFFFFFFF;
    g_host_init_params[HISI_CONFIG_WIFI_HCC_TX_TCP_DATA_QUEUE] = 0xFFFFFFFF;
    g_host_init_params[HISI_CONFIG_WIFI_HCC_TX_TCP_ACK_QUEUE] = 0xFFFFFFFF;
    g_host_init_params[HISI_CONFIG_WIFI_RX_ACK_LIMIT] = 1;

    g_host_init_params[HISI_CONFIG_WIFI_WMM_DROP_CNT_PER_TIME] = 0;
    g_host_init_params[HISI_CONFIG_WIFI_WMM_DROP_INTERVAL] = 10;
    g_host_init_params[HISI_CONFIG_WIFI_QUE_LEN_FOR_DROP] = 40;
    g_host_init_params[HISI_CONFIG_WIFI_WMM_AC_OPT] = 0;

    g_host_init_params[HISI_CONFIG_WIFI_CUR_CPUFREQ] = 0XFE;
    g_host_init_params[HISI_CONFIG_WIFI_SDIO_RATE_40M] = 0;
    g_host_init_params[HISI_CONFIG_WIFI_SDIO_RATE_80M] = 0;
    g_host_init_params[HISI_CONFIG_WIFI_SDIO_RATE_160M] = 0;
    g_host_init_params[HISI_CONFIG_WIFI_POWERMGMT_SWITCH] = 1;
    g_host_init_params[HISI_CONFIG_WIFI_WATCHDOG_TIMEOUT] = 12;
    g_host_init_params[HISI_CONFIG_WIFI_BAND_5G_ENABLEED] = 0;
    g_host_init_params[HISI_CONFIG_WIFI_LOGLEVEL] = 2;
    g_host_init_params[HISI_CONFIG_WIFI_PANIC_DEBUG] = 1;

    /* DTS2013101200304  Hi110x bug fix hWX160629 2013/11/21 begin */
    g_host_init_params[HISI_CONFIG_WIFI_TXRX_THREAD_TPYE] = 0;
    g_host_init_params[HISI_CONFIG_WIFI_AP_DATA_RATE_DOWN] = 625000;
    g_host_init_params[HISI_CONFIG_WIFI_AP_DATA_RATE_UP] = 1125000;
   /* DTS2013101200304  Hi110x bug fix hWX160629 2013/11/21 begin */

    /* DTS2013112501668   Hi110x bug fix zhouxinfeng/zwx165479 2013/11/27 begin */
    g_host_init_params[HISI_CONFIG_WIFI_EXCEPTION_ENABLE] = 0;
    /*DTS2013120500048   Hi110x bug fix zhouxinfeng/zwx165479 2013/12/5 begin */
    g_host_init_params[HISI_CONFIG_WIFI_HB_WORK_TIMEOUT] = 30;
    g_host_init_params[HISI_CONFIG_WIFI_HB_SLEEP_TIMEOUT] = 22*60;
    /*DTS2013120500048   Hi110x bug fix zhouxinfeng/zwx165479 2013/12/5 end */
    /* DTS2013112501668   Hi110x bug fix zhouxinfeng/zwx165479 2013/11/27 end */

    /* DTS2013120502748   Hi110x bug fix ∫ºÃÏ∆Ê/hwx160629 2013/12/10 begin */
    g_host_init_params[HISI_CONFIG_WIFI_COUNTRYCODE_CHANGE_BY_IE] = 1;
    /* DTS2013120502748   Hi110x bug fix ∫ºÃÏ∆Ê/hwx160629 2013/12/10 end */

    /* DTS2014010801661 Hi110x bug fix hongjiujin/hkf74032 2014/1/16 begin */
    /* DTS2013112602297 Hi110x bug fix hWX160629 z217036 2013/11/26 begin */
    strncpy(custom_country_code, "99", COUNTRY_CODE_LEN);
    /* DTS2013112602297 Hi110x bug fix hWX160629 z217036 2013/11/26 end */
    /* DTS2014010801661 Hi110x bug fix hongjiujin/hkf74032 2014/1/16 end */

    /* DTS2014062307947    Hi110x bug fix zhanglu/z00217036 2014/6/27 begin*/
#ifdef __ROAM__
    g_host_init_params[HISI_CONFIG_WIFI_ROAM_SWITCH] = 0;
#endif
    /* DTS2014062307947    Hi110x bug fix zhanglu/z00217036 2014/6/27 end*/

    /* DTS2014070401143 Hi110x bug fix  luolingzhi/l00225940 2014/7/22  begin */
    g_host_init_params[HISI_CONFIG_WIFI_AP_COEX_2040M_ENABLED] = 0;
    /* DTS2014070401143 Hi110x bug fix  luolingzhi/l00225940 2014/7/22  end */

    /* DTS2014072203281 Hi110x bug fix  luolingzhi/l00225940 2014/8/7  begin */
    g_host_init_params[HISI_CONFIG_WIFI_AP_2040M_ENABLED] = 0;
    g_host_init_params[HISI_CONFIG_WIFI_STA_2040M_ENABLED] = 0;
    /* DTS2014072203281 Hi110x bug fix  luolingzhi/l00225940 2014/8/7  end */

    /* DTS2014090601358 Hi110x bug fix  luolingzhi/l00225940 2014/9/12 begin */
#ifdef __ROAM__
    g_host_init_params[HISI_CONFIG_WIFI_ROAM_TRIGGER_RSSI_THRESHOLD] = -70;
    g_host_init_params[HISI_CONFIG_WIFI_ROAM_TRIGGER_COUNT_THRESHOLD] = 5;
#endif
    /* DTS2014090601358 Hi110x bug fix  luolingzhi/l00225940 2014/9/12 end */

    return SUCC;

}



/*
 * Prototype    : hwifi_config_init
 * Description  : read data from ini file and build ini config
 * Input        : struct cfg_struct *cfg
                :
 * Output       : None
 * Return Value : int
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/11/15
 *     Author       : z00217036
 *     Modification : Created function
 *
 */
int32 hwifi_config_init(void)
{
    int32    i;
    int32    param_value[HISI_CONFIG_WIFI_BUTT];
    int32    ret = -EFAIL;
    int32    param_cnt = -EFAIL;

    host_params_init_orig();

    for(i=0; i < HISI_CONFIG_WIFI_BUTT; i++)
    {
        ret = ini_find_var_value(INI_MODU_WIFI,hwifi_config_cmds[i].name,puc_value);
        if( -EFAIL == ret )
        {
        /* DTS2013121804580   Hi110x bug fix hWX160629 2013/12/18 begin */
            HWIFI_WARNING("Did not found [ %s ] config item, use [ %d ] as default value!",
                        hwifi_config_cmds[i].name,
                        g_host_init_params[i]);
            HWIFI_WARNING("Please update the hisi_cfg.ini and check %s item.",
                        hwifi_config_cmds[i].name);
            continue;
        /* DTS2013121804580  Hi110x bug fix hWX160629 2013/12/18 end */
        }

        if(HISI_CONFIG_WIFI_COUNTRY_CODE == i)
        {
        /* DTS2013112602297 Hi110x bug fix hWX160629 z217036 2013/11/26 begin */
            strncpy(custom_country_code, puc_value, 2);
            continue;
        /* DTS2013112602297 Hi110x bug fix hWX160629 z217036 2013/11/26 end */
        }

        if('0' == *puc_value && ('X' == *(puc_value+1) || 'x' == *(puc_value+1)))
        {
            param_cnt = sscanf(puc_value, "%x", &param_value[i]);
            if(-EFAIL == param_cnt)
            {
                HWIFI_WARNING("hisi_ini_config_wifi : get value failed");
                continue;
            }

            HWIFI_INFO("Hisi ini file config %s param value:%x",hwifi_config_cmds[i].name,param_value[i]);
        }else{
            param_cnt = sscanf(puc_value, "%d", &param_value[i]);
            if(-EFAIL == param_cnt)
            {
                HWIFI_WARNING("hisi_ini_config_wifi : get value failed");
                continue;
            }
            HWIFI_INFO("Hisi ini file config %s param value:%d",hwifi_config_cmds[i].name,param_value[i]);
        }

        g_host_init_params[i] = param_value[i];

    }

    return SUCC;

}


/*
 * Prototype    : hwifi_get_param_int
 * Description  : get the int type param
 * Input        : int32 config_id
                :
 * Output       : None
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/11/15
 *     Author       : z00217036
 *     Modification : Created function
 *
 */

int32 hwifi_get_param_int(int32 config_id)
{

    if( 0 > config_id || config_id > HISI_CONFIG_WIFI_BUTT)
    {
        HWIFI_WARNING("The config_id is out of range,config_id:%d less than :%d",config_id,HISI_CONFIG_WIFI_BUTT);
        return -EFAIL;
    }

    return g_host_init_params[config_id];
}

/*
 * Prototype    : hwifi_grec_point
 * Description  : get the point address of the country code
 * Input        : int32 config_id
                :
 * Output       : None
 * Return Value : int8
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/11/15
 *     Author       : z00217036
 *     Modification : Created function
 *
 */
int8* hwifi_grec_point(void)
{
    return custom_country_code;
}


/*
 * Prototype    : char2byte
 * Description  : change string to byte array
 * Input        :
                :
 * Output       : None
 * Return Value : int
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/11/15
 *     Author       : z00217036
 *     Modification : Created function
 *
 */
static int char2byte( char* strori, char* outbuf )
{
    int i = 0;
    int temp = 0;
    int sum = 0;

    for( i = 0; i < 12; i++ )
    {
        switch (strori[i]) {
            case '0' ... '9':
                temp = strori[i] - '0';
                break;

            case 'a' ... 'f':
                temp = strori[i] - 'a' + 10;
                break;

            case 'A' ... 'F':
                temp = strori[i] - 'A' + 10;
                break;
        }

        sum += temp;
        if( i % 2 == 0 ){
            outbuf[i/2] |= temp << 4;
        }
        else{
            outbuf[i/2] |= temp;
        }
    }

    return sum;
}


/*
 * Prototype    : hwifi_get_mac_addr
 * Description  : get mac from the function nve_direct_access or random build mac
 * Input        :
                :
 * Output       : None
 * Return Value :
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/11/15
 *     Author       : z00217036
 *     Modification : Created function
 *
 */
int32 hwifi_get_mac_addr(uint8 *buf)
{
    struct hisi_nve_info_user  info;
    int ret = -1;
    int sum = 0;

    if (NULL == buf) {
        HWIFI_WARNING("hwifi_get_mac_addr failed");
        return -EFAIL;
    }

    memset(buf, 0, MAC_LEN );

    memset(&info, 0, sizeof(info));
    info.nv_number  = NV_WLAN_NUM;   //nve item
    /* DTS2014010801661 Hi110x bug fix hongjiujin/hkf74032 2014/1/8 begin */
    strncpy(info.nv_name, "MACWLAN", 7);
    /* DTS2014010801661 Hi110x bug fix hongjiujin/hkf74032 2014/1/8 end */
    info.valid_size = NV_WLAN_VALID_SIZE;
    info.nv_operation = NV_READ;
/* DTS2015062606285  Hi110x bug fix zhanglu/z00217036 2015/6/29 begin */
    if (0 != g_wifimac_hisi[0] || 0 != g_wifimac_hisi[1] || 0 != g_wifimac_hisi[2] || 0 != g_wifimac_hisi[3]
        || 0 != g_wifimac_hisi[4] || 0 != g_wifimac_hisi[5])
    {
        memcpy(buf,g_wifimac_hisi,MAC_LEN);
        return SUCC;
    }

    ret = hisi_nve_direct_access( &info );
    HWIFI_DEBUG("nve_direct_access ret= %d\n", ret);

    if (!ret)
    {
        sum = char2byte(info.nv_data, buf );
        if (0 != sum)
        {
            HWIFI_DEBUG("get MAC from NV: mac="MACFMT"\n", MAC2STR(buf));
            memcpy(g_wifimac_hisi,buf,MAC_LEN);
        }else{
            random_ether_addr(buf);
            buf[1] = 0x11;
            buf[2] = 0x01;
        }
    }else{
        random_ether_addr(buf);
        buf[1] = 0x11;
        buf[2] = 0x01;
    }
/* DTS2015062606285  Hi110x bug fix zhanglu/z00217036 2015/6/29 end */
    return SUCC;
}

/* DTS2013111108200 Hi110x bug fix z00217036 hangtianqi WX160629  2013/11/15 end */


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

