/*
 * Read/write register macros used by *_defs.h
 */

#ifndef reg_rdwr_h
#define reg_rdwr_h

#ifndef REG_READ
#define REG_READ(type, addr) (*((volatile type *) (addr)))
#endif

#ifndef REG_WRITE
#define REG_WRITE(type, addr, val) \
   do { *((volatile type *) (addr)) = (val); } while(0)
#endif

#endif
Tue Jul 19 12:48:54 PDT 2016
Fri Jul 22 16:06:02 PDT 2016
Sun, Jul 24, 2016  4:46:09 PM
Mon, Jul 25, 2016 11:34:26 PM
