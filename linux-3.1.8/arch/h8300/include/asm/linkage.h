#ifndef _H8300_LINKAGE_H
#define _H8300_LINKAGE_H

#undef SYMBOL_NAME_LABEL
#undef SYMBOL_NAME
#define SYMBOL_NAME_LABEL(_name_) _##_name_##:
#define SYMBOL_NAME(_name_) _##_name_
#endif
Tue Jul 19 12:37:18 PDT 2016
Fri Jul 22 15:44:21 PDT 2016
Sun, Jul 24, 2016  2:02:33 PM
Mon, Jul 25, 2016  8:31:29 PM
