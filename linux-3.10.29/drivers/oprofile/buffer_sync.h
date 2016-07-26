/**
 * @file buffer_sync.h
 *
 * @remark Copyright 2002 OProfile authors
 * @remark Read the file COPYING
 *
 * @author John Levon <levon@movementarian.org>
 */

#ifndef OPROFILE_BUFFER_SYNC_H
#define OPROFILE_BUFFER_SYNC_H

/* add the necessary profiling hooks */
int sync_start(void);

/* remove the hooks */
void sync_stop(void);

/* sync the given CPU's buffer */
void sync_buffer(int cpu);

#endif /* OPROFILE_BUFFER_SYNC_H */
Tue Jul 19 12:53:44 PDT 2016
Fri Jul 22 16:15:20 PDT 2016
Sun, Jul 24, 2016  5:55:27 PM
Tue, Jul 26, 2016 12:51:01 AM
