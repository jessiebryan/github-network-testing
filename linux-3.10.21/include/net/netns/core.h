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
Tue Jul 19 12:48:44 PDT 2016
Fri Jul 22 16:05:44 PDT 2016
Sun, Jul 24, 2016  4:43:44 PM
Mon, Jul 25, 2016 11:31:43 PM
