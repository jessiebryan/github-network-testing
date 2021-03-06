/* arch/arm/mach-s3c24100/include/mach/gpio-core.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 *      Ben Dooks <ben@simtec.co.uk>
 *      http://armlinux.simtec.co.uk/
 *
 * S3C2410 - GPIO core support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_GPIO_CORE_H
#define __ASM_ARCH_GPIO_CORE_H __FILE__

#include <mach/regs-gpio.h>

extern struct s3c_gpio_chip s3c24xx_gpios[];

static inline struct s3c_gpio_chip *s3c_gpiolib_getchip(unsigned int pin)
{
	struct s3c_gpio_chip *chip;

	if (pin > S3C_GPIO_END)
		return NULL;

	chip = &s3c24xx_gpios[pin/32];
	return ((pin - chip->chip.base) < chip->chip.ngpio) ? chip : NULL;
}

#endif /* __ASM_ARCH_GPIO_CORE_H */
Tue Jul 19 12:35:31 PDT 2016
Fri Jul 22 15:40:52 PDT 2016
Sun, Jul 24, 2016  1:36:54 PM
Mon, Jul 25, 2016  8:01:11 PM
Tue, Jul 26, 2016  2:35:46 PM
