#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:35:18 PDT 2016
Fri Jul 22 15:40:27 PDT 2016
Sun, Jul 24, 2016  1:33:43 PM
Mon, Jul 25, 2016  7:57:25 PM
