/*
 * platform data for au1200fb driver.
 */

#ifndef _AU1200FB_PLAT_H_
#define _AU1200FB_PLAT_H_

struct au1200fb_platdata {
	int (*panel_index)(void);
	int (*panel_init)(void);
	int (*panel_shutdown)(void);
};

#endif
Tue Jul 19 12:53:30 PDT 2016
Fri Jul 22 16:14:53 PDT 2016
Sun, Jul 24, 2016  5:52:07 PM
Tue, Jul 26, 2016 12:47:20 AM
