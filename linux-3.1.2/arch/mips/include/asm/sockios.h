/*
 * Socket-level I/O control calls.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1995 by Ralf Baechle
 */
#ifndef _ASM_SOCKIOS_H
#define _ASM_SOCKIOS_H

#include <asm/ioctl.h>

/* Socket-level I/O control calls. */
#define FIOGETOWN	_IOR('f', 123, int)
#define FIOSETOWN 	_IOW('f', 124, int)

#define SIOCATMARK	_IOR('s', 7, int)
#define SIOCSPGRP	_IOW('s', 8, pid_t)
#define SIOCGPGRP	_IOR('s', 9, pid_t)

#define SIOCGSTAMP	0x8906		/* Get stamp (timeval) */
#define SIOCGSTAMPNS	0x8907		/* Get stamp (timespec) */

#endif /* _ASM_SOCKIOS_H */
Tue Jul 19 12:33:58 PDT 2016
Fri Jul 22 15:38:52 PDT 2016
Sun, Jul 24, 2016  1:22:04 PM
Mon, Jul 25, 2016  6:30:40 PM
Mon, Jul 25, 2016  7:43:44 PM
Tue, Jul 26, 2016  2:19:23 PM
