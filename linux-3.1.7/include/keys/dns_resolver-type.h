/* DNS resolver key type
 *
 * Copyright (C) 2010 Wang Lei. All Rights Reserved.
 * Written by Wang Lei (wang840925@gmail.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef _KEYS_DNS_RESOLVER_TYPE_H
#define _KEYS_DNS_RESOLVER_TYPE_H

#include <linux/key-type.h>

extern struct key_type key_type_dns_resolver;

extern int request_dns_resolver_key(const char *description,
				    const char *callout_info,
				    char **data);

#endif /* _KEYS_DNS_RESOLVER_TYPE_H */
Tue Jul 19 12:37:03 PDT 2016
Fri Jul 22 15:43:53 PDT 2016
Sun, Jul 24, 2016  1:59:05 PM
Mon, Jul 25, 2016  8:27:23 PM
