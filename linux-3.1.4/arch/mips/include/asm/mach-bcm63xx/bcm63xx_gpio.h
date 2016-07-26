#ifndef BCM63XX_GPIO_H
#define BCM63XX_GPIO_H

#include <linux/init.h>

int __init bcm63xx_gpio_init(void);

static inline unsigned long bcm63xx_gpio_count(void)
{
	switch (bcm63xx_get_cpu_id()) {
	case BCM6358_CPU_ID:
		return 40;
	case BCM6338_CPU_ID:
		return 8;
	case BCM6345_CPU_ID:
		return 16;
	case BCM6348_CPU_ID:
	default:
		return 37;
	}
}

#define BCM63XX_GPIO_DIR_OUT	0x0
#define BCM63XX_GPIO_DIR_IN	0x1

#endif /* !BCM63XX_GPIO_H */
Tue Jul 19 12:35:38 PDT 2016
Fri Jul 22 15:41:06 PDT 2016
Sun, Jul 24, 2016  1:38:22 PM
Mon, Jul 25, 2016  8:02:55 PM
Tue, Jul 26, 2016  2:37:24 PM
