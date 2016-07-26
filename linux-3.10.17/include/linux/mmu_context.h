#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:46:08 PDT 2016
Fri Jul 22 16:00:50 PDT 2016
Sun, Jul 24, 2016  4:06:05 PM
Mon, Jul 25, 2016 10:49:54 PM
