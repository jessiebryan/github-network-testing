/******************************************************************************
 * features.h
 *
 * Query the features reported by Xen.
 *
 * Copyright (c) 2006, Ian Campbell
 */

#ifndef __XEN_FEATURES_H__
#define __XEN_FEATURES_H__

#include <xen/interface/features.h>

void xen_setup_features(void);

extern u8 xen_features[XENFEAT_NR_SUBMAPS * 32];

static inline int xen_feature(int flag)
{
	return xen_features[flag];
}

#endif /* __ASM_XEN_FEATURES_H__ */
Tue Jul 19 12:48:08 PDT 2016
Fri Jul 22 16:04:36 PDT 2016
Sun, Jul 24, 2016  4:35:07 PM
Mon, Jul 25, 2016 11:22:09 PM
