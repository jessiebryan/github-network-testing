#ifndef __ASM_SH7367_H__
#define __ASM_SH7367_H__

/* Pin Function Controller:
 * GPIO_FN_xx - GPIO used to select pin function
 * GPIO_PORTxx - GPIO mapped to real I/O pin on CPU
 */
enum {
	/* 49-1 -> 49-6 (GPIO) */
	GPIO_PORT0, GPIO_PORT1, GPIO_PORT2, GPIO_PORT3, GPIO_PORT4,
	GPIO_PORT5, GPIO_PORT6, GPIO_PORT7, GPIO_PORT8, GPIO_PORT9,

	GPIO_PORT10, GPIO_PORT11, GPIO_PORT12, GPIO_PORT13, GPIO_PORT14,
	GPIO_PORT15, GPIO_PORT16, GPIO_PORT17, GPIO_PORT18, GPIO_PORT19,

	GPIO_PORT20, GPIO_PORT21, GPIO_PORT22, GPIO_PORT23, GPIO_PORT24,
	GPIO_PORT25, GPIO_PORT26, GPIO_PORT27, GPIO_PORT28, GPIO_PORT29,

	GPIO_PORT30, GPIO_PORT31, GPIO_PORT32, GPIO_PORT33, GPIO_PORT34,
	GPIO_PORT35, GPIO_PORT36, GPIO_PORT37, GPIO_PORT38, GPIO_PORT39,

	GPIO_PORT40, GPIO_PORT41, GPIO_PORT42, GPIO_PORT43, GPIO_PORT44,
	GPIO_PORT45, GPIO_PORT46, GPIO_PORT47, GPIO_PORT48, GPIO_PORT49,

	GPIO_PORT50, GPIO_PORT51, GPIO_PORT52, GPIO_PORT53, GPIO_PORT54,
	GPIO_PORT55, GPIO_PORT56, GPIO_PORT57, GPIO_PORT58, GPIO_PORT59,

	GPIO_PORT60, GPIO_PORT61, GPIO_PORT62, GPIO_PORT63, GPIO_PORT64,
	GPIO_PORT65, GPIO_PORT66, GPIO_PORT67, GPIO_PORT68, GPIO_PORT69,

	GPIO_PORT70, GPIO_PORT71, GPIO_PORT72, GPIO_PORT73, GPIO_PORT74,
	GPIO_PORT75, GPIO_PORT76, GPIO_PORT77, GPIO_PORT78, GPIO_PORT79,

	GPIO_PORT80, GPIO_PORT81, GPIO_PORT82, GPIO_PORT83, GPIO_PORT84,
	GPIO_PORT85, GPIO_PORT86, GPIO_PORT87, GPIO_PORT88, GPIO_PORT89,

	GPIO_PORT90, GPIO_PORT91, GPIO_PORT92, GPIO_PORT93, GPIO_PORT94,
	GPIO_PORT95, GPIO_PORT96, GPIO_PORT97, GPIO_PORT98, GPIO_PORT99,

	GPIO_PORT100, GPIO_PORT101, GPIO_PORT102, GPIO_PORT103, GPIO_PORT104,
	GPIO_PORT105, GPIO_PORT106, GPIO_PORT107, GPIO_PORT108, GPIO_PORT109,

	GPIO_PORT110, GPIO_PORT111, GPIO_PORT112, GPIO_PORT113, GPIO_PORT114,
	GPIO_PORT115, GPIO_PORT116, GPIO_PORT117, GPIO_PORT118, GPIO_PORT119,

	GPIO_PORT120, GPIO_PORT121, GPIO_PORT122, GPIO_PORT123, GPIO_PORT124,
	GPIO_PORT125, GPIO_PORT126, GPIO_PORT127, GPIO_PORT128, GPIO_PORT129,

	GPIO_PORT130, GPIO_PORT131, GPIO_PORT132, GPIO_PORT133, GPIO_PORT134,
	GPIO_PORT135, GPIO_PORT136, GPIO_PORT137, GPIO_PORT138, GPIO_PORT139,

	GPIO_PORT140, GPIO_PORT141, GPIO_PORT142, GPIO_PORT143, GPIO_PORT144,
	GPIO_PORT145, GPIO_PORT146, GPIO_PORT147, GPIO_PORT148, GPIO_PORT149,

	GPIO_PORT150, GPIO_PORT151, GPIO_PORT152, GPIO_PORT153, GPIO_PORT154,
	GPIO_PORT155, GPIO_PORT156, GPIO_PORT157, GPIO_PORT158, GPIO_PORT159,

	GPIO_PORT160, GPIO_PORT161, GPIO_PORT162, GPIO_PORT163, GPIO_PORT164,
	GPIO_PORT165, GPIO_PORT166, GPIO_PORT167, GPIO_PORT168, GPIO_PORT169,

	GPIO_PORT170, GPIO_PORT171, GPIO_PORT172, GPIO_PORT173, GPIO_PORT174,
	GPIO_PORT175, GPIO_PORT176, GPIO_PORT177, GPIO_PORT178, GPIO_PORT179,

	GPIO_PORT180, GPIO_PORT181, GPIO_PORT182, GPIO_PORT183, GPIO_PORT184,
	GPIO_PORT185, GPIO_PORT186, GPIO_PORT187, GPIO_PORT188, GPIO_PORT189,

	GPIO_PORT190, GPIO_PORT191, GPIO_PORT192, GPIO_PORT193, GPIO_PORT194,
	GPIO_PORT195, GPIO_PORT196, GPIO_PORT197, GPIO_PORT198, GPIO_PORT199,

	GPIO_PORT200, GPIO_PORT201, GPIO_PORT202, GPIO_PORT203, GPIO_PORT204,
	GPIO_PORT205, GPIO_PORT206, GPIO_PORT207, GPIO_PORT208, GPIO_PORT209,

	GPIO_PORT210, GPIO_PORT211, GPIO_PORT212, GPIO_PORT213, GPIO_PORT214,
	GPIO_PORT215, GPIO_PORT216, GPIO_PORT217, GPIO_PORT218, GPIO_PORT219,

	GPIO_PORT220, GPIO_PORT221, GPIO_PORT222, GPIO_PORT223, GPIO_PORT224,
	GPIO_PORT225, GPIO_PORT226, GPIO_PORT227, GPIO_PORT228, GPIO_PORT229,

	GPIO_PORT230, GPIO_PORT231, GPIO_PORT232, GPIO_PORT233, GPIO_PORT234,
	GPIO_PORT235, GPIO_PORT236, GPIO_PORT237, GPIO_PORT238, GPIO_PORT239,

	GPIO_PORT240, GPIO_PORT241, GPIO_PORT242, GPIO_PORT243, GPIO_PORT244,
	GPIO_PORT245, GPIO_PORT246, GPIO_PORT247, GPIO_PORT248, GPIO_PORT249,

	GPIO_PORT250, GPIO_PORT251, GPIO_PORT252, GPIO_PORT253, GPIO_PORT254,
	GPIO_PORT255, GPIO_PORT256, GPIO_PORT257, GPIO_PORT258, GPIO_PORT259,

	GPIO_PORT260, GPIO_PORT261, GPIO_PORT262, GPIO_PORT263, GPIO_PORT264,
	GPIO_PORT265, GPIO_PORT266, GPIO_PORT267, GPIO_PORT268, GPIO_PORT269,

	GPIO_PORT270, GPIO_PORT271, GPIO_PORT272,

	/* Special Pull-up / Pull-down Functions */
	GPIO_FN_PORT48_KEYIN0_PU, GPIO_FN_PORT49_KEYIN1_PU,
	GPIO_FN_PORT50_KEYIN2_PU, GPIO_FN_PORT55_KEYIN3_PU,
	GPIO_FN_PORT56_KEYIN4_PU, GPIO_FN_PORT57_KEYIN5_PU,
	GPIO_FN_PORT58_KEYIN6_PU,

	/* 49-1 (FN) */
	GPIO_FN_VBUS0, GPIO_FN_CPORT0, GPIO_FN_CPORT1, GPIO_FN_CPORT2,
	GPIO_FN_CPORT3, GPIO_FN_CPORT4, GPIO_FN_CPORT5, GPIO_FN_CPORT6,
	GPIO_FN_CPORT7, GPIO_FN_CPORT8, GPIO_FN_CPORT9, GPIO_FN_CPORT10,
	GPIO_FN_CPORT11, GPIO_FN_SIN2, GPIO_FN_CPORT12, GPIO_FN_XCTS2,
	GPIO_FN_CPORT13, GPIO_FN_RFSPO4, GPIO_FN_CPORT14, GPIO_FN_RFSPO5,
	GPIO_FN_CPORT15, GPIO_FN_CPORT16, GPIO_FN_CPORT17, GPIO_FN_SOUT2,
	GPIO_FN_CPORT18, GPIO_FN_XRTS2, GPIO_FN_CPORT19, GPIO_FN_CPORT20,
	GPIO_FN_RFSPO6, GPIO_FN_CPORT21, GPIO_FN_STATUS0, GPIO_FN_CPORT22,
	GPIO_FN_STATUS1, GPIO_FN_CPORT23, GPIO_FN_STATUS2, GPIO_FN_RFSPO7,
	GPIO_FN_MPORT0, GPIO_FN_MPORT1, GPIO_FN_B_SYNLD1, GPIO_FN_B_SYNLD2,
	GPIO_FN_XMAINPS, GPIO_FN_XDIVPS, GPIO_FN_XIDRST, GPIO_FN_IDCLK,
	GPIO_FN_IDIO, GPIO_FN_SOUT1, GPIO_FN_SCIFA4_TXD,
	GPIO_FN_M02_BERDAT, GPIO_FN_SIN1, GPIO_FN_SCIFA4_RXD, GPIO_FN_XWUP,
	GPIO_FN_XRTS1, GPIO_FN_SCIFA4_RTS, GPIO_FN_M03_BERCLK,
	GPIO_FN_XCTS1, GPIO_FN_SCIFA4_CTS,

	/* 49-2 (FN) */
	GPIO_FN_HSU_IQ_AGC6, GPIO_FN_MFG2_IN2, GPIO_FN_MSIOF2_MCK0,
	GPIO_FN_HSU_IQ_AGC5, GPIO_FN_MFG2_IN1, GPIO_FN_MSIOF2_MCK1,
	GPIO_FN_HSU_IQ_AGC4, GPIO_FN_MSIOF2_RSYNC,
	GPIO_FN_HSU_IQ_AGC3, GPIO_FN_MFG2_OUT1, GPIO_FN_MSIOF2_RSCK,
	GPIO_FN_HSU_IQ_AGC2, GPIO_FN_PORT42_KEYOUT0,
	GPIO_FN_HSU_IQ_AGC1, GPIO_FN_PORT43_KEYOUT1,
	GPIO_FN_HSU_IQ_AGC0, GPIO_FN_PORT44_KEYOUT2,
	GPIO_FN_HSU_IQ_AGC_ST, GPIO_FN_PORT45_KEYOUT3,
	GPIO_FN_HSU_IQ_PDO, GPIO_FN_PORT46_KEYOUT4,
	GPIO_FN_HSU_IQ_PYO, GPIO_FN_PORT47_KEYOUT5,
	GPIO_FN_HSU_EN_TXMUX_G3MO, GPIO_FN_PORT48_KEYIN0,
	GPIO_FN_HSU_I_TXMUX_G3MO, GPIO_FN_PORT49_KEYIN1,
	GPIO_FN_HSU_Q_TXMUX_G3MO, GPIO_FN_PORT50_KEYIN2,
	GPIO_FN_HSU_SYO, GPIO_FN_PORT51_MSIOF2_TSYNC,
	GPIO_FN_HSU_SDO, GPIO_FN_PORT52_MSIOF2_TSCK,
	GPIO_FN_HSU_TGTTI_G3MO, GPIO_FN_PORT53_MSIOF2_TXD,
	GPIO_FN_B_TIME_STAMP, GPIO_FN_PORT54_MSIOF2_RXD,
	GPIO_FN_HSU_SDI, GPIO_FN_PORT55_KEYIN3,
	GPIO_FN_HSU_SCO, GPIO_FN_PORT56_KEYIN4,
	GPIO_FN_HSU_DREQ, GPIO_FN_PORT57_KEYIN5,
	GPIO_FN_HSU_DACK, GPIO_FN_PORT58_KEYIN6,
	GPIO_FN_HSU_CLK61M, GPIO_FN_PORT59_MSIOF2_SS1,
	GPIO_FN_HSU_XRST, GPIO_FN_PORT60_MSIOF2_SS2,
	GPIO_FN_PCMCLKO, GPIO_FN_SYNC8KO, GPIO_FN_DNPCM_A, GPIO_FN_UPPCM_A,
	GPIO_FN_XTALB1L,
	GPIO_FN_GPS_AGC1, GPIO_FN_SCIFA0_RTS,
	GPIO_FN_GPS_AGC2, GPIO_FN_SCIFA0_SCK,
	GPIO_FN_GPS_AGC3, GPIO_FN_SCIFA0_TXD,
	GPIO_FN_GPS_AGC4, GPIO_FN_SCIFA0_RXD,
	GPIO_FN_GPS_PWRD, GPIO_FN_SCIFA0_CTS,
	GPIO_FN_GPS_IM, GPIO_FN_GPS_IS, GPIO_FN_GPS_QM, GPIO_FN_GPS_QS,
	GPIO_FN_SIUBOMC, GPIO_FN_TPU2TO0,
	GPIO_FN_SIUCKB, GPIO_FN_TPU2TO1,
	GPIO_FN_SIUBOLR, GPIO_FN_BBIF2_TSYNC, GPIO_FN_TPU2TO2,
	GPIO_FN_SIUBOBT, GPIO_FN_BBIF2_TSCK, GPIO_FN_TPU2TO3,
	GPIO_FN_SIUBOSLD, GPIO_FN_BBIF2_TXD, GPIO_FN_TPU3TO0,
	GPIO_FN_SIUBILR, GPIO_FN_TPU3TO1,
	GPIO_FN_SIUBIBT, GPIO_FN_TPU3TO2,
	GPIO_FN_SIUBISLD, GPIO_FN_TPU3TO3,
	GPIO_FN_NMI, GPIO_FN_TPU4TO0,
	GPIO_FN_DNPCM_M, GPIO_FN_TPU4TO1, GPIO_FN_TPU4TO2, GPIO_FN_TPU4TO3,
	GPIO_FN_IRQ_TMPB,
	GPIO_FN_PWEN, GPIO_FN_MFG1_OUT1,
	GPIO_FN_OVCN, GPIO_FN_MFG1_IN1,
	GPIO_FN_OVCN2, GPIO_FN_MFG1_IN2,

	/* 49-3 (FN) */
	GPIO_FN_RFSPO1, GPIO_FN_RFSPO2, GPIO_FN_RFSPO3, GPIO_FN_PORT93_VIO_CKO2,
	GPIO_FN_USBTERM, GPIO_FN_EXTLP, GPIO_FN_IDIN,
	GPIO_FN_SCIFA5_CTS, GPIO_FN_MFG0_IN1,
	GPIO_FN_SCIFA5_RTS, GPIO_FN_MFG0_IN2,
	GPIO_FN_SCIFA5_RXD,
	GPIO_FN_SCIFA5_TXD,
	GPIO_FN_SCIFA5_SCK, GPIO_FN_MFG0_OUT1,
	GPIO_FN_A0_EA0, GPIO_FN_BS,
	GPIO_FN_A14_EA14, GPIO_FN_PORT102_KEYOUT0,
	GPIO_FN_A15_EA15, GPIO_FN_PORT103_KEYOUT1, GPIO_FN_DV_CLKOL,
	GPIO_FN_A16_EA16, GPIO_FN_PORT104_KEYOUT2,
	GPIO_FN_DV_VSYNCL, GPIO_FN_MSIOF0_SS1,
	GPIO_FN_A17_EA17, GPIO_FN_PORT105_KEYOUT3,
	GPIO_FN_DV_HSYNCL, GPIO_FN_MSIOF0_TSYNC,
	GPIO_FN_A18_EA18, GPIO_FN_PORT106_KEYOUT4,
	GPIO_FN_DV_DL0, GPIO_FN_MSIOF0_TSCK,
	GPIO_FN_A19_EA19, GPIO_FN_PORT107_KEYOUT5,
	GPIO_FN_DV_DL1, GPIO_FN_MSIOF0_TXD,
	GPIO_FN_A20_EA20, GPIO_FN_PORT108_KEYIN0,
	GPIO_FN_DV_DL2, GPIO_FN_MSIOF0_RSCK,
	GPIO_FN_A21_EA21, GPIO_FN_PORT109_KEYIN1,
	GPIO_FN_DV_DL3, GPIO_FN_MSIOF0_RSYNC,
	GPIO_FN_A22_EA22, GPIO_FN_PORT110_KEYIN2,
	GPIO_FN_DV_DL4, GPIO_FN_MSIOF0_MCK0,
	GPIO_FN_A23_EA23, GPIO_FN_PORT111_KEYIN3,
	GPIO_FN_DV_DL5, GPIO_FN_MSIOF0_MCK1,
	GPIO_FN_A24_EA24, GPIO_FN_PORT112_KEYIN4,
	GPIO_FN_DV_DL6, GPIO_FN_MSIOF0_RXD,
	GPIO_FN_A25_EA25, GPIO_FN_PORT113_KEYIN5,
	GPIO_FN_DV_DL7, GPIO_FN_MSIOF0_SS2,
	GPIO_FN_A26, GPIO_FN_PORT113_KEYIN6, GPIO_FN_DV_CLKIL,
	GPIO_FN_D0_ED0_NAF0, GPIO_FN_D1_ED1_NAF1, GPIO_FN_D2_ED2_NAF2,
	GPIO_FN_D3_ED3_NAF3, GPIO_FN_D4_ED4_NAF4, GPIO_FN_D5_ED5_NAF5,
	GPIO_FN_D6_ED6_NAF6, GPIO_FN_D7_ED7_NAF7, GPIO_FN_D8_ED8_NAF8,
	GPIO_FN_D9_ED9_NAF9, GPIO_FN_D10_ED10_NAF10, GPIO_FN_D11_ED11_NAF11,
	GPIO_FN_D12_ED12_NAF12, GPIO_FN_D13_ED13_NAF13,
	GPIO_FN_D14_ED14_NAF14, GPIO_FN_D15_ED15_NAF15,
	GPIO_FN_CS4, GPIO_FN_CS5A, GPIO_FN_CS5B, GPIO_FN_FCE1,
	GPIO_FN_CS6B, GPIO_FN_XCS2, GPIO_FN_FCE0, GPIO_FN_CS6A,
	GPIO_FN_DACK0, GPIO_FN_WAIT, GPIO_FN_DREQ0, GPIO_FN_RD_XRD,
	GPIO_FN_A27, GPIO_FN_RDWR_XWE, GPIO_FN_WE0_XWR0_FWE,
	GPIO_FN_WE1_XWR1, GPIO_FN_FRB, GPIO_FN_CKO,
	GPIO_FN_NBRSTOUT, GPIO_FN_NBRST,

	/* 49-4 (FN) */
	GPIO_FN_RFSPO0, GPIO_FN_PORT146_VIO_CKO2, GPIO_FN_TSTMD,
	GPIO_FN_VIO_VD, GPIO_FN_VIO_HD,
	GPIO_FN_VIO_D0, GPIO_FN_VIO_D1, GPIO_FN_VIO_D2,
	GPIO_FN_VIO_D3, GPIO_FN_VIO_D4, GPIO_FN_VIO_D5,
	GPIO_FN_VIO_D6, GPIO_FN_VIO_D7, GPIO_FN_VIO_D8,
	GPIO_FN_VIO_D9, GPIO_FN_VIO_D10, GPIO_FN_VIO_D11,
	GPIO_FN_VIO_D12, GPIO_FN_VIO_D13, GPIO_FN_VIO_D14,
	GPIO_FN_VIO_D15, GPIO_FN_VIO_CLK, GPIO_FN_VIO_FIELD,
	GPIO_FN_VIO_CKO,
	GPIO_FN_MFG3_IN1, GPIO_FN_MFG3_IN2,
	GPIO_FN_M9_SLCD_A01, GPIO_FN_MFG3_OUT1, GPIO_FN_TPU0TO0,
	GPIO_FN_M10_SLCD_CK1, GPIO_FN_MFG4_IN1, GPIO_FN_TPU0TO1,
	GPIO_FN_M11_SLCD_SO1, GPIO_FN_MFG4_IN2, GPIO_FN_TPU0TO2,
	GPIO_FN_M12_SLCD_CE1, GPIO_FN_MFG4_OUT1, GPIO_FN_TPU0TO3,
	GPIO_FN_LCDD0, GPIO_FN_PORT175_KEYOUT0, GPIO_FN_DV_D0,
	GPIO_FN_SIUCKA, GPIO_FN_MFG0_OUT2,
	GPIO_FN_LCDD1, GPIO_FN_PORT176_KEYOUT1, GPIO_FN_DV_D1,
	GPIO_FN_SIUAOLR, GPIO_FN_BBIF2_TSYNC1,
	GPIO_FN_LCDD2, GPIO_FN_PORT177_KEYOUT2, GPIO_FN_DV_D2,
	GPIO_FN_SIUAOBT, GPIO_FN_BBIF2_TSCK1,
	GPIO_FN_LCDD3, GPIO_FN_PORT178_KEYOUT3, GPIO_FN_DV_D3,
	GPIO_FN_SIUAOSLD, GPIO_FN_BBIF2_TXD1,
	GPIO_FN_LCDD4, GPIO_FN_PORT179_KEYOUT4, GPIO_FN_DV_D4,
	GPIO_FN_SIUAISPD, GPIO_FN_MFG1_OUT2,
	GPIO_FN_LCDD5, GPIO_FN_PORT180_KEYOUT5, GPIO_FN_DV_D5,
	GPIO_FN_SIUAILR, GPIO_FN_MFG2_OUT2,
	GPIO_FN_LCDD6, GPIO_FN_DV_D6,
	GPIO_FN_SIUAIBT, GPIO_FN_MFG3_OUT2, GPIO_FN_XWR2,
	GPIO_FN_LCDD7, GPIO_FN_DV_D7,
	GPIO_FN_SIUAISLD, GPIO_FN_MFG4_OUT2, GPIO_FN_XWR3,
	GPIO_FN_LCDD8, GPIO_FN_DV_D8, GPIO_FN_D16, GPIO_FN_ED16,
	GPIO_FN_LCDD9, GPIO_FN_DV_D9, GPIO_FN_D17, GPIO_FN_ED17,
	GPIO_FN_LCDD10, GPIO_FN_DV_D10, GPIO_FN_D18, GPIO_FN_ED18,
	GPIO_FN_LCDD11, GPIO_FN_DV_D11, GPIO_FN_D19, GPIO_FN_ED19,
	GPIO_FN_LCDD12, GPIO_FN_DV_D12, GPIO_FN_D20, GPIO_FN_ED20,
	GPIO_FN_LCDD13, GPIO_FN_DV_D13, GPIO_FN_D21, GPIO_FN_ED21,
	GPIO_FN_LCDD14, GPIO_FN_DV_D14, GPIO_FN_D22, GPIO_FN_ED22,
	GPIO_FN_LCDD15, GPIO_FN_DV_D15, GPIO_FN_D23, GPIO_FN_ED23,
	GPIO_FN_LCDD16, GPIO_FN_DV_HSYNC, GPIO_FN_D24, GPIO_FN_ED24,
	GPIO_FN_LCDD17, GPIO_FN_DV_VSYNC, GPIO_FN_D25, GPIO_FN_ED25,
	GPIO_FN_LCDD18, GPIO_FN_DREQ2, GPIO_FN_MSIOF0L_TSCK,
	GPIO_FN_D26, GPIO_FN_ED26,
	GPIO_FN_LCDD19, GPIO_FN_MSIOF0L_TSYNC,
	GPIO_FN_D27, GPIO_FN_ED27,
	GPIO_FN_LCDD20, GPIO_FN_TS_SPSYNC1, GPIO_FN_MSIOF0L_MCK0,
	GPIO_FN_D28, GPIO_FN_ED28,
	GPIO_FN_LCDD21, GPIO_FN_TS_SDAT1, GPIO_FN_MSIOF0L_MCK1,
	GPIO_FN_D29, GPIO_FN_ED29,
	GPIO_FN_LCDD22, GPIO_FN_TS_SDEN1, GPIO_FN_MSIOF0L_SS1,
	GPIO_FN_D30, GPIO_FN_ED30,
	GPIO_FN_LCDD23, GPIO_FN_TS_SCK1, GPIO_FN_MSIOF0L_SS2,
	GPIO_FN_D31, GPIO_FN_ED31,
	GPIO_FN_LCDDCK, GPIO_FN_LCDWR, GPIO_FN_DV_CKO, GPIO_FN_SIUAOSPD,
	GPIO_FN_LCDRD, GPIO_FN_DACK2, GPIO_FN_MSIOF0L_RSYNC,


	/* 49-5 (FN) */
	GPIO_FN_LCDHSYN, GPIO_FN_LCDCS, GPIO_FN_LCDCS2, GPIO_FN_DACK3,
	GPIO_FN_LCDDISP, GPIO_FN_LCDRS, GPIO_FN_DREQ3, GPIO_FN_MSIOF0L_RSCK,
	GPIO_FN_LCDCSYN, GPIO_FN_LCDCSYN2, GPIO_FN_DV_CKI,
	GPIO_FN_LCDLCLK, GPIO_FN_DREQ1, GPIO_FN_MSIOF0L_RXD,
	GPIO_FN_LCDDON, GPIO_FN_LCDDON2, GPIO_FN_DACK1, GPIO_FN_MSIOF0L_TXD,
	GPIO_FN_VIO_DR0, GPIO_FN_VIO_DR1, GPIO_FN_VIO_DR2, GPIO_FN_VIO_DR3,
	GPIO_FN_VIO_DR4, GPIO_FN_VIO_DR5, GPIO_FN_VIO_DR6, GPIO_FN_VIO_DR7,
	GPIO_FN_VIO_VDR, GPIO_FN_VIO_HDR,
	GPIO_FN_VIO_CLKR, GPIO_FN_VIO_CKOR,
	GPIO_FN_SCIFA1_TXD, GPIO_FN_GPS_PGFA0,
	GPIO_FN_SCIFA1_SCK, GPIO_FN_GPS_PGFA1,
	GPIO_FN_SCIFA1_RTS, GPIO_FN_GPS_EPPSINMON,
	GPIO_FN_SCIFA1_RXD, GPIO_FN_SCIFA1_CTS,
	GPIO_FN_MSIOF1_TXD, GPIO_FN_SCIFA1_TXD2, GPIO_FN_GPS_TXD,
	GPIO_FN_MSIOF1_TSYNC, GPIO_FN_SCIFA1_CTS2, GPIO_FN_I2C_SDA2,
	GPIO_FN_MSIOF1_TSCK, GPIO_FN_SCIFA1_SCK2,
	GPIO_FN_MSIOF1_RXD, GPIO_FN_SCIFA1_RXD2, GPIO_FN_GPS_RXD,
	GPIO_FN_MSIOF1_RSCK, GPIO_FN_SCIFA1_RTS2,
	GPIO_FN_MSIOF1_RSYNC, GPIO_FN_I2C_SCL2,
	GPIO_FN_MSIOF1_MCK0, GPIO_FN_MSIOF1_MCK1,
	GPIO_FN_MSIOF1_SS1, GPIO_FN_EDBGREQ3,
	GPIO_FN_MSIOF1_SS2,
	GPIO_FN_PORT236_IROUT, GPIO_FN_IRDA_OUT,
	GPIO_FN_IRDA_IN, GPIO_FN_IRDA_FIRSEL,
	GPIO_FN_TPU1TO0, GPIO_FN_TS_SPSYNC3,
	GPIO_FN_TPU1TO1, GPIO_FN_TS_SDAT3,
	GPIO_FN_TPU1TO2, GPIO_FN_TS_SDEN3, GPIO_FN_PORT241_MSIOF2_SS1,
	GPIO_FN_TPU1TO3, GPIO_FN_PORT242_MSIOF2_TSCK,
	GPIO_FN_M13_BSW, GPIO_FN_PORT243_MSIOF2_TSYNC,
	GPIO_FN_M14_GSW, GPIO_FN_PORT244_MSIOF2_TXD,
	GPIO_FN_PORT245_IROUT, GPIO_FN_M15_RSW,
	GPIO_FN_SOUT3, GPIO_FN_SCIFA2_TXD1,
	GPIO_FN_SIN3, GPIO_FN_SCIFA2_RXD1,
	GPIO_FN_XRTS3, GPIO_FN_SCIFA2_RTS1, GPIO_FN_PORT248_MSIOF2_SS2,
	GPIO_FN_XCTS3, GPIO_FN_SCIFA2_CTS1, GPIO_FN_PORT249_MSIOF2_RXD,
	GPIO_FN_DINT, GPIO_FN_SCIFA2_SCK1, GPIO_FN_TS_SCK3,
	GPIO_FN_SDHICLK0, GPIO_FN_TCK2,
	GPIO_FN_SDHICD0,
	GPIO_FN_SDHID0_0, GPIO_FN_TMS2,
	GPIO_FN_SDHID0_1, GPIO_FN_TDO2,
	GPIO_FN_SDHID0_2, GPIO_FN_TDI2,
	GPIO_FN_SDHID0_3, GPIO_FN_RTCK2,

	/* 49-6 (FN) */
	GPIO_FN_SDHICMD0, GPIO_FN_TRST2,
	GPIO_FN_SDHIWP0, GPIO_FN_EDBGREQ2,
	GPIO_FN_SDHICLK1, GPIO_FN_TCK3,
	GPIO_FN_SDHID1_0, GPIO_FN_M11_SLCD_SO2,
	GPIO_FN_TS_SPSYNC2, GPIO_FN_TMS3,
	GPIO_FN_SDHID1_1, GPIO_FN_M9_SLCD_AO2,
	GPIO_FN_TS_SDAT2, GPIO_FN_TDO3,
	GPIO_FN_SDHID1_2, GPIO_FN_M10_SLCD_CK2,
	GPIO_FN_TS_SDEN2, GPIO_FN_TDI3,
	GPIO_FN_SDHID1_3, GPIO_FN_M12_SLCD_CE2,
	GPIO_FN_TS_SCK2, GPIO_FN_RTCK3,
	GPIO_FN_SDHICMD1, GPIO_FN_TRST3,
	GPIO_FN_SDHICLK2, GPIO_FN_SCIFB_SCK,
	GPIO_FN_SDHID2_0, GPIO_FN_SCIFB_TXD,
	GPIO_FN_SDHID2_1, GPIO_FN_SCIFB_CTS,
	GPIO_FN_SDHID2_2, GPIO_FN_SCIFB_RXD,
	GPIO_FN_SDHID2_3, GPIO_FN_SCIFB_RTS,
	GPIO_FN_SDHICMD2,
	GPIO_FN_RESETOUTS,
	GPIO_FN_DIVLOCK,
};

#endif /* __ASM_SH7367_H__ */
Tue Jul 19 12:37:53 PDT 2016
Fri Jul 22 15:45:22 PDT 2016
Sun, Jul 24, 2016  2:09:59 PM
Mon, Jul 25, 2016  8:40:14 PM
