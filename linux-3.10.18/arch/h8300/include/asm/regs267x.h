/* internal Peripherals Register address define */
/* CPU: H8/306x                                 */

#if !defined(__REGS_H8S267x__)
#define __REGS_H8S267x__ 

#if defined(__KERNEL__)

#define DASTCR 0xFEE01A
#define DADR0  0xFFFFA4
#define DADR1  0xFFFFA5
#define DACR01 0xFFFFA6
#define DADR2  0xFFFFA8
#define DADR3  0xFFFFA9
#define DACR23 0xFFFFAA

#define ADDRA  0xFFFF90
#define ADDRAH 0xFFFF90
#define ADDRAL 0xFFFF91
#define ADDRB  0xFFFF92
#define ADDRBH 0xFFFF92
#define ADDRBL 0xFFFF93
#define ADDRC  0xFFFF94
#define ADDRCH 0xFFFF94
#define ADDRCL 0xFFFF95
#define ADDRD  0xFFFF96
#define ADDRDH 0xFFFF96
#define ADDRDL 0xFFFF97
#define ADDRE  0xFFFF98
#define ADDREH 0xFFFF98
#define ADDREL 0xFFFF99
#define ADDRF  0xFFFF9A
#define ADDRFH 0xFFFF9A
#define ADDRFL 0xFFFF9B
#define ADDRG  0xFFFF9C
#define ADDRGH 0xFFFF9C
#define ADDRGL 0xFFFF9D
#define ADDRH  0xFFFF9E
#define ADDRHH 0xFFFF9E
#define ADDRHL 0xFFFF9F

#define ADCSR  0xFFFFA0
#define ADCR   0xFFFFA1

#define ABWCR  0xFFFEC0
#define ASTCR  0xFFFEC1
#define WTCRAH 0xFFFEC2
#define WTCRAL 0xFFFEC3
#define WTCRBH 0xFFFEC4
#define WTCRBL 0xFFFEC5
#define RDNCR  0xFFFEC6
#define CSACRH 0xFFFEC8
#define CSACRL 0xFFFEC9
#define BROMCRH 0xFFFECA
#define BROMCRL 0xFFFECB
#define BCR    0xFFFECC
#define DRAMCR 0xFFFED0
#define DRACCR 0xFFFED2
#define REFCR  0xFFFED4
#define RTCNT  0xFFFED6
#define RTCOR  0xFFFED7

#define MAR0AH  0xFFFEE0
#define MAR0AL  0xFFFEE2
#define IOAR0A  0xFFFEE4
#define ETCR0A  0xFFFEE6
#define MAR0BH  0xFFFEE8
#define MAR0BL  0xFFFEEA
#define IOAR0B  0xFFFEEC
#define ETCR0B  0xFFFEEE
#define MAR1AH  0xFFFEF0
#define MAR1AL  0xFFFEF2
#define IOAR1A  0xFFFEF4
#define ETCR1A  0xFFFEF6
#define MAR1BH  0xFFFEF8
#define MAR1BL  0xFFFEFA
#define IOAR1B  0xFFFEFC
#define ETCR1B  0xFFFEFE
#define DMAWER  0xFFFF20
#define DMATCR  0xFFFF21
#define DMACR0A 0xFFFF22
#define DMACR0B 0xFFFF23
#define DMACR1A 0xFFFF24
#define DMACR1B 0xFFFF25
#define DMABCRH 0xFFFF26
#define DMABCRL 0xFFFF27

#define EDSAR0  0xFFFDC0
#define EDDAR0  0xFFFDC4
#define EDTCR0  0xFFFDC8
#define EDMDR0  0xFFFDCC
#define EDMDR0H 0xFFFDCC
#define EDMDR0L 0xFFFDCD
#define EDACR0  0xFFFDCE
#define EDSAR1  0xFFFDD0
#define EDDAR1  0xFFFDD4
#define EDTCR1  0xFFFDD8
#define EDMDR1  0xFFFDDC
#define EDMDR1H 0xFFFDDC
#define EDMDR1L 0xFFFDDD
#define EDACR1  0xFFFDDE
#define EDSAR2  0xFFFDE0
#define EDDAR2  0xFFFDE4
#define EDTCR2  0xFFFDE8
#define EDMDR2  0xFFFDEC
#define EDMDR2H 0xFFFDEC
#define EDMDR2L 0xFFFDED
#define EDACR2  0xFFFDEE
#define EDSAR3  0xFFFDF0
#define EDDAR3  0xFFFDF4
#define EDTCR3  0xFFFDF8
#define EDMDR3  0xFFFDFC
#define EDMDR3H 0xFFFDFC
#define EDMDR3L 0xFFFDFD
#define EDACR3  0xFFFDFE

#define IPRA  0xFFFE00
#define IPRB  0xFFFE02
#define IPRC  0xFFFE04
#define IPRD  0xFFFE06
#define IPRE  0xFFFE08
#define IPRF  0xFFFE0A
#define IPRG  0xFFFE0C
#define IPRH  0xFFFE0E
#define IPRI  0xFFFE10
#define IPRJ  0xFFFE12
#define IPRK  0xFFFE14
#define ITSR  0xFFFE16
#define SSIER 0xFFFE18
#define ISCRH 0xFFFE1A
#define ISCRL 0xFFFE1C

#define INTCR 0xFFFF31
#define IER   0xFFFF32
#define IERH  0xFFFF32
#define IERL  0xFFFF33
#define ISR   0xFFFF34
#define ISRH  0xFFFF34
#define ISRL  0xFFFF35

#define P1DDR 0xFFFE20
#define P2DDR 0xFFFE21
#define P3DDR 0xFFFE22
#define P4DDR 0xFFFE23
#define P5DDR 0xFFFE24
#define P6DDR 0xFFFE25
#define P7DDR 0xFFFE26
#define P8DDR 0xFFFE27
#define P9DDR 0xFFFE28
#define PADDR 0xFFFE29
#define PBDDR 0xFFFE2A
#define PCDDR 0xFFFE2B
#define PDDDR 0xFFFE2C
#define PEDDR 0xFFFE2D
#define PFDDR 0xFFFE2E
#define PGDDR 0xFFFE2F
#define PHDDR 0xFFFF74

#define PFCR0 0xFFFE32
#define PFCR1 0xFFFE33
#define PFCR2 0xFFFE34

#define PAPCR 0xFFFE36
#define PBPCR 0xFFFE37
#define PCPCR 0xFFFE38
#define PDPCR 0xFFFE39
#define PEPCR 0xFFFE3A

#define P3ODR 0xFFFE3C
#define PAODR 0xFFFE3D

#define P1DR  0xFFFF60
#define P2DR  0xFFFF61
#define P3DR  0xFFFF62
#define P4DR  0xFFFF63
#define P5DR  0xFFFF64
#define P6DR  0xFFFF65
#define P7DR  0xFFFF66
#define P8DR  0xFFFF67
#define P9DR  0xFFFF68
#define PADR  0xFFFF69
#define PBDR  0xFFFF6A
#define PCDR  0xFFFF6B
#define PDDR  0xFFFF6C
#define PEDR  0xFFFF6D
#define PFDR  0xFFFF6E
#define PGDR  0xFFFF6F
#define PHDR  0xFFFF72

#define PORT1 0xFFFF50
#define PORT2 0xFFFF51
#define PORT3 0xFFFF52
#define PORT4 0xFFFF53
#define PORT5 0xFFFF54
#define PORT6 0xFFFF55
#define PORT7 0xFFFF56
#define PORT8 0xFFFF57
#define PORT9 0xFFFF58
#define PORTA 0xFFFF59
#define PORTB 0xFFFF5A
#define PORTC 0xFFFF5B
#define PORTD 0xFFFF5C
#define PORTE 0xFFFF5D
#define PORTF 0xFFFF5E
#define PORTG 0xFFFF5F
#define PORTH 0xFFFF70

#define PCR   0xFFFF46
#define PMR   0xFFFF47
#define NDERH 0xFFFF48
#define NDERL 0xFFFF49
#define PODRH 0xFFFF4A
#define PODRL 0xFFFF4B
#define NDRH1 0xFFFF4C
#define NDRL1 0xFFFF4D
#define NDRH2 0xFFFF4E
#define NDRL2 0xFFFF4F

#define SMR0  0xFFFF78
#define BRR0  0xFFFF79
#define SCR0  0xFFFF7A
#define TDR0  0xFFFF7B
#define SSR0  0xFFFF7C
#define RDR0  0xFFFF7D
#define SCMR0 0xFFFF7E
#define SMR1  0xFFFF80
#define BRR1  0xFFFF81
#define SCR1  0xFFFF82
#define TDR1  0xFFFF83
#define SSR1  0xFFFF84
#define RDR1  0xFFFF85
#define SCMR1 0xFFFF86
#define SMR2  0xFFFF88
#define BRR2  0xFFFF89
#define SCR2  0xFFFF8A
#define TDR2  0xFFFF8B
#define SSR2  0xFFFF8C
#define RDR2  0xFFFF8D
#define SCMR2 0xFFFF8E

#define IRCR0 0xFFFE1E
#define SEMR  0xFFFDA8

#define MDCR    0xFFFF3E
#define SYSCR   0xFFFF3D
#define MSTPCRH 0xFFFF40
#define MSTPCRL 0xFFFF41
#define FLMCR1  0xFFFFC8
#define FLMCR2  0xFFFFC9
#define EBR1    0xFFFFCA
#define EBR2    0xFFFFCB
#define CTGARC_RAMCR   0xFFFECE
#define SBYCR   0xFFFF3A
#define SCKCR   0xFFFF3B
#define PLLCR   0xFFFF45

#define TSTR   0xFFFFC0
#define TSNC   0XFFFFC1

#define TCR0   0xFFFFD0
#define TMDR0  0xFFFFD1
#define TIORH0 0xFFFFD2
#define TIORL0 0xFFFFD3
#define TIER0  0xFFFFD4
#define TSR0   0xFFFFD5
#define TCNT0  0xFFFFD6
#define GRA0   0xFFFFD8
#define GRB0   0xFFFFDA
#define GRC0   0xFFFFDC
#define GRD0   0xFFFFDE
#define TCR1   0xFFFFE0
#define TMDR1  0xFFFFE1
#define TIORH1 0xFFFFE2
#define TIORL1 0xFFFFE3
#define TIER1  0xFFFFE4
#define TSR1   0xFFFFE5
#define TCNT1  0xFFFFE6
#define GRA1   0xFFFFE8
#define GRB1   0xFFFFEA
#define TCR2   0xFFFFF0
#define TMDR2  0xFFFFF1
#define TIORH2 0xFFFFF2
#define TIORL2 0xFFFFF3
#define TIER2  0xFFFFF4
#define TSR2   0xFFFFF5
#define TCNT2  0xFFFFF6
#define GRA2   0xFFFFF8
#define GRB2   0xFFFFFA
#define TCR3   0xFFFE80
#define TMDR3  0xFFFE81
#define TIORH3 0xFFFE82
#define TIORL3 0xFFFE83
#define TIER3  0xFFFE84
#define TSR3   0xFFFE85
#define TCNT3  0xFFFE86
#define GRA3   0xFFFE88
#define GRB3   0xFFFE8A
#define GRC3   0xFFFE8C
#define GRD3   0xFFFE8E
#define TCR4   0xFFFE90
#define TMDR4  0xFFFE91
#define TIORH4 0xFFFE92
#define TIORL4 0xFFFE93
#define TIER4  0xFFFE94
#define TSR4   0xFFFE95
#define TCNT4  0xFFFE96
#define GRA4   0xFFFE98
#define GRB4   0xFFFE9A
#define TCR5   0xFFFEA0
#define TMDR5  0xFFFEA1
#define TIORH5 0xFFFEA2
#define TIORL5 0xFFFEA3
#define TIER5  0xFFFEA4
#define TSR5   0xFFFEA5
#define TCNT5  0xFFFEA6
#define GRA5   0xFFFEA8
#define GRB5   0xFFFEAA

#define _8TCR0   0xFFFFB0
#define _8TCR1   0xFFFFB1
#define _8TCSR0  0xFFFFB2
#define _8TCSR1  0xFFFFB3
#define _8TCORA0 0xFFFFB4
#define _8TCORA1 0xFFFFB5
#define _8TCORB0 0xFFFFB6
#define _8TCORB1 0xFFFFB7
#define _8TCNT0  0xFFFFB8
#define _8TCNT1  0xFFFFB9

#define TCSR    0xFFFFBC
#define TCNT    0xFFFFBD
#define RSTCSRW 0xFFFFBE
#define RSTCSRR 0xFFFFBF

#endif /* __KERNEL__ */
#endif /* __REGS_H8S267x__ */
Tue Jul 19 12:46:22 PDT 2016
Fri Jul 22 16:01:16 PDT 2016
Sun, Jul 24, 2016  4:09:26 PM
Mon, Jul 25, 2016 10:53:38 PM
