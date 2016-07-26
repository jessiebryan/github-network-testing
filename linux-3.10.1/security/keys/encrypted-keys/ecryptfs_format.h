/*
 * ecryptfs_format.h: helper functions for the encrypted key type
 *
 * Copyright (C) 2006 International Business Machines Corp.
 * Copyright (C) 2010 Politecnico di Torino, Italy
 *                    TORSEC group -- http://security.polito.it
 *
 * Authors:
 * Michael A. Halcrow <mahalcro@us.ibm.com>
 * Tyler Hicks <tyhicks@ou.edu>
 * Roberto Sassu <roberto.sassu@polito.it>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 of the License.
 */

#ifndef __KEYS_ECRYPTFS_H
#define __KEYS_ECRYPTFS_H

#include <linux/ecryptfs.h>

#define PGP_DIGEST_ALGO_SHA512   10

u8 *ecryptfs_get_auth_tok_key(struct ecryptfs_auth_tok *auth_tok);
void ecryptfs_get_versions(int *major, int *minor, int *file_version);
int ecryptfs_fill_auth_tok(struct ecryptfs_auth_tok *auth_tok,
			   const char *key_desc);

#endif /* __KEYS_ECRYPTFS_H */
Tue Jul 19 12:39:02 PDT 2016
Fri Jul 22 15:47:36 PDT 2016
Sun, Jul 24, 2016  2:26:14 PM
Mon, Jul 25, 2016  8:58:17 PM
