#ifndef LINUX_INTEL_PMIC_H
#define LINUX_INTEL_PMIC_H

struct intel_pmic_gpio_platform_data {
	/* the first IRQ of the chip */
	unsigned	irq_base;
	/* number assigned to the first GPIO */
	unsigned	gpio_base;
	/* sram address for gpiointr register, the langwell chip will map
	 * the PMIC spi GPIO expander's GPIOINTR register in sram.
	 */
	unsigned	gpiointr;
};

#endif
Tue Jul 19 12:38:19 PDT 2016
Fri Jul 22 15:46:10 PDT 2016
Sun, Jul 24, 2016  2:15:54 PM
Mon, Jul 25, 2016  8:46:46 PM
