#ifdef CONFIG_DEBUG_UNCOMPRESS
extern void putc(int c);
#else
static inline void putc(int c) {}
#endif
static inline void flush(void) {}
static inline void arch_decomp_setup(void) {}
Tue Jul 19 12:48:50 PDT 2016
Fri Jul 22 16:05:54 PDT 2016
Sun, Jul 24, 2016  4:45:10 PM
Mon, Jul 25, 2016 11:33:21 PM
