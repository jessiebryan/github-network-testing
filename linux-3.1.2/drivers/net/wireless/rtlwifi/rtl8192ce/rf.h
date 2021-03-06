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

#ifndef __RTL92C_RF_H__
#define __RTL92C_RF_H__

#define RF6052_MAX_TX_PWR		0x3F
#define RF6052_MAX_REG			0x3F
#define RF6052_MAX_PATH			2

extern void rtl92ce_phy_rf6052_set_bandwidth(struct ieee80211_hw *hw,
					     u8 bandwidth);
extern void rtl92ce_phy_rf6052_set_cck_txpower(struct ieee80211_hw *hw,
					       u8 *ppowerlevel);
extern void rtl92ce_phy_rf6052_set_ofdm_txpower(struct ieee80211_hw *hw,
						u8 *ppowerlevel, u8 channel);
extern bool rtl92ce_phy_rf6052_config(struct ieee80211_hw *hw);
#endif
Tue Jul 19 12:34:09 PDT 2016
Fri Jul 22 15:39:12 PDT 2016
Sun, Jul 24, 2016  1:24:40 PM
Mon, Jul 25, 2016  6:33:48 PM
Mon, Jul 25, 2016  7:46:47 PM
Tue, Jul 26, 2016  2:22:15 PM
