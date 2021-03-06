#ifndef _ASM_IA64_SHMPARAM_H
#define _ASM_IA64_SHMPARAM_H

/*
 * SHMLBA controls minimum alignment at which shared memory segments
 * get attached.  The IA-64 architecture says that there may be a
 * performance degradation when there are virtual aliases within 1MB.
 * To reduce the chance of this, we set SHMLBA to 1MB. --davidm 00/12/20
 */
#define	SHMLBA	(1024*1024)

#endif /* _ASM_IA64_SHMPARAM_H */
Tue Jul 19 12:36:09 PDT 2016
Fri Jul 22 15:42:08 PDT 2016
Sun, Jul 24, 2016  1:46:10 PM
Mon, Jul 25, 2016  8:12:07 PM
Tue, Jul 26, 2016  2:46:01 PM
