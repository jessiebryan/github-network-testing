#ifndef __ASM_SH_ALIGNMENT_H
#define __ASM_SH_ALIGNMENT_H

#include <linux/types.h>

extern void inc_unaligned_byte_access(void);
extern void inc_unaligned_word_access(void);
extern void inc_unaligned_dword_access(void);
extern void inc_unaligned_multi_access(void);
extern void inc_unaligned_user_access(void);
extern void inc_unaligned_kernel_access(void);

#define UM_WARN		(1 << 0)
#define UM_FIXUP	(1 << 1)
#define UM_SIGNAL	(1 << 2)

extern unsigned int unaligned_user_action(void);

extern void unaligned_fixups_notify(struct task_struct *, insn_size_t, struct pt_regs *);

#endif /* __ASM_SH_ALIGNMENT_H */
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:52 PDT 2016
Sun, Jul 24, 2016  1:14:30 PM
Mon, Jul 25, 2016  6:21:36 PM
Mon, Jul 25, 2016  7:34:50 PM
Tue, Jul 26, 2016  2:10:52 PM
