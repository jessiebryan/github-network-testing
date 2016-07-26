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
Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:19 PDT 2016
Sun, Jul 24, 2016  1:40:00 PM
Mon, Jul 25, 2016  8:04:51 PM
