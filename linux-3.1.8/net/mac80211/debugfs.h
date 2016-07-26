#ifndef __MAC80211_DEBUGFS_H
#define __MAC80211_DEBUGFS_H

#ifdef CONFIG_MAC80211_DEBUGFS
extern void debugfs_hw_add(struct ieee80211_local *local);
extern int mac80211_open_file_generic(struct inode *inode, struct file *file);
extern int mac80211_format_buffer(char __user *userbuf, size_t count,
				  loff_t *ppos, char *fmt, ...);
#else
static inline void debugfs_hw_add(struct ieee80211_local *local)
{
}
#endif

#endif /* __MAC80211_DEBUGFS_H */
Tue Jul 19 12:37:48 PDT 2016
Fri Jul 22 15:45:12 PDT 2016
Sun, Jul 24, 2016  2:08:48 PM
Mon, Jul 25, 2016  8:38:54 PM
