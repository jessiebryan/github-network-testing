#ifndef _XT_STRING_H
#define _XT_STRING_H

#include <linux/types.h>

#define XT_STRING_MAX_PATTERN_SIZE 128
#define XT_STRING_MAX_ALGO_NAME_SIZE 16

enum {
	XT_STRING_FLAG_INVERT		= 0x01,
	XT_STRING_FLAG_IGNORECASE	= 0x02
};

struct xt_string_info {
	__u16 from_offset;
	__u16 to_offset;
	char	  algo[XT_STRING_MAX_ALGO_NAME_SIZE];
	char 	  pattern[XT_STRING_MAX_PATTERN_SIZE];
	__u8  patlen;
	union {
		struct {
			__u8  invert;
		} v0;

		struct {
			__u8  flags;
		} v1;
	} u;

	/* Used internally by the kernel */
	struct ts_config __attribute__((aligned(8))) *config;
};

#endif /*_XT_STRING_H*/
Tue Jul 19 12:33:40 PDT 2016
Fri Jul 22 15:38:23 PDT 2016
Sun, Jul 24, 2016  1:18:26 PM
Mon, Jul 25, 2016  6:26:18 PM
Mon, Jul 25, 2016  7:39:27 PM
