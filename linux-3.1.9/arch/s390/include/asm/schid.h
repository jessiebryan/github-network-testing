#ifndef ASM_SCHID_H
#define ASM_SCHID_H

#include <linux/types.h>

struct subchannel_id {
	__u32 cssid : 8;
	__u32 : 4;
	__u32 m : 1;
	__u32 ssid : 2;
	__u32 one : 1;
	__u32 sch_no : 16;
} __attribute__ ((packed, aligned(4)));

#ifdef __KERNEL__
#include <linux/string.h>

/* Helper function for sane state of pre-allocated subchannel_id. */
static inline void
init_subchannel_id(struct subchannel_id *schid)
{
	memset(schid, 0, sizeof(struct subchannel_id));
	schid->one = 1;
}

static inline int
schid_equal(struct subchannel_id *schid1, struct subchannel_id *schid2)
{
	return !memcmp(schid1, schid2, sizeof(struct subchannel_id));
}

#endif /* __KERNEL__ */

#endif /* ASM_SCHID_H */
Tue Jul 19 12:38:03 PDT 2016
Fri Jul 22 15:45:39 PDT 2016
Sun, Jul 24, 2016  2:12:08 PM
Mon, Jul 25, 2016  8:42:36 PM
