/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * (C) Copyright TOSHIBA CORPORATION 2007
 */
#ifndef __ASM_TXX9_NDFMC_H
#define __ASM_TXX9_NDFMC_H

#define NDFMC_PLAT_FLAG_USE_BSPRT	0x01
#define NDFMC_PLAT_FLAG_NO_RSTR		0x02
#define NDFMC_PLAT_FLAG_HOLDADD		0x04
#define NDFMC_PLAT_FLAG_DUMMYWRITE	0x08

struct txx9ndfmc_platform_data {
	unsigned int shift;
	unsigned int gbus_clock;
	unsigned int hold;		/* hold time in nanosecond */
	unsigned int spw;		/* strobe pulse width in nanosecond */
	unsigned int flags;
	unsigned char ch_mask;		/* available channel bitmask */
	unsigned char wp_mask;		/* write-protect bitmask */
	unsigned char wide_mask;	/* 16bit-nand bitmask */
};

void txx9_ndfmc_init(unsigned long baseaddr,
		     const struct txx9ndfmc_platform_data *plat_data);

#endif /* __ASM_TXX9_NDFMC_H */
Tue Jul 19 12:39:14 PDT 2016
Fri Jul 22 15:47:59 PDT 2016
Sun, Jul 24, 2016  2:28:58 PM
Mon, Jul 25, 2016  9:01:20 PM
