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
Tue Jul 19 12:48:07 PDT 2016
Fri Jul 22 16:04:34 PDT 2016
Sun, Jul 24, 2016  4:34:54 PM
Mon, Jul 25, 2016 11:21:54 PM
