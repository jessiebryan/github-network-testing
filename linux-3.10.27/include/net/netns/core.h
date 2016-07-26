#ifndef __NETNS_CORE_H__
#define __NETNS_CORE_H__

struct ctl_table_header;
struct prot_inuse;

struct netns_core {
	/* core sysctls */
	struct ctl_table_header	*sysctl_hdr;

	int	sysctl_somaxconn;

	struct prot_inuse __percpu *inuse;
};

#endif
Tue Jul 19 12:52:37 PDT 2016
Fri Jul 22 16:13:10 PDT 2016
Sun, Jul 24, 2016  5:39:30 PM
Tue, Jul 26, 2016 12:33:24 AM
