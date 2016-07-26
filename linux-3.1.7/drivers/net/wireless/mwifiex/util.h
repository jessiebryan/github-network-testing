/*
 * Marvell Wireless LAN device driver: utility functions
 *
 * Copyright (C) 2011, Marvell International Ltd.
 *
 * This software file (the "File") is distributed by Marvell International
 * Ltd. under the terms of the GNU General Public License Version 2, June 1991
 * (the "License").  You may use, redistribute and/or modify this File in
 * accordance with the terms and conditions of the License, a copy of which
 * is available by writing to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA or on the
 * worldwide web at http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt.
 *
 * THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND, AND THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE
 * ARE EXPRESSLY DISCLAIMED.  The License provides additional details about
 * this warranty disclaimer.
 */

#ifndef _MWIFIEX_UTIL_H_
#define _MWIFIEX_UTIL_H_

static inline struct mwifiex_rxinfo *MWIFIEX_SKB_RXCB(struct sk_buff *skb)
{
	return (struct mwifiex_rxinfo *)skb->cb;
}

static inline struct mwifiex_txinfo *MWIFIEX_SKB_TXCB(struct sk_buff *skb)
{
	return (struct mwifiex_txinfo *)skb->cb;
}
#endif /* !_MWIFIEX_UTIL_H_ */
Tue Jul 19 12:36:57 PDT 2016
Fri Jul 22 15:43:41 PDT 2016
Sun, Jul 24, 2016  1:57:37 PM
Mon, Jul 25, 2016  8:25:38 PM
