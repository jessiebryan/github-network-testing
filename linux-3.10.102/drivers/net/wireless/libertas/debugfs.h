#ifndef _LBS_DEBUGFS_H_
#define _LBS_DEBUGFS_H_

void lbs_debugfs_init(void);
void lbs_debugfs_remove(void);

void lbs_debugfs_init_one(struct lbs_private *priv, struct net_device *dev);
void lbs_debugfs_remove_one(struct lbs_private *priv);

#endif
Tue Jul 19 12:41:22 PDT 2016
Fri Jul 22 15:52:16 PDT 2016
Sun, Jul 24, 2016  2:59:28 PM
Mon, Jul 25, 2016  9:35:35 PM
