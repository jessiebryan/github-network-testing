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


extern void cb_out_1(struct pcbit_dev *dev, struct pcbit_chan *chan,
		     struct callb_data *data);

extern void cb_out_2(struct pcbit_dev *dev, struct pcbit_chan *chan,
		     struct callb_data *data);

extern void cb_in_1(struct pcbit_dev *dev, struct pcbit_chan *chan,
		    struct callb_data *data);
extern void cb_in_2(struct pcbit_dev *dev, struct pcbit_chan *chan,
		    struct callb_data *data);
extern void cb_in_3(struct pcbit_dev *dev, struct pcbit_chan *chan,
		    struct callb_data *data);

extern void cb_disc_1(struct pcbit_dev *dev, struct pcbit_chan *chan,
		      struct callb_data *data);
extern void cb_disc_2(struct pcbit_dev *dev, struct pcbit_chan *chan,
		      struct callb_data *data);
extern void cb_disc_3(struct pcbit_dev *dev, struct pcbit_chan *chan,
		      struct callb_data *data);

extern void cb_notdone(struct pcbit_dev *dev, struct pcbit_chan *chan,
		       struct callb_data *data);

extern void cb_selp_1(struct pcbit_dev *dev, struct pcbit_chan *chan,
		      struct callb_data *data);
extern void cb_open(struct pcbit_dev *dev, struct pcbit_chan *chan,
		    struct callb_data *data);

#endif
Tue Jul 19 12:53:40 PDT 2016
Fri Jul 22 16:15:12 PDT 2016
Sun, Jul 24, 2016  5:54:29 PM
Tue, Jul 26, 2016 12:49:57 AM
