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
Tue Jul 19 12:48:06 PDT 2016
Fri Jul 22 16:04:31 PDT 2016
Sun, Jul 24, 2016  4:34:31 PM
Mon, Jul 25, 2016 11:21:29 PM
