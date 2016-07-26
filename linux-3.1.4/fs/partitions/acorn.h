/*
 * linux/fs/partitions/acorn.h
 *
 * Copyright (C) 1996-2001 Russell King.
 *
 *  I _hate_ this partitioning mess - why can't we have one defined
 *  format, and everyone stick to it?
 */

int adfspart_check_CUMANA(struct parsed_partitions *state);
int adfspart_check_ADFS(struct parsed_partitions *state);
int adfspart_check_ICS(struct parsed_partitions *state);
int adfspart_check_POWERTEC(struct parsed_partitions *state);
int adfspart_check_EESOX(struct parsed_partitions *state);
Tue Jul 19 12:35:54 PDT 2016
Fri Jul 22 15:41:38 PDT 2016
Sun, Jul 24, 2016  1:42:23 PM
Mon, Jul 25, 2016  8:07:38 PM
Tue, Jul 26, 2016  2:41:50 PM
