#ifndef __CFG80211_DEBUGFS_H
#define __CFG80211_DEBUGFS_H

#ifdef CONFIG_CFG80211_DEBUGFS
void cfg80211_debugfs_rdev_add(struct cfg80211_registered_device *rdev);
#else
static inline
void cfg80211_debugfs_rdev_add(struct cfg80211_registered_device *rdev) {}
#endif

#endif /* __CFG80211_DEBUGFS_H */
Tue Jul 19 12:40:58 PDT 2016
Fri Jul 22 15:51:25 PDT 2016
Sun, Jul 24, 2016  2:53:49 PM
Mon, Jul 25, 2016  9:29:11 PM
