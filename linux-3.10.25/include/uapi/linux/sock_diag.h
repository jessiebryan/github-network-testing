#ifndef _UAPI__SOCK_DIAG_H__
#define _UAPI__SOCK_DIAG_H__

#include <linux/types.h>

#define SOCK_DIAG_BY_FAMILY 20

struct sock_diag_req {
	__u8	sdiag_family;
	__u8	sdiag_protocol;
};

enum {
	SK_MEMINFO_RMEM_ALLOC,
	SK_MEMINFO_RCVBUF,
	SK_MEMINFO_WMEM_ALLOC,
	SK_MEMINFO_SNDBUF,
	SK_MEMINFO_FWD_ALLOC,
	SK_MEMINFO_WMEM_QUEUED,
	SK_MEMINFO_OPTMEM,
	SK_MEMINFO_BACKLOG,

	SK_MEMINFO_VARS,
};

#endif /* _UAPI__SOCK_DIAG_H__ */
Tue Jul 19 12:51:22 PDT 2016
Fri Jul 22 16:10:42 PDT 2016
Sun, Jul 24, 2016  5:21:23 PM
Tue, Jul 26, 2016 12:13:25 AM
