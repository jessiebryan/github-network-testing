/*
 * Declarations of CHRP platform-specific things.
 */

extern void chrp_nvram_init(void);
extern void chrp_get_rtc_time(struct rtc_time *);
extern int chrp_set_rtc_time(struct rtc_time *);
extern long chrp_time_init(void);

extern void chrp_find_bridges(void);
extern void chrp_event_scan(unsigned long);
Tue Jul 19 12:44:36 PDT 2016
Fri Jul 22 15:57:56 PDT 2016
Sun, Jul 24, 2016  3:43:12 PM
Mon, Jul 25, 2016 10:24:27 PM
