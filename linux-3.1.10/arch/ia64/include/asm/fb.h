#ifndef _ASM_FB_H_
#define _ASM_FB_H_

#include <linux/fb.h>
#include <linux/fs.h>
#include <linux/efi.h>
#include <asm/page.h>

static inline void fb_pgprotect(struct file *file, struct vm_area_struct *vma,
				unsigned long off)
{
	if (efi_range_is_wc(vma->vm_start, vma->vm_end - vma->vm_start))
		vma->vm_page_prot = pgprot_writecombine(vma->vm_page_prot);
	else
		vma->vm_page_prot = pgprot_noncached(vma->vm_page_prot);
}

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:33:18 PDT 2016
Fri Jul 22 15:37:40 PDT 2016
Sun, Jul 24, 2016  1:13:06 PM
Mon, Jul 25, 2016  6:19:56 PM
Mon, Jul 25, 2016  7:33:11 PM
Tue, Jul 26, 2016  2:09:21 PM
