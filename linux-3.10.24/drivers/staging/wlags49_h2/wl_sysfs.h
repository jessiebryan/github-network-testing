#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:50:32 PDT 2016
Fri Jul 22 16:09:07 PDT 2016
Sun, Jul 24, 2016  5:09:35 PM
Tue, Jul 26, 2016 12:00:24 AM
