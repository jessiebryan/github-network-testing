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
Tue Jul 19 12:46:19 PDT 2016
Fri Jul 22 16:01:11 PDT 2016
Sun, Jul 24, 2016  4:08:47 PM
Mon, Jul 25, 2016 10:52:54 PM
