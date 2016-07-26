#ifndef _SPARC64_MMZONE_H
#define _SPARC64_MMZONE_H

#ifdef CONFIG_NEED_MULTIPLE_NODES

#include <linux/cpumask.h>

extern struct pglist_data *node_data[];

#define NODE_DATA(nid)		(node_data[nid])

extern int numa_cpu_lookup_table[];
extern cpumask_t numa_cpumask_lookup_table[];

#endif /* CONFIG_NEED_MULTIPLE_NODES */

#endif /* _SPARC64_MMZONE_H */
Tue Jul 19 12:33:25 PDT 2016
Fri Jul 22 15:37:54 PDT 2016
Sun, Jul 24, 2016  1:14:45 PM
Mon, Jul 25, 2016  6:21:54 PM
Mon, Jul 25, 2016  7:35:08 PM
Tue, Jul 26, 2016  2:11:09 PM
