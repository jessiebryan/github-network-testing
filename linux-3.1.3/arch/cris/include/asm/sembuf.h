#ifndef _CRIS_SEMBUF_H
#define _CRIS_SEMBUF_H

/* 
 * The semid64_ds structure for CRIS architecture.
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

#endif /* _CRIS_SEMBUF_H */
Tue Jul 19 12:34:46 PDT 2016
Fri Jul 22 15:39:51 PDT 2016
Sun, Jul 24, 2016  1:29:26 PM
Mon, Jul 25, 2016  6:39:30 PM
Mon, Jul 25, 2016  7:52:22 PM
Tue, Jul 26, 2016  2:27:31 PM
