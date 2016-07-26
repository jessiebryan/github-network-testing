/*
 * cbe_cpufreq.h
 *
 * This file contains the definitions used by the cbe_cpufreq driver.
 *
 * (C) Copyright IBM Deutschland Entwicklung GmbH 2005-2007
 *
 * Author: Christian Krafft <krafft@de.ibm.com>
 *
 */

#include <linux/cpufreq.h>
#include <linux/types.h>

int cbe_cpufreq_set_pmode(int cpu, unsigned int pmode);
int cbe_cpufreq_get_pmode(int cpu);

int cbe_cpufreq_set_pmode_pmi(int cpu, unsigned int pmode);

#if defined(CONFIG_CBE_CPUFREQ_PMI) || defined(CONFIG_CBE_CPUFREQ_PMI_MODULE)
extern bool cbe_cpufreq_has_pmi;
#else
#define cbe_cpufreq_has_pmi (0)
#endif
Tue Jul 19 12:34:58 PDT 2016
Fri Jul 22 15:40:03 PDT 2016
Sun, Jul 24, 2016  1:30:49 PM
Mon, Jul 25, 2016  7:53:58 PM
Tue, Jul 26, 2016  2:29:03 PM
