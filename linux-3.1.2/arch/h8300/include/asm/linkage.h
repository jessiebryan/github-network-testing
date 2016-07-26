#ifndef _H8300_LINKAGE_H
#define _H8300_LINKAGE_H

#undef SYMBOL_NAME_LABEL
#undef SYMBOL_NAME
#define SYMBOL_NAME_LABEL(_name_) _##_name_##:
#define SYMBOL_NAME(_name_) _##_name_
#endif
Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:46 PDT 2016
Sun, Jul 24, 2016  1:21:17 PM
Mon, Jul 25, 2016  6:29:44 PM
Mon, Jul 25, 2016  7:42:49 PM
Tue, Jul 26, 2016  2:18:31 PM
