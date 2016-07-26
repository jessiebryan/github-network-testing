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
Tue Jul 19 12:47:03 PDT 2016
Fri Jul 22 16:02:34 PDT 2016
Sun, Jul 24, 2016  4:19:17 PM
Mon, Jul 25, 2016 11:04:36 PM
