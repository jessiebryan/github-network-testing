#include <linux/types.h>

#define XT_CONNLABEL_MAXBIT 127
enum xt_connlabel_mtopts {
	XT_CONNLABEL_OP_INVERT = 1 << 0,
	XT_CONNLABEL_OP_SET    = 1 << 1,
};

struct xt_connlabel_mtinfo {
	__u16 bit;
	__u16 options;
};
Tue Jul 19 12:43:42 PDT 2016
Fri Jul 22 15:56:15 PDT 2016
Sun, Jul 24, 2016  3:30:18 PM
Mon, Jul 25, 2016 10:10:06 PM
