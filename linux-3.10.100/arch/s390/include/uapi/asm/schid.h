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
Tue Jul 19 12:39:55 PDT 2016
Fri Jul 22 15:49:22 PDT 2016
Sun, Jul 24, 2016  2:38:47 PM
Mon, Jul 25, 2016  9:12:15 PM
