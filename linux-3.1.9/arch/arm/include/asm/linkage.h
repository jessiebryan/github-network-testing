#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"

#define ENDPROC(name) \
  .type name, %function; \
  END(name)

#endif
Tue Jul 19 12:37:50 PDT 2016
Fri Jul 22 15:45:17 PDT 2016
Sun, Jul 24, 2016  2:09:18 PM
