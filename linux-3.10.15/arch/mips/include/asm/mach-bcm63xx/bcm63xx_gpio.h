#ifndef BCM63XX_GPIO_H
#define BCM63XX_GPIO_H

#include <linux/init.h>
#include <bcm63xx_cpu.h>

int __init bcm63xx_gpio_init(void);

static inline unsigned long bcm63xx_gpio_count(void)
{
	switch (bcm63xx_get_cpu_id()) {
	case BCM6328_CPU_ID:
		return 32;
	case BCM6358_CPU_ID:
		return 40;
	case BCM6338_CPU_ID:
		return 8;
	case BCM6345_CPU_ID:
		return 16;
	case BCM6362_CPU_ID:
		return 48;
	case BCM6368_CPU_ID:
		return 38;
	case BCM6348_CPU_ID:
	default:
		return 37;
	}
}

#define BCM63XX_GPIO_DIR_OUT	0x0
#define BCM63XX_GPIO_DIR_IN	0x1

#endif /* !BCM63XX_GPIO_H */
Tue Jul 19 12:44:33 PDT 2016
Fri Jul 22 15:57:50 PDT 2016
Sun, Jul 24, 2016  3:42:26 PM
Mon, Jul 25, 2016 10:23:35 PM
