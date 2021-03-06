/* MN10300 Real time clock definitions
 *
 * Copyright (C) 2007 Matsushita Electric Industrial Co., Ltd.
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_RTC_H
#define _ASM_RTC_H

#ifdef CONFIG_MN10300_RTC

#include <linux/init.h>

extern void __init calibrate_clock(void);

#else /* !CONFIG_MN10300_RTC */

static inline void calibrate_clock(void)
{
}

#endif /* !CONFIG_MN10300_RTC */

#include <asm-generic/rtc.h>

#endif /* _ASM_RTC_H */
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:48 PDT 2016
Sun, Jul 24, 2016  1:13:56 PM
Mon, Jul 25, 2016  6:20:55 PM
Mon, Jul 25, 2016  7:34:10 PM
Tue, Jul 26, 2016  2:10:15 PM
