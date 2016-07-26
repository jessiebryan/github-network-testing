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
Tue Jul 19 12:50:15 PDT 2016
Fri Jul 22 16:08:35 PDT 2016
Sun, Jul 24, 2016  5:05:35 PM
Mon, Jul 25, 2016 11:55:57 PM
