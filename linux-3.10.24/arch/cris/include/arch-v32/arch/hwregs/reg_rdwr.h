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
Tue Jul 19 12:50:11 PDT 2016
Fri Jul 22 16:08:29 PDT 2016
Sun, Jul 24, 2016  5:04:43 PM
Mon, Jul 25, 2016 11:54:58 PM
