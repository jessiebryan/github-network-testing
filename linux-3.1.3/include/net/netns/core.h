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
Tue Jul 19 12:35:26 PDT 2016
Fri Jul 22 15:40:41 PDT 2016
Sun, Jul 24, 2016  1:35:31 PM
Mon, Jul 25, 2016  7:59:32 PM
Tue, Jul 26, 2016  2:34:13 PM
