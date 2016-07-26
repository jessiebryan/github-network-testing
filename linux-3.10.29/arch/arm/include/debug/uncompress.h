#ifdef CONFIG_DEBUG_UNCOMPRESS
extern void putc(int c);
#else
static inline void putc(int c) {}
#endif
static inline void flush(void) {}
static inline void arch_decomp_setup(void) {}
Tue Jul 19 12:53:22 PDT 2016
Fri Jul 22 16:14:38 PDT 2016
Sun, Jul 24, 2016  5:50:15 PM
Tue, Jul 26, 2016 12:45:15 AM
