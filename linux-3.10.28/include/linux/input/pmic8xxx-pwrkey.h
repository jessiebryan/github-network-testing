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

#ifndef __PMIC8XXX_PWRKEY_H__
#define __PMIC8XXX_PWRKEY_H__

#define PM8XXX_PWRKEY_DEV_NAME "pm8xxx-pwrkey"

/**
 * struct pm8xxx_pwrkey_platform_data - platform data for pwrkey driver
 * @pull up:  power on register control for pull up/down configuration
 * @kpd_trigger_delay_us: time delay for power key state change interrupt
 *                  trigger.
 * @wakeup: configure power key as wakeup source
 */
struct pm8xxx_pwrkey_platform_data  {
	bool pull_up;
	u32  kpd_trigger_delay_us;
	u32  wakeup;
};

#endif /* __PMIC8XXX_PWRKEY_H__ */
Tue Jul 19 12:53:12 PDT 2016
Fri Jul 22 16:14:19 PDT 2016
Sun, Jul 24, 2016  5:47:52 PM
