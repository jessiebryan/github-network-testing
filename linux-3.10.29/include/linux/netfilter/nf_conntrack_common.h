#ifndef _NF_CONNTRACK_COMMON_H
#define _NF_CONNTRACK_COMMON_H

#include <uapi/linux/netfilter/nf_conntrack_common.h>

struct ip_conntrack_stat {
	unsigned int searched;
	unsigned int found;
	unsigned int new;
	unsigned int invalid;
	unsigned int ignore;
	unsigned int delete;
	unsigned int delete_list;
	unsigned int insert;
	unsigned int insert_failed;
	unsigned int drop;
	unsigned int early_drop;
	unsigned int error;
	unsigned int expect_new;
	unsigned int expect_create;
	unsigned int expect_delete;
	unsigned int search_restart;
};

/* call to create an explicit dependency on nf_conntrack. */
extern void need_conntrack(void);

#endif /* _NF_CONNTRACK_COMMON_H */
Tue Jul 19 12:53:52 PDT 2016
Fri Jul 22 16:15:36 PDT 2016
Sun, Jul 24, 2016  5:57:26 PM
Tue, Jul 26, 2016 12:53:11 AM
