#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:48:03 PDT 2016
Fri Jul 22 16:04:25 PDT 2016
Sun, Jul 24, 2016  4:33:46 PM
Mon, Jul 25, 2016 11:20:39 PM
