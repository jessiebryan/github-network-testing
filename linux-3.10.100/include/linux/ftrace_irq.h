#ifndef _LINUX_FTRACE_IRQ_H
#define _LINUX_FTRACE_IRQ_H


#ifdef CONFIG_FTRACE_NMI_ENTER
extern void ftrace_nmi_enter(void);
extern void ftrace_nmi_exit(void);
#else
static inline void ftrace_nmi_enter(void) { }
static inline void ftrace_nmi_exit(void) { }
#endif

#endif /* _LINUX_FTRACE_IRQ_H */
Tue Jul 19 12:40:11 PDT 2016
Fri Jul 22 15:49:55 PDT 2016
Sun, Jul 24, 2016  2:42:47 PM
Mon, Jul 25, 2016  9:16:41 PM
