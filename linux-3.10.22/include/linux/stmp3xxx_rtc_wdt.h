/*
 * stmp3xxx_rtc_wdt.h
 *
 * Copyright (C) 2011 Wolfram Sang, Pengutronix e.K.
 *
 * This file is released under the GPLv2.
 */
#ifndef __LINUX_STMP3XXX_RTC_WDT_H
#define __LINUX_STMP3XXX_RTC_WDT_H

struct stmp3xxx_wdt_pdata {
	void (*wdt_set_timeout)(struct device *dev, u32 timeout);
};

#endif /* __LINUX_STMP3XXX_RTC_WDT_H */
Tue Jul 19 12:49:22 PDT 2016
Fri Jul 22 16:06:53 PDT 2016
Sun, Jul 24, 2016  4:52:37 PM
Mon, Jul 25, 2016 11:41:41 PM
