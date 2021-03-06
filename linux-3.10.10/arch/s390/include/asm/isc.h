#ifndef _ASM_S390_ISC_H
#define _ASM_S390_ISC_H

#include <linux/types.h>

/*
 * I/O interruption subclasses used by drivers.
 * Please add all used iscs here so that it is possible to distribute
 * isc usage between drivers.
 * Reminder: 0 is highest priority, 7 lowest.
 */
#define MAX_ISC 7

/* Regular I/O interrupts. */
#define IO_SCH_ISC 3			/* regular I/O subchannels */
#define CONSOLE_ISC 1			/* console I/O subchannel */
#define EADM_SCH_ISC 4			/* EADM subchannels */
#define CHSC_SCH_ISC 7			/* CHSC subchannels */
/* Adapter interrupts. */
#define QDIO_AIRQ_ISC IO_SCH_ISC	/* I/O subchannel in qdio mode */
#define PCI_ISC 2			/* PCI I/O subchannels */
#define AP_ISC 6			/* adjunct processor (crypto) devices */

/* Functions for registration of I/O interruption subclasses */
void isc_register(unsigned int isc);
void isc_unregister(unsigned int isc);

#endif /* _ASM_S390_ISC_H */
Tue Jul 19 12:39:16 PDT 2016
Fri Jul 22 15:48:04 PDT 2016
Sun, Jul 24, 2016  2:29:31 PM
Mon, Jul 25, 2016  9:01:57 PM
