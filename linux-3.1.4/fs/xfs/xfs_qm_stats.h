/*
 * Copyright (c) 2002 Silicon Graphics, Inc.
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
#ifndef __XFS_QM_STATS_H__
#define __XFS_QM_STATS_H__

#if defined(CONFIG_PROC_FS) && !defined(XFS_STATS_OFF)

/*
 * XQM global statistics
 */
struct xqmstats {
	__uint32_t		xs_qm_dqreclaims;
	__uint32_t		xs_qm_dqreclaim_misses;
	__uint32_t		xs_qm_dquot_dups;
	__uint32_t		xs_qm_dqcachemisses;
	__uint32_t		xs_qm_dqcachehits;
	__uint32_t		xs_qm_dqwants;
	__uint32_t		xs_qm_dqshake_reclaims;
	__uint32_t		xs_qm_dqinact_reclaims;
};

extern struct xqmstats xqmstats;

# define XQM_STATS_INC(count)	( (count)++ )

extern void xfs_qm_init_procfs(void);
extern void xfs_qm_cleanup_procfs(void);

#else

# define XQM_STATS_INC(count)	do { } while (0)

static inline void xfs_qm_init_procfs(void) { };
static inline void xfs_qm_cleanup_procfs(void) { };

#endif

#endif	/* __XFS_QM_STATS_H__ */
Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:38 PDT 2016
Sun, Jul 24, 2016  1:42:26 PM
Mon, Jul 25, 2016  8:07:43 PM
Tue, Jul 26, 2016  2:41:54 PM
