#ifndef ASM_SCHID_H
#define ASM_SCHID_H

#include <linux/string.h>
#include <uapi/asm/schid.h>

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

#endif /* ASM_SCHID_H */
Tue Jul 19 12:41:12 PDT 2016
Fri Jul 22 15:51:56 PDT 2016
Sun, Jul 24, 2016  2:57:10 PM
Mon, Jul 25, 2016  9:32:59 PM
