/*
 * Barriers redefined for RealView ARM11MPCore platforms with L220 cache
 * controller to work around hardware errata causing the outer_sync()
 * operation to deadlock the system.
 */
#define mb()		dsb()
#define rmb()		dsb()
#define wmb()		mb()
Tue Jul 19 12:53:24 PDT 2016
Fri Jul 22 16:14:41 PDT 2016
Sun, Jul 24, 2016  5:50:39 PM
