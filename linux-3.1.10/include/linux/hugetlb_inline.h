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
Tue Jul 19 12:33:39 PDT 2016
Fri Jul 22 15:38:21 PDT 2016
Sun, Jul 24, 2016  1:18:05 PM
Mon, Jul 25, 2016  6:25:54 PM
Mon, Jul 25, 2016  7:39:03 PM
