/* routines exported for debugfs handling */

#ifndef __IEEE80211_DEBUGFS_NETDEV_H
#define __IEEE80211_DEBUGFS_NETDEV_H

#ifdef CONFIG_MAC80211_DEBUGFS
void ieee80211_debugfs_add_netdev(struct ieee80211_sub_if_data *sdata);
void ieee80211_debugfs_remove_netdev(struct ieee80211_sub_if_data *sdata);
void ieee80211_debugfs_rename_netdev(struct ieee80211_sub_if_data *sdata);
#else
static inline void ieee80211_debugfs_add_netdev(
	struct ieee80211_sub_if_data *sdata)
{}
static inline void ieee80211_debugfs_remove_netdev(
	struct ieee80211_sub_if_data *sdata)
{}
static inline void ieee80211_debugfs_rename_netdev(
	struct ieee80211_sub_if_data *sdata)
{}
#endif

#endif /* __IEEE80211_DEBUGFS_NETDEV_H */
Tue Jul 19 12:33:45 PDT 2016
Fri Jul 22 15:38:30 PDT 2016
Sun, Jul 24, 2016  1:19:18 PM
Mon, Jul 25, 2016  6:27:22 PM
Mon, Jul 25, 2016  7:40:29 PM
Tue, Jul 26, 2016  2:16:16 PM
