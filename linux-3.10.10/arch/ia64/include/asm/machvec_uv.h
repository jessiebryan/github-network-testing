/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * SGI UV Core Functions
 *
 * Copyright (C) 2008 Silicon Graphics, Inc. All rights reserved.
 */

#ifndef _ASM_IA64_MACHVEC_UV_H
#define _ASM_IA64_MACHVEC_UV_H

extern ia64_mv_setup_t uv_setup;

/*
 * This stuff has dual use!
 *
 * For a generic kernel, the macros are used to initialize the
 * platform's machvec structure.  When compiling a non-generic kernel,
 * the macros are used directly.
 */
#define ia64_platform_name		"uv"
#define platform_setup			uv_setup

#endif /* _ASM_IA64_MACHVEC_UV_H */
Tue Jul 19 12:39:10 PDT 2016
Fri Jul 22 15:47:53 PDT 2016
Sun, Jul 24, 2016  2:28:10 PM
Mon, Jul 25, 2016  9:00:26 PM
