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
Tue Jul 19 12:40:36 PDT 2016
Fri Jul 22 15:50:44 PDT 2016
Sun, Jul 24, 2016  2:48:36 PM
Mon, Jul 25, 2016  9:23:19 PM
