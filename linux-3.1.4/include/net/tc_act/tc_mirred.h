#ifndef __NET_TC_MIR_H
#define __NET_TC_MIR_H

#include <net/act_api.h>

struct tcf_mirred {
	struct tcf_common	common;
	int			tcfm_eaction;
	int			tcfm_ifindex;
	int			tcfm_ok_push;
	struct net_device	*tcfm_dev;
	struct list_head	tcfm_list;
};
#define to_mirred(pc) \
	container_of(pc, struct tcf_mirred, common)

#endif /* __NET_TC_MIR_H */
Tue Jul 19 12:36:00 PDT 2016
Fri Jul 22 15:41:49 PDT 2016
Sun, Jul 24, 2016  1:43:48 PM
Mon, Jul 25, 2016  8:09:19 PM
Tue, Jul 26, 2016  2:43:23 PM
