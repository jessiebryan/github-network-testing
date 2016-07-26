#ifndef __NETNS_DCCP_H__
#define __NETNS_DCCP_H__

struct sock;

struct netns_dccp {
	struct sock *v4_ctl_sk;
	struct sock *v6_ctl_sk;
};

#endif
Tue Jul 19 12:52:37 PDT 2016
Fri Jul 22 16:13:10 PDT 2016
Sun, Jul 24, 2016  5:39:30 PM
Tue, Jul 26, 2016 12:33:24 AM
