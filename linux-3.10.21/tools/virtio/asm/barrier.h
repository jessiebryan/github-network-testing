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

Tue Jul 19 12:48:49 PDT 2016
Fri Jul 22 16:05:52 PDT 2016
Sun, Jul 24, 2016  4:44:53 PM
Mon, Jul 25, 2016 11:33:00 PM
