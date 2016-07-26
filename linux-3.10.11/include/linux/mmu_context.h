#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:42:19 PDT 2016
Fri Jul 22 15:53:46 PDT 2016
Sun, Jul 24, 2016  3:10:45 PM
Mon, Jul 25, 2016  9:48:18 PM
