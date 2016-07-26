/* cfg80211 support.
 *
 * See copyright notice in main.c
 */
#ifndef ORINOCO_CFG_H
#define ORINOCO_CFG_H

#include <net/cfg80211.h>

extern const struct cfg80211_ops orinoco_cfg_ops;

void orinoco_wiphy_init(struct wiphy *wiphy);
int orinoco_wiphy_register(struct wiphy *wiphy);

#endif /* ORINOCO_CFG_H */
Tue Jul 19 12:49:50 PDT 2016
Fri Jul 22 16:07:47 PDT 2016
Sun, Jul 24, 2016  4:59:25 PM
Mon, Jul 25, 2016 11:49:14 PM
