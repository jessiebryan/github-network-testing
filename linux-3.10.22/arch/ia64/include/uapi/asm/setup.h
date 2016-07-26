#ifndef __IA64_SETUP_H
#define __IA64_SETUP_H

#define COMMAND_LINE_SIZE	2048

extern struct ia64_boot_param {
	__u64 command_line;		/* physical address of command line arguments */
	__u64 efi_systab;		/* physical address of EFI system table */
	__u64 efi_memmap;		/* physical address of EFI memory map */
	__u64 efi_memmap_size;		/* size of EFI memory map */
	__u64 efi_memdesc_size;		/* size of an EFI memory map descriptor */
	__u32 efi_memdesc_version;	/* memory descriptor version */
	struct {
		__u16 num_cols;	/* number of columns on console output device */
		__u16 num_rows;	/* number of rows on console output device */
		__u16 orig_x;	/* cursor's x position */
		__u16 orig_y;	/* cursor's y position */
	} console_info;
	__u64 fpswa;		/* physical address of the fpswa interface */
	__u64 initrd_start;
	__u64 initrd_size;
} *ia64_boot_param;

#endif
Tue Jul 19 12:48:55 PDT 2016
Fri Jul 22 16:06:05 PDT 2016
Sun, Jul 24, 2016  4:46:34 PM
Mon, Jul 25, 2016 11:34:55 PM
