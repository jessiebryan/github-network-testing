/*
 * include/linux/serial.h
 *
 * Copyright (C) 1992 by Theodore Ts'o.
 * 
 * Redistribution of this file is permitted under the terms of the GNU 
 * Public License (GPL)
 */
#ifndef _LINUX_SERIAL_H
#define _LINUX_SERIAL_H

#include <asm/page.h>
#include <uapi/linux/serial.h>


/*
 * Counters of the input lines (CTS, DSR, RI, CD) interrupts
 */

struct async_icount {
	__u32	cts, dsr, rng, dcd, tx, rx;
	__u32	frame, parity, overrun, brk;
	__u32	buf_overrun;
};

/*
 * The size of the serial xmit buffer is 1 page, or 4096 bytes
 */
#define SERIAL_XMIT_SIZE PAGE_SIZE

#include <linux/compiler.h>

#endif /* _LINUX_SERIAL_H */
Tue Jul 19 12:50:00 PDT 2016
Fri Jul 22 16:08:06 PDT 2016
Sun, Jul 24, 2016  5:01:49 PM
Mon, Jul 25, 2016 11:51:52 PM
