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
Tue Jul 19 12:51:08 PDT 2016
Fri Jul 22 16:10:16 PDT 2016
Sun, Jul 24, 2016  5:18:04 PM
Tue, Jul 26, 2016 12:09:47 AM
