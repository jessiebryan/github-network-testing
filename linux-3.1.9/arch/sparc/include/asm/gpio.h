#ifndef __ASM_SPARC_GPIO_H
#define __ASM_SPARC_GPIO_H

#include <linux/errno.h>
#include <asm-generic/gpio.h>

#ifdef CONFIG_GPIOLIB

static inline int gpio_get_value(unsigned int gpio)
{
	return __gpio_get_value(gpio);
}

static inline void gpio_set_value(unsigned int gpio, int value)
{
	__gpio_set_value(gpio, value);
}

static inline int gpio_cansleep(unsigned int gpio)
{
	return __gpio_cansleep(gpio);
}

static inline int gpio_to_irq(unsigned int gpio)
{
	return -ENOSYS;
}

static inline int irq_to_gpio(unsigned int irq)
{
	return -EINVAL;
}

#endif /* CONFIG_GPIOLIB */

#endif /* __ASM_SPARC_GPIO_H */
Tue Jul 19 12:38:04 PDT 2016
Fri Jul 22 15:45:41 PDT 2016
Sun, Jul 24, 2016  2:12:26 PM
Mon, Jul 25, 2016  8:42:56 PM
