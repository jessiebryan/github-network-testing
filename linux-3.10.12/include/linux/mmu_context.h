#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:42:59 PDT 2016
Fri Jul 22 15:54:56 PDT 2016
Sun, Jul 24, 2016  3:19:57 PM
Mon, Jul 25, 2016  9:58:37 PM
