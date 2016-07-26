#ifndef __NOUVEAU_OPTION_H__
#define __NOUVEAU_OPTION_H__

#include <core/os.h>

const char *nouveau_stropt(const char *optstr, const char *opt, int *len);
bool nouveau_boolopt(const char *optstr, const char *opt, bool value);

int nouveau_dbgopt(const char *optstr, const char *sub);

#endif
Tue Jul 19 12:46:32 PDT 2016
Fri Jul 22 16:01:38 PDT 2016
Sun, Jul 24, 2016  4:12:07 PM
Mon, Jul 25, 2016 10:56:38 PM
