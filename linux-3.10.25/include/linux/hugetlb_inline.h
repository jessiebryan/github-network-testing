#ifndef _LINUX_HUGETLB_INLINE_H
#define _LINUX_HUGETLB_INLINE_H

#ifdef CONFIG_HUGETLB_PAGE

#include <linux/mm.h>

static inline int is_vm_hugetlb_page(struct vm_area_struct *vma)
{
	return !!(vma->vm_flags & VM_HUGETLB);
}

#else

static inline int is_vm_hugetlb_page(struct vm_area_struct *vma)
{
	return 0;
}

#endif

#endif
Tue Jul 19 12:51:15 PDT 2016
Fri Jul 22 16:10:30 PDT 2016
Sun, Jul 24, 2016  5:19:50 PM
Tue, Jul 26, 2016 12:11:43 AM
