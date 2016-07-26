#ifdef CONFIG_KMEMCHECK
/* kmemcheck doesn't handle MMX/SSE/SSE2 instructions */
# include <asm-generic/xor.h>
#else
#ifdef CONFIG_X86_32
# include "xor_32.h"
#else
# include "xor_64.h"
#endif
#endif
Tue Jul 19 12:36:19 PDT 2016
Fri Jul 22 15:42:25 PDT 2016
Sun, Jul 24, 2016  1:48:15 PM
Mon, Jul 25, 2016  8:14:36 PM
