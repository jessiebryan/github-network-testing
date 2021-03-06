#ifndef _ASM_SEMBUF_H
#define _ASM_SEMBUF_H

/*
 * The semid64_ds structure for FR-V architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space is left for:
 * - 64-bit time_t to solve y2038 problem
 * - 2 miscellaneous 32-bit values
 */

struct semid64_ds {
	struct ipc64_perm	sem_perm;	/* permissions .. see ipc.h */
	__kernel_time_t		sem_otime;	/* last semop time */
	unsigned long		__unused1;
	__kernel_time_t		sem_ctime;	/* last change time */
	unsigned long		__unused2;
	unsigned long		sem_nsems;	/* no. of semaphores in array */
	unsigned long		__unused3;
	unsigned long		__unused4;
};

#endif /* _ASM_SEMBUF_H */

Tue Jul 19 12:42:34 PDT 2016
Fri Jul 22 15:54:11 PDT 2016
Sun, Jul 24, 2016  3:14:04 PM
Mon, Jul 25, 2016  9:52:03 PM
