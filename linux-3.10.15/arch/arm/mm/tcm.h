/*
 * Copyright (C) 2008-2009 ST-Ericsson AB
 * License terms: GNU General Public License (GPL) version 2
 * TCM memory handling for ARM systems
 *
 * Author: Linus Walleij <linus.walleij@stericsson.com>
 * Author: Rickard Andersson <rickard.andersson@stericsson.com>
 */

#ifdef CONFIG_HAVE_TCM
void __init tcm_init(void);
#else
/* No TCM support, just blank inlines to be optimized out */
inline void tcm_init(void)
{
}
#endif
Tue Jul 19 12:44:27 PDT 2016
Fri Jul 22 15:57:40 PDT 2016
Sun, Jul 24, 2016  3:41:08 PM
Mon, Jul 25, 2016 10:22:07 PM
