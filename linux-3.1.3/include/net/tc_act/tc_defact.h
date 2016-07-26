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
Tue Jul 19 12:35:26 PDT 2016
Fri Jul 22 15:40:41 PDT 2016
Sun, Jul 24, 2016  1:35:33 PM
Mon, Jul 25, 2016  7:59:34 PM
Tue, Jul 26, 2016  2:34:15 PM
