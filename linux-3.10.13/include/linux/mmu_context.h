#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:43:37 PDT 2016
Fri Jul 22 15:56:07 PDT 2016
Sun, Jul 24, 2016  3:29:10 PM
