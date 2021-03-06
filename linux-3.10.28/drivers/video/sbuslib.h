/* sbuslib.h: SBUS fb helper library interfaces */
#ifndef _SBUSLIB_H
#define _SBUSLIB_H

struct sbus_mmap_map {
	unsigned long voff;
	unsigned long poff;
	unsigned long size;
};

#define SBUS_MMAP_FBSIZE(n) (-n)
#define SBUS_MMAP_EMPTY	0x80000000

extern void sbusfb_fill_var(struct fb_var_screeninfo *var,
			    struct device_node *dp, int bpp);
struct vm_area_struct;
extern int sbusfb_mmap_helper(struct sbus_mmap_map *map,
			      unsigned long physbase, unsigned long fbsize,
			      unsigned long iospace,
			      struct vm_area_struct *vma);
int sbusfb_ioctl_helper(unsigned long cmd, unsigned long arg,
			struct fb_info *info,
			int type, int fb_depth, unsigned long fb_size);
int sbusfb_compat_ioctl(struct fb_info *info, unsigned int cmd,
			unsigned long arg);

#endif /* _SBUSLIB_H */
Tue Jul 19 12:53:09 PDT 2016
Fri Jul 22 16:14:13 PDT 2016
Sun, Jul 24, 2016  5:47:04 PM
Tue, Jul 26, 2016 12:41:43 AM
