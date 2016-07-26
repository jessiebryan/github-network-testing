#ifndef _ASM_C6X_PAGE_H
#define _ASM_C6X_PAGE_H

#define VM_DATA_DEFAULT_FLAGS \
	(VM_READ | VM_WRITE | \
	((current->personality & READ_IMPLIES_EXEC) ? VM_EXEC : 0) | \
		 VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)

#include <asm-generic/page.h>

#endif /* _ASM_C6X_PAGE_H */
Tue Jul 19 12:52:08 PDT 2016
Fri Jul 22 16:12:14 PDT 2016
Sun, Jul 24, 2016  5:32:31 PM
Tue, Jul 26, 2016 12:25:42 AM
