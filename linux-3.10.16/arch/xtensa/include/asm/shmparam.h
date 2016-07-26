/*
 * include/asm-xtensa/shmparam.h
 *
 * This file is subject to the terms and conditions of the GNU General
 * Public License.  See the file "COPYING" in the main directory of
 * this archive for more details.
 */

#ifndef _XTENSA_SHMPARAM_H
#define _XTENSA_SHMPARAM_H

/*
 * Xtensa can have variable size caches, and if
 * the size of single way is larger than the page size,
 * then we have to start worrying about cache aliasing
 * problems.
 */

#define SHMLBA	((PAGE_SIZE > DCACHE_WAY_SIZE)? PAGE_SIZE : DCACHE_WAY_SIZE)

#endif /* _XTENSA_SHMPARAM_H */
Tue Jul 19 12:45:18 PDT 2016
Fri Jul 22 15:59:14 PDT 2016
Sun, Jul 24, 2016  3:53:27 PM
Mon, Jul 25, 2016 10:35:52 PM
