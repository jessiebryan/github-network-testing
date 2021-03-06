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
#ifndef __REALTEK_PCI92SE_LED_H__
#define __REALTEK_PCI92SE_LED_H__

void rtl92se_init_sw_leds(struct ieee80211_hw *hw);
void rtl92se_sw_led_on(struct ieee80211_hw *hw,	struct rtl_led *pled);
void rtl92se_sw_led_off(struct ieee80211_hw *hw, struct rtl_led *pled);
void rtl92se_led_control(struct ieee80211_hw *hw, enum led_ctl_mode ledaction);

#endif
Tue Jul 19 12:35:49 PDT 2016
Fri Jul 22 15:41:28 PDT 2016
Sun, Jul 24, 2016  1:41:11 PM
Mon, Jul 25, 2016  8:06:14 PM
Tue, Jul 26, 2016  2:40:31 PM
