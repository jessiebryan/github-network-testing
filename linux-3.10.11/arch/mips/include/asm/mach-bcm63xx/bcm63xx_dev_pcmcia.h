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
Tue Jul 19 12:41:51 PDT 2016
Fri Jul 22 15:53:05 PDT 2016
Sun, Jul 24, 2016  3:05:33 PM
Mon, Jul 25, 2016  9:42:25 PM
