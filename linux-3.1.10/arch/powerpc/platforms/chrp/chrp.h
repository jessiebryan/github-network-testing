/*
 * Declarations of CHRP platform-specific things.
 */

extern void chrp_nvram_init(void);
extern void chrp_get_rtc_time(struct rtc_time *);
extern int chrp_set_rtc_time(struct rtc_time *);
extern long chrp_time_init(void);

extern void chrp_find_bridges(void);
extern void chrp_event_scan(unsigned long);
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:19 PM
Mon, Jul 25, 2016  6:21:23 PM
Mon, Jul 25, 2016  7:34:37 PM
Tue, Jul 26, 2016  2:10:40 PM
