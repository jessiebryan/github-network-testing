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
Tue Jul 19 12:49:43 PDT 2016
Fri Jul 22 16:07:34 PDT 2016
Sun, Jul 24, 2016  4:57:45 PM
