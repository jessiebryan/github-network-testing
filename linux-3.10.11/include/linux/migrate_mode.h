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
Tue Jul 19 12:42:19 PDT 2016
Fri Jul 22 15:53:45 PDT 2016
Sun, Jul 24, 2016  3:10:44 PM
Mon, Jul 25, 2016  9:48:16 PM
