/*
 * Intel Wireless Multicomm 3200 WiFi driver
 *
 * Copyright (C) 2009 Intel Corporation <ilw@linux.intel.com>
 * Samuel Ortiz <samuel.ortiz@intel.com>
 * Zhu Yi <yi.zhu@intel.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef __IWM_CFG80211_H__
#define __IWM_CFG80211_H__

int iwm_cfg80211_inform_bss(struct iwm_priv *iwm);
struct wireless_dev *iwm_wdev_alloc(int sizeof_bus, struct device *dev);
void iwm_wdev_free(struct iwm_priv *iwm);

#endif
Tue Jul 19 12:33:32 PDT 2016
Fri Jul 22 15:38:07 PDT 2016
Sun, Jul 24, 2016  1:16:20 PM
Mon, Jul 25, 2016  6:23:48 PM
Mon, Jul 25, 2016  7:37:00 PM
Tue, Jul 26, 2016  2:12:55 PM
