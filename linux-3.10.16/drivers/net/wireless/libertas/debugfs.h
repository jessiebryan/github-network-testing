#ifndef _LBS_DEBUGFS_H_
#define _LBS_DEBUGFS_H_

void lbs_debugfs_init(void);
void lbs_debugfs_remove(void);

void lbs_debugfs_init_one(struct lbs_private *priv, struct net_device *dev);
void lbs_debugfs_remove_one(struct lbs_private *priv);

#endif
Tue Jul 19 12:45:23 PDT 2016
Fri Jul 22 15:59:25 PDT 2016
Sun, Jul 24, 2016  3:54:48 PM
Mon, Jul 25, 2016 10:37:21 PM
