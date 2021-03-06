/*
 *  arch/arm/include/asm/ide.h
 *
 *  Copyright (C) 1994-1996  Linus Torvalds & authors
 */

/*
 *  This file contains the ARM architecture specific IDE code.
 */

#ifndef __ASMARM_IDE_H
#define __ASMARM_IDE_H

#ifdef __KERNEL__

#define __ide_mm_insw(port,addr,len)	readsw(port,addr,len)
#define __ide_mm_insl(port,addr,len)	readsl(port,addr,len)
#define __ide_mm_outsw(port,addr,len)	writesw(port,addr,len)
#define __ide_mm_outsl(port,addr,len)	writesl(port,addr,len)

#endif /* __KERNEL__ */

#endif /* __ASMARM_IDE_H */
Tue Jul 19 12:36:03 PDT 2016
Fri Jul 22 15:41:54 PDT 2016
Sun, Jul 24, 2016  1:44:34 PM
Mon, Jul 25, 2016  8:10:13 PM
Tue, Jul 26, 2016  2:44:14 PM
