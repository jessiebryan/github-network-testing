/* Copyright (c) 2010-2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __RTC_PM8XXX_H__
#define __RTC_PM8XXX_H__

#define PM8XXX_RTC_DEV_NAME     "rtc-pm8xxx"
/**
 * struct pm8xxx_rtc_pdata - RTC driver platform data
 * @rtc_write_enable: variable stating RTC write capability
 */
struct pm8xxx_rtc_platform_data {
	bool rtc_write_enable;
};

#endif /* __RTC_PM8XXX_H__ */
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:43 PDT 2016
Sun, Jul 24, 2016  1:43:03 PM
Mon, Jul 25, 2016  8:08:26 PM
Tue, Jul 26, 2016  2:42:34 PM
