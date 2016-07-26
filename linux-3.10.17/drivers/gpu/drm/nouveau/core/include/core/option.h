#ifndef __NOUVEAU_OPTION_H__
#define __NOUVEAU_OPTION_H__

#include <core/os.h>

const char *nouveau_stropt(const char *optstr, const char *opt, int *len);
bool nouveau_boolopt(const char *optstr, const char *opt, bool value);

int nouveau_dbgopt(const char *optstr, const char *sub);

#endif
Tue Jul 19 12:45:55 PDT 2016
Fri Jul 22 16:00:26 PDT 2016
Sun, Jul 24, 2016  4:02:54 PM
Mon, Jul 25, 2016 10:46:23 PM
