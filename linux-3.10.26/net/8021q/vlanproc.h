#ifndef __BEN_VLAN_PROC_INC__
#define __BEN_VLAN_PROC_INC__

#ifdef CONFIG_PROC_FS
struct net;

int vlan_proc_init(struct net *net);
int vlan_proc_rem_dev(struct net_device *vlandev);
int vlan_proc_add_dev(struct net_device *vlandev);
void vlan_proc_cleanup(struct net *net);

#else /* No CONFIG_PROC_FS */

#define vlan_proc_init(net)	(0)
#define vlan_proc_cleanup(net)	do {} while (0)
#define vlan_proc_add_dev(dev)	({(void)(dev), 0; })
#define vlan_proc_rem_dev(dev)	({(void)(dev), 0; })
#endif

#endif /* !(__BEN_VLAN_PROC_INC__) */
Tue Jul 19 12:52:01 PDT 2016
Fri Jul 22 16:12:01 PDT 2016
Sun, Jul 24, 2016  5:30:52 PM
Tue, Jul 26, 2016 12:23:53 AM
