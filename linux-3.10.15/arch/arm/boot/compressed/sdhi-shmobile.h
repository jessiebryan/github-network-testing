#ifndef SDHI_MOBILE_H
#define SDHI_MOBILE_H

#include <linux/compiler.h>

int sdhi_boot_do_read(void __iomem *base, int high_capacity,
		      unsigned long offset, unsigned short count,
		      unsigned short *buf);
int sdhi_boot_init(void __iomem *base);

#endif
Tue Jul 19 12:44:24 PDT 2016
Fri Jul 22 15:57:35 PDT 2016
Sun, Jul 24, 2016  3:40:28 PM
Mon, Jul 25, 2016 10:21:23 PM
