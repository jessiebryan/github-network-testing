#ifndef __ASM_ARM_COMPILER_H
#define __ASM_ARM_COMPILER_H

/*
 * This is used to ensure the compiler did actually allocate the register we
 * asked it for some inline assembly sequences.  Apparently we can't trust
 * the compiler from one version to another so a bit of paranoia won't hurt.
 * This string is meant to be concatenated with the inline asm string and
 * will cause compilation to stop on mismatch.
 * (for details, see gcc PR 15089)
 */
#define __asmeq(x, y)  ".ifnc " x "," y " ; .err ; .endif\n\t"


#endif /* __ASM_ARM_COMPILER_H */
Tue Jul 19 12:46:16 PDT 2016
Fri Jul 22 16:01:05 PDT 2016
Sun, Jul 24, 2016  4:08:08 PM
Mon, Jul 25, 2016 10:52:10 PM
