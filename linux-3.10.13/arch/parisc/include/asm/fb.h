#ifndef _ASM_FB_H_
#define _ASM_FB_H_

#include <linux/fb.h>
#include <linux/fs.h>
#include <asm/page.h>

static inline void fb_pgprotect(struct file *file, struct vm_area_struct *vma,
				unsigned long off)
{
	pgprot_val(vma->vm_page_prot) |= _PAGE_NO_CACHE;
}

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:43:17 PDT 2016
Fri Jul 22 15:55:30 PDT 2016
Sun, Jul 24, 2016  3:24:27 PM
Mon, Jul 25, 2016 10:03:35 PM
