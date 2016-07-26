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
Tue Jul 19 12:45:47 PDT 2016
Fri Jul 22 16:00:11 PDT 2016
Sun, Jul 24, 2016  4:00:52 PM
Mon, Jul 25, 2016 10:44:06 PM
