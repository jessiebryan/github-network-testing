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
Tue Jul 19 12:43:10 PDT 2016
Fri Jul 22 15:55:16 PDT 2016
Sun, Jul 24, 2016  3:22:40 PM
Mon, Jul 25, 2016 10:01:37 PM
