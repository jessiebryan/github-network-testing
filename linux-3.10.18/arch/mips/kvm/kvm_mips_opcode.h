/*
* This file is subject to the terms and conditions of the GNU General Public
* License.  See the file "COPYING" in the main directory of this archive
* for more details.
*
* Copyright (C) 2012  MIPS Technologies, Inc.  All rights reserved.
* Authors: Sanjay Lal <sanjayl@kymasys.com>
*/

/*
 * Define opcode values not defined in <asm/isnt.h>
 */

#ifndef __KVM_MIPS_OPCODE_H__
#define __KVM_MIPS_OPCODE_H__

/* COP0 Ops */
#define     mfmcz_op         0x0b	/*  01011  */
#define     wrpgpr_op        0x0e	/*  01110  */

/*  COP0 opcodes (only if COP0 and CO=1):  */
#define     wait_op               0x20	/*  100000  */

#endif /* __KVM_MIPS_OPCODE_H__ */
Tue Jul 19 12:46:25 PDT 2016
Fri Jul 22 16:01:24 PDT 2016
Sun, Jul 24, 2016  4:10:24 PM
Mon, Jul 25, 2016 10:54:42 PM
