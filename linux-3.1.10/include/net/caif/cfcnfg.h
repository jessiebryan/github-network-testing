/*
 * Copyright (C) ST-Ericsson AB 2010
 * Author:	Sjur Brendeland/sjur.brandeland@stericsson.com
 * License terms: GNU General Public License (GPL) version 2
 */

#ifndef CFCNFG_H_
#define CFCNFG_H_
#include <linux/spinlock.h>
#include <linux/netdevice.h>
#include <net/caif/caif_layer.h>
#include <net/caif/cfctrl.h>

struct cfcnfg;

/**
 * enum cfcnfg_phy_type -  Types of physical layers defined in CAIF Stack
 *
 * @CFPHYTYPE_FRAG:	Fragmented frames physical interface.
 * @CFPHYTYPE_CAIF:	Generic CAIF physical interface
 */
enum cfcnfg_phy_type {
	CFPHYTYPE_FRAG = 1,
	CFPHYTYPE_CAIF,
	CFPHYTYPE_MAX
};

/**
 * enum cfcnfg_phy_preference - Physical preference HW Abstraction
 *
 * @CFPHYPREF_UNSPECIFIED:	Default physical interface
 *
 * @CFPHYPREF_LOW_LAT:		Default physical interface for low-latency
 *				traffic
 * @CFPHYPREF_HIGH_BW:		Default physical interface for high-bandwidth
 *				traffic
 * @CFPHYPREF_LOOP:		TEST only Loopback interface simulating modem
 *				responses.
 *
 */
enum cfcnfg_phy_preference {
	CFPHYPREF_UNSPECIFIED,
	CFPHYPREF_LOW_LAT,
	CFPHYPREF_HIGH_BW,
	CFPHYPREF_LOOP
};

/**
 * cfcnfg_create() - Get the CAIF configuration object given network.
 * @net:	Network for the CAIF configuration object.
 */
struct cfcnfg *get_cfcnfg(struct net *net);

/**
 * cfcnfg_create() - Create the CAIF configuration object.
 */
struct cfcnfg *cfcnfg_create(void);

/**
 * cfcnfg_remove() -  Remove the CFCNFG object
 * @cfg: config object
 */
void cfcnfg_remove(struct cfcnfg *cfg);

/**
 * cfcnfg_add_phy_layer() - Adds a physical layer to the CAIF stack.
 * @cnfg:	Pointer to a CAIF configuration object, created by
 *		cfcnfg_create().
 * @phy_type:	Specifies the type of physical interface, e.g.
 *			CFPHYTYPE_FRAG.
 * @dev:	Pointer to link layer device
 * @phy_layer:	Specify the physical layer. The transmit function
 *		MUST be set in the structure.
 * @pref:	The phy (link layer) preference.
 * @fcs:	Specify if checksum is used in CAIF Framing Layer.
 * @stx:	Specify if Start Of Frame eXtention is used.
 */

void
cfcnfg_add_phy_layer(struct cfcnfg *cnfg, enum cfcnfg_phy_type phy_type,
		     struct net_device *dev, struct cflayer *phy_layer,
		     enum cfcnfg_phy_preference pref,
		     bool fcs, bool stx);

/**
 * cfcnfg_del_phy_layer - Deletes an phy layer from the CAIF stack.
 *
 * @cnfg:	Pointer to a CAIF configuration object, created by
 *		cfcnfg_create().
 * @phy_layer:	Adaptation layer to be removed.
 */
int cfcnfg_del_phy_layer(struct cfcnfg *cnfg, struct cflayer *phy_layer);

/**
 * cfcnfg_set_phy_state() - Set the state of the physical interface device.
 * @cnfg:	Configuration object
 * @phy_layer:	Physical Layer representation
 * @up:	State of device
 */
int cfcnfg_set_phy_state(struct cfcnfg *cnfg, struct cflayer *phy_layer,
				bool up);

#endif				/* CFCNFG_H_ */
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:27 PDT 2016
Sun, Jul 24, 2016  1:18:54 PM
Mon, Jul 25, 2016  6:26:53 PM
Mon, Jul 25, 2016  7:40:01 PM
Tue, Jul 26, 2016  2:15:50 PM
