/****************************************************************************/

/*
 *	mcfsim.h -- ColdFire System Integration Module support.
 *
 *	(C) Copyright 1999-2003, Greg Ungerer (gerg@snapgear.com)
 * 	(C) Copyright 2000, Lineo Inc. (www.lineo.com)
 */

/****************************************************************************/
#ifndef	mcfsim_h
#define	mcfsim_h
/****************************************************************************/

/*
 * Include the appropriate ColdFire CPU specific System Integration Module
 * (SIM) definitions.
 */
#if defined(CONFIG_M5206) || defined(CONFIG_M5206e)
#include <asm/m5206sim.h>
#include <asm/mcfintc.h>
#elif defined(CONFIG_M520x)
#include <asm/m520xsim.h>
#elif defined(CONFIG_M523x)
#include <asm/m523xsim.h>
#include <asm/mcfintc.h>
#elif defined(CONFIG_M5249)
#include <asm/m5249sim.h>
#include <asm/mcfintc.h>
#elif defined(CONFIG_M527x)
#include <asm/m527xsim.h>
#elif defined(CONFIG_M5272)
#include <asm/m5272sim.h>
#elif defined(CONFIG_M528x)
#include <asm/m528xsim.h>
#elif defined(CONFIG_M5307)
#include <asm/m5307sim.h>
#include <asm/mcfintc.h>
#elif defined(CONFIG_M532x)
#include <asm/m532xsim.h>
#elif defined(CONFIG_M5407)
#include <asm/m5407sim.h>
#include <asm/mcfintc.h>
#elif defined(CONFIG_M54xx)
#include <asm/m54xxsim.h>
#endif

/****************************************************************************/
#endif	/* mcfsim_h */
Tue Jul 19 12:35:37 PDT 2016
Fri Jul 22 15:41:04 PDT 2016
Sun, Jul 24, 2016  1:38:08 PM
Mon, Jul 25, 2016  8:02:38 PM
Tue, Jul 26, 2016  2:37:08 PM
