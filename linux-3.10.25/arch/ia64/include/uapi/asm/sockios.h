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
Tue Jul 19 12:50:53 PDT 2016
Fri Jul 22 16:09:46 PDT 2016
Sun, Jul 24, 2016  5:14:25 PM
Tue, Jul 26, 2016 12:05:44 AM
