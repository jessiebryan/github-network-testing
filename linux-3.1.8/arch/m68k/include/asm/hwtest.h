/* Routines to test for presence/absence of hardware registers:
 * see arch/m68k/mm/hwtest.c.
 *  -- PMM <pmaydell@chiark.greenend.org.uk> 05/1998
 *
 * Removed __init from decls.  We might want them in modules, and
 * the code is tiny anyway.  16/5/98 pb
 */

#ifndef __ASM_HWTEST_H
#define __ASM_HWTEST_H

extern int hwreg_present(volatile void *regp);
extern int hwreg_write(volatile void *regp, unsigned short val);

#endif
Tue Jul 19 12:37:19 PDT 2016
Fri Jul 22 15:44:24 PDT 2016
Sun, Jul 24, 2016  2:02:50 PM
Mon, Jul 25, 2016  8:31:50 PM
