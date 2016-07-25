/*
 * arch/arm/mach-ixp23xx/include/mach/vmalloc.h
 *
 * Copyright (c) 2005 MontaVista Software, Inc.
 *
 * NPU mappings end at 0xf0000000 and we allocate 64MB for board
 * specific static I/O.
 */

#define VMALLOC_END	(0xec000000UL)
Tue Jul 19 12:37:13 PDT 2016
Fri Jul 22 15:44:11 PDT 2016
Sun, Jul 24, 2016  2:01:20 PM
