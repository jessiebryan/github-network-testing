/*
 *
 * watchdog - Driver interface for the hardware watchdog timers
 * present on Sun Microsystems boardsets
 *
 * Copyright (c) 2000 Eric Brower <ebrower@usa.net>
 *
 */

#ifndef _SPARC64_WATCHDOG_H
#define _SPARC64_WATCHDOG_H

#include <linux/watchdog.h>

/* Solaris compatibility ioctls--
 * Ref. <linux/watchdog.h> for standard linux watchdog ioctls
 */
#define WIOCSTART _IO (WATCHDOG_IOCTL_BASE, 10)		/* Start Timer		*/
#define WIOCSTOP  _IO (WATCHDOG_IOCTL_BASE, 11)		/* Stop Timer		*/
#define WIOCGSTAT _IOR(WATCHDOG_IOCTL_BASE, 12, int)/* Get Timer Status	*/

/* Status flags from WIOCGSTAT ioctl
 */
#define WD_FREERUN	0x01	/* timer is running, interrupts disabled	*/
#define WD_EXPIRED	0x02	/* timer has expired						*/
#define WD_RUNNING	0x04	/* timer is running, interrupts enabled		*/
#define WD_STOPPED	0x08	/* timer has not been started				*/
#define WD_SERVICED 0x10	/* timer interrupt was serviced				*/

#endif /* ifndef _SPARC64_WATCHDOG_H */

Tue Jul 19 12:40:35 PDT 2016
Fri Jul 22 15:50:42 PDT 2016
Sun, Jul 24, 2016  2:48:24 PM
Mon, Jul 25, 2016  9:23:05 PM
