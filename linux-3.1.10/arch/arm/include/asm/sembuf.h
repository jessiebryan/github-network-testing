#ifndef _ASMARM_SEMBUF_H
#define _ASMARM_SEMBUF_H

/* 
 * The semid64_ds structure for arm architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space is left for:
 * - 64-bit time_t to solve y2038 problem
 * - 2 miscellaneous 32-bit values
 */

struct semid64_ds {
	struct ipc64_perm sem_perm;		/* permissions .. see ipc.h */
	__kernel_time_t	sem_otime;		/* last semop time */
	unsigned long	__unused1;
	__kernel_time_t	sem_ctime;		/* last change time */
	unsigned long	__unused2;
	unsigned long	sem_nsems;		/* no. of semaphores in array */
	unsigned long	__unused3;
	unsigned long	__unused4;
};

#endif /* _ASMARM_SEMBUF_H */
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:29 PDT 2016
Sun, Jul 24, 2016  1:11:36 PM
Mon, Jul 25, 2016  6:18:08 PM
Mon, Jul 25, 2016  7:31:27 PM
Tue, Jul 26, 2016  2:07:42 PM
