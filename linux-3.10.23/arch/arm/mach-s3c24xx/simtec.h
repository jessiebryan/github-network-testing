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
Tue Jul 19 12:49:31 PDT 2016
Fri Jul 22 16:07:10 PDT 2016
Sun, Jul 24, 2016  4:54:48 PM
Mon, Jul 25, 2016 11:44:06 PM
