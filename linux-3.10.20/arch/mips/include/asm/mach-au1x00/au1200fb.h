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
Tue Jul 19 12:47:41 PDT 2016
Fri Jul 22 16:03:45 PDT 2016
Sun, Jul 24, 2016  4:28:32 PM
Mon, Jul 25, 2016 11:14:50 PM
