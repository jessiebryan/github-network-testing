#ifndef __ASM_ARM_SYSTEM_INFO_H
#define __ASM_ARM_SYSTEM_INFO_H

#define CPU_ARCH_UNKNOWN	0
#define CPU_ARCH_ARMv3		1
#define CPU_ARCH_ARMv4		2
#define CPU_ARCH_ARMv4T		3
#define CPU_ARCH_ARMv5		4
#define CPU_ARCH_ARMv5T		5
#define CPU_ARCH_ARMv5TE	6
#define CPU_ARCH_ARMv5TEJ	7
#define CPU_ARCH_ARMv6		8
#define CPU_ARCH_ARMv7		9

#ifndef __ASSEMBLY__

/* information about the system we're running on */
extern unsigned int system_rev;
extern unsigned int system_serial_low;
extern unsigned int system_serial_high;
extern unsigned int mem_fclk_21285;

extern int __pure cpu_architecture(void);

#endif /* !__ASSEMBLY__ */

#endif /* __ASM_ARM_SYSTEM_INFO_H */
Tue Jul 19 12:47:33 PDT 2016
Fri Jul 22 16:03:31 PDT 2016
Sun, Jul 24, 2016  4:26:40 PM
Mon, Jul 25, 2016 11:12:46 PM
