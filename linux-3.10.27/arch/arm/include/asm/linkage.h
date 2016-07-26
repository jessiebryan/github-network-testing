#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define __ALIGN .align 0
#define __ALIGN_STR ".align 0"

#define ENDPROC(name) \
  .type name, %function; \
  END(name)

#endif
Tue Jul 19 12:52:04 PDT 2016
Fri Jul 22 16:12:06 PDT 2016
Sun, Jul 24, 2016  5:31:33 PM
Tue, Jul 26, 2016 12:24:38 AM
