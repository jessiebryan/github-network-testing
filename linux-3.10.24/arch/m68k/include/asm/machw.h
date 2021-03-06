/*
** linux/machw.h -- This header defines some macros and pointers for
**                    the various Macintosh custom hardware registers.
**
** Copyright 1997 by Michael Schmitz
**
** This file is subject to the terms and conditions of the GNU General Public
** License.  See the file COPYING in the main directory of this archive
** for more details.
**
*/

#ifndef _ASM_MACHW_H_
#define _ASM_MACHW_H_

/*
 * head.S maps the videomem to VIDEOMEMBASE
 */

#define VIDEOMEMBASE	0xf0000000
#define VIDEOMEMSIZE	(4096*1024)
#define VIDEOMEMMASK	(-4096*1024)

#endif /* linux/machw.h */
Tue Jul 19 12:50:14 PDT 2016
Fri Jul 22 16:08:33 PDT 2016
Sun, Jul 24, 2016  5:05:17 PM
Mon, Jul 25, 2016 11:55:37 PM
