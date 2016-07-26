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
Tue Jul 19 12:50:40 PDT 2016
Fri Jul 22 16:09:22 PDT 2016
Sun, Jul 24, 2016  5:11:34 PM
Tue, Jul 26, 2016 12:02:34 AM
