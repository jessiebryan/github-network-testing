#ifndef _PARISC_SEMBUF_H
#define _PARISC_SEMBUF_H

/* 
 * The semid64_ds structure for parisc architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space is left for:
 * - 64-bit time_t to solve y2038 problem
 * - 2 miscellaneous 32-bit values
 */

struct semid64_ds {
	struct ipc64_perm sem_perm;		/* permissions .. see ipc.h */
#ifndef CONFIG_64BIT
	unsigned int	__pad1;
#endif
	__kernel_time_t	sem_otime;		/* last semop time */
#ifndef CONFIG_64BIT
	unsigned int	__pad2;
#endif
	__kernel_time_t	sem_ctime;		/* last change time */
	unsigned int	sem_nsems;		/* no. of semaphores in array */
	unsigned int	__unused1;
	unsigned int	__unused2;
};

#endif /* _PARISC_SEMBUF_H */
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:49 PDT 2016
Sun, Jul 24, 2016  1:14:04 PM
Mon, Jul 25, 2016  6:21:05 PM
Mon, Jul 25, 2016  7:34:19 PM
Tue, Jul 26, 2016  2:10:24 PM
