#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"

#define ENDPROC(name) \
  .type name, %function; \
  END(name)

#endif
Tue Jul 19 12:43:46 PDT 2016
Fri Jul 22 15:56:22 PDT 2016
Sun, Jul 24, 2016  3:31:16 PM
Mon, Jul 25, 2016 10:11:12 PM
