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
Tue Jul 19 12:36:34 PDT 2016
Fri Jul 22 15:42:56 PDT 2016
Sun, Jul 24, 2016  1:52:00 PM
Mon, Jul 25, 2016  8:18:59 PM
