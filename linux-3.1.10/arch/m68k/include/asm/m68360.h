#include "m68360_regs.h"
#include "m68360_pram.h"
#include "m68360_quicc.h"
#include "m68360_enet.h"

#ifdef CONFIG_M68360

#define CPM_INTERRUPT    4

/* see MC68360 User's Manual, p. 7-377  */
#define CPM_VECTOR_BASE  0x04           /* 3 MSbits of CPM vector */

#endif /* CONFIG_M68360 */
Tue Jul 19 12:33:19 PDT 2016
Fri Jul 22 15:37:42 PDT 2016
Sun, Jul 24, 2016  1:13:21 PM
Mon, Jul 25, 2016  6:20:14 PM
