#ifndef __NETNS_NETFILTER_H
#define __NETNS_NETFILTER_H

#include <linux/proc_fs.h>
#include <linux/netfilter.h>

struct nf_logger;

struct netns_nf {
#if defined CONFIG_PROC_FS
	struct proc_dir_entry *proc_netfilter;
#endif
	const struct nf_logger __rcu *nf_loggers[NFPROTO_NUMPROTO];
#ifdef CONFIG_SYSCTL
	struct ctl_table_header *nf_log_dir_header;
#endif
};
#endif
Tue Jul 19 12:45:34 PDT 2016
Fri Jul 22 15:59:46 PDT 2016
Sun, Jul 24, 2016  3:57:36 PM
Mon, Jul 25, 2016 10:40:28 PM
