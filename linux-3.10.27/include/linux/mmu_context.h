#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

#endif
Tue Jul 19 12:52:34 PDT 2016
Fri Jul 22 16:13:04 PDT 2016
Sun, Jul 24, 2016  5:38:45 PM
Tue, Jul 26, 2016 12:32:34 AM
