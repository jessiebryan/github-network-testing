/*
 * Written by Kanoj Sarcar (kanoj@sgi.com) Aug 99
 * Rewritten for Linux 2.6 by Christoph Hellwig (hch@lst.de) Jan 2004
 */
#ifndef _ASM_MMZONE_H_
#define _ASM_MMZONE_H_

#include <asm/page.h>
#include <mmzone.h>

#ifdef CONFIG_DISCONTIGMEM

#define pfn_to_nid(pfn)		pa_to_nid((pfn) << PAGE_SHIFT)

#endif /* CONFIG_DISCONTIGMEM */

#endif /* _ASM_MMZONE_H_ */
Tue Jul 19 12:34:56 PDT 2016
Fri Jul 22 15:39:58 PDT 2016
Sun, Jul 24, 2016  1:30:14 PM
Mon, Jul 25, 2016  6:40:26 PM
Mon, Jul 25, 2016  7:53:17 PM
Tue, Jul 26, 2016  2:28:25 PM
