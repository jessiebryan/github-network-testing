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
Tue Jul 19 12:45:18 PDT 2016
Fri Jul 22 15:59:15 PDT 2016
Sun, Jul 24, 2016  3:53:31 PM
Mon, Jul 25, 2016 10:35:56 PM
