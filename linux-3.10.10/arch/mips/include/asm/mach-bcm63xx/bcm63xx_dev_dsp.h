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
Tue Jul 19 12:39:12 PDT 2016
Fri Jul 22 15:47:57 PDT 2016
Sun, Jul 24, 2016  2:28:41 PM
Mon, Jul 25, 2016  9:01:02 PM
