#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"

#define ENDPROC(name) \
  .type name, %function; \
  END(name)

#endif
Tue Jul 19 12:37:11 PDT 2016
Fri Jul 22 15:44:09 PDT 2016
Sun, Jul 24, 2016  2:01:04 PM
Mon, Jul 25, 2016  8:29:44 PM
