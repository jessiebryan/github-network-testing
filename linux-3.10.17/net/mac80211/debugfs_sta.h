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
Tue Jul 19 12:46:13 PDT 2016
Fri Jul 22 16:01:01 PDT 2016
Sun, Jul 24, 2016  4:07:33 PM
Mon, Jul 25, 2016 10:51:31 PM
