#ifndef _ASM_FB_H_
#define _ASM_FB_H_

#include <linux/fb.h>
#include <linux/fs.h>
#include <asm/page.h>

static inline void fb_pgprotect(struct file *file, struct vm_area_struct *vma,
				unsigned long off)
{
	vma->vm_page_prot = phys_mem_access_prot(file, off >> PAGE_SHIFT,
						 vma->vm_end - vma->vm_start,
						 vma->vm_page_prot);
}

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:50:57 PDT 2016
Fri Jul 22 16:09:54 PDT 2016
Sun, Jul 24, 2016  5:15:27 PM
Tue, Jul 26, 2016 12:06:54 AM
