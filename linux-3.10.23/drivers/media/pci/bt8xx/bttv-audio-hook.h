/*
 * Handlers for board audio hooks, splitted from bttv-cards
 *
 * Copyright (c) 2006 Mauro Carvalho Chehab (mchehab@infradead.org)
 * This code is placed under the terms of the GNU General Public License
 */

#include "bttvp.h"

void winview_volume (struct bttv *btv, __u16 volume);

void lt9415_audio(struct bttv *btv, struct v4l2_tuner *tuner, int set);
void avermedia_tvphone_audio(struct bttv *btv, struct v4l2_tuner *tuner, int set);
void avermedia_tv_stereo_audio(struct bttv *btv, struct v4l2_tuner *tuner, int set);
void terratv_audio(struct bttv *btv,  struct v4l2_tuner *tuner, int set);
void gvbctv3pci_audio(struct bttv *btv, struct v4l2_tuner *tuner, int set);
void gvbctv5pci_audio(struct bttv *btv, struct v4l2_tuner *tuner, int set);
void winfast2000_audio(struct bttv *btv, struct v4l2_tuner *tuner, int set);
void pvbt878p9b_audio(struct bttv *btv, struct v4l2_tuner *tuner, int set);
void fv2000s_audio(struct bttv *btv, struct v4l2_tuner *tuner, int set);
void windvr_audio(struct bttv *btv, struct v4l2_tuner *tuner, int set);
void adtvk503_audio(struct bttv *btv, struct v4l2_tuner *tuner, int set);

Tue Jul 19 12:49:47 PDT 2016
Fri Jul 22 16:07:42 PDT 2016
Sun, Jul 24, 2016  4:58:44 PM
Mon, Jul 25, 2016 11:48:28 PM
