/*
 * Barriers redefined for RealView ARM11MPCore platforms with L220 cache
 * controller to work around hardware errata causing the outer_sync()
 * operation to deadlock the system.
 */
#define mb()		dsb()
#define rmb()		dsb()
#define wmb()		mb()
Tue Jul 19 12:37:14 PDT 2016
Fri Jul 22 15:44:14 PDT 2016
Sun, Jul 24, 2016  2:01:37 PM
Mon, Jul 25, 2016  8:30:23 PM
