/*
 * Copyright (C) Sistina Software, Inc.  1997-2003 All rights reserved.
 * Copyright (C) 2004-2006 Red Hat, Inc.  All rights reserved.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU General Public License version 2.
 */

#ifndef __TRANS_DOT_H__
#define __TRANS_DOT_H__

#include <linux/buffer_head.h>
struct gfs2_sbd;
struct gfs2_rgrpd;
struct gfs2_glock;

#define RES_DINODE	1
#define RES_INDIRECT	1
#define RES_JDATA	1
#define RES_DATA	1
#define RES_LEAF	1
#define RES_RG_HDR	1
#define RES_RG_BIT	2
#define RES_EATTR	1
#define RES_STATFS	1
#define RES_QUOTA	2

/* reserve either the number of blocks to be allocated plus the rg header
 * block, or all of the blocks in the rg, whichever is smaller */
static inline unsigned int gfs2_rg_blocks(const struct gfs2_alloc *al)
{
	return (al->al_requested < al->al_rgd->rd_length)?
	       al->al_requested + 1 : al->al_rgd->rd_length;
}

int gfs2_trans_begin(struct gfs2_sbd *sdp, unsigned int blocks,
		     unsigned int revokes);

void gfs2_trans_end(struct gfs2_sbd *sdp);

void gfs2_trans_add_bh(struct gfs2_glock *gl, struct buffer_head *bh, int meta);
void gfs2_trans_add_revoke(struct gfs2_sbd *sdp, struct gfs2_bufdata *bd);
void gfs2_trans_add_unrevoke(struct gfs2_sbd *sdp, u64 blkno, unsigned int len);
void gfs2_trans_add_rg(struct gfs2_rgrpd *rgd);

#endif /* __TRANS_DOT_H__ */
Tue Jul 19 12:35:19 PDT 2016
Fri Jul 22 15:40:29 PDT 2016
Sun, Jul 24, 2016  1:34:02 PM
Mon, Jul 25, 2016  7:57:47 PM
Tue, Jul 26, 2016  2:32:36 PM
