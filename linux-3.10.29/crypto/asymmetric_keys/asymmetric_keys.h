/* Internal definitions for asymmetric key type
 *
 * Copyright (C) 2012 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */

static inline const char *asymmetric_key_id(const struct key *key)
{
	return key->type_data.p[1];
}
Tue Jul 19 12:53:38 PDT 2016
Fri Jul 22 16:15:08 PDT 2016
Sun, Jul 24, 2016  5:54:01 PM
Tue, Jul 26, 2016 12:49:26 AM
