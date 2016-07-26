#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:38:56 PDT 2016
Fri Jul 22 15:47:24 PDT 2016
Sun, Jul 24, 2016  2:24:42 PM
Mon, Jul 25, 2016  8:56:34 PM
