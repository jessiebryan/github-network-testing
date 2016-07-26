#ifndef _LBS_DEBUGFS_H_
#define _LBS_DEBUGFS_H_

void lbs_debugfs_init(void);
void lbs_debugfs_remove(void);

void lbs_debugfs_init_one(struct lbs_private *priv, struct net_device *dev);
void lbs_debugfs_remove_one(struct lbs_private *priv);

#endif
Tue Jul 19 12:44:47 PDT 2016
Fri Jul 22 15:58:14 PDT 2016
Sun, Jul 24, 2016  3:45:35 PM
Mon, Jul 25, 2016 10:27:06 PM
