#ifndef __LINUX_RAW_H
#define __LINUX_RAW_H

#include <linux/types.h>

#define RAW_SETBIND	_IO( 0xac, 0 )
#define RAW_GETBIND	_IO( 0xac, 1 )

struct raw_config_request 
{
	int	raw_minor;
	__u64	block_major;
	__u64	block_minor;
};

#define MAX_RAW_MINORS CONFIG_MAX_RAW_DEVS

#endif /* __LINUX_RAW_H */
Tue Jul 19 12:33:41 PDT 2016
Fri Jul 22 15:38:24 PDT 2016
Sun, Jul 24, 2016  1:18:34 PM
Mon, Jul 25, 2016  6:26:29 PM
Mon, Jul 25, 2016  7:39:37 PM
