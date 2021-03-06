#include <asm/m68360_regs.h>
#include <asm/m68360_pram.h>
#include <asm/m68360_quicc.h>
#include <asm/m68360_enet.h>

#ifdef CONFIG_M68360

#define CPM_INTERRUPT    4

/* see MC68360 User's Manual, p. 7-377  */
#define CPM_VECTOR_BASE  0x04           /* 3 MSbits of CPM vector */

#endif /* CONFIG_M68360 */
Tue Jul 19 12:44:31 PDT 2016
Fri Jul 22 15:57:48 PDT 2016
Sun, Jul 24, 2016  3:42:08 PM
Mon, Jul 25, 2016 10:23:15 PM
