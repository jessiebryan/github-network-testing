#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"

#define ENDPROC(name) \
  .type name, %function; \
  END(name)

#endif
Tue Jul 19 12:48:11 PDT 2016
Fri Jul 22 16:04:42 PDT 2016
Sun, Jul 24, 2016  4:35:52 PM
Mon, Jul 25, 2016 11:22:59 PM
