#ifndef _LINUX_NUMA_H
#define _LINUX_NUMA_H


#ifdef CONFIG_NODES_SHIFT
#define NODES_SHIFT     CONFIG_NODES_SHIFT
#else
#define NODES_SHIFT     0
#endif

#define MAX_NUMNODES    (1 << NODES_SHIFT)

#define	NUMA_NO_NODE	(-1)

#endif /* _LINUX_NUMA_H */
Tue Jul 19 12:40:13 PDT 2016
Fri Jul 22 15:49:59 PDT 2016
Sun, Jul 24, 2016  2:43:11 PM
Mon, Jul 25, 2016  9:17:09 PM
