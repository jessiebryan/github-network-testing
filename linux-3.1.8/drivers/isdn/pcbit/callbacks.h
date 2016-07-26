/*
 * Callbacks prototypes for FSM
 *
 * Copyright (C) 1996 Universidade de Lisboa
 * 
 * Written by Pedro Roque Marques (roque@di.fc.ul.pt)
 *
 * This software may be used and distributed according to the terms of 
 * the GNU General Public License, incorporated herein by reference.
 */

#ifndef CALLBACKS_H
#define CALLBACKS_H


extern void cb_out_1(struct pcbit_dev * dev, struct pcbit_chan* chan, 
		     struct callb_data *data);

extern void cb_out_2(struct pcbit_dev * dev, struct pcbit_chan* chan, 
		     struct callb_data *data);

extern void cb_in_1(struct pcbit_dev * dev, struct pcbit_chan* chan, 
		    struct callb_data *data);
extern void cb_in_2(struct pcbit_dev * dev, struct pcbit_chan* chan, 
		    struct callb_data *data);
extern void cb_in_3(struct pcbit_dev * dev, struct pcbit_chan* chan, 
		    struct callb_data *data);

extern void cb_disc_1(struct pcbit_dev * dev, struct pcbit_chan* chan, 
		      struct callb_data *data);
extern void cb_disc_2(struct pcbit_dev * dev, struct pcbit_chan* chan, 
		      struct callb_data *data);
extern void cb_disc_3(struct pcbit_dev * dev, struct pcbit_chan* chan, 
		      struct callb_data *data);

extern void cb_notdone(struct pcbit_dev * dev, struct pcbit_chan* chan, 
		       struct callb_data *data);

extern void cb_selp_1(struct pcbit_dev * dev, struct pcbit_chan* chan, 
		      struct callb_data *data);
extern void cb_open(struct pcbit_dev * dev, struct pcbit_chan* chan, 
		    struct callb_data *data);

#endif


Tue Jul 19 12:37:30 PDT 2016
Fri Jul 22 15:44:43 PDT 2016
Sun, Jul 24, 2016  2:05:09 PM
Mon, Jul 25, 2016  8:34:37 PM
