#ifndef __NETNS_DCCP_H__
#define __NETNS_DCCP_H__

struct sock;

struct netns_dccp {
	struct sock *v4_ctl_sk;
	struct sock *v6_ctl_sk;
};

#endif
Tue Jul 19 12:38:22 PDT 2016
Fri Jul 22 15:46:17 PDT 2016
Sun, Jul 24, 2016  2:16:44 PM
Mon, Jul 25, 2016  8:47:41 PM
