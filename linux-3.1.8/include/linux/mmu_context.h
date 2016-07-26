#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:37:43 PDT 2016
Fri Jul 22 15:45:05 PDT 2016
Sun, Jul 24, 2016  2:07:50 PM
Mon, Jul 25, 2016  8:37:48 PM
