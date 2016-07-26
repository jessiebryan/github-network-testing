#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:36:27 PDT 2016
Fri Jul 22 15:42:41 PDT 2016
Sun, Jul 24, 2016  1:50:12 PM
Mon, Jul 25, 2016  8:16:51 PM
