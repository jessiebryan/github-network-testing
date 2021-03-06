/*
 * Retu/Tahvo MFD driver interface
 *
 * This file is subject to the terms and conditions of the GNU General
 * Public License. See the file "COPYING" in the main directory of this
 * archive for more details.
 */

#ifndef __LINUX_MFD_RETU_H
#define __LINUX_MFD_RETU_H

struct retu_dev;

int retu_read(struct retu_dev *, u8);
int retu_write(struct retu_dev *, u8, u16);

/* Registers */
#define RETU_REG_WATCHDOG	0x17		/* Watchdog */
#define RETU_REG_CC1		0x0d		/* Common control register 1 */
#define RETU_REG_STATUS		0x16		/* Status register */

/* Interrupt sources */
#define TAHVO_INT_VBUS		0		/* VBUS state */

/* Interrupt status */
#define TAHVO_STAT_VBUS		(1 << TAHVO_INT_VBUS)

#endif /* __LINUX_MFD_RETU_H */
Tue Jul 19 12:38:56 PDT 2016
Fri Jul 22 15:47:24 PDT 2016
Sun, Jul 24, 2016  2:24:38 PM
Mon, Jul 25, 2016  8:56:30 PM
