/******************************************************************************
 *
 * Copyright(c) 2009-2010  Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 * The full GNU General Public License is included in this distribution in the
 * file called LICENSE.
 *
 * Contact Information:
 * wlanfae <wlanfae@realtek.com>
 * Realtek Corporation, No. 2, Innovation Road II, Hsinchu Science Park,
 * Hsinchu 300, Taiwan.
 *
 * Larry Finger <Larry.Finger@lwfinger.net>
 *
 *****************************************************************************/

#ifndef __REALTEK_RTL_PCI_PS_H__
#define __REALTEK_RTL_PCI_PS_H__

#define MAX_SW_LPS_SLEEP_INTV	5

bool rtl_ps_set_rf_state(struct ieee80211_hw *hw,
			 enum rf_pwrstate state_toset, u32 changesource);
bool rtl_ps_enable_nic(struct ieee80211_hw *hw);
bool rtl_ps_disable_nic(struct ieee80211_hw *hw);
void rtl_ips_nic_off(struct ieee80211_hw *hw);
void rtl_ips_nic_on(struct ieee80211_hw *hw);
void rtl_ips_nic_off_wq_callback(void *data);
void rtl_lps_enter(struct ieee80211_hw *hw);
void rtl_lps_leave(struct ieee80211_hw *hw);

void rtl_swlps_beacon(struct ieee80211_hw *hw, void *data, unsigned int len);
void rtl_swlps_wq_callback(void *data);
void rtl_swlps_rfon_wq_callback(void *data);
void rtl_swlps_rf_awake(struct ieee80211_hw *hw);
void rtl_swlps_rf_sleep(struct ieee80211_hw *hw);

#endif
Tue Jul 19 12:33:32 PDT 2016
Fri Jul 22 15:38:07 PDT 2016
Sun, Jul 24, 2016  1:16:24 PM
Mon, Jul 25, 2016  6:23:53 PM
Mon, Jul 25, 2016  7:37:04 PM
Tue, Jul 26, 2016  2:13:00 PM
