/*
 * Copyright (C) 2007 Ivo van Doorn
 * Copyright 2009 Johannes Berg <johannes@sipsolutions.net>
 */

/*
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 */

#ifndef __RFKILL_INPUT_H
#define __RFKILL_INPUT_H

/* core code */
void rfkill_switch_all(const enum rfkill_type type, bool blocked);
void rfkill_epo(void);
void rfkill_restore_states(void);
void rfkill_remove_epo_lock(void);
bool rfkill_is_epo_lock_active(void);
bool rfkill_get_global_sw_state(const enum rfkill_type type);

/* input handler */
int rfkill_handler_init(void);
void rfkill_handler_exit(void);

#endif /* __RFKILL_INPUT_H */
Tue Jul 19 12:53:19 PDT 2016
Fri Jul 22 16:14:33 PDT 2016
Sun, Jul 24, 2016  5:49:35 PM
Tue, Jul 26, 2016 12:44:29 AM
