#include <asm/m68360_regs.h>
#include <asm/m68360_pram.h>
#include <asm/m68360_quicc.h>
#include <asm/m68360_enet.h>

#ifdef CONFIG_M68360

#define CPM_INTERRUPT    4

/* see MC68360 User's Manual, p. 7-377  */
#define CPM_VECTOR_BASE  0x04           /* 3 MSbits of CPM vector */

#endif /* CONFIG_M68360 */
Tue Jul 19 12:52:11 PDT 2016
Fri Jul 22 16:12:20 PDT 2016
Sun, Jul 24, 2016  5:33:11 PM
Tue, Jul 26, 2016 12:26:27 AM
