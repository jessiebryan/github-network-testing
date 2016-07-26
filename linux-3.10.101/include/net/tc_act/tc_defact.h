#ifndef __NET_TC_DEF_H
#define __NET_TC_DEF_H

#include <net/act_api.h>

struct tcf_defact {
	struct tcf_common	common;
	u32     		tcfd_datalen;
	void    		*tcfd_defdata;
};
#define to_defact(pc) \
	container_of(pc, struct tcf_defact, common)

#endif /* __NET_TC_DEF_H */
Tue Jul 19 12:40:55 PDT 2016
Fri Jul 22 15:51:19 PDT 2016
Sun, Jul 24, 2016  2:53:06 PM
Mon, Jul 25, 2016  9:28:22 PM
