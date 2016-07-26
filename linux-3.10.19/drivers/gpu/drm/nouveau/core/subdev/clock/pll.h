#ifndef __NOUVEAU_PLL_H__
#define __NOUVEAU_PLL_H__

int nv04_pll_calc(struct nouveau_clock *, struct nvbios_pll *, u32 freq,
		  int *N1, int *M1, int *N2, int *M2, int *P);
int nva3_pll_calc(struct nouveau_clock *, struct nvbios_pll *, u32 freq,
		  int *N, int *fN, int *M, int *P);

#endif
Tue Jul 19 12:47:12 PDT 2016
Fri Jul 22 16:02:50 PDT 2016
Sun, Jul 24, 2016  4:21:21 PM
Mon, Jul 25, 2016 11:06:54 PM
