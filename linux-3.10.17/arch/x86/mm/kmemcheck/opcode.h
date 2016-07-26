#ifndef ARCH__X86__MM__KMEMCHECK__OPCODE_H
#define ARCH__X86__MM__KMEMCHECK__OPCODE_H

#include <linux/types.h>

void kmemcheck_opcode_decode(const uint8_t *op, unsigned int *size);
const uint8_t *kmemcheck_opcode_get_primary(const uint8_t *op);

#endif
Tue Jul 19 12:45:54 PDT 2016
Fri Jul 22 16:00:24 PDT 2016
Sun, Jul 24, 2016  4:02:37 PM
Mon, Jul 25, 2016 10:46:04 PM
