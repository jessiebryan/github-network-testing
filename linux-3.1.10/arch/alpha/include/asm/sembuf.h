#ifndef _ALPHA_SEMBUF_H
#define _ALPHA_SEMBUF_H

/* 
 * The semid64_ds structure for alpha architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space is left for:
 * - 2 miscellaneous 64-bit values
 */

struct semid64_ds {
	struct ipc64_perm sem_perm;		/* permissions .. see ipc.h */
	__kernel_time_t	sem_otime;		/* last semop time */
	__kernel_time_t	sem_ctime;		/* last change time */
	unsigned long	sem_nsems;		/* no. of semaphores in array */
	unsigned long	__unused1;
	unsigned long	__unused2;
};

#endif /* _ALPHA_SEMBUF_H */
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:28 PDT 2016
Sun, Jul 24, 2016  1:11:29 PM
Mon, Jul 25, 2016  6:18:00 PM
Mon, Jul 25, 2016  7:31:19 PM
Tue, Jul 26, 2016  2:07:34 PM
