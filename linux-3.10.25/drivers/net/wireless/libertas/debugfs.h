#ifndef _LBS_DEBUGFS_H_
#define _LBS_DEBUGFS_H_

void lbs_debugfs_init(void);
void lbs_debugfs_remove(void);

void lbs_debugfs_init_one(struct lbs_private *priv, struct net_device *dev);
void lbs_debugfs_remove_one(struct lbs_private *priv);

#endif
Tue Jul 19 12:51:08 PDT 2016
Fri Jul 22 16:10:16 PDT 2016
Sun, Jul 24, 2016  5:18:03 PM
Tue, Jul 26, 2016 12:09:45 AM
