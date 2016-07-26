#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:35:53 PDT 2016
Fri Jul 22 15:41:34 PDT 2016
Sun, Jul 24, 2016  1:41:57 PM
Mon, Jul 25, 2016  8:07:08 PM
Tue, Jul 26, 2016  2:41:22 PM
