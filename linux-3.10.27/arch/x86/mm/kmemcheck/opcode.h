#ifndef ARCH__X86__MM__KMEMCHECK__OPCODE_H
#define ARCH__X86__MM__KMEMCHECK__OPCODE_H

#include <linux/types.h>

void kmemcheck_opcode_decode(const uint8_t *op, unsigned int *size);
const uint8_t *kmemcheck_opcode_get_primary(const uint8_t *op);

#endif
Tue Jul 19 12:52:20 PDT 2016
Fri Jul 22 16:12:36 PDT 2016
Sun, Jul 24, 2016  5:35:15 PM
Tue, Jul 26, 2016 12:28:43 AM
