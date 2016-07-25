#ifndef __MAC80211_DEBUGFS_H
#define __MAC80211_DEBUGFS_H

#ifdef CONFIG_MAC80211_DEBUGFS
void debugfs_hw_add(struct ieee80211_local *local);
int __printf(4, 5) mac80211_format_buffer(char __user *userbuf, size_t count,
					  loff_t *ppos, char *fmt, ...);
#else
static inline void debugfs_hw_add(struct ieee80211_local *local)
{
}
#endif

#endif /* __MAC80211_DEBUGFS_H */
Tue Jul 19 12:44:22 PDT 2016
Fri Jul 22 15:57:30 PDT 2016
Sun, Jul 24, 2016  3:39:54 PM
