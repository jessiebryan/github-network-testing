#ifndef __NOUVEAU_OPTION_H__
#define __NOUVEAU_OPTION_H__

#include <core/os.h>

const char *nouveau_stropt(const char *optstr, const char *opt, int *len);
bool nouveau_boolopt(const char *optstr, const char *opt, bool value);

int nouveau_dbgopt(const char *optstr, const char *sub);

#endif
Tue Jul 19 12:44:03 PDT 2016
Fri Jul 22 15:56:54 PDT 2016
Sun, Jul 24, 2016  3:35:13 PM
Mon, Jul 25, 2016 10:15:36 PM
