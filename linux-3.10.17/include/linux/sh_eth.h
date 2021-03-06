#ifndef __ASM_SH_ETH_H__
#define __ASM_SH_ETH_H__

#include <linux/phy.h>

enum {EDMAC_LITTLE_ENDIAN, EDMAC_BIG_ENDIAN};
enum {
	SH_ETH_REG_GIGABIT,
	SH_ETH_REG_FAST_RCAR,
	SH_ETH_REG_FAST_SH4,
	SH_ETH_REG_FAST_SH3_SH2
};

struct sh_eth_plat_data {
	int phy;
	int edmac_endian;
	int register_type;
	phy_interface_t phy_interface;
	void (*set_mdio_gate)(void *addr);

	unsigned char mac_addr[6];
	unsigned no_ether_link:1;
	unsigned ether_link_active_low:1;
	unsigned needs_init:1;
};

#endif
Tue Jul 19 12:46:09 PDT 2016
Fri Jul 22 16:00:53 PDT 2016
Sun, Jul 24, 2016  4:06:26 PM
Mon, Jul 25, 2016 10:50:17 PM
