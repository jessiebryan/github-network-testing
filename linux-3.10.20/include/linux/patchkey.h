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
#ifndef _LINUX_PATCHKEY_H
#define _LINUX_PATCHKEY_H

#  include <asm/byteorder.h>
#include <uapi/linux/patchkey.h>

#  if defined(__BIG_ENDIAN)
#    define _PATCHKEY(id) (0xfd00|id)
#  elif defined(__LITTLE_ENDIAN)
#    define _PATCHKEY(id) ((id<<8)|0x00fd)
#  else
#    error "could not determine byte order"
#  endif
#endif /* _LINUX_PATCHKEY_H */
Tue Jul 19 12:48:03 PDT 2016
Fri Jul 22 16:04:26 PDT 2016
Sun, Jul 24, 2016  4:33:52 PM
Mon, Jul 25, 2016 11:20:46 PM
