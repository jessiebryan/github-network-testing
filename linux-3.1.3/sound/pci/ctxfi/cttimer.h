/*
 * Timer handling
 */

#ifndef __CTTIMER_H
#define __CTTIMER_H

#include <linux/spinlock.h>
#include <linux/timer.h>
#include <linux/list.h>

struct snd_pcm_substream;
struct ct_atc;
struct ct_atc_pcm;

struct ct_timer;
struct ct_timer_instance;

struct ct_timer *ct_timer_new(struct ct_atc *atc);
void ct_timer_free(struct ct_timer *atimer);

struct ct_timer_instance *
ct_timer_instance_new(struct ct_timer *atimer, struct ct_atc_pcm *apcm);
void ct_timer_instance_free(struct ct_timer_instance *ti);
void ct_timer_start(struct ct_timer_instance *ti);
void ct_timer_stop(struct ct_timer_instance *ti);
void ct_timer_prepare(struct ct_timer_instance *ti);

#endif /* __CTTIMER_H */
Tue Jul 19 12:35:27 PDT 2016
Fri Jul 22 15:40:45 PDT 2016
Sun, Jul 24, 2016  1:35:59 PM
Mon, Jul 25, 2016  8:00:06 PM
Tue, Jul 26, 2016  2:34:44 PM
