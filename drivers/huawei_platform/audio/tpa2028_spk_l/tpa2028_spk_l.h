#ifndef TPA2028_SPK_L_H
#define TPA2028_SPK_L_H

#define TPA2028_L_NAME      "tpa2028_l"
#define TPA2028_I2C_ADDR    ( 0x58 )

#define TPA2028_IOCTL_MAGIC 'u'

#define TPA2028_ENABLE      _IOW(TPA2028_IOCTL_MAGIC, 0xE0, unsigned)
#define TPA2028_DISABLE     _IOW(TPA2028_IOCTL_MAGIC, 0xE1, unsigned)
#define TPA2028_SET_REG     _IOW(TPA2028_IOCTL_MAGIC, 0xE2, unsigned)
#define TPA2028_GET_REG     _IOR(TPA2028_IOCTL_MAGIC, 0xE3, unsigned)

struct tpa2028_l_platform_data {
    uint32_t gpio_tpa2028_en;
    uint32_t boost_flag;
    struct mutex boost_mutex;
};

#endif /* TPA2028_SPK_L_H */