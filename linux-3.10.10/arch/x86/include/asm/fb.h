#ifndef _ASM_X86_FB_H
#define _ASM_X86_FB_H

#include <linux/fb.h>
#include <linux/fs.h>
#include <asm/page.h>

static inline void fb_pgprotect(struct file *file, struct vm_area_struct *vma,
				unsigned long off)
{
	if (boot_cpu_data.x86 > 3)
		pgprot_val(vma->vm_page_prot) |= _PAGE_PCD;
}

extern int fb_is_primary_device(struct fb_info *info);

#endif /* _ASM_X86_FB_H */
Tue Jul 19 12:39:19 PDT 2016
Fri Jul 22 15:48:10 PDT 2016
Sun, Jul 24, 2016  2:30:14 PM
Mon, Jul 25, 2016  9:02:46 PM
