#ifndef SDHI_MOBILE_H
#define SDHI_MOBILE_H

#include <linux/compiler.h>

int sdhi_boot_do_read(void __iomem *base, int high_capacity,
		      unsigned long offset, unsigned short count,
		      unsigned short *buf);
int sdhi_boot_init(void __iomem *base);

#endif
Tue Jul 19 12:37:11 PDT 2016
Fri Jul 22 15:44:09 PDT 2016
Sun, Jul 24, 2016  2:01:00 PM
Mon, Jul 25, 2016  8:29:40 PM
