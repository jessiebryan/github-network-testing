#ifndef __ASM_MIPS_MACH_BCM47XX_GPIO_H
#define __ASM_MIPS_MACH_BCM47XX_GPIO_H

#include <asm-generic/gpio.h>

#define gpio_get_value __gpio_get_value
#define gpio_set_value __gpio_set_value

#define gpio_cansleep __gpio_cansleep
#define gpio_to_irq __gpio_to_irq

static inline int irq_to_gpio(unsigned int irq)
{
	return -EINVAL;
}

#endif
Tue Jul 19 12:42:37 PDT 2016
Fri Jul 22 15:54:16 PDT 2016
Sun, Jul 24, 2016  3:14:45 PM
Mon, Jul 25, 2016  9:52:49 PM
