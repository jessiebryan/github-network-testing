#ifndef __AU1X00_ETH_DATA_H
#define __AU1X00_ETH_DATA_H

/* Platform specific PHY configuration passed to the MAC driver */
struct au1000_eth_platform_data {
	int phy_static_config;
	int phy_search_highest_addr;
	int phy1_search_mac0;
	int phy_addr;
	int phy_busid;
	int phy_irq;
	char mac[6];
};

void __init au1xxx_override_eth_cfg(unsigned port,
			struct au1000_eth_platform_data *eth_data);

#endif /* __AU1X00_ETH_DATA_H */
Tue Jul 19 12:36:11 PDT 2016
Fri Jul 22 15:42:11 PDT 2016
Sun, Jul 24, 2016  1:46:36 PM
Mon, Jul 25, 2016  8:12:38 PM
Tue, Jul 26, 2016  2:46:30 PM
