#ifndef ARCH__X86__MM__KMEMCHECK__OPCODE_H
#define ARCH__X86__MM__KMEMCHECK__OPCODE_H

#include <linux/types.h>

void kmemcheck_opcode_decode(const uint8_t *op, unsigned int *size);
const uint8_t *kmemcheck_opcode_get_primary(const uint8_t *op);

#endif
Tue Jul 19 12:39:19 PDT 2016
Fri Jul 22 15:48:12 PDT 2016
Sun, Jul 24, 2016  2:30:26 PM
Mon, Jul 25, 2016  9:02:59 PM
