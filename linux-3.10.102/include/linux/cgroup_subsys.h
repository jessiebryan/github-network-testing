/* Add subsystem definitions of the form SUBSYS(<name>) in this
 * file. Surround each one by a line of comment markers so that
 * patches don't collide
 */

/* */

/* */

#if IS_SUBSYS_ENABLED(CONFIG_CPUSETS)
SUBSYS(cpuset)
#endif

/* */

#if IS_SUBSYS_ENABLED(CONFIG_CGROUP_DEBUG)
SUBSYS(debug)
#endif

/* */

#if IS_SUBSYS_ENABLED(CONFIG_CGROUP_SCHED)
SUBSYS(cpu_cgroup)
#endif

/* */

#if IS_SUBSYS_ENABLED(CONFIG_CGROUP_CPUACCT)
SUBSYS(cpuacct)
#endif

/* */

#if IS_SUBSYS_ENABLED(CONFIG_MEMCG)
SUBSYS(mem_cgroup)
#endif

/* */

#if IS_SUBSYS_ENABLED(CONFIG_CGROUP_DEVICE)
SUBSYS(devices)
#endif

/* */

#if IS_SUBSYS_ENABLED(CONFIG_CGROUP_FREEZER)
SUBSYS(freezer)
#endif

/* */

#if IS_SUBSYS_ENABLED(CONFIG_NET_CLS_CGROUP)
SUBSYS(net_cls)
#endif

/* */

#if IS_SUBSYS_ENABLED(CONFIG_BLK_CGROUP)
SUBSYS(blkio)
#endif

/* */

#if IS_SUBSYS_ENABLED(CONFIG_CGROUP_PERF)
SUBSYS(perf)
#endif

/* */

#if IS_SUBSYS_ENABLED(CONFIG_NETPRIO_CGROUP)
SUBSYS(net_prio)
#endif

/* */

#if IS_SUBSYS_ENABLED(CONFIG_CGROUP_HUGETLB)
SUBSYS(hugetlb)
#endif

/* */

#ifdef CONFIG_CGROUP_BCACHE
SUBSYS(bcache)
#endif

/* */
Tue Jul 19 12:41:28 PDT 2016
Fri Jul 22 15:52:30 PDT 2016
Sun, Jul 24, 2016  3:01:05 PM
Mon, Jul 25, 2016  9:37:24 PM
