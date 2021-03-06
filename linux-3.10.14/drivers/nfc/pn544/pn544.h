/*
 * Copyright (C) 2011 - 2012  Intel Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __LOCAL_PN544_H_
#define __LOCAL_PN544_H_

#include <net/nfc/hci.h>

#define DRIVER_DESC "HCI NFC driver for PN544"

int pn544_hci_probe(void *phy_id, struct nfc_phy_ops *phy_ops, char *llc_name,
		    int phy_headroom, int phy_tailroom, int phy_payload,
		    struct nfc_hci_dev **hdev);
void pn544_hci_remove(struct nfc_hci_dev *hdev);

#endif /* __LOCAL_PN544_H_ */
Tue Jul 19 12:44:08 PDT 2016
Fri Jul 22 15:57:04 PDT 2016
Sun, Jul 24, 2016  3:36:29 PM
Mon, Jul 25, 2016 10:17:00 PM
