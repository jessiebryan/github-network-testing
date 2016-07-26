#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:49:15 PDT 2016
Fri Jul 22 16:06:41 PDT 2016
Sun, Jul 24, 2016  4:50:59 PM
Mon, Jul 25, 2016 11:39:53 PM
