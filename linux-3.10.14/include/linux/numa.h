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
Tue Jul 19 12:44:16 PDT 2016
Fri Jul 22 15:57:20 PDT 2016
Sun, Jul 24, 2016  3:38:29 PM
Mon, Jul 25, 2016 10:19:12 PM
