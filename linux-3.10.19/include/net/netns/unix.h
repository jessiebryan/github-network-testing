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
Tue Jul 19 12:47:28 PDT 2016
Fri Jul 22 16:03:19 PDT 2016
Sun, Jul 24, 2016  4:25:17 PM
Mon, Jul 25, 2016 11:11:13 PM
