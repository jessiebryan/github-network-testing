#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:44:11 PDT 2016
Fri Jul 22 15:57:10 PDT 2016
Sun, Jul 24, 2016  3:37:11 PM
Mon, Jul 25, 2016 10:17:46 PM
