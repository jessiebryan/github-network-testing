/* This is the single file included by all MPC8xx build options.
 * Since there are many different boards and no standard configuration,
 * we have a unique include file for each.  Rather than change every
 * file that has to include MPC8xx configuration, they all include
 * this one and the configuration switching is done here.
 */
#ifndef __CONFIG_8xx_DEFS
#define __CONFIG_8xx_DEFS

extern struct mpc8xx_pcmcia_ops m8xx_pcmcia_ops;

#endif /* __CONFIG_8xx_DEFS */
Tue Jul 19 12:42:39 PDT 2016
Fri Jul 22 15:54:21 PDT 2016
Sun, Jul 24, 2016  3:15:23 PM
Mon, Jul 25, 2016  9:53:33 PM
