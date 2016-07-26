/*
 * code16gcc.h
 *
 * This file is -include'd when compiling 16-bit C code.
 * Note: this asm() needs to be emitted before gcc emits any code.
 * Depending on gcc version, this requires -fno-unit-at-a-time or
 * -fno-toplevel-reorder.
 *
 * Hopefully gcc will eventually have a real -m16 option so we can
 * drop this hack long term.
 */

#ifndef __ASSEMBLY__
asm(".code16gcc");
#endif
Tue Jul 19 12:38:05 PDT 2016
Fri Jul 22 15:45:44 PDT 2016
Sun, Jul 24, 2016  2:12:47 PM
Mon, Jul 25, 2016  8:43:19 PM
