#ifndef __LINUX_HTCPLD_H
#define __LINUX_HTCPLD_H

struct htcpld_chip_platform_data {
	unsigned int addr;
	unsigned int reset;
	unsigned int num_gpios;
	unsigned int gpio_out_base;
	unsigned int gpio_in_base;
	unsigned int irq_base;
	unsigned int num_irqs;
};

struct htcpld_core_platform_data {
	unsigned int                      int_reset_gpio_hi;
	unsigned int                      int_reset_gpio_lo;
	unsigned int                      i2c_adapter_id;

	struct htcpld_chip_platform_data  *chip;
	unsigned int                      num_chip;
};

#endif /* __LINUX_HTCPLD_H */

Tue Jul 19 12:53:12 PDT 2016
Fri Jul 22 16:14:18 PDT 2016
Sun, Jul 24, 2016  5:47:47 PM
Tue, Jul 26, 2016 12:42:30 AM
