/* MFD cell driver data for the DS1WM driver */

struct ds1wm_driver_data {
	int active_high;
	int clock_rate;
	/* in milliseconds, the amount of time to */
	/* sleep following a reset pulse. Zero    */
	/* should work if your bus devices recover*/
	/* time respects the 1-wire spec since the*/
	/* ds1wm implements the precise timings of*/
	/* a reset pulse/presence detect sequence.*/
	unsigned int reset_recover_delay;
};
Tue Jul 19 12:51:55 PDT 2016
Fri Jul 22 16:11:49 PDT 2016
Sun, Jul 24, 2016  5:29:21 PM
Tue, Jul 26, 2016 12:22:12 AM
