/*
 * <linux/patchkey.h> -- definition of _PATCHKEY macro
 *
 * Copyright (C) 2005 Stuart Brady
 *
 * This exists because awe_voice.h defined its own _PATCHKEY and it wasn't
 * clear whether removing this would break anything in userspace.
 *
 * Do not include this file directly.  Please use <sys/soundcard.h> instead.
 * For kernel code, use <linux/soundcard.h>
 */

#ifndef _LINUX_PATCHKEY_H_INDIRECT
#error "patchkey.h included directly"
#endif

#ifndef _LINUX_PATCHKEY_H
#define _LINUX_PATCHKEY_H

/* Endian macros. */
#ifdef __KERNEL__
#  include <asm/byteorder.h>
#else
#  include <endian.h>
#endif

#if defined(__KERNEL__)
#  if defined(__BIG_ENDIAN)
#    define _PATCHKEY(id) (0xfd00|id)
#  elif defined(__LITTLE_ENDIAN)
#    define _PATCHKEY(id) ((id<<8)|0x00fd)
#  else
#    error "could not determine byte order"
#  endif
#elif defined(__BYTE_ORDER)
#  if __BYTE_ORDER == __BIG_ENDIAN
#    define _PATCHKEY(id) (0xfd00|id)
#  elif __BYTE_ORDER == __LITTLE_ENDIAN
#    define _PATCHKEY(id) ((id<<8)|0x00fd)
#  else
#    error "could not determine byte order"
#  endif
#endif

#endif /* _LINUX_PATCHKEY_H */
Tue Jul 19 12:37:43 PDT 2016
Fri Jul 22 15:45:06 PDT 2016
Sun, Jul 24, 2016  2:08:00 PM
Mon, Jul 25, 2016  8:38:00 PM
