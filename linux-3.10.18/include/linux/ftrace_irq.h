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
Tue Jul 19 12:46:45 PDT 2016
Fri Jul 22 16:02:00 PDT 2016
Sun, Jul 24, 2016  4:14:58 PM
Mon, Jul 25, 2016 10:59:48 PM
