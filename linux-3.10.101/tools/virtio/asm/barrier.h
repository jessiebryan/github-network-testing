#if defined(__i386__) || defined(__x86_64__)
#define barrier() asm volatile("" ::: "memory")
#define mb() __sync_synchronize()

#define smp_mb()	mb()
# define smp_rmb()	barrier()
# define smp_wmb()	barrier()
/* Weak barriers should be used. If not - it's a bug */
# define rmb()	abort()
# define wmb()	abort()
#else
#error Please fill in barrier macros
#endif

Tue Jul 19 12:41:00 PDT 2016
Fri Jul 22 15:51:29 PDT 2016
Sun, Jul 24, 2016  2:54:12 PM
Mon, Jul 25, 2016  9:29:36 PM
