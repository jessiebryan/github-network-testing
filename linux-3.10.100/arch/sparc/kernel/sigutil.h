#ifndef _SIGUTIL_H
#define _SIGUTIL_H

int save_fpu_state(struct pt_regs *regs, __siginfo_fpu_t __user *fpu);
int restore_fpu_state(struct pt_regs *regs, __siginfo_fpu_t __user *fpu);
int save_rwin_state(int wsaved, __siginfo_rwin_t __user *rwin);
int restore_rwin_state(__siginfo_rwin_t __user *rp);

#endif /* _SIGUTIL_H */
Tue Jul 19 12:39:56 PDT 2016
Fri Jul 22 15:49:26 PDT 2016
Sun, Jul 24, 2016  2:39:13 PM
Mon, Jul 25, 2016  9:12:44 PM
