#ifndef __NET_SYSFS_H__
#define __NET_SYSFS_H__

int netdev_kobject_init(void);
int netdev_register_kobject(struct net_device *);
void netdev_unregister_kobject(struct net_device *);
int net_rx_queue_update_kobjects(struct net_device *, int old_num, int new_num);
int netdev_queue_update_kobjects(struct net_device *net,
				 int old_num, int new_num);

#endif
Tue Jul 19 12:52:01 PDT 2016
Fri Jul 22 16:12:01 PDT 2016
Sun, Jul 24, 2016  5:30:54 PM
Tue, Jul 26, 2016 12:23:55 AM
