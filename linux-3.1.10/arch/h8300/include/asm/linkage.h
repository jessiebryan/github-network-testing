#ifndef _H8300_LINKAGE_H
#define _H8300_LINKAGE_H

#undef SYMBOL_NAME_LABEL
#undef SYMBOL_NAME
#define SYMBOL_NAME_LABEL(_name_) _##_name_##:
#define SYMBOL_NAME(_name_) _##_name_
#endif
Tue Jul 19 12:33:18 PDT 2016
Fri Jul 22 15:37:40 PDT 2016
Sun, Jul 24, 2016  1:13:03 PM
Mon, Jul 25, 2016  6:19:52 PM
Mon, Jul 25, 2016  7:33:07 PM
Tue, Jul 26, 2016  2:09:17 PM
