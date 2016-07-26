#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"

#define ENDPROC(name) \
  .type name, %function; \
  END(name)

#endif
Tue Jul 19 12:49:29 PDT 2016
Fri Jul 22 16:07:07 PDT 2016
Sun, Jul 24, 2016  4:54:19 PM
Mon, Jul 25, 2016 11:43:34 PM
