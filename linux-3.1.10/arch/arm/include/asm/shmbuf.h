#ifndef _ASMARM_SHMBUF_H
#define _ASMARM_SHMBUF_H

/* 
 * The shmid64_ds structure for arm architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space is left for:
 * - 64-bit time_t to solve y2038 problem
 * - 2 miscellaneous 32-bit values
 */

struct shmid64_ds {
	struct ipc64_perm	shm_perm;	/* operation perms */
	size_t			shm_segsz;	/* size of segment (bytes) */
	__kernel_time_t		shm_atime;	/* last attach time */
	unsigned long		__unused1;
	__kernel_time_t		shm_dtime;	/* last detach time */
	unsigned long		__unused2;
	__kernel_time_t		shm_ctime;	/* last change time */
	unsigned long		__unused3;
	__kernel_pid_t		shm_cpid;	/* pid of creator */
	__kernel_pid_t		shm_lpid;	/* pid of last operator */
	unsigned long		shm_nattch;	/* no. of current attaches */
	unsigned long		__unused4;
	unsigned long		__unused5;
};

struct shminfo64 {
	unsigned long	shmmax;
	unsigned long	shmmin;
	unsigned long	shmmni;
	unsigned long	shmseg;
	unsigned long	shmall;
	unsigned long	__unused1;
	unsigned long	__unused2;
	unsigned long	__unused3;
	unsigned long	__unused4;
};

#endif /* _ASMARM_SHMBUF_H */
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:29 PDT 2016
Sun, Jul 24, 2016  1:11:36 PM
Mon, Jul 25, 2016  6:18:08 PM
Mon, Jul 25, 2016  7:31:27 PM
Tue, Jul 26, 2016  2:07:42 PM
