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
Tue Jul 19 12:50:02 PDT 2016
Fri Jul 22 16:08:09 PDT 2016
Sun, Jul 24, 2016  5:02:14 PM
Mon, Jul 25, 2016 11:52:19 PM
