/*
 * Barriers redefined for RealView ARM11MPCore platforms with L220 cache
 * controller to work around hardware errata causing the outer_sync()
 * operation to deadlock the system.
 */
#define mb()		dsb()
#define rmb()		dsb()
#define wmb()		mb()
Tue Jul 19 12:48:51 PDT 2016
Fri Jul 22 16:05:57 PDT 2016
Sun, Jul 24, 2016  4:45:33 PM
Mon, Jul 25, 2016 11:33:47 PM
