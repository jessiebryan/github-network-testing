/*
 * Copyright (C) 2012 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __ASM_FB_H_
#define __ASM_FB_H_

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

#endif /* __ASM_FB_H_ */
Tue Jul 19 12:50:49 PDT 2016
Fri Jul 22 16:09:39 PDT 2016
Sun, Jul 24, 2016  5:13:37 PM
Tue, Jul 26, 2016 12:04:49 AM
