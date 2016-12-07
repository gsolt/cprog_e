/**************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1.1	2010.04.27	Gergely Zsolt		START						*
* V2.1.2	2010.08.13	Gergely Zsolt		30-15: 1/1 -> 1/4
* V2.1.3	2010.08.23	Gergely Zsolt		30-18: 1/1 -> 1/4
* V2.1.4	2010.08.30	Gergely Zsolt		Kemenesmagosi, Talus
* V2.1.5	2011.04.12	Gergely Zsolt		Szentgotthárd,Allison; Tata,Güntner							
* V2.1.6	2011.05.19	Gergely Zsolt		42-26							
* V2.1.7	2011.05.31	Gergely Zsolt		51-96							
* V2.1.8	2011.06.08	Gergely Zsolt		Szombathely, HEMO, színház 6/1->6/5							
* V2.1.9	2011.07.19	Gergely Zsolt		41-57							
* V2.1.10	2011.09.16	Gergely Zsolt		Ikervár, vízierõmû							
* V2.1.11	2012.01.06	Gergely Zsolt		70-47, 4/1 -> 4/4							
* V2.1.12	2012.07.30	Gergely Zsolt		Zalaegerszeg, Depo							
* V2.1.13	2012.11.07	Gergely Zsolt		32-93 1/3 -> 1/1						
* V2.1.14	2012.12.07	Gergely Zsolt		71-51 1/9 -> 1/6						
* V2.1.15	2013.03.25	Gergely Zsolt		37-26						
* V2.1.16	2013.03.25	Gergely Zsolt		35-25	1/4 -> 1/5					
* V2.1.17	2013.04.03	Gergely Zsolt		Szvár, Csala					
* V2.1.18	2013.05.08	Gergely Zsolt		Mór, átjátszó	
* V2.1.19	2013.05.31	Gergely Zsolt		30-15, 30-18, 51-96 1/4 -> 1/5	
* V2.1.20	2013.07.08	Gergely Zsolt		Tatabanya, AVE					
* V2.1.21	2013.07.31	Gergely Zsolt		Tatabanya, ovaros, TMOK 80-21	
* V2.1.22	2013.07.31	Gergely Zsolt		Szombathely, Depónia					
* V2.1.23	2013.10.16	Gergely Zsolt		Székesfehérvár, Attila út					
* V2.1.24	2013.10.21	Gergely Zsolt		34-46					
* V2.1.25	2013.11.08	Gergely Zsolt		Tatabánya 1, 29/A, 23					
* V2.1.26	2013.11.08	Gergely Zsolt		80-59 új site cím: 5099					
* V2.1.27	2013.11.15	Gergely Zsolt		86-22,86-01				
* V2.1.28	2013.11.26	Gergely Zsolt		Székesfehérvár, Móri lakótelep				
* V2.1.29	2014.02.14.	Gergely Zsolt		Mor DAC 1/2 -> LINE2			*
* V2.1.30	2014.05.20.	Gergely Zsolt		42-97 8/2 -> 8/1			*
* V2.1.31	2014.08.04.	Gergely Zsolt		Székesfehérvár, Denso			*
* V2.1.32	2014.08.12.	Gergely Zsolt		42-62 -> 42-60			*
* V2.1.33	2014.09.19.	Gergely Zsolt		20-60			*
* V2.1.34	2014.09.25.	Gergely Zsolt		34-62 - 1/2, 32-70 - 1/8			*
* V2.1.35	2014.10.07.	Gergely Zsolt		21-34, 21-38			*
* V2.1.36	2014.10.08.	Gergely Zsolt		85-01, 85-23			*
* V2.1.37	2014.10.12.	Gergely Zsolt		85-00, 85-83, 21-57, 21-58			*
* V2.1.38	2014.10.21.	Gergely Zsolt		36-23 1/1 -> 1/8			*
* V2.1.39	2014.11.13.	Gergely Zsolt		86-57, 86-38			*
* V2.1.40	2014.11.21.	Gergely Zsolt		80-96, 80-97			*
* V2.1.41	2014.12.05.	Gergely Zsolt		Celldömölk, Szombathely szõlõs, Tatabánya Galla, Zalaegesrszeg városi, KÖFÉM, Lenti DAC			*
* V2.1.42	2015.03.23.	Gergely Zsolt		43-14 -> 8/5, 92-56 -> 8/6			*
* V2.1.43	2015.03.24.	Gergely Zsolt		42-97 -> 8/1			*
* V2.1.44	2016.05.11.	Gergely Zsolt		32-93 -> 1/8			*
				



****************************************************************************
* NAME           :  PARS_D.c                                                *
* DESCRIPTION    :                                						    *
* PROCESS        :  
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/


extern void fnSCTblIndx(int nIECOffset, int *nSCTblIndx, int *nOffset, short **p_col_SCAct);

/**********************************************/
/* Globals                                     */
/**********************************************/
/*extern STATION_DESC_MOT		sMOT[];
extern STATION_DESC_TALUS	sTAL[];
extern STATION_TYPE_INDEX 	sTI[];*/

/*extern COM_PAR				sCP;*/
/*extern STATION_COMM_DATA	sCD[];*/
/*extern RTU_RAD				sRAD;*/
/*extern RTU_RAD_NEW			ST[0].sRAD_K1[0];
extern RTU_RAD_NEW			ST[0].sRAD_K2[0];
extern RTU_RAD_NEW			ST[0].sRAD_K3[0];*/

/*extern RTU_LIN				ST[0].sLIN[0];*/
/*extern unsigned short		nNumOfSites;*/
/*extern unsigned short		ST[0].nSiteList[];
extern unsigned short		ST[0].nLinkList[];*/
/*extern unsigned char		byComStat[];
extern int					nTotalRTU;*/
extern void setdat2(unsigned char *input);
/*--------------------------------------------------------------------------*/
/* The list of the function included in this block */                         

/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setd2"   , setdat2},  	
   {0      , 0 }
};*/

/*--------------------------------------------------------------------------*/
/* 'C' Block Initialization and Completion                                  */
/*--------------------------------------------------------------------------*/
/*void user_control_function(int control)
{
unsigned long		lTotal;
unsigned long		lLargest;
unsigned long		lBlockSize;
unsigned char		*byP;	
int					nI;
	
	
   switch(control)
      {
         case CB_INIT :
         	
            break;

         case CB_EXIT :
         	
         break;
      }
}*/


/****************************************************************************/
/* Statikus site tabla feltoltes												*/
/****************************************************************************/
void setdat2(unsigned char *input)
{

	

	TOTAL_PAR			*ST;
	
	ST = (TOTAL_PAR *)input;
	
	


/*nNumOfSites=250;*/
				
ST[0].nSiteList[0]	=7001; 	ST[0].nLinkList[0]	=RADIO4_2;	/* RADIO4_2 71-73  				IK*/
ST[0].nSiteList[1]	=7002; 	ST[0].nLinkList[1]	=RADIO1_1;	/* RADIO1_1 34-05  				SZVAR*/
ST[0].nSiteList[2]	=7003; 	ST[0].nLinkList[2]	=RADIO1_1;	/* RADIO1_1 34-22  				SZVAR*/
ST[0].nSiteList[3]	=7004; 	ST[0].nLinkList[3]	=RADIO9_4;	/* RADIO1_2 31-51  				SZVAR*/
ST[0].nSiteList[4]	=7005; 	ST[0].nLinkList[4]	=RADIO1_1;	/* RADIO1_1 31-73  				SZVAR*/
ST[0].nSiteList[5]	=7006; 	ST[0].nLinkList[5]	=RADIO1_1;	/* RADIO1_1 31-23  				SZVAR*/
ST[0].nSiteList[6]	=7007; 	ST[0].nLinkList[6]	=RADIO4_1;	/* RADIO4_1 48-571 				IK*/
ST[0].nSiteList[7]	=7008; 	ST[0].nLinkList[7]	=RADIO4_1;	/* RADIO4_1 47-027 				IK*/
ST[0].nSiteList[8]	=7009; 	ST[0].nLinkList[8]	=RADIO4_1;	/* RADIO4_1 48-646 				IK*/
ST[0].nSiteList[9]	=7010; 	ST[0].nLinkList[9]	=RADIO2_7;	/* RADIO2_7 91-46 				ZEG*/
ST[0].nSiteList[10]	=7011; 	ST[0].nLinkList[10]	=RADIO2_7;	/* RADIO2_7 91-47 				ZEG*/
ST[0].nSiteList[11]	=7012; 	ST[0].nLinkList[11]	=RADIO2_7;	/* RADIO2_7 91-48 				ZEG*/
ST[0].nSiteList[12]	=7013; 	ST[0].nLinkList[12]	=RADIO4_2;	/* RADIO4_2 74-49 				IK*/
ST[0].nSiteList[13]	=7014; 	ST[0].nLinkList[13]	=RADIO4_1;	/* RADIO4_1 44-08 				IK*/
ST[0].nSiteList[14]	=7015; 	ST[0].nLinkList[14]	=RADIO6_2;	/* RADIO6_2 41-58 				SZOM*/
ST[0].nSiteList[15]	=7016; 	ST[0].nLinkList[15]	=RADIO6_2;	/* RADIO6_2 45-07 				SZOM*/
ST[0].nSiteList[16]	=7017; 	ST[0].nLinkList[16]	=RADIO6_2;	/* RADIO6_2 41-98 				SZOM*/
ST[0].nSiteList[17]	=7018; 	ST[0].nLinkList[17]	=RADIO6_1;	/* RADIO6_1 40-67 				SZOM*/
ST[0].nSiteList[18]	=7019; 	ST[0].nLinkList[18]	=RADIO4_1;	/* RADIO4_1 41-15 				IK*/
ST[0].nSiteList[19]	=7020; 	ST[0].nLinkList[19]	=RADIO2_7;	/* RADIO2_7 92-42 				ZEG*/
ST[0].nSiteList[20]	=7021; 	ST[0].nLinkList[20]	=RADIO8_5;	/* RADIO2_8 92-19 				ZEG*/
ST[0].nSiteList[21]	=7022; 	ST[0].nLinkList[21]	=RADIO4_4;	/* RADIO4_4 70-47 				IK*/
ST[0].nSiteList[22]	=7023; 	ST[0].nLinkList[22]	=RADIO4_2;	/* RADIO4_2 71-79 				IK*/
ST[0].nSiteList[23]	=7024; 	ST[0].nLinkList[23]	=RADIO2_6;	/* RADIO2_6 91-74 				ZEG*/
ST[0].nSiteList[24]	=7025; 	ST[0].nLinkList[24]	=RADIO6_1;	/* RADIO6_1 45-15 				SZOM*/
ST[0].nSiteList[25]	=7026; 	ST[0].nLinkList[25]	=RADIO2_7;	/* RADIO2_7 92-61 				ZEG*/
ST[0].nSiteList[26]	=7027; 	ST[0].nLinkList[26]	=RADIO2_7;	/* RADIO2_7 92-83 				ZEG*/
ST[0].nSiteList[27]	=7028; 	ST[0].nLinkList[27]	=RADIO4_2;	/* RADIO4_2 70-30 				IK*/
ST[0].nSiteList[28]	=7029; 	ST[0].nLinkList[28]	=RADIO2_7;	/* RADIO2_7 92-79 				ZEG*/
ST[0].nSiteList[29]	=7030; 	ST[0].nLinkList[29]	=RADIO8_1;	/* RADIO8_2 42-61 				ZEG*/
ST[0].nSiteList[30]	=7031; 	ST[0].nLinkList[30]	=RADIO6_1;	/* RADIO6_1 40-99 				SZOM*/
ST[0].nSiteList[31]	=7040; 	ST[0].nLinkList[31]	=RADIO1_5;	/* RADIO1_5 35-25 				SZVAR*/
ST[0].nSiteList[32]	=7044; 	ST[0].nLinkList[32]	=RADIO7_1;	/* RADIO7_1 15-05 				MOS*/
ST[0].nSiteList[33]	=7045; 	ST[0].nLinkList[33]	=RADIO7_1;	/* RADIO7_1 12-64 				MOS*/
ST[0].nSiteList[34]	=7046; 	ST[0].nLinkList[34]	=RADIO7_1;	/* RADIO7_1 14-10 				MOS*/
ST[0].nSiteList[35]	=7041; 	ST[0].nLinkList[35]	=RADIO1_5;	/* RADIO1_5 30-15 				SZVAR*/
ST[0].nSiteList[36]	=7042; 	ST[0].nLinkList[36]	=RADIO1_5;	/* RADIO1_5 30-18 				SZVAR*/
ST[0].nSiteList[37]	=7043; 	ST[0].nLinkList[37]	=RADIO1_1;	/* RADIO1_1 35-58 				SZVAR*/
ST[0].nSiteList[38]	=7047; 	ST[0].nLinkList[38]	=RADIO1_8;	/* RADIO1_8 32-12 				SZVAR*/
ST[0].nSiteList[39]	=7048; 	ST[0].nLinkList[39]	=RADIO9_6;	/* RADIO1_6 31-48 				SZVAR*/
ST[0].nSiteList[40]	=7049; 	ST[0].nLinkList[40]	=RADIO9_6;	/* RADIO1_6 34-17 				SZVAR*/
ST[0].nSiteList[41]	=7050; 	ST[0].nLinkList[41]	=RADIO9_4;	/* RADIO1_1 31-97 				SZVAR*/
ST[0].nSiteList[42]	=7051; 	ST[0].nLinkList[42]	=RADIO9_4;	/* RADIO1_1 30-64 				SZVAR*/
ST[0].nSiteList[43]	=7052; 	ST[0].nLinkList[43]	=RADIO9_4;	/* RADIO1_2 34-20 				SZVAR*/
ST[0].nSiteList[44]	=7053; 	ST[0].nLinkList[44]	=RADIO5_1;	/* RADIO5_1 86-61 				IGM*/
ST[0].nSiteList[45]	=7054; 	ST[0].nLinkList[45]	=RADIO5_1;	/* RADIO5_1 86-80 				IGM*/
ST[0].nSiteList[46]	=7055; 	ST[0].nLinkList[46]	=RADIO5_1;	/* RADIO5_1 85-21 				IGM*/
ST[0].nSiteList[47]	=9999; 	ST[0].nLinkList[46]	=RADIO5_1;	/* RADIO5_1 xx-xx 				xxx*/
ST[0].nSiteList[48]	=7056; 	ST[0].nLinkList[48]	=RADIO5_1;	/* RADIO5_1 85-99 				IGM*/
ST[0].nSiteList[49]	=7057; 	ST[0].nLinkList[49]	=RADIO5_1;	/* RADIO5_1 86-90 				IGM*/
ST[0].nSiteList[50]	=7058; 	ST[0].nLinkList[50]	=RADIO5_2;	/* RADIO5_1 85-17 				IGM*/
ST[0].nSiteList[51]	=7059; 	ST[0].nLinkList[51]	=RADIO5_3;	/* RADIO5_3 20-05 				IGM*/
ST[0].nSiteList[52]	=7060; 	ST[0].nLinkList[52]	=RADIO5_2;	/* RADIO5_1 85-28 				IGM*/
ST[0].nSiteList[53]	=7061; 	ST[0].nLinkList[53]	=RADIO6_1;	/* RADIO6_1 Szhely, MÁV Igazgatóság			SZOM*/
ST[0].nSiteList[54]	=7062; 	ST[0].nLinkList[54]	=RADIO6_6;	/* RADIO6_1 Szhely, MÁV Moldin				SZOM*/
ST[0].nSiteList[55]	=7063; 	ST[0].nLinkList[55]	=RADIO6_6;	/* RADIO6_1 Szhely, Praktiker				SZOM*/
ST[0].nSiteList[56]	=7064; 	ST[0].nLinkList[56]	=RADIO6_1;	/* RADIO6_1 Szhely, Tesco					SZOM*/
ST[0].nSiteList[57]	=7065; 	ST[0].nLinkList[57]	=RADIO5_2;	/* RADIO5_1 85-18 				IGM*/
ST[0].nSiteList[58]	=7066; 	ST[0].nLinkList[58]	=RADIO5_1;	/* RADIO5_1 86-98 				IGM*/
ST[0].nSiteList[59]	=7067; 	ST[0].nLinkList[59]	=RADIO5_2;	/* RADIO5_1 86-26 				IGM*/
ST[0].nSiteList[60]	=7068; 	ST[0].nLinkList[60]	=RADIO5_1;	/* RADIO5_1 86-21 				IGM*/
ST[0].nSiteList[61]	=7069; 	ST[0].nLinkList[61]	=RADIO5_1;	/* RADIO5_1 85-94 				IGM*/
ST[0].nSiteList[62]	=7070; 	ST[0].nLinkList[62]	=RADIO5_2;	/* RADIO5_3 81-28 				IGM*/
ST[0].nSiteList[63]	=7071; 	ST[0].nLinkList[63]	=RADIO5_2;	/* RADIO5_1 85-51 				IGM*/
ST[0].nSiteList[64]	=7072; 	ST[0].nLinkList[64]	=RADIO5_2;	/* RADIO5_1 85-47 				IGM*/
ST[0].nSiteList[65]	=7073; 	ST[0].nLinkList[65]	=RADIO5_3;	/* RADIO5_3 20-21 				IGM*/
ST[0].nSiteList[66]	=7074; 	ST[0].nLinkList[66]	=RADIO3_7;	/* RADIO3_7 80-50 				OR*/
ST[0].nSiteList[67]	=7075; 	ST[0].nLinkList[67]	=RADIO3_6;	/* RADIO3_6 82-50 				OR*/
ST[0].nSiteList[68]	=7076; 	ST[0].nLinkList[68]	=RADIO3_7;	/* RADIO3_7 80-69 				OR*/
ST[0].nSiteList[69]	=7077; 	ST[0].nLinkList[69]	=RADIO1_1;	/* RADIO1_1 30-41 				SZVAR*/
ST[0].nSiteList[70]	=7078; 	ST[0].nLinkList[70]	=RADIO1_5;	/* RADIO1_5 37-16 				SZVAR*/
ST[0].nSiteList[71]	=7079; 	ST[0].nLinkList[71]	=RADIO9_1;	/* RADIO1_1 30-88 				SZVAR*/
ST[0].nSiteList[72]	=7080; 	ST[0].nLinkList[72]	=RADIO3_7;	/* RADIO3_7 Tatabánya, Magnum		OR*/
ST[0].nSiteList[73]	=7081; 	ST[0].nLinkList[73]	=RADIO6_1;	/* RADIO6_1 Szombathely, Erdei		SZOM*/
ST[0].nSiteList[74]	=7082; 	ST[0].nLinkList[74]	=RADIO6_6;	/* RADIO6_1 Szombathely, Puskás		SZOM*/
ST[0].nSiteList[75]	=7083; 	ST[0].nLinkList[75]	=RADIO6_1;	/* RADIO6_1 Szombathely, METRO		SZOM*/
ST[0].nSiteList[76]	=7084; 	ST[0].nLinkList[76]	=RADIO6_2;	/* RADIO6_2 Bük, Nestlé				SZOM*/
ST[0].nSiteList[77]	=7085; 	ST[0].nLinkList[77]	=RADIO4_2;	/* RADIO4_2 Kemenesmagosi			IK*/
ST[0].nSiteList[78]	=7086; 	ST[0].nLinkList[78]	=RADIO4_5;	/* RADIO4_5 Ostfyasszonyfa, biogáz	IK*/
ST[0].nSiteList[79]	=7087; 	ST[0].nLinkList[79]	=RADIO6_6;	/* RADIO6_5 Szombathely, HEMO, színház		SZOM*/
ST[0].nSiteList[80]	=7088; 	ST[0].nLinkList[80]	=RADIO5_1;	/* RADIO5_1 Nagyszentjános, biogáz	IGM*/
ST[0].nSiteList[81]	=7089; 	ST[0].nLinkList[81]	=RADIO1_1;	/* RADIO1_1 31-37					SZVAR*/
ST[0].nSiteList[82]	=7090; 	ST[0].nLinkList[82]	=RADIO5_2;	/* RADIO5_1 Szõny, Dunalys			IGM*/
ST[0].nSiteList[83]	=7091; 	ST[0].nLinkList[83]	=RADIO2_7;	/* RADIO2_7 43-18					ZEG*/
ST[0].nSiteList[84]	=7092; 	ST[0].nLinkList[84]	=RADIO2_7;	/* RADIO2_7 43-19					ZEG*/
ST[0].nSiteList[85]	=7093; 	ST[0].nLinkList[85]	=RADIO8_5;	/* RADIO2_7 43-14					ZEG*/
ST[0].nSiteList[86]	=7094; 	ST[0].nLinkList[86]	=RADIO9_4;	/* RADIO2_7 31-52					SZVAR*/
ST[0].nSiteList[87]	=7095; 	ST[0].nLinkList[87]	=RADIO8_1;	/* RADIO8_1 Szentgotthárd,Allison	SZGRD*/
ST[0].nSiteList[88]	=7096; 	ST[0].nLinkList[88]	=RADIO5_2;	/* RADIO5_2 Tata, Güntner			IGM*/
ST[0].nSiteList[89]	=6085; 	ST[0].nLinkList[89]	=RADIO8_2;	/* RADIO8_2 42-26					ZEG*/
ST[0].nSiteList[90]	=8037; 	ST[0].nLinkList[90]	=RADIO1_5;	/* RADIO1_5 51-96					SZVAR*/
ST[0].nSiteList[91]	=7097; 	ST[0].nLinkList[91]	=RADIO1_1;	/* RADIO1_1 Kõszárhegy átjátszó		SZVAR*/
ST[0].nSiteList[92]	=7098; 	ST[0].nLinkList[92]	=RADIO6_1;	/* RADIO6_1 41-57					SZOM*/
ST[0].nSiteList[93]	=7099; 	ST[0].nLinkList[93]	=RADIO4_1;	/* RADIO4_1 Ikervár, vízierõmû		IK*/
ST[0].nSiteList[94]	=7100; 	ST[0].nLinkList[94]	=RADIO3_7;	/* RADIO3_7 Tatabánya, kisierõmû	OR*/
ST[0].nSiteList[95]	=7101; 	ST[0].nLinkList[95]	=RADIO5_1;	/* RADIO5_1 Kisbér, Biogáz			IGM*/
ST[0].nSiteList[96]	=7102; 	ST[0].nLinkList[96]	=RADIO5_3;	/* RADIO5_3 21-89					IGM*/
ST[0].nSiteList[97]	=7103; 	ST[0].nLinkList[97]	=RADIO4_1;	/* RADIO4_1 48-648					IK*/
ST[0].nSiteList[98]	=7104; 	ST[0].nLinkList[98]	=RADIO8_1;	/* RADIO8_1 42-59					ZEG(SZGRD)*/
ST[0].nSiteList[99]	=7105; 	ST[0].nLinkList[99]	=RADIO9_5;	/* RADIO1_6 71-51					SZVAR*/
ST[0].nSiteList[100]=7106; 	ST[0].nLinkList[100]=RADIO2_7;	/* RADIO2_7 91-15					ZEG*/
ST[0].nSiteList[101]=7107; 	ST[0].nLinkList[101]=RADIO7_1;	/* RADIO7_1 12-70					MOS*/
ST[0].nSiteList[102]=7108; 	ST[0].nLinkList[102]=RADIO9_1;	/* RADIO1_1 30-04					SZVAR*/
ST[0].nSiteList[103]=7109; 	ST[0].nLinkList[103]=RADIO9_4;	/* RADIO1_1 34-62					SZVAR*/
ST[0].nSiteList[104]=7110; 	ST[0].nLinkList[104]=RADIO9_1;	/* RADIO1_1 34-93					SZVAR*/
ST[0].nSiteList[105]=7111; 	ST[0].nLinkList[105]=RADIO1_8;	/* RADIO1_1 36-23					SZVAR*/
ST[0].nSiteList[106]=7112; 	ST[0].nLinkList[106]=RADIO1_1;	/* RADIO1_1 35-29					SZVAR*/
ST[0].nSiteList[107]=7113; 	ST[0].nLinkList[107]=RADIO2_7;	/* RADIO2_7 91-19					ZEG*/
ST[0].nSiteList[108]=7114; 	ST[0].nLinkList[108]=RADIO2_6;	/* RADIO2_6 99-317					ZEG*/
ST[0].nSiteList[109]=7115; 	ST[0].nLinkList[109]=RADIO2_7;	/* RADIO2_7 92-81					ZEG*/
ST[0].nSiteList[110]=7116; 	ST[0].nLinkList[110]=RADIO2_6;	/* RADIO2_6 93-04					ZEG*/
ST[0].nSiteList[111]=7117; 	ST[0].nLinkList[111]=RADIO8_5;	/* RADIO2_7 93-20					ZEG*/
ST[0].nSiteList[112]=7118; 	ST[0].nLinkList[112]=RADIO6_2;	/* RADIO6_2 45-06					SZOM*/
ST[0].nSiteList[113]=7119; 	ST[0].nLinkList[113]=RADIO8_1;	/* RADIO8_1 42-51					ZEG(SZGRD)*/
ST[0].nSiteList[114]=7120; 	ST[0].nLinkList[114]=RADIO5_3;	/* RADIO5_3 21-45					IGM*/
ST[0].nSiteList[115]=7121; 	ST[0].nLinkList[115]=RADIO5_3;	/* RADIO5_3 21-33					IGM*/
ST[0].nSiteList[116]=7122; 	ST[0].nLinkList[116]=RADIO3_6;	/* RADIO3_6 82-88					OR*/
ST[0].nSiteList[117]=7123; 	ST[0].nLinkList[117]=RADIO3_6;	/* RADIO3_6 82-02					OR*/
ST[0].nSiteList[118]=7126; 	ST[0].nLinkList[118]=RADIO3_7;	/* RADIO3_7 80-03					OR*/
ST[0].nSiteList[119]=7125; 	ST[0].nLinkList[119]=RADIO5_2;	/* RADIO3_6 80-04					OR*/
ST[0].nSiteList[120]=7124; 	ST[0].nLinkList[120]=RADIO3_7;	/* RADIO3_7 80-05					OR*/
ST[0].nSiteList[121]=7127; 	ST[0].nLinkList[121]=RADIO6_4;	/* RADIO6_4 40-06					SZOM*/
ST[0].nSiteList[122]=7128; 	ST[0].nLinkList[122]=RADIO8_1;	/* RADIO8_1 42-52					ZEG(SZGRD)*/
ST[0].nSiteList[123]=7129; 	ST[0].nLinkList[123]=RADIO8_1;	/* RADIO8_1 42-53					ZEG(SZGRD)*/
ST[0].nSiteList[124]=7130; 	ST[0].nLinkList[124]=RADIO8_1;	/* RADIO8_1 42-97					ZEG(SZGRD)*/
ST[0].nSiteList[125]=7131; 	ST[0].nLinkList[125]=RADIO5_1;	/* RADIO5_1 85-66					IGM*/
ST[0].nSiteList[126]=7132; 	ST[0].nLinkList[126]=RADIO5_2;	/* RADIO5_1 89-172					IGM*/
ST[0].nSiteList[127]=7133; 	ST[0].nLinkList[127]=RADIO9_4;	/* RADIO1_9 74-11					SZVAR*/
ST[0].nSiteList[128]=7134; 	ST[0].nLinkList[128]=RADIO6_6;	/* RADIO6_1 Szombathely, Nádasdy	SZOM*/
ST[0].nSiteList[129]=7135; 	ST[0].nLinkList[129]=RADIO3_7;	/* RADIO3_7 Tatabánya, Velencei		OR*/
ST[0].nSiteList[130]=5099; 	ST[0].nLinkList[130]=RADIO3_7;	/* RADIO3_6 80-59					OR*/

ST[0].nSiteList[131]=7137; 	ST[0].nLinkList[131]=RADIO1_1;	/* RADIO1_1 34-07					SZVAR*/
ST[0].nSiteList[132]=7138; 	ST[0].nLinkList[132]=RADIO7_1;	/* RADIO7_1 Móvár, Futura			MOS*/


ST[0].nSiteList[133]=7139; 	ST[0].nLinkList[133]=RADIO1_5;	/* RADIO1_5 30-36					SZVÁR*/
ST[0].nSiteList[134]=7140; 	ST[0].nLinkList[134]=RADIO4_2;	/* RADIO4_2 70-20					IK*/
ST[0].nSiteList[135]=7141; 	ST[0].nLinkList[135]=RADIO8_5;	/* RADIO2_8 93-22					ZEG*/
ST[0].nSiteList[136]=7142; 	ST[0].nLinkList[136]=RADIO6_2;	/* RADIO6_2 43-41					SZOM*/
ST[0].nSiteList[137]=7143; 	ST[0].nLinkList[137]=RADIO3_6;	/* RADIO3_6 82-07					ORNY*/
ST[0].nSiteList[138]=7144; 	ST[0].nLinkList[138]=RADIO8_5;	/* RADIO2_8 93-21					ZEG*/
ST[0].nSiteList[139]=7145; 	ST[0].nLinkList[139]=RADIO1_1;	/* RADIO1_1 35-03					SZVÁR*/
ST[0].nSiteList[140]=7146; 	ST[0].nLinkList[140]=RADIO1_8;	/* RADIO1_3 32-70					SZVÁR*/

ST[0].nSiteList[141]=7147; 	ST[0].nLinkList[141]=RADIO7_1;	/* RADIO7_1 12-12					MOS*/
ST[0].nSiteList[142]=7148; 	ST[0].nLinkList[142]=RADIO3_6;	/* RADIO3_6 82-64					OR*/
ST[0].nSiteList[143]=7149; 	ST[0].nLinkList[143]=RADIO9_1;	/* RADIO1_1 30-55					SZVÁR*/
ST[0].nSiteList[144]=7150; 	ST[0].nLinkList[144]=RADIO8_6;	/* RADIO8_3 92-56					ZEG*/
ST[0].nSiteList[145]=7151; 	ST[0].nLinkList[145]=RADIO5_1;	/* RADIO5_1 85-14					IGM*/
ST[0].nSiteList[146]=7152; 	ST[0].nLinkList[146]=RADIO9_1;	/* RADIO1_1 30-69					SZVÁR*/
ST[0].nSiteList[147]=7153; 	ST[0].nLinkList[147]=RADIO6_6;	/* RADIO6_1 41-91					SZOM*/
ST[0].nSiteList[148]=7154; 	ST[0].nLinkList[148]=RADIO5_1;	/* RADIO5_1 85-07					IGM*/
ST[0].nSiteList[149]=7155; 	ST[0].nLinkList[149]=RADIO4_1;	/* RADIO4_1 41-47					IK*/
ST[0].nSiteList[150]=7156; 	ST[0].nLinkList[150]=RADIO1_1;	/* RADIO1_1 30-89					SZVÁR*/
ST[0].nSiteList[151]=7157; 	ST[0].nLinkList[151]=RADIO2_6;	/* RADIO2_6 92-72					ZEG*/
ST[0].nSiteList[152]=7158; 	ST[0].nLinkList[152]=RADIO6_6;	/* RADIO6_1 40-83					SZOM*/
ST[0].nSiteList[153]=7159; 	ST[0].nLinkList[153]=RADIO6_2;	/* RADIO4_1 41-37					IK*/
ST[0].nSiteList[154]=7160; 	ST[0].nLinkList[154]=RADIO1_8;	/* RADIO1_3 34-41					SZVAR*/
ST[0].nSiteList[155]=7161; 	ST[0].nLinkList[155]=RADIO2_7;	/* RADIO2_7 92-06					ZEG*/
ST[0].nSiteList[156]=7162; 	ST[0].nLinkList[156]=RADIO9_1;	/* RADIO1_1 35-23					SZVAR*/
ST[0].nSiteList[157]=7163; 	ST[0].nLinkList[157]=RADIO1_1;	/* RADIO1_1 30-65					SZVAR*/
ST[0].nSiteList[158]=7164; 	ST[0].nLinkList[158]=RADIO1_3;	/* RADIO1_3 32-54					SZVAR*/
ST[0].nSiteList[159]=7165; 	ST[0].nLinkList[159]=RADIO1_1;	/* RADIO1_1 32-53					SZVAR*/
ST[0].nSiteList[160]=7166; 	ST[0].nLinkList[160]=RADIO5_1;	/* RADIO5_1 85-27					IGM*/
ST[0].nSiteList[161]=7167; 	ST[0].nLinkList[161]=RADIO1_8;	/* RADIO1_8 32-22					SZVAR*/

ST[0].nSiteList[162]=7181; 	ST[0].nLinkList[162]=RADIO4_2;	/* RADIO4_2 74-27					IK*/
ST[0].nSiteList[163]=7169; 	ST[0].nLinkList[163]=RADIO9_1;	/* RADIO1_1 35-48					SZVÁR*/
ST[0].nSiteList[164]=7170; 	ST[0].nLinkList[164]=RADIO1_5;	/* RADIO1_5 35-49					SZVÁR*/
ST[0].nSiteList[165]=7171; 	ST[0].nLinkList[165]=RADIO1_1;	/* RADIO1_1 37-77					SZVAR*/
ST[0].nSiteList[166]=7172; 	ST[0].nLinkList[166]=RADIO1_8;	/* RADIO1_1 32-93					SZVAR*/
ST[0].nSiteList[167]=7173; 	ST[0].nLinkList[167]=RADIO1_5;	/* RADIO1_5 37-28					SZVAR*/
ST[0].nSiteList[168]=7174; 	ST[0].nLinkList[168]=RADIO5_2;	/* RADIO5_3 81-29					IGM*/
ST[0].nSiteList[169]=7175; 	ST[0].nLinkList[169]=RADIO8_5;	/* RADIO2_7 93-25					ZEG*/
ST[0].nSiteList[170]=7176; 	ST[0].nLinkList[170]=RADIO1_8;	/* RADIO1_8 32-26					SZVAR*/
ST[0].nSiteList[171]=7177; 	ST[0].nLinkList[171]=RADIO6_1;	/* RADIO6_1 45-12					SZOM*/
ST[0].nSiteList[172]=7178; 	ST[0].nLinkList[172]=RADIO6_6;	/* RADIO4_1 41-00					IK*/
ST[0].nSiteList[173]=7179; 	ST[0].nLinkList[173]=RADIO1_8;	/* RADIO1_8 32-83					SZVAR*/
ST[0].nSiteList[174]=7180; 	ST[0].nLinkList[174]=RADIO1_1;	/* RADIO1_1 32-77					SZVAR*/

ST[0].nSiteList[175]=7168; 	ST[0].nLinkList[175]=RADIO2_7;	/* RADIO2_7 Zalaegerszeg, Depo		ZALA*/

/*SID:7182 */

ST[0].nSiteList[176]=7183; 	ST[0].nLinkList[176]=RADIO8_5;	/* RADIO2_8 93-26					ZEG*/
ST[0].nSiteList[177]=7184; 	ST[0].nLinkList[177]=RADIO8_1;	/* RADIO8_1 43-54					ZEG(SZGRD)*/
ST[0].nSiteList[178]=7185; 	ST[0].nLinkList[178]=RADIO8_2;	/* RADIO8_2 42-00					ZEG(SZGRD)*/

ST[0].nSiteList[179]=7182; 	ST[0].nLinkList[179]=RADIO6_1;	/* RADIO6_1 Szombathely LUK			SZOM*/
ST[0].nSiteList[180]=147; 	ST[0].nLinkList[180]=RADIO6_1;	/* RADIO6_1 40-61					SZOM*/

ST[0].nSiteList[181]=7186; 	ST[0].nLinkList[181]=RADIO5_3;	/* RADIO5_3 87-73					IGM*/

ST[0].nSiteList[182]=8120; 	ST[0].nLinkList[182]=RADIO1_5;	/* RADIO1_5 37-26					SZVAR*/

ST[0].nSiteList[183]=7187; 	ST[0].nLinkList[183]=RADIO1_1;	/* RADIO1_1 Székesfehérvár, Csala	SZVAR*/

ST[0].nSiteList[184]=500; 	ST[0].nLinkList[184]=LINE2;		/* RADIO1_1 Székesfehérvár, Mór átj.SZVAR*/
ST[0].nSiteList[185]=7188; 	ST[0].nLinkList[185]=RADIO3_7;	/* RADIO3_7 Tatabanya, AVE			ORNY*/

ST[0].nSiteList[186]=7189; 	ST[0].nLinkList[186]=RADIO3_7;	/* RADIO3_7 80-21					ORNY*/
ST[0].nSiteList[187]=7190; 	ST[0].nLinkList[187]=RADIO3_7;	/* RADIO3_7 Tatabanya, Ovaros		ORNY*/

ST[0].nSiteList[188]=7191; 	ST[0].nLinkList[188]=RADIO6_6;	/* RADIO6_1 Szombathely, Depónia	SZOM*/

ST[0].nSiteList[189]=7192; 	ST[0].nLinkList[189]=RADIO9_1;	/* RADIO1_1 Sz.fehérvár, Attila út	SZVAR*/

ST[0].nSiteList[190]=7193; 	ST[0].nLinkList[190]=RADIO9_4;	/* RADIO1_2 34-46					SZVAR*/

ST[0].nSiteList[191]=7194; 	ST[0].nLinkList[191]=RADIO3_7;	/* RADIO3_7 Tatabánya 1.			ORNY*/
ST[0].nSiteList[192]=7195; 	ST[0].nLinkList[192]=RADIO3_7;	/* RADIO3_7 Tatabánya 29/A			ORNY*/
ST[0].nSiteList[193]=7196; 	ST[0].nLinkList[193]=RADIO3_9;	/* RADIO3_7 Tatabánya 23.			ORNY*/

ST[0].nSiteList[194]=7198; 	ST[0].nLinkList[194]=RADIO5_1;	/* RADIO5_1 86-22					IGM*/
ST[0].nSiteList[195]=7199; 	ST[0].nLinkList[195]=RADIO5_1;	/* RADIO5_1 86-01					IGM*/
ST[0].nSiteList[196]=7197; 	ST[0].nLinkList[196]=RADIO9_1;	/* RADIO1_1 Székesfehérvár, Móri ltp.SZVAR*/
ST[0].nSiteList[197]=7203; 	ST[0].nLinkList[197]=RADIO1_5;	/* RADIO1_5 Székesfehérvár, Denso   SZVAR*/

ST[0].nSiteList[198]=7204; 	ST[0].nLinkList[198]=RADIO7_1;	/* RADIO7_1 12-25					MOS*/
ST[0].nSiteList[199]=7205; 	ST[0].nLinkList[199]=RADIO7_1;	/* RADIO7_1 12-57					MOS*/
ST[0].nSiteList[200]=3140; 	ST[0].nLinkList[200]=RADIO6_6;	/* RADIO6_1 40-60 ( 40-62)			SZOM*/
ST[0].nSiteList[201]=7210; 	ST[0].nLinkList[201]=RADIO5_3;	/* RADIO5_3 20-60					IGM*/

ST[0].nSiteList[202]=5135; 	ST[0].nLinkList[202]=RADIO5_3;	/* RADIO5_3 21-34					IGM*/
ST[0].nSiteList[203]=7206; 	ST[0].nLinkList[203]=RADIO5_3;	/* RADIO5_3 21-38					IGM*/

ST[0].nSiteList[204]=7200; 	ST[0].nLinkList[204]=RADIO5_1;	/* RADIO5_1 85-01					IGM*/
ST[0].nSiteList[205]=7201; 	ST[0].nLinkList[205]=RADIO5_1;	/* RADIO5_1 85-23					IGM*/

ST[0].nSiteList[206]=302; 	ST[0].nLinkList[206]=RADIO5_1;	/* RADIO5_1 85-00					IGM*/
ST[0].nSiteList[207]=7209; 	ST[0].nLinkList[207]=RADIO5_1;	/* RADIO5_1 85-83					IGM*/
ST[0].nSiteList[208]=7207; 	ST[0].nLinkList[208]=RADIO5_3;	/* RADIO5_3 21-57					IGM*/
ST[0].nSiteList[209]=7208; 	ST[0].nLinkList[209]=RADIO5_3;	/* RADIO5_3 21-58					IGM*/

ST[0].nSiteList[210]=7202; 	ST[0].nLinkList[210]=RADIO5_1;	/* RADIO5_1 86-57					IGM*/
ST[0].nSiteList[211]=7211; 	ST[0].nLinkList[211]=RADIO5_1;	/* RADIO5_1 86-38					IGM*/

ST[0].nSiteList[212]=7213; 	ST[0].nLinkList[212]=RADIO5_2;	/* RADIO3_7 80-96					ORNY*/
ST[0].nSiteList[213]=7212; 	ST[0].nLinkList[213]=RADIO5_2;	/* RADIO3_7 80-97					ORNY*/


ST[0].nSiteList[214]=510; 	ST[0].nLinkList[214]=LINE2;		/* Celldömölk								*/
ST[0].nSiteList[215]=520; 	ST[0].nLinkList[215]=LINE2;		/* Szombathely szõlõs						*/
ST[0].nSiteList[216]=530; 	ST[0].nLinkList[216]=LINE2;		/* Tatabánya Galla							*/
ST[0].nSiteList[217]=540; 	ST[0].nLinkList[217]=LINE2;		/* Zalaegerszeg városi						*/
ST[0].nSiteList[218]=550; 	ST[0].nLinkList[218]=LINE2;		/* KÖFÉM									*/
ST[0].nSiteList[219]=560; 	ST[0].nLinkList[219]=LINE2;		/* Lenti									*/

ST[0].nSiteList[220]=7214; 	ST[0].nLinkList[220]=RADIO8_1;	/* Szentgotthárd, vízierõmû			SZENTG	*/




ST[0].nSiteList[249]=0;		ST[0].nLinkList[249]	=ALL_LINK;	/* RTUALL */







/*for (nI=0;nI<MAX_RTU;nI++)
{
	byComStat[nI] = 0;
}


   MOSCAD_set_sitetable(nNumOfSites,ST[0].nSiteList,ST[0].nLinkList,byComStat);*/




/****************************************************************************/
/* Dinamikus site tabla feltoltese											*/
/****************************************************************************/

	
/*-------------------------------*/
/* Clear the dynamic site table. */
/*-------------------------------*/
MOSCAD_init_sitetable(); 
/* 250--------------------------------------------------------------------------259*/
/* 250 Komarom, Hansaprint			IG			*/ MOSCAD_add_new_site(301,RADIO5_8);		
/* 251 85-00,85-83					IG			*/ MOSCAD_add_new_site(302,RADIO5_1);
/* 252 12-14						MOS			*/ MOSCAD_add_new_site(303,RADIO7_1);
/* 253 30-23						SZVAR		*/ MOSCAD_add_new_site(304,RADIO1_1);
/* 254 11-10						MOS			*/ MOSCAD_add_new_site(305,RADIO7_1);
/* 255 */ MOSCAD_add_new_site(315,RADIO6_1);
/* 256 */ MOSCAD_add_new_site(316,RADIO6_1);
/* 257 */ MOSCAD_add_new_site(317,RADIO6_1);
/* 258 */ MOSCAD_add_new_site(318,RADIO6_1);
/* 259 */ MOSCAD_add_new_site(319,RADIO6_1);
/* 260--------------------------------------269*/
/* 260 */ MOSCAD_add_new_site(320,RADIO6_1);
/* 261 */ MOSCAD_add_new_site(321,RADIO6_1);
/* 262 */ MOSCAD_add_new_site(322,RADIO6_1);
/* 263 */ MOSCAD_add_new_site(323,RADIO6_1);
/* 264 */ MOSCAD_add_new_site(324,RADIO6_1);
/* 265 */ MOSCAD_add_new_site(325,RADIO6_1);
/* 266 */ MOSCAD_add_new_site(326,RADIO6_1);
/* 267 */ MOSCAD_add_new_site(327,RADIO6_1);
/* 268 */ MOSCAD_add_new_site(328,RADIO6_1);
/* 269 */ MOSCAD_add_new_site(329,RADIO6_1);
/* 270--------------------------------------279*/
/* 270 */ MOSCAD_add_new_site(330,RADIO6_1);
/* 271 */ MOSCAD_add_new_site(331,RADIO6_1);
/* 272 */ MOSCAD_add_new_site(332,RADIO6_1);
/* 273 */ MOSCAD_add_new_site(333,RADIO6_1);
/* 274 */ MOSCAD_add_new_site(334,RADIO6_1);
/* 275 */ MOSCAD_add_new_site(335,RADIO6_1);
/* 276 */ MOSCAD_add_new_site(336,RADIO6_1);
/* 277 */ MOSCAD_add_new_site(337,RADIO6_1);
/* 278 */ MOSCAD_add_new_site(338,RADIO6_1);
/* 279 */ MOSCAD_add_new_site(339,RADIO6_1);
/* 280--------------------------------------289*/
/* 280 */ MOSCAD_add_new_site(340,RADIO6_1);
/* 281 */ MOSCAD_add_new_site(341,RADIO6_1);
/* 282 */ MOSCAD_add_new_site(342,RADIO6_1);
/* 283 */ MOSCAD_add_new_site(343,RADIO6_1);
/* 284 */ MOSCAD_add_new_site(344,RADIO6_1);
/* 285 */ MOSCAD_add_new_site(345,RADIO6_1);
/* 286 */ MOSCAD_add_new_site(346,RADIO6_1);
/* 287 */ MOSCAD_add_new_site(347,RADIO6_1);
/* 288 */ MOSCAD_add_new_site(348,RADIO6_1);
/* 289 */ MOSCAD_add_new_site(349,RADIO6_1);
/* 290--------------------------------------299*/
/* 290 */ MOSCAD_add_new_site(350,RADIO6_1);
/* 291 */ MOSCAD_add_new_site(351,RADIO6_1);
/* 292 */ MOSCAD_add_new_site(352,RADIO6_1);
/* 293 */ MOSCAD_add_new_site(353,RADIO6_1);
/* 294 */ MOSCAD_add_new_site(354,RADIO6_1);
/* 295 */ MOSCAD_add_new_site(355,RADIO6_1);
/* 296 */ MOSCAD_add_new_site(356,RADIO6_1);
/* 297 */ MOSCAD_add_new_site(357,RADIO6_1);
/* 298 */ MOSCAD_add_new_site(358,RADIO6_1);
/* 299 */ MOSCAD_add_new_site(359,RADIO6_1);
/* 300--------------------------------------309*/
/* 300 */ MOSCAD_add_new_site(360,RADIO6_1);
/* 301 */ MOSCAD_add_new_site(361,RADIO6_1);
/* 302 */ MOSCAD_add_new_site(362,RADIO6_1);
/* 303 */ MOSCAD_add_new_site(363,RADIO6_1);
/* 304 */ MOSCAD_add_new_site(364,RADIO6_1);
/* 305 */ MOSCAD_add_new_site(365,RADIO6_1);
/* 306 */ MOSCAD_add_new_site(406,RADIO6_1);
/* 307 */ MOSCAD_add_new_site(407,RADIO6_1);
/* 308 */ MOSCAD_add_new_site(408,RADIO6_1);
/* 309 */ MOSCAD_add_new_site(409,RADIO6_1);
/* 310--------------------------------------319*/
/* 310 */ MOSCAD_add_new_site(410,RADIO6_1);
/* 311 */ MOSCAD_add_new_site(411,RADIO6_1);
/* 312 */ MOSCAD_add_new_site(412,RADIO6_1);
/* 313 */ MOSCAD_add_new_site(413,RADIO6_1);
/* 314 */ MOSCAD_add_new_site(414,RADIO6_1);
/* 315 */ MOSCAD_add_new_site(415,RADIO6_1);
/* 316 */ MOSCAD_add_new_site(416,RADIO6_1);
/* 317 */ MOSCAD_add_new_site(417,RADIO6_1);
/* 318 */ MOSCAD_add_new_site(418,RADIO6_1);
/* 319 */ MOSCAD_add_new_site(419,RADIO6_1);
	



/****************************************************************************/
/* Parancskuldes parameterei      											*/
/****************************************************************************/

/*int		nI;
int 			nSCTblIndx;
int 			nOffset;
short			*p_col_DCAct;
short			*p_col_SCAct;*/
	
	

/* IEC cimnek megfelelo RTU cimek -----------------------------------------------------------------------*/
/* Ha valamelyik darabszam = 0, akkor olyan tipusu parancs nem tartozik az RTU-hoz */
        	
         	





/*Nyugta inicializalas*/

/*for (nI=0;nI<sCP.nRtuNum && nI<MAX_RTU;nI++)
{
	if (sCP.sCPR[nI].nAckNum>0)
		{
 		fnSCTblIndx(sCP.sCPR[nI].nAckStart, &nSCTblIndx, &nOffset, &p_col_SCAct);

		p_col_SCAct[sCP.sCPR[nI].nAckStart-nOffset] = 1;
		}
}*/


/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* K1 : ZEG, IK */
ST[0].sRAD_K1[0].nRtuNumRad = 55; /*63*/
ST[0].sRAD_K1[0].nIndx[0]=0; 
ST[0].sRAD_K1[0].nIndx[1]=6; 
ST[0].sRAD_K1[0].nIndx[2]=7; 
ST[0].sRAD_K1[0].nIndx[3]=8; 
ST[0].sRAD_K1[0].nIndx[4]=9; 
ST[0].sRAD_K1[0].nIndx[5]=10; 
ST[0].sRAD_K1[0].nIndx[6]=11; 
ST[0].sRAD_K1[0].nIndx[7]=12; 
ST[0].sRAD_K1[0].nIndx[8]=13; 
ST[0].sRAD_K1[0].nIndx[9]=18; 
ST[0].sRAD_K1[0].nIndx[10]=19; 
ST[0].sRAD_K1[0].nIndx[11]=20; 
ST[0].sRAD_K1[0].nIndx[12]=21; 
ST[0].sRAD_K1[0].nIndx[13]=22; 
ST[0].sRAD_K1[0].nIndx[14]=23; 
ST[0].sRAD_K1[0].nIndx[15]=25; 
ST[0].sRAD_K1[0].nIndx[16]=26; 
ST[0].sRAD_K1[0].nIndx[17]=27; 
ST[0].sRAD_K1[0].nIndx[18]=28; 
ST[0].sRAD_K1[0].nIndx[19]=29; 
ST[0].sRAD_K1[0].nIndx[20]=77; 
ST[0].sRAD_K1[0].nIndx[21]=78; 
ST[0].sRAD_K1[0].nIndx[22]=83; 
ST[0].sRAD_K1[0].nIndx[23]=84; 
ST[0].sRAD_K1[0].nIndx[24]=85; 
ST[0].sRAD_K1[0].nIndx[25]=87; 
ST[0].sRAD_K1[0].nIndx[26]=89; 
ST[0].sRAD_K1[0].nIndx[27]=93; 
ST[0].sRAD_K1[0].nIndx[28]=97; 
ST[0].sRAD_K1[0].nIndx[29]=98; 
ST[0].sRAD_K1[0].nIndx[30]=100;
ST[0].sRAD_K1[0].nIndx[31]=107;
ST[0].sRAD_K1[0].nIndx[32]=108;
ST[0].sRAD_K1[0].nIndx[33]=109;
ST[0].sRAD_K1[0].nIndx[34]=110;
ST[0].sRAD_K1[0].nIndx[35]=111;
ST[0].sRAD_K1[0].nIndx[36]=113; 
ST[0].sRAD_K1[0].nIndx[37]=122;
ST[0].sRAD_K1[0].nIndx[38]=123;
ST[0].sRAD_K1[0].nIndx[39]=124;
ST[0].sRAD_K1[0].nIndx[40]=134;
ST[0].sRAD_K1[0].nIndx[41]=135;
ST[0].sRAD_K1[0].nIndx[42]=138;
ST[0].sRAD_K1[0].nIndx[43]=144;
ST[0].sRAD_K1[0].nIndx[44]=149;
ST[0].sRAD_K1[0].nIndx[45]=151;
ST[0].sRAD_K1[0].nIndx[46]=153;
ST[0].sRAD_K1[0].nIndx[47]=155;
ST[0].sRAD_K1[0].nIndx[48]=162;
ST[0].sRAD_K1[0].nIndx[49]=169;
ST[0].sRAD_K1[0].nIndx[50]=172;
ST[0].sRAD_K1[0].nIndx[51]=175;
ST[0].sRAD_K1[0].nIndx[52]=176;
ST[0].sRAD_K1[0].nIndx[53]=177;
ST[0].sRAD_K1[0].nIndx[54]=178;


/* K2 : SZOM, MOS, SZENTG*/
ST[0].sRAD_K2[0].nRtuNumRad = 37; /*76*/
ST[0].sRAD_K2[0].nIndx[0]=7;
ST[0].sRAD_K2[0].nIndx[1]=14;
ST[0].sRAD_K2[0].nIndx[2]=15;
ST[0].sRAD_K2[0].nIndx[3]=16;
ST[0].sRAD_K2[0].nIndx[4]=17;
ST[0].sRAD_K2[0].nIndx[5]=24;
ST[0].sRAD_K2[0].nIndx[6]=30;
ST[0].sRAD_K2[0].nIndx[7]=32;
ST[0].sRAD_K2[0].nIndx[8]=33;
ST[0].sRAD_K2[0].nIndx[9]=34;
ST[0].sRAD_K2[0].nIndx[10]=53;
ST[0].sRAD_K2[0].nIndx[11]=54;
ST[0].sRAD_K2[0].nIndx[12]=55;
ST[0].sRAD_K2[0].nIndx[13]=56;
ST[0].sRAD_K2[0].nIndx[14]=73;
ST[0].sRAD_K2[0].nIndx[15]=74;
ST[0].sRAD_K2[0].nIndx[16]=75;
ST[0].sRAD_K2[0].nIndx[17]=76;
ST[0].sRAD_K2[0].nIndx[18]=79;
ST[0].sRAD_K2[0].nIndx[19]=92;
ST[0].sRAD_K2[0].nIndx[20]=101;
ST[0].sRAD_K2[0].nIndx[21]=112;
ST[0].sRAD_K2[0].nIndx[22]=121;
ST[0].sRAD_K2[0].nIndx[23]=128;
ST[0].sRAD_K2[0].nIndx[24]=132;
ST[0].sRAD_K2[0].nIndx[25]=136;
ST[0].sRAD_K2[0].nIndx[26]=141;
ST[0].sRAD_K2[0].nIndx[27]=147;
ST[0].sRAD_K2[0].nIndx[28]=152;
ST[0].sRAD_K2[0].nIndx[29]=169;
ST[0].sRAD_K2[0].nIndx[30]=179;
ST[0].sRAD_K2[0].nIndx[31]=180;
ST[0].sRAD_K2[0].nIndx[32]=188;
ST[0].sRAD_K2[0].nIndx[33]=198;
ST[0].sRAD_K2[0].nIndx[34]=199;
ST[0].sRAD_K2[0].nIndx[35]=200;
ST[0].sRAD_K2[0].nIndx[36]=220;




/* K3 : SZVAR, ORNY, IG */
ST[0].sRAD_K3[0].nRtuNumRad = 122; /*55*/
ST[0].sRAD_K3[0].nIndx[0]=1; /*8*/
ST[0].sRAD_K3[0].nIndx[1]=2; /*8*/
ST[0].sRAD_K3[0].nIndx[2]=3; /*8*/
ST[0].sRAD_K3[0].nIndx[3]=4; /*8*/
ST[0].sRAD_K3[0].nIndx[4]=5; /*8*/
ST[0].sRAD_K3[0].nIndx[5]=31; /*8*/
ST[0].sRAD_K3[0].nIndx[6]=35; /*8*/
ST[0].sRAD_K3[0].nIndx[7]=36; /*8*/
ST[0].sRAD_K3[0].nIndx[8]=37; /*8*/
ST[0].sRAD_K3[0].nIndx[9]=38; /*8*/
ST[0].sRAD_K3[0].nIndx[10]=39; /*8*/
ST[0].sRAD_K3[0].nIndx[11]=40; /*8*/
ST[0].sRAD_K3[0].nIndx[12]=41; /*8*/
ST[0].sRAD_K3[0].nIndx[13]=42; /*8*/
ST[0].sRAD_K3[0].nIndx[14]=43; /*8*/
ST[0].sRAD_K3[0].nIndx[15]=44; /*8*/
ST[0].sRAD_K3[0].nIndx[16]=45; /*8*/
ST[0].sRAD_K3[0].nIndx[17]=46; /*8*/
ST[0].sRAD_K3[0].nIndx[18]=48; /*8*/
ST[0].sRAD_K3[0].nIndx[19]=49; /*8*/
ST[0].sRAD_K3[0].nIndx[20]=50; /*8*/
ST[0].sRAD_K3[0].nIndx[21]=51; /*8*/
ST[0].sRAD_K3[0].nIndx[21]=52; /*8*/
ST[0].sRAD_K3[0].nIndx[22]=57; /*8*/
ST[0].sRAD_K3[0].nIndx[23]=58; /*8*/
ST[0].sRAD_K3[0].nIndx[24]=59; /*8*/
ST[0].sRAD_K3[0].nIndx[25]=60; /*8*/
ST[0].sRAD_K3[0].nIndx[26]=61; /*8*/
ST[0].sRAD_K3[0].nIndx[27]=62; /*8*/
ST[0].sRAD_K3[0].nIndx[28]=63; /*8*/
ST[0].sRAD_K3[0].nIndx[29]=64; /*8*/
ST[0].sRAD_K3[0].nIndx[30]=65; /*8*/
ST[0].sRAD_K3[0].nIndx[31]=66; /*8*/
ST[0].sRAD_K3[0].nIndx[32]=67; /*8*/
ST[0].sRAD_K3[0].nIndx[33]=68; /*8*/
ST[0].sRAD_K3[0].nIndx[34]=69; /*8*/
ST[0].sRAD_K3[0].nIndx[35]=70; /*8*/
ST[0].sRAD_K3[0].nIndx[36]=71; /*8*/
ST[0].sRAD_K3[0].nIndx[37]=72; /*8*/
ST[0].sRAD_K3[0].nIndx[38]=80; /*8*/
ST[0].sRAD_K3[0].nIndx[39]=81; /*8*/
ST[0].sRAD_K3[0].nIndx[40]=82; /*8*/
ST[0].sRAD_K3[0].nIndx[41]=86; /*8*/
ST[0].sRAD_K3[0].nIndx[42]=88; /*8*/
ST[0].sRAD_K3[0].nIndx[43]=90; /*8*/
ST[0].sRAD_K3[0].nIndx[44]=91; /*8*/
ST[0].sRAD_K3[0].nIndx[45]=94; /*8*/
ST[0].sRAD_K3[0].nIndx[46]=95; /*8*/
ST[0].sRAD_K3[0].nIndx[47]=96; /*8*/
ST[0].sRAD_K3[0].nIndx[48]=99; /*8*/
ST[0].sRAD_K3[0].nIndx[49]=102; /*8*/
ST[0].sRAD_K3[0].nIndx[50]=103; /*8*/
ST[0].sRAD_K3[0].nIndx[51]=104; /*8*/
ST[0].sRAD_K3[0].nIndx[52]=105; /*8*/
ST[0].sRAD_K3[0].nIndx[53]=106; /*8*/
ST[0].sRAD_K3[0].nIndx[54]=114; /*8*/
ST[0].sRAD_K3[0].nIndx[55]=115; /*8*/
ST[0].sRAD_K3[0].nIndx[56]=116; /*8*/
ST[0].sRAD_K3[0].nIndx[57]=117; /*8*/
ST[0].sRAD_K3[0].nIndx[58]=118; /*8*/
ST[0].sRAD_K3[0].nIndx[59]=119; /*8*/
ST[0].sRAD_K3[0].nIndx[60]=120; /*8*/
ST[0].sRAD_K3[0].nIndx[61]=125; /*8*/
ST[0].sRAD_K3[0].nIndx[62]=126; /*8*/
ST[0].sRAD_K3[0].nIndx[63]=127; /*8*/
ST[0].sRAD_K3[0].nIndx[64]=129; /*8*/
ST[0].sRAD_K3[0].nIndx[65]=130; /*8*/
ST[0].sRAD_K3[0].nIndx[66]=131; /*8*/
ST[0].sRAD_K3[0].nIndx[67]=133; /*8*/
ST[0].sRAD_K3[0].nIndx[68]=137; /*8*/
ST[0].sRAD_K3[0].nIndx[69]=139; /*8*/
ST[0].sRAD_K3[0].nIndx[70]=140; /*8*/
ST[0].sRAD_K3[0].nIndx[71]=142; /*8*/
ST[0].sRAD_K3[0].nIndx[72]=143; /*8*/
ST[0].sRAD_K3[0].nIndx[73]=145; /*8*/
ST[0].sRAD_K3[0].nIndx[74]=146; /*8*/
ST[0].sRAD_K3[0].nIndx[75]=150; /*8*/
ST[0].sRAD_K3[0].nIndx[76]=154; /*8*/
ST[0].sRAD_K3[0].nIndx[77]=156; /*8*/
ST[0].sRAD_K3[0].nIndx[78]=157; /*8*/
ST[0].sRAD_K3[0].nIndx[79]=158; /*8*/
ST[0].sRAD_K3[0].nIndx[80]=159; /*8*/
ST[0].sRAD_K3[0].nIndx[81]=160; /*8*/
ST[0].sRAD_K3[0].nIndx[82]=161; /*8*/
ST[0].sRAD_K3[0].nIndx[83]=148; /*8*/
ST[0].sRAD_K3[0].nIndx[84]=163; /*8*/
ST[0].sRAD_K3[0].nIndx[85]=164; /*8*/
ST[0].sRAD_K3[0].nIndx[86]=165; /*8*/
ST[0].sRAD_K3[0].nIndx[87]=166; /*8*/
ST[0].sRAD_K3[0].nIndx[88]=167; /*8*/
ST[0].sRAD_K3[0].nIndx[89]=168; /*8*/
ST[0].sRAD_K3[0].nIndx[90]=170; /*8*/
ST[0].sRAD_K3[0].nIndx[91]=173; /*8*/
ST[0].sRAD_K3[0].nIndx[92]=174; /*8*/
ST[0].sRAD_K3[0].nIndx[93]=181; /*8*/
ST[0].sRAD_K3[0].nIndx[94]=182; /*8*/
ST[0].sRAD_K3[0].nIndx[95]=183; /*8*/
ST[0].sRAD_K3[0].nIndx[96]=184; /*8*/
ST[0].sRAD_K3[0].nIndx[97]=185; /*8*/
ST[0].sRAD_K3[0].nIndx[98]=186; /*8*/
ST[0].sRAD_K3[0].nIndx[99]=187; /*8*/
ST[0].sRAD_K3[0].nIndx[100]=189; /*8*/
ST[0].sRAD_K3[0].nIndx[101]=190; /*8*/
ST[0].sRAD_K3[0].nIndx[102]=191; /*8*/
ST[0].sRAD_K3[0].nIndx[103]=192; /*8*/
ST[0].sRAD_K3[0].nIndx[104]=193; /*8*/
ST[0].sRAD_K3[0].nIndx[105]=194; /*8*/
ST[0].sRAD_K3[0].nIndx[106]=195; /*8*/
ST[0].sRAD_K3[0].nIndx[107]=196; /*8*/
ST[0].sRAD_K3[0].nIndx[108]=197; /*8*/
ST[0].sRAD_K3[0].nIndx[109]=201; /*8*/
ST[0].sRAD_K3[0].nIndx[110]=202; /*8*/
ST[0].sRAD_K3[0].nIndx[111]=203; /*8*/
ST[0].sRAD_K3[0].nIndx[112]=204; /*8*/
ST[0].sRAD_K3[0].nIndx[113]=205; /*8*/
ST[0].sRAD_K3[0].nIndx[114]=206; /*8*/
ST[0].sRAD_K3[0].nIndx[115]=207; /*8*/
ST[0].sRAD_K3[0].nIndx[116]=208; /*8*/
ST[0].sRAD_K3[0].nIndx[117]=209; /*8*/
ST[0].sRAD_K3[0].nIndx[118]=210; /*8*/
ST[0].sRAD_K3[0].nIndx[119]=211; /*8*/
ST[0].sRAD_K3[0].nIndx[120]=212; /*8*/
ST[0].sRAD_K3[0].nIndx[121]=213; /*8*/



/*RST[0].sLINK RTUk indexei*/
ST[0].sLIN[0].nRtuNumLin = 6;
ST[0].sLIN[0].nIndx[0] =214;
ST[0].sLIN[0].nIndx[1] =215;
ST[0].sLIN[0].nIndx[2] =216;
ST[0].sLIN[0].nIndx[3] =217;
ST[0].sLIN[0].nIndx[4] =218;
ST[0].sLIN[0].nIndx[5] =219;



} /* end fnSetComPar()*/

