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
Tue Jul 19 12:53:18 PDT 2016
Fri Jul 22 16:14:31 PDT 2016
Sun, Jul 24, 2016  5:49:18 PM
Tue, Jul 26, 2016 12:44:11 AM
