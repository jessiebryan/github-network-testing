#ifndef _ASM_X86_EMERGENCY_RESTART_H
#define _ASM_X86_EMERGENCY_RESTART_H

enum reboot_type {
	BOOT_TRIPLE = 't',
	BOOT_KBD = 'k',
#ifdef CONFIG_X86_32
	BOOT_BIOS = 'b',
#endif
	BOOT_ACPI = 'a',
	BOOT_EFI = 'e',
	BOOT_CF9 = 'p',
	BOOT_CF9_COND = 'q',
};

extern enum reboot_type reboot_type;

extern void machine_emergency_restart(void);

#endif /* _ASM_X86_EMERGENCY_RESTART_H */
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:06 PM
Mon, Jul 25, 2016  6:22:19 PM
Mon, Jul 25, 2016  7:35:32 PM
