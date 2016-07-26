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
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:58 PDT 2016
Sun, Jul 24, 2016  1:15:15 PM
Mon, Jul 25, 2016  6:22:30 PM
Mon, Jul 25, 2016  7:35:43 PM
Tue, Jul 26, 2016  2:11:42 PM
