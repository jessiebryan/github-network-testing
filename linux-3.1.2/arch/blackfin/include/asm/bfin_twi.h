/*
 * bfin_twi.h - interface to Blackfin TWIs
 *
 * Copyright 2005-2010 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef __ASM_BFIN_TWI_H__
#define __ASM_BFIN_TWI_H__

#include <linux/types.h>

/*
 * All Blackfin system MMRs are padded to 32bits even if the register
 * itself is only 16bits.  So use a helper macro to streamline this.
 */
#define __BFP(m) u16 m; u16 __pad_##m

/*
 * bfin twi registers layout
 */
struct bfin_twi_regs {
	__BFP(clkdiv);
	__BFP(control);
	__BFP(slave_ctl);
	__BFP(slave_stat);
	__BFP(slave_addr);
	__BFP(master_ctl);
	__BFP(master_stat);
	__BFP(master_addr);
	__BFP(int_stat);
	__BFP(int_mask);
	__BFP(fifo_ctl);
	__BFP(fifo_stat);
	u32 __pad[20];
	__BFP(xmt_data8);
	__BFP(xmt_data16);
	__BFP(rcv_data8);
	__BFP(rcv_data16);
};

#undef __BFP

#endif
Tue Jul 19 12:33:53 PDT 2016
Fri Jul 22 15:38:42 PDT 2016
Sun, Jul 24, 2016  1:20:53 PM
Mon, Jul 25, 2016  6:29:15 PM
