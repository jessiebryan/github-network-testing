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
Tue Jul 19 12:46:00 PDT 2016
Fri Jul 22 16:00:36 PDT 2016
Sun, Jul 24, 2016  4:04:10 PM
Mon, Jul 25, 2016 10:47:46 PM
