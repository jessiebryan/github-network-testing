#ifndef BCM63XX_CS_H
#define BCM63XX_CS_H

int bcm63xx_set_cs_base(unsigned int cs, u32 base, unsigned int size);
int bcm63xx_set_cs_timing(unsigned int cs, unsigned int wait,
			   unsigned int setup, unsigned int hold);
int bcm63xx_set_cs_param(unsigned int cs, u32 flags);
int bcm63xx_set_cs_status(unsigned int cs, int enable);

#endif /* !BCM63XX_CS_H */
Tue Jul 19 12:36:11 PDT 2016
Fri Jul 22 15:42:11 PDT 2016
Sun, Jul 24, 2016  1:46:36 PM
Mon, Jul 25, 2016  8:12:39 PM
Tue, Jul 26, 2016  2:46:31 PM
