#ifndef __OPENRISC_VMLINUX_H_
#define __OPENRISC_VMLINUX_H_

extern char _stext, _etext, _edata, _end;
#ifdef CONFIG_BLK_DEV_INITRD
extern char __initrd_start, __initrd_end;
extern char __initramfs_start;
#endif

extern u32 __dtb_start[];

#endif
Tue Jul 19 12:37:22 PDT 2016
Fri Jul 22 15:44:29 PDT 2016
Sun, Jul 24, 2016  2:03:30 PM
Mon, Jul 25, 2016  8:32:37 PM
