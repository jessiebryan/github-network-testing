#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:51:17 PDT 2016
Fri Jul 22 16:10:32 PDT 2016
Sun, Jul 24, 2016  5:20:08 PM
Tue, Jul 26, 2016 12:12:02 AM
