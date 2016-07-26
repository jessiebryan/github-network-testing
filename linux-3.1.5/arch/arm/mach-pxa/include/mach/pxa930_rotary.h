#ifndef __ASM_ARCH_PXA930_ROTARY_H
#define __ASM_ARCH_PXA930_ROTARY_H

/* NOTE:
 *
 * rotary can be either interpreted as a ralative input event (e.g.
 * REL_WHEEL or REL_HWHEEL) or a specific key event (e.g. UP/DOWN
 * or LEFT/RIGHT), depending on if up_key & down_key are assigned
 * or rel_code is assigned a non-zero value. When all are non-zero,
 * up_key and down_key will be preferred.
 */
struct pxa930_rotary_platform_data {
	int	up_key;
	int	down_key;
	int	rel_code;
};

void __init pxa930_set_rotarykey_info(struct pxa930_rotary_platform_data *info);

#endif /* __ASM_ARCH_PXA930_ROTARY_H */
Tue Jul 19 12:36:05 PDT 2016
Fri Jul 22 15:41:59 PDT 2016
Sun, Jul 24, 2016  1:45:07 PM
Mon, Jul 25, 2016  8:10:52 PM
Tue, Jul 26, 2016  2:44:51 PM
