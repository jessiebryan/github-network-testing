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
Tue Jul 19 12:46:14 PDT 2016
Fri Jul 22 16:01:02 PDT 2016
Sun, Jul 24, 2016  4:07:38 PM
Mon, Jul 25, 2016 10:51:38 PM
