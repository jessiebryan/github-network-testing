/* arch/arm/plat-samsung/include/plat/ts.h
 *
 * Copyright (c) 2005 Arnaud Patard <arnaud.patard@rtp-net.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARM_TS_H
#define __ASM_ARM_TS_H

struct s3c2410_ts_mach_info {
       int             delay;
       int             presc;
       int             oversampling_shift;
	void    (*cfg_gpio)(struct platform_device *dev);
};

extern void s3c24xx_ts_set_platdata(struct s3c2410_ts_mach_info *);

/* defined by architecture to configure gpio */
extern void s3c24xx_ts_cfg_gpio(struct platform_device *dev);

#endif /* __ASM_ARM_TS_H */
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:36 PDT 2016
Sun, Jul 24, 2016  1:12:32 PM
Mon, Jul 25, 2016  6:19:15 PM
Mon, Jul 25, 2016  7:32:32 PM
