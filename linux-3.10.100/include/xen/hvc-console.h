#ifndef XEN_HVC_CONSOLE_H
#define XEN_HVC_CONSOLE_H

extern struct console xenboot_console;

#ifdef CONFIG_HVC_XEN
void xen_console_resume(void);
void xen_raw_console_write(const char *str);
__printf(1, 2)
void xen_raw_printk(const char *fmt, ...);
#else
static inline void xen_console_resume(void) { }
static inline void xen_raw_console_write(const char *str) { }
static inline __printf(1, 2)
void xen_raw_printk(const char *fmt, ...) { }
#endif

#endif	/* XEN_HVC_CONSOLE_H */
Tue Jul 19 12:40:18 PDT 2016
Fri Jul 22 15:50:08 PDT 2016
Sun, Jul 24, 2016  2:44:27 PM
Mon, Jul 25, 2016  9:18:35 PM
