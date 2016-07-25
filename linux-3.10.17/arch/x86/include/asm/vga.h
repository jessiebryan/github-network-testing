/*
 *	Access to VGA videoram
 *
 *	(c) 1998 Martin Mares <mj@ucw.cz>
 */

#ifndef _ASM_X86_VGA_H
#define _ASM_X86_VGA_H

/*
 *	On the PC, we can just recalculate addresses and then
 *	access the videoram directly without any black magic.
 */

#define VGA_MAP_MEM(x, s) (unsigned long)phys_to_virt(x)

#define vga_readb(x) (*(x))
#define vga_writeb(x, y) (*(y) = (x))

#ifdef CONFIG_FB_EFI
#define __ARCH_HAS_VGA_DEFAULT_DEVICE
extern struct pci_dev *vga_default_device(void);
extern void vga_set_default_device(struct pci_dev *pdev);
#endif

#endif /* _ASM_X86_VGA_H */
Tue Jul 19 12:45:54 PDT 2016
Fri Jul 22 16:00:23 PDT 2016
Sun, Jul 24, 2016  4:02:32 PM
