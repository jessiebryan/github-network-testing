#ifdef CONFIG_ATAGS_PROC
extern void save_atags(struct tag *tags);
#else
static inline void save_atags(struct tag *tags) { }
#endif
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:29 PDT 2016
Sun, Jul 24, 2016  1:11:38 PM
Mon, Jul 25, 2016  6:18:10 PM
Mon, Jul 25, 2016  7:31:29 PM
