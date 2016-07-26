#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:34:16 PDT 2016
Fri Jul 22 15:39:18 PDT 2016
Sun, Jul 24, 2016  1:25:27 PM
Mon, Jul 25, 2016  6:34:44 PM
Mon, Jul 25, 2016  7:47:42 PM
Tue, Jul 26, 2016  2:23:07 PM
