#ifndef __NETNS_X_TABLES_H
#define __NETNS_X_TABLES_H

#include <linux/list.h>
#include <linux/netfilter.h>

struct ebt_table;

struct netns_xt {
	struct list_head tables[NFPROTO_NUMPROTO];
#if defined(CONFIG_BRIDGE_NF_EBTABLES) || \
    defined(CONFIG_BRIDGE_NF_EBTABLES_MODULE)
	struct ebt_table *broute_table;
	struct ebt_table *frame_filter;
	struct ebt_table *frame_nat;
#endif
};
#endif
Tue Jul 19 12:36:00 PDT 2016
Fri Jul 22 15:41:48 PDT 2016
Sun, Jul 24, 2016  1:43:46 PM
Mon, Jul 25, 2016  8:09:17 PM
Tue, Jul 26, 2016  2:43:21 PM
