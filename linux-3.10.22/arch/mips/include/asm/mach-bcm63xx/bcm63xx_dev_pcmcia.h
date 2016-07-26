#ifndef BCM63XX_DEV_PCMCIA_H_
#define BCM63XX_DEV_PCMCIA_H_

/*
 * PCMCIA driver platform data
 */
struct bcm63xx_pcmcia_platform_data {
	unsigned int ready_gpio;
};

int bcm63xx_pcmcia_register(void);

#endif /* BCM63XX_DEV_PCMCIA_H_ */
Tue Jul 19 12:48:57 PDT 2016
Fri Jul 22 16:06:09 PDT 2016
Sun, Jul 24, 2016  4:47:01 PM
Mon, Jul 25, 2016 11:35:25 PM
