#ifndef _ASM_C6X_PAGE_H
#define _ASM_C6X_PAGE_H

#define VM_DATA_DEFAULT_FLAGS \
	(VM_READ | VM_WRITE | \
	((current->personality & READ_IMPLIES_EXEC) ? VM_EXEC : 0) | \
		 VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)

#include <asm-generic/page.h>

#endif /* _ASM_C6X_PAGE_H */
Tue Jul 19 12:41:46 PDT 2016
Fri Jul 22 15:52:57 PDT 2016
Sun, Jul 24, 2016  3:04:35 PM
Mon, Jul 25, 2016  9:41:20 PM
