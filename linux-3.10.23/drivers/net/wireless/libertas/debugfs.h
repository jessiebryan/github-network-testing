#ifndef _LBS_DEBUGFS_H_
#define _LBS_DEBUGFS_H_

void lbs_debugfs_init(void);
void lbs_debugfs_remove(void);

void lbs_debugfs_init_one(struct lbs_private *priv, struct net_device *dev);
void lbs_debugfs_remove_one(struct lbs_private *priv);

#endif
Tue Jul 19 12:49:50 PDT 2016
Fri Jul 22 16:07:47 PDT 2016
Sun, Jul 24, 2016  4:59:24 PM
Mon, Jul 25, 2016 11:49:13 PM
