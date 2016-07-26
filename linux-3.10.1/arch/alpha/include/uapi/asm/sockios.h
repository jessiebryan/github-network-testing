#ifndef _ASM_ALPHA_SOCKIOS_H
#define _ASM_ALPHA_SOCKIOS_H

/* Socket-level I/O control calls. */

#define FIOGETOWN	_IOR('f', 123, int)
#define FIOSETOWN 	_IOW('f', 124, int)

#define SIOCATMARK	_IOR('s', 7, int)
#define SIOCSPGRP	_IOW('s', 8, pid_t)
#define SIOCGPGRP	_IOR('s', 9, pid_t)

#define SIOCGSTAMP	0x8906		/* Get stamp (timeval) */
#define SIOCGSTAMPNS	0x8907		/* Get stamp (timespec) */

#endif /* _ASM_ALPHA_SOCKIOS_H */
Tue Jul 19 12:38:26 PDT 2016
Fri Jul 22 15:46:23 PDT 2016
Sun, Jul 24, 2016  2:17:29 PM
Mon, Jul 25, 2016  8:48:30 PM
