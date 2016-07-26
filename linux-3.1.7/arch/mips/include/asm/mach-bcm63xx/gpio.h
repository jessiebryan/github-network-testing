#ifndef __ASM_MIPS_MACH_BCM63XX_GPIO_H
#define __ASM_MIPS_MACH_BCM63XX_GPIO_H

#include <bcm63xx_gpio.h>

#define gpio_to_irq(gpio)	-1

#define gpio_get_value __gpio_get_value
#define gpio_set_value __gpio_set_value

#define gpio_cansleep __gpio_cansleep

#include <asm-generic/gpio.h>

#endif /* __ASM_MIPS_MACH_BCM63XX_GPIO_H */
Tue Jul 19 12:36:45 PDT 2016
Fri Jul 22 15:43:19 PDT 2016
Sun, Jul 24, 2016  1:54:51 PM
Mon, Jul 25, 2016  8:22:22 PM
