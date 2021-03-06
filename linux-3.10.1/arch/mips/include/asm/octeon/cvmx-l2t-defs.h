/***********************license start***************
 * Author: Cavium Networks
 *
 * Contact: support@caviumnetworks.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2012 Cavium Networks
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, Version 2, as
 * published by the Free Software Foundation.
 *
 * This file is distributed in the hope that it will be useful, but
 * AS-IS and WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE, TITLE, or
 * NONINFRINGEMENT.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 * or visit http://www.gnu.org/licenses/.
 *
 * This file may also be available under a different license from Cavium.
 * Contact Cavium Networks for more information
 ***********************license end**************************************/

#ifndef __CVMX_L2T_DEFS_H__
#define __CVMX_L2T_DEFS_H__

#define CVMX_L2T_ERR (CVMX_ADD_IO_SEG(0x0001180080000008ull))

union cvmx_l2t_err {
	uint64_t u64;
	struct cvmx_l2t_err_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t fadru:1;
		uint64_t lck_intena2:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena:1;
		uint64_t lckerr:1;
		uint64_t fset:3;
		uint64_t fadr:10;
		uint64_t fsyn:6;
		uint64_t ded_err:1;
		uint64_t sec_err:1;
		uint64_t ded_intena:1;
		uint64_t sec_intena:1;
		uint64_t ecc_ena:1;
#else
		uint64_t ecc_ena:1;
		uint64_t sec_intena:1;
		uint64_t ded_intena:1;
		uint64_t sec_err:1;
		uint64_t ded_err:1;
		uint64_t fsyn:6;
		uint64_t fadr:10;
		uint64_t fset:3;
		uint64_t lckerr:1;
		uint64_t lck_intena:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena2:1;
		uint64_t fadru:1;
		uint64_t reserved_29_63:35;
#endif
	} s;
	struct cvmx_l2t_err_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t lck_intena2:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena:1;
		uint64_t lckerr:1;
		uint64_t reserved_23_23:1;
		uint64_t fset:2;
		uint64_t reserved_19_20:2;
		uint64_t fadr:8;
		uint64_t fsyn:6;
		uint64_t ded_err:1;
		uint64_t sec_err:1;
		uint64_t ded_intena:1;
		uint64_t sec_intena:1;
		uint64_t ecc_ena:1;
#else
		uint64_t ecc_ena:1;
		uint64_t sec_intena:1;
		uint64_t ded_intena:1;
		uint64_t sec_err:1;
		uint64_t ded_err:1;
		uint64_t fsyn:6;
		uint64_t fadr:8;
		uint64_t reserved_19_20:2;
		uint64_t fset:2;
		uint64_t reserved_23_23:1;
		uint64_t lckerr:1;
		uint64_t lck_intena:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena2:1;
		uint64_t reserved_28_63:36;
#endif
	} cn30xx;
	struct cvmx_l2t_err_cn31xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t lck_intena2:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena:1;
		uint64_t lckerr:1;
		uint64_t reserved_23_23:1;
		uint64_t fset:2;
		uint64_t reserved_20_20:1;
		uint64_t fadr:9;
		uint64_t fsyn:6;
		uint64_t ded_err:1;
		uint64_t sec_err:1;
		uint64_t ded_intena:1;
		uint64_t sec_intena:1;
		uint64_t ecc_ena:1;
#else
		uint64_t ecc_ena:1;
		uint64_t sec_intena:1;
		uint64_t ded_intena:1;
		uint64_t sec_err:1;
		uint64_t ded_err:1;
		uint64_t fsyn:6;
		uint64_t fadr:9;
		uint64_t reserved_20_20:1;
		uint64_t fset:2;
		uint64_t reserved_23_23:1;
		uint64_t lckerr:1;
		uint64_t lck_intena:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena2:1;
		uint64_t reserved_28_63:36;
#endif
	} cn31xx;
	struct cvmx_l2t_err_cn38xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t lck_intena2:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena:1;
		uint64_t lckerr:1;
		uint64_t fset:3;
		uint64_t fadr:10;
		uint64_t fsyn:6;
		uint64_t ded_err:1;
		uint64_t sec_err:1;
		uint64_t ded_intena:1;
		uint64_t sec_intena:1;
		uint64_t ecc_ena:1;
#else
		uint64_t ecc_ena:1;
		uint64_t sec_intena:1;
		uint64_t ded_intena:1;
		uint64_t sec_err:1;
		uint64_t ded_err:1;
		uint64_t fsyn:6;
		uint64_t fadr:10;
		uint64_t fset:3;
		uint64_t lckerr:1;
		uint64_t lck_intena:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena2:1;
		uint64_t reserved_28_63:36;
#endif
	} cn38xx;
	struct cvmx_l2t_err_cn38xx cn38xxp2;
	struct cvmx_l2t_err_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t lck_intena2:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena:1;
		uint64_t lckerr:1;
		uint64_t fset:3;
		uint64_t reserved_18_20:3;
		uint64_t fadr:7;
		uint64_t fsyn:6;
		uint64_t ded_err:1;
		uint64_t sec_err:1;
		uint64_t ded_intena:1;
		uint64_t sec_intena:1;
		uint64_t ecc_ena:1;
#else
		uint64_t ecc_ena:1;
		uint64_t sec_intena:1;
		uint64_t ded_intena:1;
		uint64_t sec_err:1;
		uint64_t ded_err:1;
		uint64_t fsyn:6;
		uint64_t fadr:7;
		uint64_t reserved_18_20:3;
		uint64_t fset:3;
		uint64_t lckerr:1;
		uint64_t lck_intena:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena2:1;
		uint64_t reserved_28_63:36;
#endif
	} cn50xx;
	struct cvmx_l2t_err_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t lck_intena2:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena:1;
		uint64_t lckerr:1;
		uint64_t fset:3;
		uint64_t reserved_20_20:1;
		uint64_t fadr:9;
		uint64_t fsyn:6;
		uint64_t ded_err:1;
		uint64_t sec_err:1;
		uint64_t ded_intena:1;
		uint64_t sec_intena:1;
		uint64_t ecc_ena:1;
#else
		uint64_t ecc_ena:1;
		uint64_t sec_intena:1;
		uint64_t ded_intena:1;
		uint64_t sec_err:1;
		uint64_t ded_err:1;
		uint64_t fsyn:6;
		uint64_t fadr:9;
		uint64_t reserved_20_20:1;
		uint64_t fset:3;
		uint64_t lckerr:1;
		uint64_t lck_intena:1;
		uint64_t lckerr2:1;
		uint64_t lck_intena2:1;
		uint64_t reserved_28_63:36;
#endif
	} cn52xx;
	struct cvmx_l2t_err_cn52xx cn52xxp1;
	struct cvmx_l2t_err_s cn56xx;
	struct cvmx_l2t_err_s cn56xxp1;
	struct cvmx_l2t_err_s cn58xx;
	struct cvmx_l2t_err_s cn58xxp1;
};

#endif
Tue Jul 19 12:38:35 PDT 2016
Fri Jul 22 15:46:43 PDT 2016
Sun, Jul 24, 2016  2:19:40 PM
Mon, Jul 25, 2016  8:50:58 PM
