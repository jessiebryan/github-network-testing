/*
 * Copyright IBM Corporation, 2010
 * Author Venkateswararao Jujjuri <jvrao@linux.vnet.ibm.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2.1 of the GNU Lesser General Public License
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

void p9_release_pages(struct page **, int);
int p9_payload_gup(char *, int *, struct page **, int);
int p9_nr_pages(char *, int);
Tue Jul 19 12:42:26 PDT 2016
Fri Jul 22 15:53:56 PDT 2016
Sun, Jul 24, 2016  3:12:10 PM
