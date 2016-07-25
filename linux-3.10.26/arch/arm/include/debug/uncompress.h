#ifdef CONFIG_DEBUG_UNCOMPRESS
extern void putc(int c);
#else
static inline void putc(int c) {}
#endif
static inline void flush(void) {}
static inline void arch_decomp_setup(void) {}
Tue Jul 19 12:51:26 PDT 2016
Fri Jul 22 16:10:49 PDT 2016
Sun, Jul 24, 2016  5:22:19 PM
