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
Tue Jul 19 12:49:34 PDT 2016
Fri Jul 22 16:07:15 PDT 2016
Sun, Jul 24, 2016  4:55:21 PM
Mon, Jul 25, 2016 11:44:43 PM
