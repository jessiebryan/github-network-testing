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
Tue Jul 19 12:48:44 PDT 2016
Fri Jul 22 16:05:44 PDT 2016
Sun, Jul 24, 2016  4:43:47 PM
Mon, Jul 25, 2016 11:31:46 PM
