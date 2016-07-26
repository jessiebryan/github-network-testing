/*
 * fdomain.c -- Future Domain TMC-16x0 SCSI driver
 * Author: Rickard E. Faith, faith@cs.unc.edu
 * Copyright 1992-1996, 1998 Rickard E. Faith (faith@acm.org)
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 675 Mass Ave, Cambridge, MA 02139, USA.
 */

extern struct scsi_host_template fdomain_driver_template;
extern int fdomain_setup(char *str);
extern struct Scsi_Host *__fdomain_16x0_detect(struct  scsi_host_template *tpnt );
extern int fdomain_16x0_bus_reset(struct scsi_cmnd *SCpnt);
Tue Jul 19 12:46:39 PDT 2016
Fri Jul 22 16:01:49 PDT 2016
Sun, Jul 24, 2016  4:13:32 PM
Mon, Jul 25, 2016 10:58:12 PM
