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
Tue Jul 19 12:50:56 PDT 2016
Fri Jul 22 16:09:52 PDT 2016
Sun, Jul 24, 2016  5:15:15 PM
Tue, Jul 26, 2016 12:06:38 AM
