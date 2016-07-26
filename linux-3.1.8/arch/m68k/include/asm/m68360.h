#include "m68360_regs.h"
#include "m68360_pram.h"
#include "m68360_quicc.h"
#include "m68360_enet.h"

#ifdef CONFIG_M68360

#define CPM_INTERRUPT    4

/* see MC68360 User's Manual, p. 7-377  */
#define CPM_VECTOR_BASE  0x04           /* 3 MSbits of CPM vector */

#endif /* CONFIG_M68360 */
Tue Jul 19 12:37:19 PDT 2016
Fri Jul 22 15:44:24 PDT 2016
Sun, Jul 24, 2016  2:02:51 PM
Mon, Jul 25, 2016  8:31:51 PM
