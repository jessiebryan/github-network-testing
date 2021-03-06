#ifndef __BCM63XX_DSP_H
#define __BCM63XX_DSP_H

struct bcm63xx_dsp_platform_data {
	unsigned gpio_rst;
	unsigned gpio_int;
	unsigned cs;
	unsigned ext_irq;
};

int __init bcm63xx_dsp_register(const struct bcm63xx_dsp_platform_data *pd);

#endif /* __BCM63XX_DSP_H */
Tue Jul 19 12:47:41 PDT 2016
Fri Jul 22 16:03:46 PDT 2016
Sun, Jul 24, 2016  4:28:33 PM
Mon, Jul 25, 2016 11:14:51 PM
