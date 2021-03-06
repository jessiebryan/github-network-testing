#ifndef XEN_HVC_CONSOLE_H
#define XEN_HVC_CONSOLE_H

extern struct console xenboot_console;

#ifdef CONFIG_HVC_XEN
void xen_console_resume(void);
void xen_raw_console_write(const char *str);
__attribute__((format(printf, 1, 2)))
void xen_raw_printk(const char *fmt, ...);
#else
static inline void xen_console_resume(void) { }
static inline void xen_raw_console_write(const char *str) { }
static inline __attribute__((format(printf, 1, 2)))
void xen_raw_printk(const char *fmt, ...) { }
#endif

#endif	/* XEN_HVC_CONSOLE_H */
Tue Jul 19 12:36:01 PDT 2016
Fri Jul 22 15:41:50 PDT 2016
Sun, Jul 24, 2016  1:43:58 PM
Mon, Jul 25, 2016  8:09:31 PM
Tue, Jul 26, 2016  2:43:35 PM
