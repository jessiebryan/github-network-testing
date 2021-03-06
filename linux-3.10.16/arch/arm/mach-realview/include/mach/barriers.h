/*
 * Barriers redefined for RealView ARM11MPCore platforms with L220 cache
 * controller to work around hardware errata causing the outer_sync()
 * operation to deadlock the system.
 */
#define mb()		dsb()
#define rmb()		dsb()
#define wmb()		mb()
Tue Jul 19 12:45:05 PDT 2016
Fri Jul 22 15:58:49 PDT 2016
Sun, Jul 24, 2016  3:50:11 PM
Mon, Jul 25, 2016 10:32:14 PM
