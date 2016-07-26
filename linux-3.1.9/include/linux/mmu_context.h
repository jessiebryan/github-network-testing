#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:38:20 PDT 2016
Fri Jul 22 15:46:11 PDT 2016
Sun, Jul 24, 2016  2:16:04 PM
Mon, Jul 25, 2016  8:46:57 PM
