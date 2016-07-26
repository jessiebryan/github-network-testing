#ifndef __NETNS_DCCP_H__
#define __NETNS_DCCP_H__

struct sock;

struct netns_dccp {
	struct sock *v4_ctl_sk;
	struct sock *v6_ctl_sk;
};

#endif
Tue Jul 19 12:33:43 PDT 2016
Fri Jul 22 15:38:28 PDT 2016
Sun, Jul 24, 2016  1:19:00 PM
Mon, Jul 25, 2016  6:27:00 PM
Mon, Jul 25, 2016  7:40:07 PM
Tue, Jul 26, 2016  2:15:56 PM
