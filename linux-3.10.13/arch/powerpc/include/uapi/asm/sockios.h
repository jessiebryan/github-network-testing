#ifndef _ASM_POWERPC_SOCKIOS_H
#define _ASM_POWERPC_SOCKIOS_H

/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

/* Socket-level I/O control calls. */
#define FIOSETOWN 	0x8901
#define SIOCSPGRP	0x8902
#define FIOGETOWN	0x8903
#define SIOCGPGRP	0x8904
#define SIOCATMARK	0x8905
#define SIOCGSTAMP	0x8906		/* Get stamp (timeval) */
#define SIOCGSTAMPNS	0x8907		/* Get stamp (timespec) */

#endif	/* _ASM_POWERPC_SOCKIOS_H */
Tue Jul 19 12:43:18 PDT 2016
Fri Jul 22 15:55:32 PDT 2016
Sun, Jul 24, 2016  3:24:42 PM
