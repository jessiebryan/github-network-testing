#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:38:51 PDT 2016
Fri Jul 22 15:47:14 PDT 2016
Sun, Jul 24, 2016  2:23:29 PM
Mon, Jul 25, 2016  8:55:13 PM
