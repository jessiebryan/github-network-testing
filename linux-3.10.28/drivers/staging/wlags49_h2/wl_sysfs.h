#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:53:08 PDT 2016
Fri Jul 22 16:14:11 PDT 2016
Sun, Jul 24, 2016  5:46:51 PM
Tue, Jul 26, 2016 12:41:28 AM
