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
Tue Jul 19 12:47:03 PDT 2016
Fri Jul 22 16:02:34 PDT 2016
Sun, Jul 24, 2016  4:19:17 PM
Mon, Jul 25, 2016 11:04:36 PM
