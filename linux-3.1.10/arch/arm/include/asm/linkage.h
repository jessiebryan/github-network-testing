#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"

#define ENDPROC(name) \
  .type name, %function; \
  END(name)

#endif
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:29 PDT 2016
Sun, Jul 24, 2016  1:11:34 PM
Mon, Jul 25, 2016  6:18:06 PM
Mon, Jul 25, 2016  7:31:25 PM
Tue, Jul 26, 2016  2:07:40 PM
