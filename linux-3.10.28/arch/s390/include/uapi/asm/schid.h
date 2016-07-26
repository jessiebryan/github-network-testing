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
Tue Jul 19 12:52:55 PDT 2016
Fri Jul 22 16:13:46 PDT 2016
Sun, Jul 24, 2016  5:43:41 PM
Tue, Jul 26, 2016 12:38:01 AM
