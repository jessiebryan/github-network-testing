#ifndef _ASM_IA64_SOCKIOS_H
#define _ASM_IA64_SOCKIOS_H

/*
 * Socket-level I/O control calls.
 *
 * Based on <asm-i386/sockios.h>.
 *
 * Modified 1998, 1999
 *	David Mosberger-Tang <davidm@hpl.hp.com>, Hewlett-Packard Co
 */
#define FIOSETOWN 	0x8901
#define SIOCSPGRP	0x8902
#define FIOGETOWN	0x8903
#define SIOCGPGRP	0x8904
#define SIOCATMARK	0x8905
#define SIOCGSTAMP	0x8906		/* Get stamp (timeval) */
#define SIOCGSTAMPNS	0x8907		/* Get stamp (timespec) */

#endif /* _ASM_IA64_SOCKIOS_H */
Tue Jul 19 12:33:19 PDT 2016
Fri Jul 22 15:37:41 PDT 2016
Sun, Jul 24, 2016  1:13:11 PM
Mon, Jul 25, 2016  6:20:02 PM
