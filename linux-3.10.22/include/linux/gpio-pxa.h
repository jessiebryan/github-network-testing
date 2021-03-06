#ifndef __GPIO_PXA_H
#define __GPIO_PXA_H

#define GPIO_bit(x)	(1 << ((x) & 0x1f))

#define gpio_to_bank(gpio)	((gpio) >> 5)

/* NOTE: some PXAs have fewer on-chip GPIOs (like PXA255, with 85).
 * Those cases currently cause holes in the GPIO number space, the
 * actual number of the last GPIO is recorded by 'pxa_last_gpio'.
 */
extern int pxa_last_gpio;

extern int pxa_irq_to_gpio(int irq);

struct pxa_gpio_platform_data {
	int irq_base;
	int (*gpio_set_wake)(unsigned int gpio, unsigned int on);
};

#endif /* __GPIO_PXA_H */
Tue Jul 19 12:49:19 PDT 2016
Fri Jul 22 16:06:48 PDT 2016
Sun, Jul 24, 2016  4:51:54 PM
Mon, Jul 25, 2016 11:40:53 PM
