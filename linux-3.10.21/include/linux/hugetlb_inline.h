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
Tue Jul 19 12:48:40 PDT 2016
Fri Jul 22 16:05:35 PDT 2016
Sun, Jul 24, 2016  4:42:42 PM
Mon, Jul 25, 2016 11:30:35 PM
