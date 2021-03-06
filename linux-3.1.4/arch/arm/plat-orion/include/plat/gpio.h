/*
 * arch/arm/plat-orion/include/plat/gpio.h
 *
 * Marvell Orion SoC GPIO handling.
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __PLAT_GPIO_H
#define __PLAT_GPIO_H

#include <linux/init.h>
#include <asm-generic/gpio.h>

/*
 * GENERIC_GPIO primitives.
 */
#define gpio_get_value  __gpio_get_value
#define gpio_set_value  __gpio_set_value
#define gpio_cansleep   __gpio_cansleep
#define gpio_to_irq     __gpio_to_irq

/*
 * Orion-specific GPIO API extensions.
 */
void orion_gpio_set_unused(unsigned pin);
void orion_gpio_set_blink(unsigned pin, int blink);

#define GPIO_INPUT_OK		(1 << 0)
#define GPIO_OUTPUT_OK		(1 << 1)
void orion_gpio_set_valid(unsigned pin, int mode);

/* Initialize gpiolib. */
void __init orion_gpio_init(int gpio_base, int ngpio,
			    u32 base, int mask_offset, int secondary_irq_base);

/*
 * GPIO interrupt handling.
 */
void orion_gpio_irq_handler(int irqoff);


#endif
Tue Jul 19 12:35:33 PDT 2016
Fri Jul 22 15:40:56 PDT 2016
Sun, Jul 24, 2016  1:37:14 PM
Mon, Jul 25, 2016  8:01:34 PM
Tue, Jul 26, 2016  2:36:08 PM
