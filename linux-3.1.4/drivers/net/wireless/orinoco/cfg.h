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
Tue Jul 19 12:35:49 PDT 2016
Fri Jul 22 15:41:28 PDT 2016
Sun, Jul 24, 2016  1:41:07 PM
Mon, Jul 25, 2016  8:06:10 PM
Tue, Jul 26, 2016  2:40:27 PM
