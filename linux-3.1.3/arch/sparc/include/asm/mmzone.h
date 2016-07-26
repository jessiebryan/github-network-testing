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
Tue Jul 19 12:35:05 PDT 2016
Fri Jul 22 15:40:06 PDT 2016
Sun, Jul 24, 2016  1:31:15 PM
Mon, Jul 25, 2016  7:54:30 PM
Tue, Jul 26, 2016  2:29:33 PM
