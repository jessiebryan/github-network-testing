/*
 * Declarations of CHRP platform-specific things.
 */

extern void chrp_nvram_init(void);
extern void chrp_get_rtc_time(struct rtc_time *);
extern int chrp_set_rtc_time(struct rtc_time *);
extern long chrp_time_init(void);

extern void chrp_find_bridges(void);
extern void chrp_event_scan(unsigned long);
Tue Jul 19 12:47:45 PDT 2016
Fri Jul 22 16:03:51 PDT 2016
Sun, Jul 24, 2016  4:29:19 PM
Mon, Jul 25, 2016 11:15:42 PM
