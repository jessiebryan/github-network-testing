#ifndef _SPARC_FB_H_
#define _SPARC_FB_H_
#include <linux/console.h>
#include <linux/fb.h>
#include <linux/fs.h>
#include <asm/page.h>
#include <asm/prom.h>

static inline void fb_pgprotect(struct file *file, struct vm_area_struct *vma,
				unsigned long off)
{
#ifdef CONFIG_SPARC64
	vma->vm_page_prot = pgprot_noncached(vma->vm_page_prot);
#endif
}

static inline int fb_is_primary_device(struct fb_info *info)
{
	struct device *dev = info->device;
	struct device_node *node;

	if (console_set_on_cmdline)
		return 0;

	node = dev->of_node;
	if (node &&
	    node == of_console_device)
		return 1;

	return 0;
}

#endif /* _SPARC_FB_H_ */
Tue Jul 19 12:35:03 PDT 2016
Fri Jul 22 15:40:06 PDT 2016
Sun, Jul 24, 2016  1:31:13 PM
Mon, Jul 25, 2016  7:54:26 PM
Tue, Jul 26, 2016  2:29:30 PM
