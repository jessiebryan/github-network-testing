#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:45:31 PDT 2016
Fri Jul 22 15:59:40 PDT 2016
Sun, Jul 24, 2016  3:56:52 PM
Mon, Jul 25, 2016 10:39:38 PM
