

#ifndef LINUX_SPI_FINGERPRINT_H
#define LINUX_SPI_FINGERPRINT_H

#include <huawei_platform/log/hw_log.h>

#define EVENT_HOLD	28
#define EVENT_CLICK		174
#define EVENT_DCLICK	111
#define EVENT_UP	103
#define EVENT_DOWN	108
#define EVENT_LEFT	105
#define EVENT_RIGHT	106

#define FPC_TTW_HOLD_TIME 1000
#define FP_DEV_NAME      "fingerprint"
#define FP_CLASS_NAME   "fpsensor"
#define FP_IOC_MAGIC     'f'  //define magic number


//define commands
#define  FP_IOC_CMD_ENABLE_IRQ	      _IO(FP_IOC_MAGIC, 1)
#define  FP_IOC_CMD_DISABLE_IRQ	      _IO(FP_IOC_MAGIC, 2)
#define  FP_IOC_CMD_SEND_UEVENT	      _IO(FP_IOC_MAGIC, 3)
#define  FP_IOC_CMD_GET_IRQ_STATUS     _IO(FP_IOC_MAGIC, 4)
#define  FP_IOC_CMD_SET_WAKELOCK_STATUS  _IO(FP_IOC_MAGIC, 5)


enum module_vendor_info
{
    MODULEID_LOW = 0,
    MODULEID_HIGT,
    MODULEID_FLOATING,
};

struct fp_data
{
    struct device* dev;
    struct spi_device* spi;
    struct cdev     cdev;
    struct class*    class;
    struct device*   device;
    dev_t             devno;
    struct platform_device* pf_dev;

    struct wake_lock ttw_wl;
    int irq_gpio;
    int cs0_gpio;
    int cs1_gpio;
    int rst_gpio;
    int moduleID_gpio;
    int module_vendor_info;
    struct input_dev* input_dev;
    int irq_num;
    int qup_id;
    char idev_name[32];
    int event_type;
    int event_code;
    struct mutex lock;
    bool prepared;
    bool wakeup_enabled;

    //struct pinctrl* pctrl;
    //struct pinctrl_state* pins_default;
    //struct pinctrl_state* pins_idle;
};


#endif

