/*
 * Hardware parameter area specific to Sharp SL series devices
 *
 * Copyright (c) 2005 Richard Purdie
 *
 * Based on Sharp's 2.4 kernel patches
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

struct sharpsl_param_info {
  unsigned int comadj_keyword;
  unsigned int comadj;

  unsigned int uuid_keyword;
  unsigned char uuid[16];

  unsigned int touch_keyword;
  unsigned int touch_xp;
  unsigned int touch_yp;
  unsigned int touch_xd;
  unsigned int touch_yd;

  unsigned int adadj_keyword;
  unsigned int adadj;

  unsigned int phad_keyword;
  unsigned int phadadj;
} __attribute__((packed));


extern struct sharpsl_param_info sharpsl_param;
extern void sharpsl_save_param(void);

Tue Jul 19 12:50:46 PDT 2016
Fri Jul 22 16:09:33 PDT 2016
Sun, Jul 24, 2016  5:12:56 PM
Tue, Jul 26, 2016 12:04:05 AM
