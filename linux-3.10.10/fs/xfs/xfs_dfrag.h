/*
 * Copyright (c) 2000,2005 Silicon Graphics, Inc.
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write the Free Software Foundation,
 * Inc.,  51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef __XFS_DFRAG_H__
#define	__XFS_DFRAG_H__

/*
 * Structure passed to xfs_swapext
 */

typedef struct xfs_swapext
{
	__int64_t	sx_version;	/* version */
	__int64_t	sx_fdtarget;	/* fd of target file */
	__int64_t	sx_fdtmp;	/* fd of tmp file */
	xfs_off_t	sx_offset;	/* offset into file */
	xfs_off_t	sx_length;	/* leng from offset */
	char		sx_pad[16];	/* pad space, unused */
	xfs_bstat_t	sx_stat;	/* stat of target b4 copy */
} xfs_swapext_t;

/*
 * Version flag
 */
#define XFS_SX_VERSION		0

#ifdef __KERNEL__
/*
 * Prototypes for visible xfs_dfrag.c routines.
 */

/*
 * Syscall interface for xfs_swapext
 */
int	xfs_swapext(struct xfs_swapext *sx);

#endif	/* __KERNEL__ */

#endif	/* __XFS_DFRAG_H__ */
Tue Jul 19 12:39:31 PDT 2016
Fri Jul 22 15:48:36 PDT 2016
Sun, Jul 24, 2016  2:33:11 PM
Mon, Jul 25, 2016  9:06:01 PM
