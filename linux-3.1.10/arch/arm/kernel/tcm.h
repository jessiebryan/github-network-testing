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
Tue Jul 19 12:33:12 PDT 2016
Fri Jul 22 15:37:29 PDT 2016
Sun, Jul 24, 2016  1:11:38 PM
Mon, Jul 25, 2016  6:18:11 PM
Mon, Jul 25, 2016  7:31:29 PM
Tue, Jul 26, 2016  2:07:44 PM
