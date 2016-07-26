#ifndef __NOUVEAU_OPTION_H__
#define __NOUVEAU_OPTION_H__

#include <core/os.h>

const char *nouveau_stropt(const char *optstr, const char *opt, int *len);
bool nouveau_boolopt(const char *optstr, const char *opt, bool value);

int nouveau_dbgopt(const char *optstr, const char *sub);

#endif
Tue Jul 19 12:40:38 PDT 2016
Fri Jul 22 15:50:48 PDT 2016
Sun, Jul 24, 2016  2:49:08 PM
Mon, Jul 25, 2016  9:23:55 PM
