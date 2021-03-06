#ifndef _ASM_X86_STAT_H
#define _ASM_X86_STAT_H

#define STAT_HAVE_NSEC 1

#ifdef __i386__
struct stat {
	unsigned long  st_dev;
	unsigned long  st_ino;
	unsigned short st_mode;
	unsigned short st_nlink;
	unsigned short st_uid;
	unsigned short st_gid;
	unsigned long  st_rdev;
	unsigned long  st_size;
	unsigned long  st_blksize;
	unsigned long  st_blocks;
	unsigned long  st_atime;
	unsigned long  st_atime_nsec;
	unsigned long  st_mtime;
	unsigned long  st_mtime_nsec;
	unsigned long  st_ctime;
	unsigned long  st_ctime_nsec;
	unsigned long  __unused4;
	unsigned long  __unused5;
};

/* We don't need to memset the whole thing just to initialize the padding */
#define INIT_STRUCT_STAT_PADDING(st) do {	\
	st.__unused4 = 0;			\
	st.__unused5 = 0;			\
} while (0)

#define STAT64_HAS_BROKEN_ST_INO	1

/* This matches struct stat64 in glibc2.1, hence the absolutely
 * insane amounts of padding around dev_t's.
 */
struct stat64 {
	unsigned long long	st_dev;
	unsigned char	__pad0[4];

	unsigned long	__st_ino;

	unsigned int	st_mode;
	unsigned int	st_nlink;

	unsigned long	st_uid;
	unsigned long	st_gid;

	unsigned long long	st_rdev;
	unsigned char	__pad3[4];

	long long	st_size;
	unsigned long	st_blksize;

	/* Number 512-byte blocks allocated. */
	unsigned long long	st_blocks;

	unsigned long	st_atime;
	unsigned long	st_atime_nsec;

	unsigned long	st_mtime;
	unsigned int	st_mtime_nsec;

	unsigned long	st_ctime;
	unsigned long	st_ctime_nsec;

	unsigned long long	st_ino;
};

/* We don't need to memset the whole thing just to initialize the padding */
#define INIT_STRUCT_STAT64_PADDING(st) do {		\
	memset(&st.__pad0, 0, sizeof(st.__pad0));	\
	memset(&st.__pad3, 0, sizeof(st.__pad3));	\
} while (0)

#else /* __i386__ */

struct stat {
	unsigned long	st_dev;
	unsigned long	st_ino;
	unsigned long	st_nlink;

	unsigned int	st_mode;
	unsigned int	st_uid;
	unsigned int	st_gid;
	unsigned int	__pad0;
	unsigned long	st_rdev;
	long		st_size;
	long		st_blksize;
	long		st_blocks;	/* Number 512-byte blocks allocated. */

	unsigned long	st_atime;
	unsigned long	st_atime_nsec;
	unsigned long	st_mtime;
	unsigned long	st_mtime_nsec;
	unsigned long	st_ctime;
	unsigned long   st_ctime_nsec;
	long		__unused[3];
};

/* We don't need to memset the whole thing just to initialize the padding */
#define INIT_STRUCT_STAT_PADDING(st) do {	\
	st.__pad0 = 0;				\
	st.__unused[0] = 0;			\
	st.__unused[1] = 0;			\
	st.__unused[2] = 0;			\
} while (0)

#endif

/* for 32bit emulation and 32 bit kernels */
struct __old_kernel_stat {
	unsigned short st_dev;
	unsigned short st_ino;
	unsigned short st_mode;
	unsigned short st_nlink;
	unsigned short st_uid;
	unsigned short st_gid;
	unsigned short st_rdev;
#ifdef __i386__
	unsigned long  st_size;
	unsigned long  st_atime;
	unsigned long  st_mtime;
	unsigned long  st_ctime;
#else
	unsigned int  st_size;
	unsigned int  st_atime;
	unsigned int  st_mtime;
	unsigned int  st_ctime;
#endif
};

#endif /* _ASM_X86_STAT_H */
Tue Jul 19 12:43:22 PDT 2016
Fri Jul 22 15:55:40 PDT 2016
Sun, Jul 24, 2016  3:25:41 PM
Mon, Jul 25, 2016 10:04:59 PM
