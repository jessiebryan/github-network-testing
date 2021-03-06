/******************************************************************************
 *
 * Copyright(c) 2009-2012  Realtek Corporation.
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

#ifndef __RTL92CE_LED_H__
#define __RTL92CE_LED_H__

void rtl8723ae_init_sw_leds(struct ieee80211_hw *hw);
void rtl8723ae_sw_led_on(struct ieee80211_hw *hw, struct rtl_led *pled);
void rtl8723ae_sw_led_off(struct ieee80211_hw *hw, struct rtl_led *pled);
void rtl8723ae_led_control(struct ieee80211_hw *hw,
			   enum led_ctl_mode ledaction);

#endif
Tue Jul 19 12:53:05 PDT 2016
Fri Jul 22 16:14:05 PDT 2016
Sun, Jul 24, 2016  5:46:06 PM
Tue, Jul 26, 2016 12:40:39 AM
