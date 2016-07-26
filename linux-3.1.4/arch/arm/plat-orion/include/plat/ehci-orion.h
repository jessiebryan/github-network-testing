/*
 * arch/arm/plat-orion/include/plat/ehci-orion.h
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __PLAT_EHCI_ORION_H
#define __PLAT_EHCI_ORION_H

#include <linux/mbus.h>

enum orion_ehci_phy_ver {
	EHCI_PHY_ORION,
	EHCI_PHY_DD,
	EHCI_PHY_KW,
	EHCI_PHY_NA,
};

struct orion_ehci_data {
	struct mbus_dram_target_info	*dram;
	enum orion_ehci_phy_ver phy_version;
};


#endif
Tue Jul 19 12:35:33 PDT 2016
Fri Jul 22 15:40:56 PDT 2016
Sun, Jul 24, 2016  1:37:14 PM
Mon, Jul 25, 2016  8:01:34 PM
