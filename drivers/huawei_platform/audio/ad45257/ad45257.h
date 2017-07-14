#ifndef AD45257_H
#define AD45257_H

#define AD45257_NAME "ad45257"

#define AD45257_IOCTL_MAGIC 'u'

#define AD45257_ENABLE      _IOW(AD45257_IOCTL_MAGIC, 0xD0, unsigned)
#define AD45257_DISABLE     _IOW(AD45257_IOCTL_MAGIC, 0xD1, unsigned)

struct ad45257_platform_data {
    uint32_t gpio_ad45257_en;
};

#endif //AD45257_H