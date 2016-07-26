#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"

#define ENDPROC(name) \
  .type name, %function; \
  END(name)

#endif
Tue Jul 19 12:40:21 PDT 2016
Fri Jul 22 15:50:15 PDT 2016
Sun, Jul 24, 2016  2:45:12 PM
Mon, Jul 25, 2016  9:19:26 PM
