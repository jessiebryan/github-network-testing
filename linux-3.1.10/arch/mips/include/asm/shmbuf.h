#ifndef _ASM_SHMBUF_H
#define _ASM_SHMBUF_H

/*
 * The shmid64_ds structure for the MIPS architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space is left for:
 * - 2 miscellaneous 32-bit rsp. 64-bit values
 */

struct shmid64_ds {
	struct ipc64_perm	shm_perm;	/* operation perms */
	size_t			shm_segsz;	/* size of segment (bytes) */
	__kernel_time_t		shm_atime;	/* last attach time */
	__kernel_time_t		shm_dtime;	/* last detach time */
	__kernel_time_t		shm_ctime;	/* last change time */
	__kernel_pid_t		shm_cpid;	/* pid of creator */
	__kernel_pid_t		shm_lpid;	/* pid of last operator */
	unsigned long		shm_nattch;	/* no. of current attaches */
	unsigned long		__unused1;
	unsigned long		__unused2;
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

#endif /* _ASM_SHMBUF_H */
Tue Jul 19 12:33:21 PDT 2016
Fri Jul 22 15:37:46 PDT 2016
Sun, Jul 24, 2016  1:13:47 PM
Mon, Jul 25, 2016  6:20:45 PM
Mon, Jul 25, 2016  7:34:00 PM
Tue, Jul 26, 2016  2:10:06 PM
