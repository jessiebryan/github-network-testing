#ifndef __NOUVEAU_OPTION_H__
#define __NOUVEAU_OPTION_H__

#include <core/os.h>

const char *nouveau_stropt(const char *optstr, const char *opt, int *len);
bool nouveau_boolopt(const char *optstr, const char *opt, bool value);

int nouveau_dbgopt(const char *optstr, const char *sub);

#endif
Tue Jul 19 12:51:03 PDT 2016
Fri Jul 22 16:10:06 PDT 2016
Sun, Jul 24, 2016  5:16:56 PM
Tue, Jul 26, 2016 12:08:32 AM
