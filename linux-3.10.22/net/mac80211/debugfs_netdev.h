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
Tue Jul 19 12:49:26 PDT 2016
Fri Jul 22 16:07:02 PDT 2016
Sun, Jul 24, 2016  4:53:41 PM
Mon, Jul 25, 2016 11:42:51 PM
