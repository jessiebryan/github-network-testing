#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:33:35 PDT 2016
Fri Jul 22 15:38:14 PDT 2016
Sun, Jul 24, 2016  1:17:12 PM
Mon, Jul 25, 2016  6:24:50 PM
Mon, Jul 25, 2016  7:38:00 PM
Tue, Jul 26, 2016  2:13:54 PM
