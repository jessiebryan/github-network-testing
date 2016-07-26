#ifdef CONFIG_SYSFS
extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
#else
static inline void register_wlags_sysfs(struct net_device *net) { }
static inline void unregister_wlags_sysfs(struct net_device *net) { }
#endif
Tue Jul 19 12:37:00 PDT 2016
Fri Jul 22 15:43:47 PDT 2016
Sun, Jul 24, 2016  1:58:27 PM
Mon, Jul 25, 2016  8:26:38 PM
