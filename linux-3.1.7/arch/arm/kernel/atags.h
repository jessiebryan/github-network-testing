#ifdef CONFIG_ATAGS_PROC
extern void save_atags(struct tag *tags);
#else
static inline void save_atags(struct tag *tags) { }
#endif
Tue Jul 19 12:36:37 PDT 2016
Fri Jul 22 15:43:03 PDT 2016
Sun, Jul 24, 2016  1:52:52 PM
