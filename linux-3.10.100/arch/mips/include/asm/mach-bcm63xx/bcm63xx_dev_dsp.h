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
Tue Jul 19 12:39:51 PDT 2016
Fri Jul 22 15:49:15 PDT 2016
Sun, Jul 24, 2016  2:37:54 PM
Mon, Jul 25, 2016  9:11:16 PM
