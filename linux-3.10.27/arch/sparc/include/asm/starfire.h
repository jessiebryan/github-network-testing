/*
 * starfire.h: Group all starfire specific code together.
 *
 * Copyright (C) 2000 Anton Blanchard (anton@samba.org)
 */

#ifndef _SPARC64_STARFIRE_H
#define _SPARC64_STARFIRE_H

#ifndef __ASSEMBLY__

extern int this_is_starfire;

extern void check_if_starfire(void);
extern int starfire_hard_smp_processor_id(void);
extern void starfire_hookup(int);
extern unsigned int starfire_translate(unsigned long imap, unsigned int upaid);

#endif
#endif
Tue Jul 19 12:52:17 PDT 2016
Fri Jul 22 16:12:32 PDT 2016
Sun, Jul 24, 2016  5:34:45 PM
Tue, Jul 26, 2016 12:28:10 AM
