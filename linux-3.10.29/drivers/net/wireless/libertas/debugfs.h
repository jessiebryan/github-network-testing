#ifndef _LBS_DEBUGFS_H_
#define _LBS_DEBUGFS_H_

void lbs_debugfs_init(void);
void lbs_debugfs_remove(void);

void lbs_debugfs_init_one(struct lbs_private *priv, struct net_device *dev);
void lbs_debugfs_remove_one(struct lbs_private *priv);

#endif
Tue Jul 19 12:53:44 PDT 2016
Fri Jul 22 16:15:19 PDT 2016
Sun, Jul 24, 2016  5:55:18 PM
Tue, Jul 26, 2016 12:50:51 AM
