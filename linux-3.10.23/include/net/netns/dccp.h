#ifndef __NETNS_DCCP_H__
#define __NETNS_DCCP_H__

struct sock;

struct netns_dccp {
	struct sock *v4_ctl_sk;
	struct sock *v6_ctl_sk;
};

#endif
Tue Jul 19 12:50:02 PDT 2016
Fri Jul 22 16:08:09 PDT 2016
Sun, Jul 24, 2016  5:02:14 PM
Mon, Jul 25, 2016 11:52:18 PM
