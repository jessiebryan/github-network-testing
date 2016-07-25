/*
 * Copyright (C) 2006-2009 Red Hat, Inc.
 *
 * This file is released under the LGPL.
 */

#ifndef __DM_LOG_USERSPACE_TRANSFER_H__
#define __DM_LOG_USERSPACE_TRANSFER_H__

#define DM_MSG_PREFIX "dm-log-userspace"

int dm_ulog_tfr_init(void);
void dm_ulog_tfr_exit(void);
int dm_consult_userspace(const char *uuid, uint64_t luid, int request_type,
			 char *data, size_t data_size,
			 char *rdata, size_t *rdata_size);

#endif /* __DM_LOG_USERSPACE_TRANSFER_H__ */
Tue Jul 19 12:49:08 PDT 2016
Fri Jul 22 16:06:28 PDT 2016
Sun, Jul 24, 2016  4:49:22 PM
