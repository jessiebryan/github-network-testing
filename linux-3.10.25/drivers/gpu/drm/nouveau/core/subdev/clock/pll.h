#ifndef __NOUVEAU_PLL_H__
#define __NOUVEAU_PLL_H__

int nv04_pll_calc(struct nouveau_clock *, struct nvbios_pll *, u32 freq,
		  int *N1, int *M1, int *N2, int *M2, int *P);
int nva3_pll_calc(struct nouveau_clock *, struct nvbios_pll *, u32 freq,
		  int *N, int *fN, int *M, int *P);

#endif
Tue Jul 19 12:51:03 PDT 2016
Fri Jul 22 16:10:07 PDT 2016
Sun, Jul 24, 2016  5:16:58 PM
Tue, Jul 26, 2016 12:08:34 AM
