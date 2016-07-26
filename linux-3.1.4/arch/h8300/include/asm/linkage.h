#ifndef _H8300_LINKAGE_H
#define _H8300_LINKAGE_H

#undef SYMBOL_NAME_LABEL
#undef SYMBOL_NAME
#define SYMBOL_NAME_LABEL(_name_) _##_name_##:
#define SYMBOL_NAME(_name_) _##_name_
#endif
Tue Jul 19 12:35:35 PDT 2016
Fri Jul 22 15:41:01 PDT 2016
Sun, Jul 24, 2016  1:37:48 PM
Mon, Jul 25, 2016  8:02:15 PM
Tue, Jul 26, 2016  2:36:46 PM
