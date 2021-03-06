/* Driver for Realtek PCI-Express card reader
 * Header file
 *
 * Copyright(c) 2009 Realtek Semiconductor Corp. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author:
 *   wwang (wei_wang@realsil.com.cn)
 *   No. 450, Shenhu Road, Suzhou Industry Park, Suzhou, China
 */

#ifndef __RTSX_SYS_H
#define __RTSX_SYS_H

#include "rtsx.h"
#include "rtsx_chip.h"
#include "rtsx_card.h"

typedef dma_addr_t ULONG_PTR;

static inline void rtsx_exclusive_enter_ss(struct rtsx_chip *chip)
{
	struct rtsx_dev *dev = chip->rtsx;

	spin_lock(&(dev->reg_lock));
	rtsx_enter_ss(chip);
	spin_unlock(&(dev->reg_lock));
}

static inline void rtsx_reset_detected_cards(struct rtsx_chip *chip, int flag)
{
	rtsx_reset_cards(chip);
}

#define RTSX_MSG_IN_INT(x)

#endif  /* __RTSX_SYS_H */

Tue Jul 19 12:35:52 PDT 2016
Fri Jul 22 15:41:33 PDT 2016
Sun, Jul 24, 2016  1:41:48 PM
Mon, Jul 25, 2016  8:06:57 PM
Tue, Jul 26, 2016  2:41:12 PM
