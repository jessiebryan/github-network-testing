#ifndef _XT_DCCP_H_
#define _XT_DCCP_H_

#include <linux/types.h>

#define XT_DCCP_SRC_PORTS	        0x01
#define XT_DCCP_DEST_PORTS	        0x02
#define XT_DCCP_TYPE			0x04
#define XT_DCCP_OPTION			0x08

#define XT_DCCP_VALID_FLAGS		0x0f

struct xt_dccp_info {
	__u16 dpts[2];  /* Min, Max */
	__u16 spts[2];  /* Min, Max */

	__u16 flags;
	__u16 invflags;

	__u16 typemask;
	__u8 option;
};

#endif /* _XT_DCCP_H_ */

Tue Jul 19 12:37:05 PDT 2016
Fri Jul 22 15:43:57 PDT 2016
Sun, Jul 24, 2016  1:59:39 PM
Mon, Jul 25, 2016  8:28:04 PM
