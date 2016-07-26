#ifndef MIGRATE_MODE_H_INCLUDED
#define MIGRATE_MODE_H_INCLUDED
/*
 * MIGRATE_ASYNC means never block
 * MIGRATE_SYNC_LIGHT in the current implementation means to allow blocking
 *	on most operations but not ->writepage as the potential stall time
 *	is too significant
 * MIGRATE_SYNC will block when migrating pages
 */
enum migrate_mode {
	MIGRATE_ASYNC,
	MIGRATE_SYNC_LIGHT,
	MIGRATE_SYNC,
};

#endif		/* MIGRATE_MODE_H_INCLUDED */
Tue Jul 19 12:49:58 PDT 2016
Fri Jul 22 16:08:03 PDT 2016
Sun, Jul 24, 2016  5:01:27 PM
Mon, Jul 25, 2016 11:51:28 PM
