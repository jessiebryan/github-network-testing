#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:36:31 PDT 2016
Fri Jul 22 15:42:51 PDT 2016
Sun, Jul 24, 2016  1:51:21 PM
Mon, Jul 25, 2016  8:18:12 PM
