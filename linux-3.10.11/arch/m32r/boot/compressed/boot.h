/*
 * 1. load vmlinuz
 *
 * CONFIG_MEMORY_START  	+-----------------------+
 *				|        vmlinuz	|
 *				+-----------------------+
 * 2. decompressed
 *
 * CONFIG_MEMORY_START  	+-----------------------+
 *				|        vmlinuz	|
 *				+-----------------------+
 *				|			|
 * BOOT_RELOC_ADDR		+-----------------------+
 *				|		 	|
 * KERNEL_DECOMPRESS_ADDR 	+-----------------------+
 *				|  	vmlinux		|
 *				+-----------------------+
 *
 * 3. relocate copy & jump code
 *
 * CONFIG_MEMORY_START  	+-----------------------+
 *				|        vmlinuz	|
 *				+-----------------------+
 *				|			|
 * BOOT_RELOC_ADDR		+-----------------------+
 *				|    boot(copy&jump)	|
 * KERNEL_DECOMPRESS_ADDR 	+-----------------------+
 *				|  	vmlinux		|
 *				+-----------------------+
 *
 * 4. relocate decompressed kernel
 *
 * CONFIG_MEMORY_START  	+-----------------------+
 *				|        vmlinux	|
 *				+-----------------------+
 *				|			|
 * BOOT_RELOC_ADDR		+-----------------------+
 *				|     boot(copy&jump) 	|
 * KERNEL_DECOMPRESS_ADDR 	+-----------------------+
 *				|  			|
 *				+-----------------------+
 *
 */
#ifdef __ASSEMBLY__
#define __val(x)	x
#else
#define __val(x)	(x)
#endif

#define DECOMPRESS_OFFSET_BASE	__val(0x00900000)
#define BOOT_RELOC_SIZE		__val(0x00001000)

#define KERNEL_EXEC_ADDR	__val(CONFIG_MEMORY_START)
#define KERNEL_DECOMPRESS_ADDR	__val(CONFIG_MEMORY_START + \
				      DECOMPRESS_OFFSET_BASE + BOOT_RELOC_SIZE)
#define KERNEL_ENTRY		__val(CONFIG_MEMORY_START + 0x1000)

#define BOOT_EXEC_ADDR		__val(CONFIG_MEMORY_START)
#define BOOT_RELOC_ADDR		__val(CONFIG_MEMORY_START + DECOMPRESS_OFFSET_BASE)
Tue Jul 19 12:41:49 PDT 2016
Fri Jul 22 15:53:01 PDT 2016
Sun, Jul 24, 2016  3:05:07 PM
Mon, Jul 25, 2016  9:41:57 PM
