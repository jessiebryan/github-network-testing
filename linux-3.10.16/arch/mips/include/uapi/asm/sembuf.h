#ifndef _ASM_SEMBUF_H
#define _ASM_SEMBUF_H

/*
 * The semid64_ds structure for the MIPS architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space is left for:
 * - 2 miscellaneous 64-bit values
 */

struct semid64_ds {
	struct ipc64_perm sem_perm;		/* permissions .. see ipc.h */
	__kernel_time_t sem_otime;		/* last semop time */
	__kernel_time_t sem_ctime;		/* last change time */
	unsigned long	sem_nsems;		/* no. of semaphores in array */
	unsigned long	__unused1;
	unsigned long	__unused2;
};

#endif /* _ASM_SEMBUF_H */
Tue Jul 19 12:45:12 PDT 2016
Fri Jul 22 15:59:03 PDT 2016
Sun, Jul 24, 2016  3:51:57 PM
Mon, Jul 25, 2016 10:34:12 PM
