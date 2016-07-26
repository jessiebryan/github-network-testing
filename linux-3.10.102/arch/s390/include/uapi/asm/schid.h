#ifndef _UAPIASM_SCHID_H
#define _UAPIASM_SCHID_H

#include <linux/types.h>

struct subchannel_id {
	__u32 cssid : 8;
	__u32 : 4;
	__u32 m : 1;
	__u32 ssid : 2;
	__u32 one : 1;
	__u32 sch_no : 16;
} __attribute__ ((packed, aligned(4)));


#endif /* _UAPIASM_SCHID_H */
Tue Jul 19 12:41:13 PDT 2016
Fri Jul 22 15:51:56 PDT 2016
Sun, Jul 24, 2016  2:57:12 PM
Mon, Jul 25, 2016  9:33:01 PM
