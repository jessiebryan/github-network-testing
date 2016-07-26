#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"

#define ENDPROC(name) \
  .type name, %function; \
  END(name)

#endif
Tue Jul 19 12:41:01 PDT 2016
Fri Jul 22 15:51:31 PDT 2016
Sun, Jul 24, 2016  2:54:25 PM
Mon, Jul 25, 2016  9:29:51 PM
