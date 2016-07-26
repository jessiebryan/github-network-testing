#ifndef _ASM_FB_H_
#define _ASM_FB_H_

#include <linux/fb.h>
#include <linux/fs.h>
#include <asm/page.h>

static inline void fb_pgprotect(struct file *file, struct vm_area_struct *vma,
				unsigned long off)
{
	vma->vm_page_prot = pgprot_writecombine(vma->vm_page_prot);
}

static inline int fb_is_primary_device(struct fb_info *info)
{
	return 0;
}

#endif /* _ASM_FB_H_ */
Tue Jul 19 12:34:53 PDT 2016
Fri Jul 22 15:39:54 PDT 2016
Sun, Jul 24, 2016  1:29:45 PM
Mon, Jul 25, 2016  6:39:52 PM
Mon, Jul 25, 2016  7:52:43 PM
Tue, Jul 26, 2016  2:27:52 PM
