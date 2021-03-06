/*
 * dcookies.h
 *
 * Persistent cookie-path mappings
 *
 * Copyright 2002 John Levon <levon@movementarian.org>
 */

#ifndef DCOOKIES_H
#define DCOOKIES_H
 

#ifdef CONFIG_PROFILING
 
#include <linux/dcache.h>
#include <linux/types.h>
 
struct dcookie_user;
struct path;
 
/**
 * dcookie_register - register a user of dcookies
 *
 * Register as a dcookie user. Returns %NULL on failure.
 */
struct dcookie_user * dcookie_register(void);

/**
 * dcookie_unregister - unregister a user of dcookies
 *
 * Unregister as a dcookie user. This may invalidate
 * any dcookie values returned from get_dcookie().
 */
void dcookie_unregister(struct dcookie_user * user);
  
/**
 * get_dcookie - acquire a dcookie
 *
 * Convert the given dentry/vfsmount pair into
 * a cookie value.
 *
 * Returns -EINVAL if no living task has registered as a
 * dcookie user.
 *
 * Returns 0 on success, with *cookie filled in
 */
int get_dcookie(struct path *path, unsigned long *cookie);

#else

static inline struct dcookie_user * dcookie_register(void)
{
	return NULL;
}

static inline void dcookie_unregister(struct dcookie_user * user)
{
	return;
}

static inline int get_dcookie(struct path *path, unsigned long *cookie)
{
	return -ENOSYS;
}

#endif /* CONFIG_PROFILING */

#endif /* DCOOKIES_H */
Tue Jul 19 12:53:12 PDT 2016
Fri Jul 22 16:14:18 PDT 2016
Sun, Jul 24, 2016  5:47:40 PM
Tue, Jul 26, 2016 12:42:23 AM
