#ifndef _ASM_FB_H_
#define _ASM_FB_H_

#include <linux/fb.h>
#include <linux/fs.h>
#include <asm/page.h>

static inline void fb_pgprotect(struct file *file, struct vm_area_struct *vma,
				unsigned long off)
{
	vma->vm_page_prot = __pgprot((pgprot_val(vma->vm_page_prot)
				      & ~_PAGE_CACHABLE)
				     | (_PAGE_BUFFER | _PAGE_DIRTY));
}

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:39:46 PDT 2016
Fri Jul 22 15:49:05 PDT 2016
Sun, Jul 24, 2016  2:36:43 PM
Mon, Jul 25, 2016  9:09:57 PM
