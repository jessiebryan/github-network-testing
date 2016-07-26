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
Tue Jul 19 12:34:36 PDT 2016
Fri Jul 22 15:39:33 PDT 2016
Sun, Jul 24, 2016  1:27:18 PM
Mon, Jul 25, 2016  6:36:56 PM
