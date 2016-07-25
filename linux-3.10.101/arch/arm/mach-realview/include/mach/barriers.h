/*
 * Barriers redefined for RealView ARM11MPCore platforms with L220 cache
 * controller to work around hardware errata causing the outer_sync()
 * operation to deadlock the system.
 */
#define mb()		dsb()
#define rmb()		dsb()
#define wmb()		mb()
Tue Jul 19 12:40:23 PDT 2016
Fri Jul 22 15:50:19 PDT 2016
Sun, Jul 24, 2016  2:45:39 PM
