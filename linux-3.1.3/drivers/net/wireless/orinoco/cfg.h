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
Tue Jul 19 12:35:15 PDT 2016
Fri Jul 22 15:40:20 PDT 2016
Sun, Jul 24, 2016  1:32:53 PM
Mon, Jul 25, 2016  7:56:26 PM
Tue, Jul 26, 2016  2:31:20 PM
