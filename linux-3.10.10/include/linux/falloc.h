#ifndef _FALLOC_H_
#define _FALLOC_H_

#include <uapi/linux/falloc.h>


/*
 * Space reservation ioctls and argument structure
 * are designed to be compatible with the legacy XFS ioctls.
 */
struct space_resv {
	__s16		l_type;
	__s16		l_whence;
	__s64		l_start;
	__s64		l_len;		/* len == 0 means until end of file */
	__s32		l_sysid;
	__u32		l_pid;
	__s32		l_pad[4];	/* reserved area */
};

#define FS_IOC_RESVSP		_IOW('X', 40, struct space_resv)
#define FS_IOC_RESVSP64		_IOW('X', 42, struct space_resv)

#endif /* _FALLOC_H_ */
Tue Jul 19 12:39:32 PDT 2016
Fri Jul 22 15:48:39 PDT 2016
Sun, Jul 24, 2016  2:33:33 PM
Mon, Jul 25, 2016  9:06:26 PM
