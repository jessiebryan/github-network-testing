#ifndef __ASM_SH_SOCKIOS_H
#define __ASM_SH_SOCKIOS_H

/* Socket-level I/O control calls. */
#define FIOGETOWN	_IOR('f', 123, int)
#define FIOSETOWN 	_IOW('f', 124, int)

#define SIOCATMARK	_IOR('s', 7, int)
#define SIOCSPGRP	_IOW('s', 8, pid_t)
#define SIOCGPGRP	_IOR('s', 9, pid_t)

#define SIOCGSTAMP	_IOR('s', 100, struct timeval) /* Get stamp (timeval) */
#define SIOCGSTAMPNS	_IOR('s', 101, struct timespec) /* Get stamp (timespec) */
#endif /* __ASM_SH_SOCKIOS_H */
Tue Jul 19 12:46:29 PDT 2016
Fri Jul 22 16:01:31 PDT 2016
Sun, Jul 24, 2016  4:11:12 PM
