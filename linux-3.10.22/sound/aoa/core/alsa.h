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
Tue Jul 19 12:49:27 PDT 2016
Fri Jul 22 16:07:02 PDT 2016
Sun, Jul 24, 2016  4:53:47 PM
Mon, Jul 25, 2016 11:42:58 PM
