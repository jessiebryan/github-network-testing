#ifndef __POWERPC_PLATFORMS_44X_44X_H
#define __POWERPC_PLATFORMS_44X_44X_H

extern u8 as1_readb(volatile u8 __iomem  *addr);
extern void as1_writeb(u8 data, volatile u8 __iomem *addr);

#define GPIO0_OSRH	0xC
#define GPIO0_TSRH	0x14
#define GPIO0_ISR1H	0x34

#endif /* __POWERPC_PLATFORMS_44X_44X_H */
Tue Jul 19 12:47:45 PDT 2016
Fri Jul 22 16:03:51 PDT 2016
Sun, Jul 24, 2016  4:29:18 PM
Mon, Jul 25, 2016 11:15:41 PM
