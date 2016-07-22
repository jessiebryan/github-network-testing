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
Tue Jul 19 12:40:38 PDT 2016
Fri Jul 22 15:50:46 PDT 2016
