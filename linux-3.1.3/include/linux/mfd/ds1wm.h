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
Tue Jul 19 12:35:23 PDT 2016
Fri Jul 22 15:40:35 PDT 2016
Sun, Jul 24, 2016  1:34:48 PM
Mon, Jul 25, 2016  7:58:41 PM
Tue, Jul 26, 2016  2:33:26 PM
