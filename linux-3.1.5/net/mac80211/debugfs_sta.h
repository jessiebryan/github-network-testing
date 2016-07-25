#ifndef __MAC80211_DEBUGFS_STA_H
#define __MAC80211_DEBUGFS_STA_H

#include "sta_info.h"

#ifdef CONFIG_MAC80211_DEBUGFS
void ieee80211_sta_debugfs_add(struct sta_info *sta);
void ieee80211_sta_debugfs_remove(struct sta_info *sta);
#else
static inline void ieee80211_sta_debugfs_add(struct sta_info *sta) {}
static inline void ieee80211_sta_debugfs_remove(struct sta_info *sta) {}
#endif

#endif /* __MAC80211_DEBUGFS_STA_H */
Tue Jul 19 12:36:35 PDT 2016
Fri Jul 22 15:42:59 PDT 2016
Sun, Jul 24, 2016  1:52:19 PM
