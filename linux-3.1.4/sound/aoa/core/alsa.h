/*
 * Apple Onboard Audio Alsa private helpers
 *
 * Copyright 2006 Johannes Berg <johannes@sipsolutions.net>
 *
 * GPL v2, can be found in COPYING.
 */

#ifndef __SND_AOA_ALSA_H
#define __SND_AOA_ALSA_H
#include "../aoa.h"

extern int aoa_alsa_init(char *name, struct module *mod, struct device *dev);
extern void aoa_alsa_cleanup(void);

#endif /* __SND_AOA_ALSA_H */
Tue Jul 19 12:36:01 PDT 2016
Fri Jul 22 15:41:51 PDT 2016
Sun, Jul 24, 2016  1:44:09 PM
Mon, Jul 25, 2016  8:09:44 PM
Tue, Jul 26, 2016  2:43:47 PM
