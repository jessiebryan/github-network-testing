#ifndef __CFG80211_DEBUGFS_H
#define __CFG80211_DEBUGFS_H

#ifdef CONFIG_CFG80211_DEBUGFS
void cfg80211_debugfs_rdev_add(struct cfg80211_registered_device *rdev);
#else
static inline
void cfg80211_debugfs_rdev_add(struct cfg80211_registered_device *rdev) {}
#endif

#endif /* __CFG80211_DEBUGFS_H */
Tue Jul 19 12:45:01 PDT 2016
Fri Jul 22 15:58:41 PDT 2016
Sun, Jul 24, 2016  3:49:09 PM
Mon, Jul 25, 2016 10:31:05 PM
