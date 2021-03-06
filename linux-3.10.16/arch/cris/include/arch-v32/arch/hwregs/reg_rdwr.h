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
Tue Jul 19 12:45:08 PDT 2016
Fri Jul 22 15:58:53 PDT 2016
Sun, Jul 24, 2016  3:50:47 PM
Mon, Jul 25, 2016 10:32:53 PM
