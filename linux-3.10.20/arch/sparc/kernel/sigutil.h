#ifndef _SIGUTIL_H
#define _SIGUTIL_H

int save_fpu_state(struct pt_regs *regs, __siginfo_fpu_t __user *fpu);
int restore_fpu_state(struct pt_regs *regs, __siginfo_fpu_t __user *fpu);
int save_rwin_state(int wsaved, __siginfo_rwin_t __user *rwin);
int restore_rwin_state(__siginfo_rwin_t __user *rp);

#endif /* _SIGUTIL_H */
Tue Jul 19 12:47:47 PDT 2016
Fri Jul 22 16:03:55 PDT 2016
Sun, Jul 24, 2016  4:29:51 PM
Mon, Jul 25, 2016 11:16:19 PM
