/* linux/arch/arm/mach-s3c2410/nor-simtec.h
 *
 * Copyright (c) 2008 Simtec Electronics
 *	http://armlinux.simtec.co.uk/
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * Simtec common functions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

struct s3c24xx_audio_simtec_pdata;

extern void nor_simtec_init(void);

extern int usb_simtec_init(void);

extern int simtec_audio_add(const char *codec_name, bool has_lr_routing,
			    struct s3c24xx_audio_simtec_pdata *pdata);
Tue Jul 19 12:50:49 PDT 2016
Fri Jul 22 16:09:37 PDT 2016
Sun, Jul 24, 2016  5:13:25 PM
Tue, Jul 26, 2016 12:04:36 AM
