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
Tue Jul 19 12:52:19 PDT 2016
Fri Jul 22 16:12:35 PDT 2016
Sun, Jul 24, 2016  5:35:03 PM
Tue, Jul 26, 2016 12:28:30 AM
