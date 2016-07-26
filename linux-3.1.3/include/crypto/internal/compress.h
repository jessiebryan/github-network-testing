/*
 * Compress: Compression algorithms under the cryptographic API.
 *
 * Copyright 2008 Sony Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _CRYPTO_INTERNAL_COMPRESS_H
#define _CRYPTO_INTERNAL_COMPRESS_H

#include <crypto/compress.h>

extern int crypto_register_pcomp(struct pcomp_alg *alg);
extern int crypto_unregister_pcomp(struct pcomp_alg *alg);

#endif	/* _CRYPTO_INTERNAL_COMPRESS_H */
Tue Jul 19 12:35:21 PDT 2016
Fri Jul 22 15:40:31 PDT 2016
Sun, Jul 24, 2016  1:34:19 PM
Mon, Jul 25, 2016  7:58:07 PM
Tue, Jul 26, 2016  2:32:54 PM
