/*
 *  Functions for incremental construction of fcx enabled I/O control blocks.
 *
 *    Copyright IBM Corp. 2008
 *    Author(s): Peter Oberparleiter <peter.oberparleiter@de.ibm.com>
 */

#ifndef _ASM_S390_ITCW_H
#define _ASM_S390_ITCW_H _ASM_S390_ITCW_H

#include <linux/types.h>
#include <asm/fcx.h>

#define ITCW_OP_READ	0
#define ITCW_OP_WRITE	1

struct itcw;

struct tcw *itcw_get_tcw(struct itcw *itcw);
size_t itcw_calc_size(int intrg, int max_tidaws, int intrg_max_tidaws);
struct itcw *itcw_init(void *buffer, size_t size, int op, int intrg,
		       int max_tidaws, int intrg_max_tidaws);
struct dcw *itcw_add_dcw(struct itcw *itcw, u8 cmd, u8 flags, void *cd,
			 u8 cd_count, u32 count);
struct tidaw *itcw_add_tidaw(struct itcw *itcw, u8 flags, void *addr,
			     u32 count);
void itcw_set_data(struct itcw *itcw, void *addr, int use_tidal);
void itcw_finalize(struct itcw *itcw);

#endif /* _ASM_S390_ITCW_H */
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:23 PM
Mon, Jul 25, 2016  6:21:28 PM
Mon, Jul 25, 2016  7:34:42 PM
Tue, Jul 26, 2016  2:10:45 PM
