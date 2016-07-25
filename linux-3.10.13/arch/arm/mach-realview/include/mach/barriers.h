/*
 * Barriers redefined for RealView ARM11MPCore platforms with L220 cache
 * controller to work around hardware errata causing the outer_sync()
 * operation to deadlock the system.
 */
#define mb()		dsb()
#define rmb()		dsb()
#define wmb()		mb()
Tue Jul 19 12:43:09 PDT 2016
Fri Jul 22 15:55:15 PDT 2016
Sun, Jul 24, 2016  3:22:31 PM
