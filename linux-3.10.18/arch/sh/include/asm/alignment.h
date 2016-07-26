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
Tue Jul 19 12:46:28 PDT 2016
Fri Jul 22 16:01:30 PDT 2016
Sun, Jul 24, 2016  4:11:03 PM
Mon, Jul 25, 2016 10:55:26 PM
