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
Tue Jul 19 12:49:57 PDT 2016
Fri Jul 22 16:08:01 PDT 2016
Sun, Jul 24, 2016  5:01:09 PM
Mon, Jul 25, 2016 11:51:08 PM
