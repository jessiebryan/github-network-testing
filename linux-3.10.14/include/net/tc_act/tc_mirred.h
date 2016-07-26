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
Tue Jul 19 12:44:19 PDT 2016
Fri Jul 22 15:57:25 PDT 2016
Sun, Jul 24, 2016  3:39:11 PM
Mon, Jul 25, 2016 10:19:59 PM
