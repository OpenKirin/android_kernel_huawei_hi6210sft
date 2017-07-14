#ifndef _HISILICON_EFUSE_H_
#define _HISILICON_EFUSE_H_
#ifndef CONFIG_HI3630_EFUSE
typedef enum tag_efuse_log_level {
    log_level_disable = 0,
    log_level_error = 1,
    log_level_warning,
    log_level_debug,
    log_level_info ,
    log_level_total = log_level_info
}EFUSE_LOG_LEVEL;

typedef enum tag_efuse_mem_attribution {
    efuse_mem_attr_none = -1,
    efuse_mem_attr_huk = 0,
    efuse_mem_attr_scp,
    efuse_mem_attr_authkey,
    efuse_mem_attr_chipid,
    efuse_mem_attr_tsensor_calibration,
    efuse_mem_attr_huk_rd_disable,
    efuse_mem_attr_authkey_rd_disable,
    efuse_mem_attr_dbg_class_ctrl,
    efuse_mem_attr_dieid,
    efuse_mem_attr_max
}EFUSE_MEM_ATTRIBUTION;

typedef struct tag_efuse_attribution_info {
    unsigned int bits_width;
}EFUSE_ATTRIBUTION_INFO;

typedef struct tag_efusec_data{
    EFUSE_ATTRIBUTION_INFO efuse_attrs_parsed_from_dts[efuse_mem_attr_max];
}EFUSEC_DATA;

#define OK                      (0)     /* ³É¹¦ */
#define ERROR                   (-1)    /* °üÀ¨²ÎÊý´íÎóºÍ²»Ö§³Ö Á½ÖÖ´íÎóÇé¿ö*/
#define ERROR_EXIT_PD           (-2)    /* ²»ÄÜÍË³öpower downÄ£Ê½ */
#define ERROR_ENTER_PD          (-3)    /* ²»ÄÜÍË³öpower downÄ£Ê½ */
#define ERROR_APB_PGM_DIS       (-4)    /* µ±Ç°eFusec²»ÔÊÐíÉÕÐ´ */
#define ERROR_EFUSEC_READ       (-5)    /* ²»ÄÜÍê³ÉÒ»´ÎeFuse¶Á²Ù×÷ */
#define ERROR_PRE_WRITE         (-6)    /* Î´Íê³ÉÔ¤ÉÕÐ´ÖÃÎ» */
#define ERROR_PG_OPERATION      (-7)    /* ²»ÄÜÍê³ÉÒ»´ÎeFuseÐ´²Ù×÷ */


#define HISI_EFUSE_READ_CHIPID             0x1000
#define HISI_EFUSE_READ_DIEID              0x2000
#define HISI_EFUSE_WRITE_CHIPID            0x3000
#define HISI_EFUSE_READ_AUTHKEY            0x4000
#define HISI_EFUSE_WRITE_AUTHKEY           0x5000
#define HISI_EFUSE_READ_CHIPIDLEN          0x6000
#define HISI_EFUSE_WRITE_DEBUGMODE         0x7000
#define HISI_EFUSE_READ_DEBUGMODE          0x8000

#define HISI_EFUSE_READ_THERMAL            0x9000
#define HISI_EFUSE_TEST_DISPLAY            0xa000


//#define HISI_EFUSE_DEBUG 1

#if HISI_EFUSE_DEBUG == 1
#define HISI_EFUSE_TEST_WR           0xa001
#define HISI_EFUSE_TEST_READ_CHIPID  0xa002
#define HISI_EFUSE_TEST_READ_DIEID   0xa003
#define HISI_EFUSE_TEST_READ_KCE     0xa004
#define HISI_EFUSE_TEST_WRITE_KCE    0xa005

#endif


#define EFUSE_BUF_SIZE                     (256)

extern int get_efuse_dieid_value(unsigned char *pu8Buffer, unsigned int u32Lenght, unsigned int timeout);
extern int get_efuse_chipid_value(unsigned char *pu8Buffer, unsigned int u32Lenght, unsigned int timeout);
extern int set_efuse_chipid_value(unsigned char *pu8Buffer, unsigned int u32Lenght, unsigned int timeout);
extern int get_efuse_authkey_value(unsigned char *pu8Buffer, unsigned int u32Lenght, unsigned int timeout);
extern int set_efuse_authkey_value(unsigned char *pu8Buffer, unsigned int u32Lenght, unsigned int timeout);
extern int get_efuse_securitydebug_value(unsigned char *pu8Buffer, unsigned int u32Lenght, unsigned int timeout);
extern int set_efuse_securitydebug_value(unsigned char *pu8Buffer, unsigned int timeout);
extern int get_efuse_thermal_value(unsigned char *pu8Buffer, unsigned int u32Length, unsigned int timeout);
extern int get_efuse_carrierid_value(unsigned char *pu8Buffer, unsigned int u32Length, unsigned int timeout);

#ifdef CONFIG_HI3XXX_EFUSE
/*****************************************************************************
* º¯ Êý Ãû  : bsp_efuse_read
*
* ¹¦ÄÜÃèÊö  : °´×é¶ÁÈ¡EFUSEÖÐµÄÊý¾Ý
*
* ÊäÈë²ÎÊý  : group  ÆðÊ¼group
*                   num  Êý×é³¤¶È(wordÊý,²»³¬¹ý16)
* Êä³ö²ÎÊý  : pBuf £ºEFUSEÖÐµÄÊý¾Ý
*
* ·µ »Ø Öµ  : 
*
* ÆäËüËµÃ÷  : 
*
*****************************************************************************/
int bsp_efuse_read(unsigned int * pBuf, const unsigned int group, const unsigned int num);

/*****************************************************************************
* º¯ Êý Ãû  : bsp_efuse_write
*
* ¹¦ÄÜÃèÊö  : ÉÕÐ´Efsue
*
* ÊäÈë²ÎÊý  : pBuf:´ýÉÕÐ´µÄEFUSEÖµ
*                 group,EfuseµØÖ·Æ«ÒÆ
*                 len,ÉÕÐ´³¤¶È
* Êä³ö²ÎÊý  :
*
* ·µ »Ø Öµ  :
*
* ÆäËüËµÃ÷  :
*
*****************************************************************************/
int bsp_efuse_write(unsigned int *pBuf, const unsigned int group, const unsigned int num);
#endif


extern int test_efuse_display(unsigned char *pu8Buffer, unsigned int u32Lenght, unsigned int timeout);
#if HISI_EFUSE_DEBUG == 1
extern int test_efuse_wr(unsigned int timeout);
#endif
#else

#define EFUSE_MAX_SIZE			2048
#define EFUSEC_GROUP_MAX_COUNT		(EFUSE_MAX_SIZE/32)

#define OK      			(0)
#define ERROR  				(-1)
#define ERROR_EXIT_PD			(-2)	/* 不能退出power down模式 */
#define ERROR_ENTER_PD			(-3)	/* 不能退出power down模式 */
#define ERROR_APB_PGM_DIS		(-4)	/* 当前eFusec不允许烧写 */
#define ERROR_EFUSEC_READ		(-5)	/* 不能完成一次eFuse读操作 */
#define ERROR_PRE_WRITE			(-6)	/* 未完成预烧写置位 */
#define ERROR_PG_OPERATION		(-7)	/* 不能完成一次eFuse写操作 */
#define ERROR_SECURE_OS                 (-8)	/* 安全OS执行错误 */

#define	HISI_EFUSE_READ_CHIPID		0x1000
#define	HISI_EFUSE_READ_DIEID		0x2000

/******************************************************************************
Function:	    bsp_efuse_write
Description:	    从指定Words偏移开始写入指定Words个数的eFuse值
Input:		    buf			- 输入参数，存放要写入到eFuse中的值
		    size		- 输入参数，要写入的Words个数
		    group		- 输入参数，从指定的Words偏移处开始写入，
					  文中表示eFuse分组序号group
Output:		    none
Return:		    0: OK  其他: ERROR码
******************************************************************************/
extern int bsp_efuse_write(const unsigned int* buf,
			  const unsigned int group,
			  const unsigned int size);

/******************************************************************************
Function:	    bsp_efuse_read
Description:	    从指定Words偏移开始读取指定Words个数的eFuse值
Input:		    buf			- 输入&输出参数，存放读取到的eFuse值，
					  由调用方负责分配内存
		    group		- 输入参数，从指定的Words偏移处开始读取，
					  文中表示eFuse分组序号group
		    size		- 输入参数，要读取的Words个数
Output:		    buf			- 输出参数，存放读取到的eFuse值，
					  由调用方负责分配内存
Return:		    0: OK  其他: ERROR码
******************************************************************************/
extern int bsp_efuse_read(unsigned int* buf,
			  const unsigned int group,
			  const unsigned int size);





#endif




#endif
