#ifndef __PHY_FIXED_H
#define __PHY_FIXED_H

struct fixed_phy_status {
	int link;
	int speed;
	int duplex;
	int pause;
	int asym_pause;
};

#ifdef CONFIG_FIXED_PHY
extern int fixed_phy_add(unsigned int irq, int phy_id,
			 struct fixed_phy_status *status);
#else
static inline int fixed_phy_add(unsigned int irq, int phy_id,
				struct fixed_phy_status *status)
{
	return -ENODEV;
}
#endif /* CONFIG_FIXED_PHY */

/*
 * This function issued only by fixed_phy-aware drivers, no need
 * protect it with #ifdef
 */
extern int fixed_phy_set_link_update(struct phy_device *phydev,
			int (*link_update)(struct net_device *,
					   struct fixed_phy_status *));

#endif /* __PHY_FIXED_H */
Tue Jul 19 12:48:03 PDT 2016
Fri Jul 22 16:04:26 PDT 2016
Sun, Jul 24, 2016  4:33:53 PM
Mon, Jul 25, 2016 11:20:47 PM
