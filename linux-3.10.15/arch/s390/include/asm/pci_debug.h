#ifndef _S390_ASM_PCI_DEBUG_H
#define _S390_ASM_PCI_DEBUG_H

#include <asm/debug.h>

extern debug_info_t *pci_debug_msg_id;
extern debug_info_t *pci_debug_err_id;

#ifdef CONFIG_PCI_DEBUG
#define zpci_dbg(imp, fmt, args...)				\
	debug_sprintf_event(pci_debug_msg_id, imp, fmt, ##args)

#else /* !CONFIG_PCI_DEBUG */
#define zpci_dbg(imp, fmt, args...) do { } while (0)
#endif

#define zpci_err(text...)							\
	do {									\
		char debug_buffer[16];						\
		snprintf(debug_buffer, 16, text);				\
		debug_text_event(pci_debug_err_id, 0, debug_buffer);		\
	} while (0)

static inline void zpci_err_hex(void *addr, int len)
{
	while (len > 0) {
		debug_event(pci_debug_err_id, 0, (void *) addr, len);
		len -= pci_debug_err_id->buf_size;
		addr += pci_debug_err_id->buf_size;
	}
}

#endif
Tue Jul 19 12:44:36 PDT 2016
Fri Jul 22 15:57:56 PDT 2016
Sun, Jul 24, 2016  3:43:16 PM
Mon, Jul 25, 2016 10:24:31 PM
