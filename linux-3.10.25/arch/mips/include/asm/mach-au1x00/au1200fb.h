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
Tue Jul 19 12:50:54 PDT 2016
Fri Jul 22 16:09:49 PDT 2016
Sun, Jul 24, 2016  5:14:51 PM
Tue, Jul 26, 2016 12:06:12 AM
