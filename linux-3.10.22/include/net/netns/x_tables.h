#ifndef __NETNS_X_TABLES_H
#define __NETNS_X_TABLES_H

#include <linux/list.h>
#include <linux/netfilter.h>

struct ebt_table;

struct netns_xt {
	struct list_head tables[NFPROTO_NUMPROTO];
	bool notrack_deprecated_warning;
#if defined(CONFIG_BRIDGE_NF_EBTABLES) || \
    defined(CONFIG_BRIDGE_NF_EBTABLES_MODULE)
	struct ebt_table *broute_table;
	struct ebt_table *frame_filter;
	struct ebt_table *frame_nat;
#endif
};
#endif
Tue Jul 19 12:49:24 PDT 2016
Fri Jul 22 16:06:56 PDT 2016
Sun, Jul 24, 2016  4:52:58 PM
Mon, Jul 25, 2016 11:42:04 PM
