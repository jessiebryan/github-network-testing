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
Tue Jul 19 12:33:17 PDT 2016
Fri Jul 22 15:37:38 PDT 2016
Sun, Jul 24, 2016  1:12:50 PM
Mon, Jul 25, 2016  6:19:37 PM
Mon, Jul 25, 2016  7:32:53 PM
Tue, Jul 26, 2016  2:09:03 PM
