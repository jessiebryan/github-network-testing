#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"

#define ENDPROC(name) \
  .type name, %function; \
  END(name)

#endif
Tue Jul 19 12:43:07 PDT 2016
Fri Jul 22 15:55:12 PDT 2016
Sun, Jul 24, 2016  3:22:04 PM
