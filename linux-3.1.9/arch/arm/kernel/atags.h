#ifdef CONFIG_ATAGS_PROC
extern void save_atags(struct tag *tags);
#else
static inline void save_atags(struct tag *tags) { }
#endif
Tue Jul 19 12:37:50 PDT 2016
