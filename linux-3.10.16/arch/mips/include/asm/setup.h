#ifndef _MIPS_SETUP_H
#define _MIPS_SETUP_H

#include <uapi/asm/setup.h>

extern void setup_early_printk(void);

extern void set_handler(unsigned long offset, void *addr, unsigned long len);
extern void set_uncached_handler(unsigned long offset, void *addr, unsigned long len);

typedef void (*vi_handler_t)(void);
extern void *set_vi_handler(int n, vi_handler_t addr);

extern void *set_except_vector(int n, void *addr);
extern unsigned long ebase;
extern void per_cpu_trap_init(bool);
extern void cpu_cache_init(void);

#endif /* __SETUP_H */
Tue Jul 19 12:45:12 PDT 2016
Fri Jul 22 15:59:02 PDT 2016
Sun, Jul 24, 2016  3:51:52 PM
Mon, Jul 25, 2016 10:34:06 PM
