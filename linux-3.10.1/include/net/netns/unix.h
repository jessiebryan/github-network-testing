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
Tue Jul 19 12:38:59 PDT 2016
Fri Jul 22 15:47:30 PDT 2016
Sun, Jul 24, 2016  2:25:27 PM
Mon, Jul 25, 2016  8:57:24 PM
