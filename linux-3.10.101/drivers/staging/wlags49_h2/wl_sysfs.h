#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:40:47 PDT 2016
Fri Jul 22 15:51:03 PDT 2016
Sun, Jul 24, 2016  2:51:06 PM
Mon, Jul 25, 2016  9:26:07 PM
