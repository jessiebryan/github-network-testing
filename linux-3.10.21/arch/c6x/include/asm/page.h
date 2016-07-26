#ifndef _ASM_C6X_PAGE_H
#define _ASM_C6X_PAGE_H

#define VM_DATA_DEFAULT_FLAGS \
	(VM_READ | VM_WRITE | \
	((current->personality & READ_IMPLIES_EXEC) ? VM_EXEC : 0) | \
		 VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)

#include <asm-generic/page.h>

#endif /* _ASM_C6X_PAGE_H */
Tue Jul 19 12:48:16 PDT 2016
Fri Jul 22 16:04:49 PDT 2016
Sun, Jul 24, 2016  4:36:49 PM
Mon, Jul 25, 2016 11:24:03 PM
