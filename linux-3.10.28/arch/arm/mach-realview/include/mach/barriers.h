/*
 * Barriers redefined for RealView ARM11MPCore platforms with L220 cache
 * controller to work around hardware errata causing the outer_sync()
 * operation to deadlock the system.
 */
#define mb()		dsb()
#define rmb()		dsb()
#define wmb()		mb()
Tue Jul 19 12:52:45 PDT 2016
Fri Jul 22 16:13:26 PDT 2016
Sun, Jul 24, 2016  5:41:19 PM
Tue, Jul 26, 2016 12:35:24 AM
