/*
 * Unix network namespace
 */
#ifndef __NETNS_UNIX_H__
#define __NETNS_UNIX_H__

struct ctl_table_header;
struct netns_unix {
	int			sysctl_max_dgram_qlen;
	struct ctl_table_header	*ctl;
};

#endif /* __NETNS_UNIX_H__ */
Tue Jul 19 12:52:37 PDT 2016
Fri Jul 22 16:13:10 PDT 2016
Sun, Jul 24, 2016  5:39:30 PM
Tue, Jul 26, 2016 12:33:24 AM
