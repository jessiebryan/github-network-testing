#ifdef CONFIG_ATAGS_PROC
extern void save_atags(struct tag *tags);
#else
static inline void save_atags(struct tag *tags) { }
#endif
Tue Jul 19 12:33:48 PDT 2016
Fri Jul 22 15:38:34 PDT 2016
Sun, Jul 24, 2016  1:19:52 PM
Mon, Jul 25, 2016  6:28:02 PM
Mon, Jul 25, 2016  7:41:09 PM
