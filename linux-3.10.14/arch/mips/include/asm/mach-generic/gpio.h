#ifndef __ASM_MACH_GENERIC_GPIO_H
#define __ASM_MACH_GENERIC_GPIO_H

#ifdef CONFIG_GPIOLIB
#define gpio_get_value	__gpio_get_value
#define gpio_set_value	__gpio_set_value
#define gpio_cansleep	__gpio_cansleep
#else
int gpio_request(unsigned gpio, const char *label);
void gpio_free(unsigned gpio);
int gpio_direction_input(unsigned gpio);
int gpio_direction_output(unsigned gpio, int value);
int gpio_get_value(unsigned gpio);
void gpio_set_value(unsigned gpio, int value);
#endif
int gpio_to_irq(unsigned gpio);
int irq_to_gpio(unsigned irq);

#include <asm-generic/gpio.h>		/* cansleep wrappers */

#endif /* __ASM_MACH_GENERIC_GPIO_H */
Tue Jul 19 12:43:54 PDT 2016
Fri Jul 22 15:56:38 PDT 2016
Sun, Jul 24, 2016  3:33:13 PM
Mon, Jul 25, 2016 10:13:21 PM
