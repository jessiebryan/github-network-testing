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

#ifndef __RTL92CU_RF_H__
#define __RTL92CU_RF_H__

#define RF6052_MAX_TX_PWR		0x3F
#define RF6052_MAX_REG			0x3F
#define RF6052_MAX_PATH			2

extern void rtl92cu_phy_rf6052_set_bandwidth(struct ieee80211_hw *hw,
					    u8 bandwidth);
extern void rtl92c_phy_rf6052_set_cck_txpower(struct ieee80211_hw *hw,
					      u8 *ppowerlevel);
extern void rtl92c_phy_rf6052_set_ofdm_txpower(struct ieee80211_hw *hw,
					       u8 *ppowerlevel, u8 channel);
bool rtl92cu_phy_rf6052_config(struct ieee80211_hw *hw);
bool rtl92cu_phy_config_rf_with_headerfile(struct ieee80211_hw *hw,
					  enum radio_path rfpath);
void rtl92cu_phy_rf6052_set_cck_txpower(struct ieee80211_hw *hw,
					u8 *ppowerlevel);
void rtl92cu_phy_rf6052_set_ofdm_txpower(struct ieee80211_hw *hw,
					 u8 *ppowerlevel, u8 channel);

#endif
Tue Jul 19 12:43:29 PDT 2016
Fri Jul 22 15:55:52 PDT 2016
Sun, Jul 24, 2016  3:27:12 PM
Mon, Jul 25, 2016 10:06:39 PM
