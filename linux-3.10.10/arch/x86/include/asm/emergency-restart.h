#ifndef _ASM_X86_EMERGENCY_RESTART_H
#define _ASM_X86_EMERGENCY_RESTART_H

enum reboot_type {
	BOOT_TRIPLE = 't',
	BOOT_KBD = 'k',
	BOOT_BIOS = 'b',
	BOOT_ACPI = 'a',
	BOOT_EFI = 'e',
	BOOT_CF9 = 'p',
	BOOT_CF9_COND = 'q',
};

extern enum reboot_type reboot_type;

extern void machine_emergency_restart(void);

#endif /* _ASM_X86_EMERGENCY_RESTART_H */
Tue Jul 19 12:39:19 PDT 2016
Fri Jul 22 15:48:10 PDT 2016
Sun, Jul 24, 2016  2:30:14 PM
Mon, Jul 25, 2016  9:02:46 PM
