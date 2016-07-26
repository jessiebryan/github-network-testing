#ifndef SDHI_MOBILE_H
#define SDHI_MOBILE_H

#include <linux/compiler.h>

int sdhi_boot_do_read(void __iomem *base, int high_capacity,
		      unsigned long offset, unsigned short count,
		      unsigned short *buf);
int sdhi_boot_init(void __iomem *base);

#endif
Tue Jul 19 12:52:04 PDT 2016
Fri Jul 22 16:12:06 PDT 2016
Sun, Jul 24, 2016  5:31:30 PM
Tue, Jul 26, 2016 12:24:34 AM
