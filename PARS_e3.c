/****************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1.1	2010.04.28	Gergely Zsolt		START						*
* V2.1.5	2011.04.12	Gergely Zsolt		Szentgotthárd,Allison; Tata,Güntner							
* V2.1.6	2011.05.19	Gergely Zsolt		42-26							
* V2.1.7	2011.05.31	Gergely Zsolt		51-96							
* V2.1.9	2011.09.16	Gergely Zsolt		Ikervár, vízierõmû	
* V2.1.15	2013.03.25	Gergely Zsolt		37-26						
* V2.1.17	2013.04.03	Gergely Zsolt		Szvár, Csala					
* V2.1.18	2013.05.08	Gergely Zsolt		Mór, átjátszó					
* V2.1.20	2013.07.08	Gergely Zsolt		Tatabanya, AVE					
* V2.1.21	2013.07.31	Gergely Zsolt		Tatabanya, ovaros, TMOK 80-21		
* V2.1.22	2013.10.16	Gergely Zsolt		Székesfehérvár, Attila út					
* V2.1.24	2013.10.21	Gergely Zsolt		34-46					
* V2.1.25	2013.11.08	Gergely Zsolt		Tatabánya 1, 29/A, 23					
* V2.1.27	2013.11.15	Gergely Zsolt		86-22,86-01				
* V2.1.28	2013.11.26	Gergely Zsolt		Székesfehérvár, Móri lakótelep				
			

****************************************************************************
* NAME           :  PARS_E3.c                                                 *
* DESCRIPTION    :                                         *
* PROCESS        : 
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/

extern void setdat(unsigned char *input);

/**********************************************/
/* Globals                                     */
/**********************************************/


/*--------------------------------------------------------------------------*/
/* The list of the function included in this block                          */
/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setdat"   , setdat},  	
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
/* Parameter strukturak feltoltese     											*/
/***************************************************************************/
void setdat(unsigned char *input)
{
	int					nI;
	TOTAL_PAR			*sT;
	
	sT = (TOTAL_PAR *)input;

/* Single command inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
sT[0].sCP[0].sCPR[nI].nSCNum  = 1;
}	
	
	
	
	
sT[0].sCP[0].sCPR[0].nDCStart  = 10;    sT[0].sCP[0].sCPR[0].nDCNum  = 1;    sT[0].sCP[0].sCPR[0].nSCStart  = 11;    sT[0].sCP[0].sCPR[0].nAckStart  =12;    sT[0].sCP[0].sCPR[0].nAckNum  =1;   sT[0].sCP[0].sCPR[0].nSPOffsetCS  = 24;   sT[0].sCP[0].sCPR[0].nSPOffsetLek  = 25; 	
sT[0].sCP[0].sCPR[1].nDCStart  = 13;    sT[0].sCP[0].sCPR[1].nDCNum  = 1;    sT[0].sCP[0].sCPR[1].nSCStart  = 14;    sT[0].sCP[0].sCPR[1].nAckStart  =15;    sT[0].sCP[0].sCPR[1].nAckNum  =1;   sT[0].sCP[0].sCPR[1].nSPOffsetCS  = 40;   sT[0].sCP[0].sCPR[1].nSPOffsetLek  = 41; 	
sT[0].sCP[0].sCPR[2].nDCStart  = 16;    sT[0].sCP[0].sCPR[2].nDCNum  = 1;    sT[0].sCP[0].sCPR[2].nSCStart  = 17;    sT[0].sCP[0].sCPR[2].nAckStart  =18;    sT[0].sCP[0].sCPR[2].nAckNum  =1;   sT[0].sCP[0].sCPR[2].nSPOffsetCS  = 56;   sT[0].sCP[0].sCPR[2].nSPOffsetLek  = 57; 	
sT[0].sCP[0].sCPR[3].nDCStart  = 19;    sT[0].sCP[0].sCPR[3].nDCNum  = 1;    sT[0].sCP[0].sCPR[3].nSCStart  = 20;    sT[0].sCP[0].sCPR[3].nAckStart  =21;    sT[0].sCP[0].sCPR[3].nAckNum  =1;   sT[0].sCP[0].sCPR[3].nSPOffsetCS  = 72;   sT[0].sCP[0].sCPR[3].nSPOffsetLek  = 73; 	
sT[0].sCP[0].sCPR[4].nDCStart  = 22;    sT[0].sCP[0].sCPR[4].nDCNum  = 1;    sT[0].sCP[0].sCPR[4].nSCStart  = 23;    sT[0].sCP[0].sCPR[4].nAckStart  =24;    sT[0].sCP[0].sCPR[4].nAckNum  =1;   sT[0].sCP[0].sCPR[4].nSPOffsetCS  = 88;   sT[0].sCP[0].sCPR[4].nSPOffsetLek  = 89; 	
sT[0].sCP[0].sCPR[5].nDCStart  = 25;    sT[0].sCP[0].sCPR[5].nDCNum  = 1;    sT[0].sCP[0].sCPR[5].nSCStart  = 26;    sT[0].sCP[0].sCPR[5].nAckStart  =27;    sT[0].sCP[0].sCPR[5].nAckNum  =1;   sT[0].sCP[0].sCPR[5].nSPOffsetCS  = 104;  sT[0].sCP[0].sCPR[5].nSPOffsetLek  = 105; 	
sT[0].sCP[0].sCPR[6].nDCStart  = 28;    sT[0].sCP[0].sCPR[6].nDCNum  = 1;    sT[0].sCP[0].sCPR[6].nSCStart  = 29;    sT[0].sCP[0].sCPR[6].nAckStart  =30;    sT[0].sCP[0].sCPR[6].nAckNum  =1;   sT[0].sCP[0].sCPR[6].nSPOffsetCS  = 120;  sT[0].sCP[0].sCPR[6].nSPOffsetLek  = 121; 	
sT[0].sCP[0].sCPR[7].nDCStart  = 31;    sT[0].sCP[0].sCPR[7].nDCNum  = 1;    sT[0].sCP[0].sCPR[7].nSCStart  = 32;    sT[0].sCP[0].sCPR[7].nAckStart  =33;    sT[0].sCP[0].sCPR[7].nAckNum  =1;   sT[0].sCP[0].sCPR[7].nSPOffsetCS  = 136;  sT[0].sCP[0].sCPR[7].nSPOffsetLek  = 137; 	
sT[0].sCP[0].sCPR[8].nDCStart  = 34;    sT[0].sCP[0].sCPR[8].nDCNum  = 1;    sT[0].sCP[0].sCPR[8].nSCStart  = 35;    sT[0].sCP[0].sCPR[8].nAckStart  =36;    sT[0].sCP[0].sCPR[8].nAckNum  =1;   sT[0].sCP[0].sCPR[8].nSPOffsetCS  = 152;  sT[0].sCP[0].sCPR[8].nSPOffsetLek  = 153; 	

sT[0].sCP[0].sCPR[9].nDCStart  = 37;    sT[0].sCP[0].sCPR[9].nDCNum  = 1;    sT[0].sCP[0].sCPR[9].nSCStart  = 38;    sT[0].sCP[0].sCPR[9].nAckStart  =39;    sT[0].sCP[0].sCPR[9].nAckNum  =1;   sT[0].sCP[0].sCPR[9].nSPOffsetCS  = 168;  sT[0].sCP[0].sCPR[9].nSPOffsetLek  = 169; 	
sT[0].sCP[0].sCPR[10].nDCStart = 40;    sT[0].sCP[0].sCPR[10].nDCNum = 1;    sT[0].sCP[0].sCPR[10].nSCStart = 41;    sT[0].sCP[0].sCPR[10].nAckStart =42;    sT[0].sCP[0].sCPR[10].nAckNum =1;   sT[0].sCP[0].sCPR[10].nSPOffsetCS = 184;  sT[0].sCP[0].sCPR[10].nSPOffsetLek = 185; 	
sT[0].sCP[0].sCPR[11].nDCStart = 43;    sT[0].sCP[0].sCPR[11].nDCNum = 1;    sT[0].sCP[0].sCPR[11].nSCStart = 44;    sT[0].sCP[0].sCPR[11].nAckStart =45;    sT[0].sCP[0].sCPR[11].nAckNum =1;   sT[0].sCP[0].sCPR[11].nSPOffsetCS = 200;  sT[0].sCP[0].sCPR[11].nSPOffsetLek = 201; 	
sT[0].sCP[0].sCPR[12].nDCStart = 46;    sT[0].sCP[0].sCPR[12].nDCNum = 1;    sT[0].sCP[0].sCPR[12].nSCStart = 47;    sT[0].sCP[0].sCPR[12].nAckStart =48;    sT[0].sCP[0].sCPR[12].nAckNum =1;   sT[0].sCP[0].sCPR[12].nSPOffsetCS = 216;  sT[0].sCP[0].sCPR[12].nSPOffsetLek = 217; 	
sT[0].sCP[0].sCPR[13].nDCStart = 49;    sT[0].sCP[0].sCPR[13].nDCNum = 1;    sT[0].sCP[0].sCPR[13].nSCStart = 50;    sT[0].sCP[0].sCPR[13].nAckStart =51;    sT[0].sCP[0].sCPR[13].nAckNum =1;   sT[0].sCP[0].sCPR[13].nSPOffsetCS = 232;  sT[0].sCP[0].sCPR[13].nSPOffsetLek = 233; 	
sT[0].sCP[0].sCPR[14].nDCStart = 52;    sT[0].sCP[0].sCPR[14].nDCNum = 1;    sT[0].sCP[0].sCPR[14].nSCStart = 53;    sT[0].sCP[0].sCPR[14].nAckStart =54;    sT[0].sCP[0].sCPR[14].nAckNum =1;   sT[0].sCP[0].sCPR[14].nSPOffsetCS = 248;  sT[0].sCP[0].sCPR[14].nSPOffsetLek = 249; 	
sT[0].sCP[0].sCPR[15].nDCStart = 55;    sT[0].sCP[0].sCPR[15].nDCNum = 1;    sT[0].sCP[0].sCPR[15].nSCStart = 56;    sT[0].sCP[0].sCPR[15].nAckStart =57;    sT[0].sCP[0].sCPR[15].nAckNum =1;   sT[0].sCP[0].sCPR[15].nSPOffsetCS = 264;  sT[0].sCP[0].sCPR[15].nSPOffsetLek = 265; 	
sT[0].sCP[0].sCPR[16].nDCStart = 58;    sT[0].sCP[0].sCPR[16].nDCNum = 1;    sT[0].sCP[0].sCPR[16].nSCStart = 59;    sT[0].sCP[0].sCPR[16].nAckStart =60;    sT[0].sCP[0].sCPR[16].nAckNum =1;   sT[0].sCP[0].sCPR[16].nSPOffsetCS = 280;  sT[0].sCP[0].sCPR[16].nSPOffsetLek = 281; 	
sT[0].sCP[0].sCPR[17].nDCStart = 61;    sT[0].sCP[0].sCPR[17].nDCNum = 1;    sT[0].sCP[0].sCPR[17].nSCStart = 62;    sT[0].sCP[0].sCPR[17].nAckStart =63;    sT[0].sCP[0].sCPR[17].nAckNum =1;   sT[0].sCP[0].sCPR[17].nSPOffsetCS = 296;  sT[0].sCP[0].sCPR[17].nSPOffsetLek = 297; 	
sT[0].sCP[0].sCPR[18].nDCStart = 64;    sT[0].sCP[0].sCPR[18].nDCNum = 1;    sT[0].sCP[0].sCPR[18].nSCStart = 65;    sT[0].sCP[0].sCPR[18].nAckStart =66;    sT[0].sCP[0].sCPR[18].nAckNum =1;   sT[0].sCP[0].sCPR[18].nSPOffsetCS = 312;  sT[0].sCP[0].sCPR[18].nSPOffsetLek = 313; 	
sT[0].sCP[0].sCPR[19].nDCStart = 67;    sT[0].sCP[0].sCPR[19].nDCNum = 1;    sT[0].sCP[0].sCPR[19].nSCStart = 68;    sT[0].sCP[0].sCPR[19].nAckStart =69;    sT[0].sCP[0].sCPR[19].nAckNum =1;   sT[0].sCP[0].sCPR[19].nSPOffsetCS = 328;  sT[0].sCP[0].sCPR[19].nSPOffsetLek = 329; 	
sT[0].sCP[0].sCPR[20].nDCStart = 70;    sT[0].sCP[0].sCPR[20].nDCNum = 1;    sT[0].sCP[0].sCPR[20].nSCStart = 71;    sT[0].sCP[0].sCPR[20].nAckStart =72;    sT[0].sCP[0].sCPR[20].nAckNum =1;   sT[0].sCP[0].sCPR[20].nSPOffsetCS = 344;  sT[0].sCP[0].sCPR[20].nSPOffsetLek = 345; 	
sT[0].sCP[0].sCPR[21].nDCStart = 73;    sT[0].sCP[0].sCPR[21].nDCNum = 1;    sT[0].sCP[0].sCPR[21].nSCStart = 74;    sT[0].sCP[0].sCPR[21].nAckStart =75;    sT[0].sCP[0].sCPR[21].nAckNum =1;   sT[0].sCP[0].sCPR[21].nSPOffsetCS = 360;  sT[0].sCP[0].sCPR[21].nSPOffsetLek = 361; 	
sT[0].sCP[0].sCPR[22].nDCStart = 76;    sT[0].sCP[0].sCPR[22].nDCNum = 1;    sT[0].sCP[0].sCPR[22].nSCStart = 77;    sT[0].sCP[0].sCPR[22].nAckStart =78;    sT[0].sCP[0].sCPR[22].nAckNum =1;   sT[0].sCP[0].sCPR[22].nSPOffsetCS = 376;  sT[0].sCP[0].sCPR[22].nSPOffsetLek = 377; 	
sT[0].sCP[0].sCPR[23].nDCStart = 79;    sT[0].sCP[0].sCPR[23].nDCNum = 1;    sT[0].sCP[0].sCPR[23].nSCStart = 80;    sT[0].sCP[0].sCPR[23].nAckStart =81;    sT[0].sCP[0].sCPR[23].nAckNum =1;   sT[0].sCP[0].sCPR[23].nSPOffsetCS = 392;  sT[0].sCP[0].sCPR[23].nSPOffsetLek = 393; 	
sT[0].sCP[0].sCPR[24].nDCStart = 82;    sT[0].sCP[0].sCPR[24].nDCNum = 1;    sT[0].sCP[0].sCPR[24].nSCStart = 83;    sT[0].sCP[0].sCPR[24].nAckStart =84;    sT[0].sCP[0].sCPR[24].nAckNum =1;   sT[0].sCP[0].sCPR[24].nSPOffsetCS = 408;  sT[0].sCP[0].sCPR[24].nSPOffsetLek = 409; 	
sT[0].sCP[0].sCPR[25].nDCStart = 85;    sT[0].sCP[0].sCPR[25].nDCNum = 1;    sT[0].sCP[0].sCPR[25].nSCStart = 86;    sT[0].sCP[0].sCPR[25].nAckStart =87;    sT[0].sCP[0].sCPR[25].nAckNum =1;   sT[0].sCP[0].sCPR[25].nSPOffsetCS = 424;  sT[0].sCP[0].sCPR[25].nSPOffsetLek = 425; 	
sT[0].sCP[0].sCPR[26].nDCStart = 88;    sT[0].sCP[0].sCPR[26].nDCNum = 1;    sT[0].sCP[0].sCPR[26].nSCStart = 89;    sT[0].sCP[0].sCPR[26].nAckStart =90;    sT[0].sCP[0].sCPR[26].nAckNum =1;   sT[0].sCP[0].sCPR[26].nSPOffsetCS = 440;  sT[0].sCP[0].sCPR[26].nSPOffsetLek = 441; 	
sT[0].sCP[0].sCPR[27].nDCStart = 91;    sT[0].sCP[0].sCPR[27].nDCNum = 1;    sT[0].sCP[0].sCPR[27].nSCStart = 92;    sT[0].sCP[0].sCPR[27].nAckStart =93;    sT[0].sCP[0].sCPR[27].nAckNum =1;   sT[0].sCP[0].sCPR[27].nSPOffsetCS = 456;  sT[0].sCP[0].sCPR[27].nSPOffsetLek = 457; 	
sT[0].sCP[0].sCPR[28].nDCStart = 94;    sT[0].sCP[0].sCPR[28].nDCNum = 1;    sT[0].sCP[0].sCPR[28].nSCStart = 95;    sT[0].sCP[0].sCPR[28].nAckStart =96;    sT[0].sCP[0].sCPR[28].nAckNum =1;   sT[0].sCP[0].sCPR[28].nSPOffsetCS = 472;  sT[0].sCP[0].sCPR[28].nSPOffsetLek = 473; 	
sT[0].sCP[0].sCPR[29].nDCStart = 97;    sT[0].sCP[0].sCPR[29].nDCNum = 1;    sT[0].sCP[0].sCPR[29].nSCStart = 98;    sT[0].sCP[0].sCPR[29].nAckStart =99;    sT[0].sCP[0].sCPR[29].nAckNum =1;   sT[0].sCP[0].sCPR[29].nSPOffsetCS = 488;  sT[0].sCP[0].sCPR[29].nSPOffsetLek = 489; 	
sT[0].sCP[0].sCPR[30].nDCStart = 100;   sT[0].sCP[0].sCPR[30].nDCNum = 1;    sT[0].sCP[0].sCPR[30].nSCStart = 101;   sT[0].sCP[0].sCPR[30].nAckStart =102;   sT[0].sCP[0].sCPR[30].nAckNum =1;   sT[0].sCP[0].sCPR[30].nSPOffsetCS = 504;  sT[0].sCP[0].sCPR[30].nSPOffsetLek = 505; 	
sT[0].sCP[0].sCPR[31].nDCStart = 103;   sT[0].sCP[0].sCPR[31].nDCNum = 1;    sT[0].sCP[0].sCPR[31].nSCStart = 104;   sT[0].sCP[0].sCPR[31].nAckStart =105;   sT[0].sCP[0].sCPR[31].nAckNum =1;   sT[0].sCP[0].sCPR[31].nSPOffsetCS = 520;  sT[0].sCP[0].sCPR[31].nSPOffsetLek = 521; 	
sT[0].sCP[0].sCPR[32].nDCStart = 106;   sT[0].sCP[0].sCPR[32].nDCNum = 1;    sT[0].sCP[0].sCPR[32].nSCStart = 107;   sT[0].sCP[0].sCPR[32].nAckStart =108;   sT[0].sCP[0].sCPR[32].nAckNum =1;   sT[0].sCP[0].sCPR[32].nSPOffsetCS = 536;  sT[0].sCP[0].sCPR[32].nSPOffsetLek = 537; 	
sT[0].sCP[0].sCPR[33].nDCStart = 109;   sT[0].sCP[0].sCPR[33].nDCNum = 1;    sT[0].sCP[0].sCPR[33].nSCStart = 110;   sT[0].sCP[0].sCPR[33].nAckStart =111;   sT[0].sCP[0].sCPR[33].nAckNum =1;   sT[0].sCP[0].sCPR[33].nSPOffsetCS = 552;  sT[0].sCP[0].sCPR[33].nSPOffsetLek = 553; 	
sT[0].sCP[0].sCPR[34].nDCStart = 112;   sT[0].sCP[0].sCPR[34].nDCNum = 1;    sT[0].sCP[0].sCPR[34].nSCStart = 113;   sT[0].sCP[0].sCPR[34].nAckStart =114;   sT[0].sCP[0].sCPR[34].nAckNum =1;   sT[0].sCP[0].sCPR[34].nSPOffsetCS = 568;  sT[0].sCP[0].sCPR[34].nSPOffsetLek = 569; 	
sT[0].sCP[0].sCPR[35].nDCStart = 115;   sT[0].sCP[0].sCPR[35].nDCNum = 1;    sT[0].sCP[0].sCPR[35].nSCStart = 116;   sT[0].sCP[0].sCPR[35].nAckStart =117;   sT[0].sCP[0].sCPR[35].nAckNum =1;   sT[0].sCP[0].sCPR[35].nSPOffsetCS = 584;  sT[0].sCP[0].sCPR[35].nSPOffsetLek = 585; 	
sT[0].sCP[0].sCPR[36].nDCStart = 118;   sT[0].sCP[0].sCPR[36].nDCNum = 1;    sT[0].sCP[0].sCPR[36].nSCStart = 119;   sT[0].sCP[0].sCPR[36].nAckStart =120;   sT[0].sCP[0].sCPR[36].nAckNum =1;   sT[0].sCP[0].sCPR[36].nSPOffsetCS = 600;  sT[0].sCP[0].sCPR[36].nSPOffsetLek = 601; 	
sT[0].sCP[0].sCPR[37].nDCStart = 121;   sT[0].sCP[0].sCPR[37].nDCNum = 1;    sT[0].sCP[0].sCPR[37].nSCStart = 122;   sT[0].sCP[0].sCPR[37].nAckStart =123;   sT[0].sCP[0].sCPR[37].nAckNum =1;   sT[0].sCP[0].sCPR[37].nSPOffsetCS = 616;  sT[0].sCP[0].sCPR[37].nSPOffsetLek = 617; 	
sT[0].sCP[0].sCPR[38].nDCStart = 124;   sT[0].sCP[0].sCPR[38].nDCNum = 1;    sT[0].sCP[0].sCPR[38].nSCStart = 125;   sT[0].sCP[0].sCPR[38].nAckStart =126;   sT[0].sCP[0].sCPR[38].nAckNum =1;   sT[0].sCP[0].sCPR[38].nSPOffsetCS = 632;  sT[0].sCP[0].sCPR[38].nSPOffsetLek = 633; 	
sT[0].sCP[0].sCPR[39].nDCStart = 127;   sT[0].sCP[0].sCPR[39].nDCNum = 1;    sT[0].sCP[0].sCPR[39].nSCStart = 128;   sT[0].sCP[0].sCPR[39].nAckStart =129;   sT[0].sCP[0].sCPR[39].nAckNum =1;   sT[0].sCP[0].sCPR[39].nSPOffsetCS = 648;  sT[0].sCP[0].sCPR[39].nSPOffsetLek = 649; 	
sT[0].sCP[0].sCPR[40].nDCStart = 130;   sT[0].sCP[0].sCPR[40].nDCNum = 1;    sT[0].sCP[0].sCPR[40].nSCStart = 131;   sT[0].sCP[0].sCPR[40].nAckStart =132;   sT[0].sCP[0].sCPR[40].nAckNum =1;   sT[0].sCP[0].sCPR[40].nSPOffsetCS = 664;  sT[0].sCP[0].sCPR[40].nSPOffsetLek = 665; 	
sT[0].sCP[0].sCPR[41].nDCStart = 133;   sT[0].sCP[0].sCPR[41].nDCNum = 1;    sT[0].sCP[0].sCPR[41].nSCStart = 134;   sT[0].sCP[0].sCPR[41].nAckStart =135;   sT[0].sCP[0].sCPR[41].nAckNum =1;   sT[0].sCP[0].sCPR[41].nSPOffsetCS = 680;  sT[0].sCP[0].sCPR[41].nSPOffsetLek = 681; 	
sT[0].sCP[0].sCPR[42].nDCStart = 136;   sT[0].sCP[0].sCPR[42].nDCNum = 1;    sT[0].sCP[0].sCPR[42].nSCStart = 137;   sT[0].sCP[0].sCPR[42].nAckStart =138;   sT[0].sCP[0].sCPR[42].nAckNum =1;   sT[0].sCP[0].sCPR[42].nSPOffsetCS = 696;  sT[0].sCP[0].sCPR[42].nSPOffsetLek = 697; 	
sT[0].sCP[0].sCPR[43].nDCStart = 139;   sT[0].sCP[0].sCPR[43].nDCNum = 1;    sT[0].sCP[0].sCPR[43].nSCStart = 140;   sT[0].sCP[0].sCPR[43].nAckStart =141;   sT[0].sCP[0].sCPR[43].nAckNum =1;   sT[0].sCP[0].sCPR[43].nSPOffsetCS = 712;  sT[0].sCP[0].sCPR[43].nSPOffsetLek = 713; 	
sT[0].sCP[0].sCPR[44].nDCStart = 142;   sT[0].sCP[0].sCPR[44].nDCNum = 1;    sT[0].sCP[0].sCPR[44].nSCStart = 143;   sT[0].sCP[0].sCPR[44].nAckStart =144;   sT[0].sCP[0].sCPR[44].nAckNum =1;   sT[0].sCP[0].sCPR[44].nSPOffsetCS = 728;  sT[0].sCP[0].sCPR[44].nSPOffsetLek = 729; 	
sT[0].sCP[0].sCPR[45].nDCStart = 145;   sT[0].sCP[0].sCPR[45].nDCNum = 1;    sT[0].sCP[0].sCPR[45].nSCStart = 146;   sT[0].sCP[0].sCPR[45].nAckStart =147;   sT[0].sCP[0].sCPR[45].nAckNum =1;   sT[0].sCP[0].sCPR[45].nSPOffsetCS = 744;  sT[0].sCP[0].sCPR[45].nSPOffsetLek = 745; 	
sT[0].sCP[0].sCPR[46].nDCStart = 148;   sT[0].sCP[0].sCPR[46].nDCNum = 1;    sT[0].sCP[0].sCPR[46].nSCStart = 149;   sT[0].sCP[0].sCPR[46].nAckStart =150;   sT[0].sCP[0].sCPR[46].nAckNum =1;   sT[0].sCP[0].sCPR[46].nSPOffsetCS = 760;  sT[0].sCP[0].sCPR[46].nSPOffsetLek = 761; 	
sT[0].sCP[0].sCPR[47].nDCStart = 151;   sT[0].sCP[0].sCPR[47].nDCNum = 1;    sT[0].sCP[0].sCPR[47].nSCStart = 152;   sT[0].sCP[0].sCPR[47].nAckStart =153;   sT[0].sCP[0].sCPR[47].nAckNum =1;   sT[0].sCP[0].sCPR[47].nSPOffsetCS = 776;  sT[0].sCP[0].sCPR[47].nSPOffsetLek = 777; 	
sT[0].sCP[0].sCPR[48].nDCStart = 154;   sT[0].sCP[0].sCPR[48].nDCNum = 1;    sT[0].sCP[0].sCPR[48].nSCStart = 155;   sT[0].sCP[0].sCPR[48].nAckStart =156;   sT[0].sCP[0].sCPR[48].nAckNum =1;   sT[0].sCP[0].sCPR[48].nSPOffsetCS = 792;  sT[0].sCP[0].sCPR[48].nSPOffsetLek = 793; 	
sT[0].sCP[0].sCPR[49].nDCStart = 157;   sT[0].sCP[0].sCPR[49].nDCNum = 1;    sT[0].sCP[0].sCPR[49].nSCStart = 158;   sT[0].sCP[0].sCPR[49].nAckStart =159;   sT[0].sCP[0].sCPR[49].nAckNum =1;   sT[0].sCP[0].sCPR[49].nSPOffsetCS = 808;  sT[0].sCP[0].sCPR[49].nSPOffsetLek = 809; 	
sT[0].sCP[0].sCPR[50].nDCStart = 160;   sT[0].sCP[0].sCPR[50].nDCNum = 1;    sT[0].sCP[0].sCPR[50].nSCStart = 161;   sT[0].sCP[0].sCPR[50].nAckStart =162;   sT[0].sCP[0].sCPR[50].nAckNum =1;   sT[0].sCP[0].sCPR[50].nSPOffsetCS = 824;  sT[0].sCP[0].sCPR[50].nSPOffsetLek = 825; 	
sT[0].sCP[0].sCPR[51].nDCStart = 163;   sT[0].sCP[0].sCPR[51].nDCNum = 1;    sT[0].sCP[0].sCPR[51].nSCStart = 164;   sT[0].sCP[0].sCPR[51].nAckStart =165;   sT[0].sCP[0].sCPR[51].nAckNum =1;   sT[0].sCP[0].sCPR[51].nSPOffsetCS = 840;  sT[0].sCP[0].sCPR[51].nSPOffsetLek = 841; 	
sT[0].sCP[0].sCPR[52].nDCStart = 166;   sT[0].sCP[0].sCPR[52].nDCNum = 1;    sT[0].sCP[0].sCPR[52].nSCStart = 167;   sT[0].sCP[0].sCPR[52].nAckStart =168;   sT[0].sCP[0].sCPR[52].nAckNum =1;   sT[0].sCP[0].sCPR[52].nSPOffsetCS = 856;  sT[0].sCP[0].sCPR[52].nSPOffsetLek = 857; 	
sT[0].sCP[0].sCPR[53].nDCStart = 169;   sT[0].sCP[0].sCPR[53].nDCNum = 4;    sT[0].sCP[0].sCPR[53].nSCStart = 173;   sT[0].sCP[0].sCPR[53].nAckStart =0  ;	 sT[0].sCP[0].sCPR[53].nAckNum =0;   sT[0].sCP[0].sCPR[53].nSPOffsetCS = 874;  sT[0].sCP[0].sCPR[53].nSPOffsetLek = 875; 	
sT[0].sCP[0].sCPR[54].nDCStart = 174;   sT[0].sCP[0].sCPR[54].nDCNum = 4;    sT[0].sCP[0].sCPR[54].nSCStart = 178;   sT[0].sCP[0].sCPR[54].nAckStart =0  ;	 sT[0].sCP[0].sCPR[54].nAckNum =0;   sT[0].sCP[0].sCPR[54].nSPOffsetCS = 890;  sT[0].sCP[0].sCPR[54].nSPOffsetLek = 891; 	
sT[0].sCP[0].sCPR[55].nDCStart = 179;   sT[0].sCP[0].sCPR[55].nDCNum = 4;    sT[0].sCP[0].sCPR[55].nSCStart = 183;   sT[0].sCP[0].sCPR[55].nAckStart =0  ;	 sT[0].sCP[0].sCPR[55].nAckNum =0;   sT[0].sCP[0].sCPR[55].nSPOffsetCS = 906;  sT[0].sCP[0].sCPR[55].nSPOffsetLek = 907; 	
sT[0].sCP[0].sCPR[56].nDCStart = 184;   sT[0].sCP[0].sCPR[56].nDCNum = 4;    sT[0].sCP[0].sCPR[56].nSCStart = 188;   sT[0].sCP[0].sCPR[56].nAckStart =0  ;	 sT[0].sCP[0].sCPR[56].nAckNum =0;   sT[0].sCP[0].sCPR[56].nSPOffsetCS = 922;  sT[0].sCP[0].sCPR[56].nSPOffsetLek = 923; 	
sT[0].sCP[0].sCPR[57].nDCStart = 189;   sT[0].sCP[0].sCPR[57].nDCNum = 1;    sT[0].sCP[0].sCPR[57].nSCStart = 190;   sT[0].sCP[0].sCPR[57].nAckStart =191;   sT[0].sCP[0].sCPR[57].nAckNum =1;   sT[0].sCP[0].sCPR[57].nSPOffsetCS = 938;  sT[0].sCP[0].sCPR[57].nSPOffsetLek = 939; 	
sT[0].sCP[0].sCPR[58].nDCStart = 192;   sT[0].sCP[0].sCPR[58].nDCNum = 1;    sT[0].sCP[0].sCPR[58].nSCStart = 193;   sT[0].sCP[0].sCPR[58].nAckStart =194;   sT[0].sCP[0].sCPR[58].nAckNum =1;   sT[0].sCP[0].sCPR[58].nSPOffsetCS = 954;  sT[0].sCP[0].sCPR[58].nSPOffsetLek = 955; 	
sT[0].sCP[0].sCPR[59].nDCStart = 195;   sT[0].sCP[0].sCPR[59].nDCNum = 1;    sT[0].sCP[0].sCPR[59].nSCStart = 196;   sT[0].sCP[0].sCPR[59].nAckStart =197;   sT[0].sCP[0].sCPR[59].nAckNum =1;   sT[0].sCP[0].sCPR[59].nSPOffsetCS = 970;  sT[0].sCP[0].sCPR[59].nSPOffsetLek = 971; 	
sT[0].sCP[0].sCPR[60].nDCStart = 198;   sT[0].sCP[0].sCPR[60].nDCNum = 1;    sT[0].sCP[0].sCPR[60].nSCStart = 199;   sT[0].sCP[0].sCPR[60].nAckStart =200;   sT[0].sCP[0].sCPR[60].nAckNum =1;   sT[0].sCP[0].sCPR[60].nSPOffsetCS = 986;  sT[0].sCP[0].sCPR[60].nSPOffsetLek = 987; 	
sT[0].sCP[0].sCPR[61].nDCStart = 201;   sT[0].sCP[0].sCPR[61].nDCNum = 1;    sT[0].sCP[0].sCPR[61].nSCStart = 202;   sT[0].sCP[0].sCPR[61].nAckStart =203;   sT[0].sCP[0].sCPR[61].nAckNum =1;   sT[0].sCP[0].sCPR[61].nSPOffsetCS = 1002; sT[0].sCP[0].sCPR[61].nSPOffsetLek = 1003; 	
sT[0].sCP[0].sCPR[62].nDCStart = 204;   sT[0].sCP[0].sCPR[62].nDCNum = 1;    sT[0].sCP[0].sCPR[62].nSCStart = 205;   sT[0].sCP[0].sCPR[62].nAckStart =206;   sT[0].sCP[0].sCPR[62].nAckNum =1;   sT[0].sCP[0].sCPR[62].nSPOffsetCS = 1018; sT[0].sCP[0].sCPR[62].nSPOffsetLek = 1019; 	
sT[0].sCP[0].sCPR[63].nDCStart = 207;   sT[0].sCP[0].sCPR[63].nDCNum = 1;    sT[0].sCP[0].sCPR[63].nSCStart = 208;   sT[0].sCP[0].sCPR[63].nAckStart =209;   sT[0].sCP[0].sCPR[63].nAckNum =1;   sT[0].sCP[0].sCPR[63].nSPOffsetCS = 1034; sT[0].sCP[0].sCPR[63].nSPOffsetLek = 1035; 	
sT[0].sCP[0].sCPR[64].nDCStart = 210;   sT[0].sCP[0].sCPR[64].nDCNum = 1;    sT[0].sCP[0].sCPR[64].nSCStart = 211;   sT[0].sCP[0].sCPR[64].nAckStart =212;   sT[0].sCP[0].sCPR[64].nAckNum =1;   sT[0].sCP[0].sCPR[64].nSPOffsetCS = 1050; sT[0].sCP[0].sCPR[64].nSPOffsetLek = 1051; 	
sT[0].sCP[0].sCPR[65].nDCStart = 213;   sT[0].sCP[0].sCPR[65].nDCNum = 1;    sT[0].sCP[0].sCPR[65].nSCStart = 214;   sT[0].sCP[0].sCPR[65].nAckStart =215;   sT[0].sCP[0].sCPR[65].nAckNum =1;   sT[0].sCP[0].sCPR[65].nSPOffsetCS = 1066; sT[0].sCP[0].sCPR[65].nSPOffsetLek = 1067; 	
sT[0].sCP[0].sCPR[66].nDCStart = 216;   sT[0].sCP[0].sCPR[66].nDCNum = 1;    sT[0].sCP[0].sCPR[66].nSCStart = 217;   sT[0].sCP[0].sCPR[66].nAckStart =218;   sT[0].sCP[0].sCPR[66].nAckNum =1;   sT[0].sCP[0].sCPR[66].nSPOffsetCS = 1082; sT[0].sCP[0].sCPR[66].nSPOffsetLek = 1083; 	
sT[0].sCP[0].sCPR[67].nDCStart = 219;   sT[0].sCP[0].sCPR[67].nDCNum = 1;    sT[0].sCP[0].sCPR[67].nSCStart = 220;   sT[0].sCP[0].sCPR[67].nAckStart =221;   sT[0].sCP[0].sCPR[67].nAckNum =1;   sT[0].sCP[0].sCPR[67].nSPOffsetCS = 1098; sT[0].sCP[0].sCPR[67].nSPOffsetLek = 1099; 	
sT[0].sCP[0].sCPR[68].nDCStart = 222;   sT[0].sCP[0].sCPR[68].nDCNum = 1;    sT[0].sCP[0].sCPR[68].nSCStart = 223;   sT[0].sCP[0].sCPR[68].nAckStart =224;   sT[0].sCP[0].sCPR[68].nAckNum =1;   sT[0].sCP[0].sCPR[68].nSPOffsetCS = 1114; sT[0].sCP[0].sCPR[68].nSPOffsetLek = 1115; 	
sT[0].sCP[0].sCPR[69].nDCStart = 225;   sT[0].sCP[0].sCPR[69].nDCNum = 1;    sT[0].sCP[0].sCPR[69].nSCStart = 226;   sT[0].sCP[0].sCPR[69].nAckStart =227;   sT[0].sCP[0].sCPR[69].nAckNum =1;   sT[0].sCP[0].sCPR[69].nSPOffsetCS = 1130; sT[0].sCP[0].sCPR[69].nSPOffsetLek = 1131; 	
sT[0].sCP[0].sCPR[70].nDCStart = 228;   sT[0].sCP[0].sCPR[70].nDCNum = 1;    sT[0].sCP[0].sCPR[70].nSCStart = 229;   sT[0].sCP[0].sCPR[70].nAckStart =230;   sT[0].sCP[0].sCPR[70].nAckNum =1;   sT[0].sCP[0].sCPR[70].nSPOffsetCS = 1146; sT[0].sCP[0].sCPR[70].nSPOffsetLek = 1147; 	
sT[0].sCP[0].sCPR[71].nDCStart = 231;   sT[0].sCP[0].sCPR[71].nDCNum = 1;    sT[0].sCP[0].sCPR[71].nSCStart = 232;   sT[0].sCP[0].sCPR[71].nAckStart =233;   sT[0].sCP[0].sCPR[71].nAckNum =1;   sT[0].sCP[0].sCPR[71].nSPOffsetCS = 1162; sT[0].sCP[0].sCPR[71].nSPOffsetLek = 1163; 	
sT[0].sCP[0].sCPR[72].nDCStart = 234;   sT[0].sCP[0].sCPR[72].nDCNum = 4;    sT[0].sCP[0].sCPR[72].nSCStart = 238;   sT[0].sCP[0].sCPR[72].nAckStart =0  ;	 sT[0].sCP[0].sCPR[72].nAckNum =0;   sT[0].sCP[0].sCPR[72].nSPOffsetCS = 1180; sT[0].sCP[0].sCPR[72].nSPOffsetLek = 1181; 	
sT[0].sCP[0].sCPR[73].nDCStart = 239;   sT[0].sCP[0].sCPR[73].nDCNum = 4;    sT[0].sCP[0].sCPR[73].nSCStart = 243;   sT[0].sCP[0].sCPR[73].nAckStart =0  ;	 sT[0].sCP[0].sCPR[73].nAckNum =0;   sT[0].sCP[0].sCPR[73].nSPOffsetCS = 1198; sT[0].sCP[0].sCPR[73].nSPOffsetLek = 1199; 	
sT[0].sCP[0].sCPR[74].nDCStart = 244;   sT[0].sCP[0].sCPR[74].nDCNum = 4;    sT[0].sCP[0].sCPR[74].nSCStart = 248;   sT[0].sCP[0].sCPR[74].nAckStart =0  ;	 sT[0].sCP[0].sCPR[74].nAckNum =0;   sT[0].sCP[0].sCPR[74].nSPOffsetCS = 1216; sT[0].sCP[0].sCPR[74].nSPOffsetLek = 1217; 	
sT[0].sCP[0].sCPR[75].nDCStart = 249;   sT[0].sCP[0].sCPR[75].nDCNum = 4;    sT[0].sCP[0].sCPR[75].nSCStart = 253;   sT[0].sCP[0].sCPR[75].nAckStart =0  ;	 sT[0].sCP[0].sCPR[75].nAckNum =0;   sT[0].sCP[0].sCPR[75].nSPOffsetCS = 1232; sT[0].sCP[0].sCPR[75].nSPOffsetLek = 1233; 	
sT[0].sCP[0].sCPR[76].nDCStart = 254;   sT[0].sCP[0].sCPR[76].nDCNum = 4;    sT[0].sCP[0].sCPR[76].nSCStart = 258;   sT[0].sCP[0].sCPR[76].nAckStart =265  ; sT[0].sCP[0].sCPR[76].nAckNum =1;   sT[0].sCP[0].sCPR[76].nSPOffsetCS = 1319; sT[0].sCP[0].sCPR[76].nSPOffsetLek = 1320; 	
sT[0].sCP[0].sCPR[77].nDCStart = 259;   sT[0].sCP[0].sCPR[77].nDCNum = 4;    sT[0].sCP[0].sCPR[77].nSCStart = 264;   sT[0].sCP[0].sCPR[77].nAckStart =263;	 sT[0].sCP[0].sCPR[77].nAckNum =1;   sT[0].sCP[0].sCPR[77].nSPOffsetCS = 1285; sT[0].sCP[0].sCPR[77].nSPOffsetLek = 1286; 	
sT[0].sCP[0].sCPR[78].nDCStart = 266;   sT[0].sCP[0].sCPR[78].nDCNum = 4;    sT[0].sCP[0].sCPR[78].nSCStart = 271;   sT[0].sCP[0].sCPR[78].nAckStart =270;	 sT[0].sCP[0].sCPR[78].nAckNum =1;   sT[0].sCP[0].sCPR[78].nSPOffsetCS = 1356; sT[0].sCP[0].sCPR[78].nSPOffsetLek = 1357; 	
sT[0].sCP[0].sCPR[79].nDCStart = 272;   sT[0].sCP[0].sCPR[79].nDCNum = 4;    sT[0].sCP[0].sCPR[79].nSCStart = 277;   sT[0].sCP[0].sCPR[79].nAckStart =276;	 sT[0].sCP[0].sCPR[79].nAckNum =1;   sT[0].sCP[0].sCPR[79].nSPOffsetCS = 1393; sT[0].sCP[0].sCPR[79].nSPOffsetLek = 1394; 	
sT[0].sCP[0].sCPR[80].nDCStart = 278;   sT[0].sCP[0].sCPR[80].nDCNum = 4;    sT[0].sCP[0].sCPR[80].nSCStart = 283;   sT[0].sCP[0].sCPR[80].nAckStart =282;	 sT[0].sCP[0].sCPR[80].nAckNum =1;   sT[0].sCP[0].sCPR[80].nSPOffsetCS = 1430; sT[0].sCP[0].sCPR[80].nSPOffsetLek = 1431; 	
sT[0].sCP[0].sCPR[81].nDCStart = 284;   sT[0].sCP[0].sCPR[81].nDCNum = 1;    sT[0].sCP[0].sCPR[81].nSCStart = 285;   sT[0].sCP[0].sCPR[81].nAckStart =286;   sT[0].sCP[0].sCPR[81].nAckNum =1;   sT[0].sCP[0].sCPR[81].nSPOffsetCS = 1446; sT[0].sCP[0].sCPR[81].nSPOffsetLek = 1447; 	
sT[0].sCP[0].sCPR[82].nDCStart = 287;   sT[0].sCP[0].sCPR[82].nDCNum = 4;    sT[0].sCP[0].sCPR[82].nSCStart = 291;   sT[0].sCP[0].sCPR[82].nAckStart =0  ;	 sT[0].sCP[0].sCPR[82].nAckNum =0;   sT[0].sCP[0].sCPR[82].nSPOffsetCS = 1464; sT[0].sCP[0].sCPR[82].nSPOffsetLek = 1465; 	
sT[0].sCP[0].sCPR[83].nDCStart = 292;   sT[0].sCP[0].sCPR[83].nDCNum = 1;    sT[0].sCP[0].sCPR[83].nSCStart = 293;   sT[0].sCP[0].sCPR[83].nAckStart =294;   sT[0].sCP[0].sCPR[83].nAckNum =1;   sT[0].sCP[0].sCPR[83].nSPOffsetCS = 1480; sT[0].sCP[0].sCPR[83].nSPOffsetLek = 1481; 	
sT[0].sCP[0].sCPR[84].nDCStart = 295;   sT[0].sCP[0].sCPR[84].nDCNum = 1;    sT[0].sCP[0].sCPR[84].nSCStart = 296;   sT[0].sCP[0].sCPR[84].nAckStart =297;   sT[0].sCP[0].sCPR[84].nAckNum =1;   sT[0].sCP[0].sCPR[84].nSPOffsetCS = 1496; sT[0].sCP[0].sCPR[84].nSPOffsetLek = 1497; 	
sT[0].sCP[0].sCPR[85].nDCStart = 298;   sT[0].sCP[0].sCPR[85].nDCNum = 1;    sT[0].sCP[0].sCPR[85].nSCStart = 299;   sT[0].sCP[0].sCPR[85].nAckStart =300;   sT[0].sCP[0].sCPR[85].nAckNum =1;   sT[0].sCP[0].sCPR[85].nSPOffsetCS = 1512; sT[0].sCP[0].sCPR[85].nSPOffsetLek = 1513; 	
sT[0].sCP[0].sCPR[86].nDCStart = 301;   sT[0].sCP[0].sCPR[86].nDCNum = 1;    sT[0].sCP[0].sCPR[86].nSCStart = 302;   sT[0].sCP[0].sCPR[86].nAckStart =303;   sT[0].sCP[0].sCPR[86].nAckNum =1;   sT[0].sCP[0].sCPR[86].nSPOffsetCS = 1528; sT[0].sCP[0].sCPR[86].nSPOffsetLek = 1529; 	
sT[0].sCP[0].sCPR[87].nDCStart = 304;   sT[0].sCP[0].sCPR[87].nDCNum = 4;    sT[0].sCP[0].sCPR[87].nSCStart = 308;   sT[0].sCP[0].sCPR[87].nAckStart =0;     sT[0].sCP[0].sCPR[87].nAckNum =0;   sT[0].sCP[0].sCPR[87].nSPOffsetCS = 1546; sT[0].sCP[0].sCPR[87].nSPOffsetLek = 1547; 	
sT[0].sCP[0].sCPR[88].nDCStart = 676;   sT[0].sCP[0].sCPR[88].nDCNum = 5;    sT[0].sCP[0].sCPR[88].nSCStart = 684;   sT[0].sCP[0].sCPR[88].nAckStart =0;     sT[0].sCP[0].sCPR[88].nAckNum =0;   sT[0].sCP[0].sCPR[88].nSPOffsetCS = 1564; sT[0].sCP[0].sCPR[88].nSPOffsetLek = 1565; 	
sT[0].sCP[0].sCPR[89].nDCStart = 314;   sT[0].sCP[0].sCPR[89].nDCNum = 1;    sT[0].sCP[0].sCPR[89].nSCStart = 315;   sT[0].sCP[0].sCPR[89].nAckStart =0;     sT[0].sCP[0].sCPR[89].nAckNum =0;   sT[0].sCP[0].sCPR[89].nSPOffsetCS = 1580; sT[0].sCP[0].sCPR[89].nSPOffsetLek = 1581; 	
sT[0].sCP[0].sCPR[90].nDCStart = 317;   sT[0].sCP[0].sCPR[90].nDCNum = 1;    sT[0].sCP[0].sCPR[90].nSCStart = 318;   sT[0].sCP[0].sCPR[90].nAckStart =319;   sT[0].sCP[0].sCPR[90].nAckNum =1;   sT[0].sCP[0].sCPR[90].nSPOffsetCS = 1596; sT[0].sCP[0].sCPR[90].nSPOffsetLek = 1597; 	
sT[0].sCP[0].sCPR[91].nDCStart = 0;     sT[0].sCP[0].sCPR[91].nDCNum = 0;    sT[0].sCP[0].sCPR[91].nSCStart = 320;   sT[0].sCP[0].sCPR[91].nAckStart =0;     sT[0].sCP[0].sCPR[91].nAckNum =0;   sT[0].sCP[0].sCPR[91].nSPOffsetCS = 1603; sT[0].sCP[0].sCPR[91].nSPOffsetLek = 1604; 	
sT[0].sCP[0].sCPR[92].nDCStart = 321;   sT[0].sCP[0].sCPR[92].nDCNum = 1;    sT[0].sCP[0].sCPR[92].nSCStart = 322;   sT[0].sCP[0].sCPR[92].nAckStart =0;     sT[0].sCP[0].sCPR[92].nAckNum =0;   sT[0].sCP[0].sCPR[92].nSPOffsetCS = 1619; sT[0].sCP[0].sCPR[92].nSPOffsetLek = 1620; 	
sT[0].sCP[0].sCPR[93].nDCStart = 324;   sT[0].sCP[0].sCPR[93].nDCNum = 4;    sT[0].sCP[0].sCPR[93].nSCStart = 329;   sT[0].sCP[0].sCPR[93].nAckStart =328;	 sT[0].sCP[0].sCPR[93].nAckNum =1;   sT[0].sCP[0].sCPR[93].nSPOffsetCS = 1656; sT[0].sCP[0].sCPR[93].nSPOffsetLek = 1657; 	
sT[0].sCP[0].sCPR[94].nDCStart = 330;   sT[0].sCP[0].sCPR[94].nDCNum = 4;    sT[0].sCP[0].sCPR[94].nSCStart = 335;   sT[0].sCP[0].sCPR[94].nAckStart =334;	 sT[0].sCP[0].sCPR[94].nAckNum =1;   sT[0].sCP[0].sCPR[94].nSPOffsetCS = 1693; sT[0].sCP[0].sCPR[94].nSPOffsetLek = 1694; 	
sT[0].sCP[0].sCPR[95].nDCStart = 336;   sT[0].sCP[0].sCPR[95].nDCNum = 4;    sT[0].sCP[0].sCPR[95].nSCStart = 341;   sT[0].sCP[0].sCPR[95].nAckStart =340;	 sT[0].sCP[0].sCPR[95].nAckNum =1;   sT[0].sCP[0].sCPR[95].nSPOffsetCS = 1730; sT[0].sCP[0].sCPR[95].nSPOffsetLek = 1731; 	
sT[0].sCP[0].sCPR[96].nDCStart = 342;   sT[0].sCP[0].sCPR[96].nDCNum = 1;    sT[0].sCP[0].sCPR[96].nSCStart = 343;   sT[0].sCP[0].sCPR[96].nAckStart =344;   sT[0].sCP[0].sCPR[96].nAckNum =1;   sT[0].sCP[0].sCPR[96].nSPOffsetCS = 1746; sT[0].sCP[0].sCPR[96].nSPOffsetLek = 1747; 	
sT[0].sCP[0].sCPR[97].nDCStart = 345;   sT[0].sCP[0].sCPR[97].nDCNum = 1;    sT[0].sCP[0].sCPR[97].nSCStart = 346;   sT[0].sCP[0].sCPR[97].nAckStart =347;   sT[0].sCP[0].sCPR[97].nAckNum =1;   sT[0].sCP[0].sCPR[97].nSPOffsetCS = 1762; sT[0].sCP[0].sCPR[97].nSPOffsetLek = 1763; 	
sT[0].sCP[0].sCPR[98].nDCStart = 348;   sT[0].sCP[0].sCPR[98].nDCNum = 1;    sT[0].sCP[0].sCPR[98].nSCStart = 349;   sT[0].sCP[0].sCPR[98].nAckStart =350;   sT[0].sCP[0].sCPR[98].nAckNum =1;   sT[0].sCP[0].sCPR[98].nSPOffsetCS = 1778; sT[0].sCP[0].sCPR[98].nSPOffsetLek = 1779; 	
sT[0].sCP[0].sCPR[99].nDCStart = 351;   sT[0].sCP[0].sCPR[99].nDCNum = 1;    sT[0].sCP[0].sCPR[99].nSCStart = 352;   sT[0].sCP[0].sCPR[99].nAckStart =353;   sT[0].sCP[0].sCPR[99].nAckNum =1;   sT[0].sCP[0].sCPR[99].nSPOffsetCS = 1794; sT[0].sCP[0].sCPR[99].nSPOffsetLek = 1795; 	
sT[0].sCP[0].sCPR[100].nDCStart =354;   sT[0].sCP[0].sCPR[100].nDCNum= 1;    sT[0].sCP[0].sCPR[100].nSCStart= 355;   sT[0].sCP[0].sCPR[100].nAckStart=356;   sT[0].sCP[0].sCPR[100].nAckNum =1;  sT[0].sCP[0].sCPR[100].nSPOffsetCS= 1810; sT[0].sCP[0].sCPR[100].nSPOffsetLek= 1811; 	

sT[0].sCP[0].sCPR[101].nDCStart =357;   sT[0].sCP[0].sCPR[101].nDCNum= 1;    sT[0].sCP[0].sCPR[101].nSCStart= 358;   sT[0].sCP[0].sCPR[101].nAckStart=359;   sT[0].sCP[0].sCPR[101].nAckNum =1;  sT[0].sCP[0].sCPR[101].nSPOffsetCS= 1826; sT[0].sCP[0].sCPR[101].nSPOffsetLek= 1827; 	
sT[0].sCP[0].sCPR[102].nDCStart =360;   sT[0].sCP[0].sCPR[102].nDCNum= 1;    sT[0].sCP[0].sCPR[102].nSCStart= 361;   sT[0].sCP[0].sCPR[102].nAckStart=362;   sT[0].sCP[0].sCPR[102].nAckNum =1;  sT[0].sCP[0].sCPR[102].nSPOffsetCS= 1842; sT[0].sCP[0].sCPR[102].nSPOffsetLek= 1843; 	
sT[0].sCP[0].sCPR[103].nDCStart =363;   sT[0].sCP[0].sCPR[103].nDCNum= 1;    sT[0].sCP[0].sCPR[103].nSCStart= 364;   sT[0].sCP[0].sCPR[103].nAckStart=365;   sT[0].sCP[0].sCPR[103].nAckNum =1;  sT[0].sCP[0].sCPR[103].nSPOffsetCS= 1858; sT[0].sCP[0].sCPR[103].nSPOffsetLek= 1859; 	
sT[0].sCP[0].sCPR[104].nDCStart =366;   sT[0].sCP[0].sCPR[104].nDCNum= 1;    sT[0].sCP[0].sCPR[104].nSCStart= 367;   sT[0].sCP[0].sCPR[104].nAckStart=368;   sT[0].sCP[0].sCPR[104].nAckNum =1;  sT[0].sCP[0].sCPR[104].nSPOffsetCS= 1874; sT[0].sCP[0].sCPR[104].nSPOffsetLek= 1875; 	
sT[0].sCP[0].sCPR[105].nDCStart =369;   sT[0].sCP[0].sCPR[105].nDCNum= 1;    sT[0].sCP[0].sCPR[105].nSCStart= 370;   sT[0].sCP[0].sCPR[105].nAckStart=371;   sT[0].sCP[0].sCPR[105].nAckNum =1;  sT[0].sCP[0].sCPR[105].nSPOffsetCS= 1890; sT[0].sCP[0].sCPR[105].nSPOffsetLek= 1891; 	
sT[0].sCP[0].sCPR[106].nDCStart =372;   sT[0].sCP[0].sCPR[106].nDCNum= 1;    sT[0].sCP[0].sCPR[106].nSCStart= 373;   sT[0].sCP[0].sCPR[106].nAckStart=374;   sT[0].sCP[0].sCPR[106].nAckNum =1;  sT[0].sCP[0].sCPR[106].nSPOffsetCS= 1906; sT[0].sCP[0].sCPR[106].nSPOffsetLek= 1907; 	
sT[0].sCP[0].sCPR[107].nDCStart =375;   sT[0].sCP[0].sCPR[107].nDCNum= 1;    sT[0].sCP[0].sCPR[107].nSCStart= 376;   sT[0].sCP[0].sCPR[107].nAckStart=377;   sT[0].sCP[0].sCPR[107].nAckNum =1;  sT[0].sCP[0].sCPR[107].nSPOffsetCS= 1922; sT[0].sCP[0].sCPR[107].nSPOffsetLek= 1923; 	
sT[0].sCP[0].sCPR[108].nDCStart =378;   sT[0].sCP[0].sCPR[108].nDCNum= 1;    sT[0].sCP[0].sCPR[108].nSCStart= 379;   sT[0].sCP[0].sCPR[108].nAckStart=380;   sT[0].sCP[0].sCPR[108].nAckNum =1;  sT[0].sCP[0].sCPR[108].nSPOffsetCS= 1938; sT[0].sCP[0].sCPR[108].nSPOffsetLek= 1939; 	
sT[0].sCP[0].sCPR[109].nDCStart =381;   sT[0].sCP[0].sCPR[109].nDCNum= 1;    sT[0].sCP[0].sCPR[109].nSCStart= 382;   sT[0].sCP[0].sCPR[109].nAckStart=383;   sT[0].sCP[0].sCPR[109].nAckNum =1;  sT[0].sCP[0].sCPR[109].nSPOffsetCS= 1954; sT[0].sCP[0].sCPR[109].nSPOffsetLek= 1955; 	
sT[0].sCP[0].sCPR[110].nDCStart =384;   sT[0].sCP[0].sCPR[110].nDCNum= 1;    sT[0].sCP[0].sCPR[110].nSCStart= 385;   sT[0].sCP[0].sCPR[110].nAckStart=386;   sT[0].sCP[0].sCPR[110].nAckNum =1;  sT[0].sCP[0].sCPR[110].nSPOffsetCS= 1970; sT[0].sCP[0].sCPR[110].nSPOffsetLek= 1971; 	
sT[0].sCP[0].sCPR[111].nDCStart =387;   sT[0].sCP[0].sCPR[111].nDCNum= 1;    sT[0].sCP[0].sCPR[111].nSCStart= 388;   sT[0].sCP[0].sCPR[111].nAckStart=389;   sT[0].sCP[0].sCPR[111].nAckNum =1;  sT[0].sCP[0].sCPR[111].nSPOffsetCS= 1986; sT[0].sCP[0].sCPR[111].nSPOffsetLek= 1987; 	
sT[0].sCP[0].sCPR[112].nDCStart =390;   sT[0].sCP[0].sCPR[112].nDCNum= 1;    sT[0].sCP[0].sCPR[112].nSCStart= 391;   sT[0].sCP[0].sCPR[112].nAckStart=392;   sT[0].sCP[0].sCPR[112].nAckNum =1;  sT[0].sCP[0].sCPR[112].nSPOffsetCS= 2002; sT[0].sCP[0].sCPR[112].nSPOffsetLek= 2003; 	
sT[0].sCP[0].sCPR[113].nDCStart =393;   sT[0].sCP[0].sCPR[113].nDCNum= 1;    sT[0].sCP[0].sCPR[113].nSCStart= 394;   sT[0].sCP[0].sCPR[113].nAckStart=395;   sT[0].sCP[0].sCPR[113].nAckNum =1;  sT[0].sCP[0].sCPR[113].nSPOffsetCS= 2018; sT[0].sCP[0].sCPR[113].nSPOffsetLek= 2019; 	
sT[0].sCP[0].sCPR[114].nDCStart =396;   sT[0].sCP[0].sCPR[114].nDCNum= 1;    sT[0].sCP[0].sCPR[114].nSCStart= 397;   sT[0].sCP[0].sCPR[114].nAckStart=398;   sT[0].sCP[0].sCPR[114].nAckNum =1;  sT[0].sCP[0].sCPR[114].nSPOffsetCS= 2034; sT[0].sCP[0].sCPR[114].nSPOffsetLek= 2035; 	
sT[0].sCP[0].sCPR[115].nDCStart =399;   sT[0].sCP[0].sCPR[115].nDCNum= 1;    sT[0].sCP[0].sCPR[115].nSCStart= 400;   sT[0].sCP[0].sCPR[115].nAckStart=401;   sT[0].sCP[0].sCPR[115].nAckNum =1;  sT[0].sCP[0].sCPR[115].nSPOffsetCS= 2050; sT[0].sCP[0].sCPR[115].nSPOffsetLek= 2051; 	
sT[0].sCP[0].sCPR[116].nDCStart =402;   sT[0].sCP[0].sCPR[116].nDCNum= 1;    sT[0].sCP[0].sCPR[116].nSCStart= 403;   sT[0].sCP[0].sCPR[116].nAckStart=404;   sT[0].sCP[0].sCPR[116].nAckNum =1;  sT[0].sCP[0].sCPR[116].nSPOffsetCS= 2066; sT[0].sCP[0].sCPR[116].nSPOffsetLek= 2067; 	
sT[0].sCP[0].sCPR[117].nDCStart =405;   sT[0].sCP[0].sCPR[117].nDCNum= 1;    sT[0].sCP[0].sCPR[117].nSCStart= 406;   sT[0].sCP[0].sCPR[117].nAckStart=407;   sT[0].sCP[0].sCPR[117].nAckNum =1;  sT[0].sCP[0].sCPR[117].nSPOffsetCS= 2082; sT[0].sCP[0].sCPR[117].nSPOffsetLek= 2083; 	
sT[0].sCP[0].sCPR[118].nDCStart =408;   sT[0].sCP[0].sCPR[118].nDCNum= 1;    sT[0].sCP[0].sCPR[118].nSCStart= 409;   sT[0].sCP[0].sCPR[118].nAckStart=410;   sT[0].sCP[0].sCPR[118].nAckNum =1;  sT[0].sCP[0].sCPR[118].nSPOffsetCS= 2098; sT[0].sCP[0].sCPR[118].nSPOffsetLek= 2099; 	
sT[0].sCP[0].sCPR[119].nDCStart =411;   sT[0].sCP[0].sCPR[119].nDCNum= 1;    sT[0].sCP[0].sCPR[119].nSCStart= 412;   sT[0].sCP[0].sCPR[119].nAckStart=413;   sT[0].sCP[0].sCPR[119].nAckNum =1;  sT[0].sCP[0].sCPR[119].nSPOffsetCS= 2114; sT[0].sCP[0].sCPR[119].nSPOffsetLek= 2115; 	
sT[0].sCP[0].sCPR[120].nDCStart =414;   sT[0].sCP[0].sCPR[120].nDCNum= 1;    sT[0].sCP[0].sCPR[120].nSCStart= 415;   sT[0].sCP[0].sCPR[120].nAckStart=416;   sT[0].sCP[0].sCPR[120].nAckNum =1;  sT[0].sCP[0].sCPR[120].nSPOffsetCS= 2130; sT[0].sCP[0].sCPR[120].nSPOffsetLek= 2131; 	

sT[0].sCP[0].sCPR[121].nDCStart =417;   sT[0].sCP[0].sCPR[121].nDCNum= 1;    sT[0].sCP[0].sCPR[121].nSCStart= 418;   sT[0].sCP[0].sCPR[121].nAckStart=419;   sT[0].sCP[0].sCPR[121].nAckNum =1;  sT[0].sCP[0].sCPR[121].nSPOffsetCS= 2146; sT[0].sCP[0].sCPR[121].nSPOffsetLek= 2147; 	
sT[0].sCP[0].sCPR[122].nDCStart =420;   sT[0].sCP[0].sCPR[122].nDCNum= 1;    sT[0].sCP[0].sCPR[122].nSCStart= 421;   sT[0].sCP[0].sCPR[122].nAckStart=422;   sT[0].sCP[0].sCPR[122].nAckNum =1;  sT[0].sCP[0].sCPR[122].nSPOffsetCS= 2162; sT[0].sCP[0].sCPR[122].nSPOffsetLek= 2163; 	
sT[0].sCP[0].sCPR[123].nDCStart =423;   sT[0].sCP[0].sCPR[123].nDCNum= 1;    sT[0].sCP[0].sCPR[123].nSCStart= 424;   sT[0].sCP[0].sCPR[123].nAckStart=425;   sT[0].sCP[0].sCPR[123].nAckNum =1;  sT[0].sCP[0].sCPR[123].nSPOffsetCS= 2178; sT[0].sCP[0].sCPR[123].nSPOffsetLek= 2179; 	
sT[0].sCP[0].sCPR[124].nDCStart =426;   sT[0].sCP[0].sCPR[124].nDCNum= 1;    sT[0].sCP[0].sCPR[124].nSCStart= 427;   sT[0].sCP[0].sCPR[124].nAckStart=428;   sT[0].sCP[0].sCPR[124].nAckNum =1;  sT[0].sCP[0].sCPR[124].nSPOffsetCS= 2194; sT[0].sCP[0].sCPR[124].nSPOffsetLek= 2195; 	
sT[0].sCP[0].sCPR[125].nDCStart =429;   sT[0].sCP[0].sCPR[125].nDCNum= 1;    sT[0].sCP[0].sCPR[125].nSCStart= 430;   sT[0].sCP[0].sCPR[125].nAckStart=431;   sT[0].sCP[0].sCPR[125].nAckNum =1;  sT[0].sCP[0].sCPR[125].nSPOffsetCS= 2210; sT[0].sCP[0].sCPR[125].nSPOffsetLek= 2211; 	
sT[0].sCP[0].sCPR[126].nDCStart =432;   sT[0].sCP[0].sCPR[126].nDCNum= 1;    sT[0].sCP[0].sCPR[126].nSCStart= 433;   sT[0].sCP[0].sCPR[126].nAckStart=434;   sT[0].sCP[0].sCPR[126].nAckNum =1;  sT[0].sCP[0].sCPR[126].nSPOffsetCS= 2226; sT[0].sCP[0].sCPR[126].nSPOffsetLek= 2227; 	
sT[0].sCP[0].sCPR[127].nDCStart =435;   sT[0].sCP[0].sCPR[127].nDCNum= 1;    sT[0].sCP[0].sCPR[127].nSCStart= 436;   sT[0].sCP[0].sCPR[127].nAckStart=437;   sT[0].sCP[0].sCPR[127].nAckNum =1;  sT[0].sCP[0].sCPR[127].nSPOffsetCS= 2242; sT[0].sCP[0].sCPR[127].nSPOffsetLek= 2243; 	

sT[0].sCP[0].sCPR[128].nDCStart =438;   sT[0].sCP[0].sCPR[128].nDCNum =4;    sT[0].sCP[0].sCPR[128].nSCStart= 442;   sT[0].sCP[0].sCPR[128].nAckStart=  0;	 sT[0].sCP[0].sCPR[128].nAckNum =0;   sT[0].sCP[0].sCPR[128].nSPOffsetCS=2260; sT[0].sCP[0].sCPR[128].nSPOffsetLek= 2261; 	
sT[0].sCP[0].sCPR[129].nDCStart =443;   sT[0].sCP[0].sCPR[129].nDCNum =4;    sT[0].sCP[0].sCPR[129].nSCStart= 447;   sT[0].sCP[0].sCPR[129].nAckStart=  0;	 sT[0].sCP[0].sCPR[129].nAckNum =0;   sT[0].sCP[0].sCPR[129].nSPOffsetCS=2278; sT[0].sCP[0].sCPR[129].nSPOffsetLek= 2279; 	
sT[0].sCP[0].sCPR[130].nDCStart =448;   sT[0].sCP[0].sCPR[130].nDCNum= 1;    sT[0].sCP[0].sCPR[130].nSCStart= 449;   sT[0].sCP[0].sCPR[130].nAckStart=  0;   sT[0].sCP[0].sCPR[130].nAckNum =0;   sT[0].sCP[0].sCPR[130].nSPOffsetCS=2294; sT[0].sCP[0].sCPR[130].nSPOffsetLek= 2295; 	
sT[0].sCP[0].sCPR[131].nDCStart =451;   sT[0].sCP[0].sCPR[131].nDCNum= 1;    sT[0].sCP[0].sCPR[131].nSCStart= 452;   sT[0].sCP[0].sCPR[131].nAckStart=453;   sT[0].sCP[0].sCPR[131].nAckNum =1;   sT[0].sCP[0].sCPR[131].nSPOffsetCS=2310; sT[0].sCP[0].sCPR[131].nSPOffsetLek= 2311; 	
sT[0].sCP[0].sCPR[132].nDCStart =454;   sT[0].sCP[0].sCPR[132].nDCNum =4;    sT[0].sCP[0].sCPR[132].nSCStart= 459;   sT[0].sCP[0].sCPR[132].nAckStart=458;	 sT[0].sCP[0].sCPR[132].nAckNum =1;   sT[0].sCP[0].sCPR[132].nSPOffsetCS=2347; sT[0].sCP[0].sCPR[132].nSPOffsetLek= 2348; 	


sT[0].sCP[0].sCPR[133].nDCStart =460;   sT[0].sCP[0].sCPR[133].nDCNum =1;    sT[0].sCP[0].sCPR[133].nSCStart= 461;   sT[0].sCP[0].sCPR[133].nAckStart=462;	 sT[0].sCP[0].sCPR[133].nAckNum =1;   sT[0].sCP[0].sCPR[133].nSPOffsetCS=2363; sT[0].sCP[0].sCPR[133].nSPOffsetLek= 2364; 	
sT[0].sCP[0].sCPR[134].nDCStart =463;   sT[0].sCP[0].sCPR[134].nDCNum =1;    sT[0].sCP[0].sCPR[134].nSCStart= 464;   sT[0].sCP[0].sCPR[134].nAckStart=465;	 sT[0].sCP[0].sCPR[134].nAckNum =1;   sT[0].sCP[0].sCPR[134].nSPOffsetCS=2379; sT[0].sCP[0].sCPR[134].nSPOffsetLek= 2380; 	
sT[0].sCP[0].sCPR[135].nDCStart =466;   sT[0].sCP[0].sCPR[135].nDCNum =1;    sT[0].sCP[0].sCPR[135].nSCStart= 467;   sT[0].sCP[0].sCPR[135].nAckStart=468;	 sT[0].sCP[0].sCPR[135].nAckNum =1;   sT[0].sCP[0].sCPR[135].nSPOffsetCS=2395; sT[0].sCP[0].sCPR[135].nSPOffsetLek= 2396; 	
sT[0].sCP[0].sCPR[136].nDCStart =469;   sT[0].sCP[0].sCPR[136].nDCNum =1;    sT[0].sCP[0].sCPR[136].nSCStart= 470;   sT[0].sCP[0].sCPR[136].nAckStart=471;	 sT[0].sCP[0].sCPR[136].nAckNum =1;   sT[0].sCP[0].sCPR[136].nSPOffsetCS=2411; sT[0].sCP[0].sCPR[136].nSPOffsetLek= 2412; 	
sT[0].sCP[0].sCPR[137].nDCStart =472;   sT[0].sCP[0].sCPR[137].nDCNum =1;    sT[0].sCP[0].sCPR[137].nSCStart= 473;   sT[0].sCP[0].sCPR[137].nAckStart=474;	 sT[0].sCP[0].sCPR[137].nAckNum =1;   sT[0].sCP[0].sCPR[137].nSPOffsetCS=2427; sT[0].sCP[0].sCPR[137].nSPOffsetLek= 2428; 	
sT[0].sCP[0].sCPR[138].nDCStart =475;   sT[0].sCP[0].sCPR[138].nDCNum =1;    sT[0].sCP[0].sCPR[138].nSCStart= 476;   sT[0].sCP[0].sCPR[138].nAckStart=477;	 sT[0].sCP[0].sCPR[138].nAckNum =1;   sT[0].sCP[0].sCPR[138].nSPOffsetCS=2443; sT[0].sCP[0].sCPR[138].nSPOffsetLek= 2444; 	
sT[0].sCP[0].sCPR[139].nDCStart =478;   sT[0].sCP[0].sCPR[139].nDCNum =1;    sT[0].sCP[0].sCPR[139].nSCStart= 479;   sT[0].sCP[0].sCPR[139].nAckStart=480;	 sT[0].sCP[0].sCPR[139].nAckNum =1;   sT[0].sCP[0].sCPR[139].nSPOffsetCS=2459; sT[0].sCP[0].sCPR[139].nSPOffsetLek= 2460; 	
sT[0].sCP[0].sCPR[140].nDCStart =481;   sT[0].sCP[0].sCPR[140].nDCNum =1;    sT[0].sCP[0].sCPR[140].nSCStart= 482;   sT[0].sCP[0].sCPR[140].nAckStart=483;	 sT[0].sCP[0].sCPR[140].nAckNum =1;   sT[0].sCP[0].sCPR[140].nSPOffsetCS=2475; sT[0].sCP[0].sCPR[140].nSPOffsetLek= 2476; 	

sT[0].sCP[0].sCPR[141].nDCStart =484;   sT[0].sCP[0].sCPR[141].nDCNum =1;    sT[0].sCP[0].sCPR[141].nSCStart= 485;   sT[0].sCP[0].sCPR[141].nAckStart=486;	 sT[0].sCP[0].sCPR[141].nAckNum =1;   sT[0].sCP[0].sCPR[141].nSPOffsetCS=2491; sT[0].sCP[0].sCPR[141].nSPOffsetLek= 2492; 	
sT[0].sCP[0].sCPR[142].nDCStart =487;   sT[0].sCP[0].sCPR[142].nDCNum =1;    sT[0].sCP[0].sCPR[142].nSCStart= 488;   sT[0].sCP[0].sCPR[142].nAckStart=489;	 sT[0].sCP[0].sCPR[142].nAckNum =1;   sT[0].sCP[0].sCPR[142].nSPOffsetCS=2507; sT[0].sCP[0].sCPR[142].nSPOffsetLek= 2508; 	
sT[0].sCP[0].sCPR[143].nDCStart =490;   sT[0].sCP[0].sCPR[143].nDCNum =1;    sT[0].sCP[0].sCPR[143].nSCStart= 491;   sT[0].sCP[0].sCPR[143].nAckStart=492;	 sT[0].sCP[0].sCPR[143].nAckNum =1;   sT[0].sCP[0].sCPR[143].nSPOffsetCS=2523; sT[0].sCP[0].sCPR[143].nSPOffsetLek= 2524; 	
sT[0].sCP[0].sCPR[144].nDCStart =493;   sT[0].sCP[0].sCPR[144].nDCNum =1;    sT[0].sCP[0].sCPR[144].nSCStart= 494;   sT[0].sCP[0].sCPR[144].nAckStart=495;	 sT[0].sCP[0].sCPR[144].nAckNum =1;   sT[0].sCP[0].sCPR[144].nSPOffsetCS=2539; sT[0].sCP[0].sCPR[144].nSPOffsetLek= 2540; 	
sT[0].sCP[0].sCPR[145].nDCStart =496;   sT[0].sCP[0].sCPR[145].nDCNum =1;    sT[0].sCP[0].sCPR[145].nSCStart= 497;   sT[0].sCP[0].sCPR[145].nAckStart=498;	 sT[0].sCP[0].sCPR[145].nAckNum =1;   sT[0].sCP[0].sCPR[145].nSPOffsetCS=2555; sT[0].sCP[0].sCPR[145].nSPOffsetLek= 2556; 	
sT[0].sCP[0].sCPR[146].nDCStart =499;   sT[0].sCP[0].sCPR[146].nDCNum =1;    sT[0].sCP[0].sCPR[146].nSCStart= 500;   sT[0].sCP[0].sCPR[146].nAckStart=501;	 sT[0].sCP[0].sCPR[146].nAckNum =1;   sT[0].sCP[0].sCPR[146].nSPOffsetCS=2571; sT[0].sCP[0].sCPR[146].nSPOffsetLek= 2572; 	
sT[0].sCP[0].sCPR[147].nDCStart =502;   sT[0].sCP[0].sCPR[147].nDCNum =1;    sT[0].sCP[0].sCPR[147].nSCStart= 503;   sT[0].sCP[0].sCPR[147].nAckStart=504;	 sT[0].sCP[0].sCPR[147].nAckNum =1;   sT[0].sCP[0].sCPR[147].nSPOffsetCS=2587; sT[0].sCP[0].sCPR[147].nSPOffsetLek= 2588; 	
sT[0].sCP[0].sCPR[148].nDCStart =505;   sT[0].sCP[0].sCPR[148].nDCNum =1;    sT[0].sCP[0].sCPR[148].nSCStart= 506;   sT[0].sCP[0].sCPR[148].nAckStart=507;	 sT[0].sCP[0].sCPR[148].nAckNum =1;   sT[0].sCP[0].sCPR[148].nSPOffsetCS=2603; sT[0].sCP[0].sCPR[148].nSPOffsetLek= 2604; 	
sT[0].sCP[0].sCPR[149].nDCStart =508;   sT[0].sCP[0].sCPR[149].nDCNum =1;    sT[0].sCP[0].sCPR[149].nSCStart= 509;   sT[0].sCP[0].sCPR[149].nAckStart=510;	 sT[0].sCP[0].sCPR[149].nAckNum =1;   sT[0].sCP[0].sCPR[149].nSPOffsetCS=2619; sT[0].sCP[0].sCPR[149].nSPOffsetLek= 2620; 	
sT[0].sCP[0].sCPR[150].nDCStart =511;   sT[0].sCP[0].sCPR[150].nDCNum =1;    sT[0].sCP[0].sCPR[150].nSCStart= 512;   sT[0].sCP[0].sCPR[150].nAckStart=513;	 sT[0].sCP[0].sCPR[150].nAckNum =1;   sT[0].sCP[0].sCPR[150].nSPOffsetCS=2635; sT[0].sCP[0].sCPR[150].nSPOffsetLek= 2636; 	
sT[0].sCP[0].sCPR[151].nDCStart =514;   sT[0].sCP[0].sCPR[151].nDCNum =1;    sT[0].sCP[0].sCPR[151].nSCStart= 515;   sT[0].sCP[0].sCPR[151].nAckStart=516;	 sT[0].sCP[0].sCPR[151].nAckNum =1;   sT[0].sCP[0].sCPR[151].nSPOffsetCS=2651; sT[0].sCP[0].sCPR[151].nSPOffsetLek= 2652; 	
sT[0].sCP[0].sCPR[152].nDCStart =517;   sT[0].sCP[0].sCPR[152].nDCNum =1;    sT[0].sCP[0].sCPR[152].nSCStart= 518;   sT[0].sCP[0].sCPR[152].nAckStart=519;	 sT[0].sCP[0].sCPR[152].nAckNum =1;   sT[0].sCP[0].sCPR[152].nSPOffsetCS=2667; sT[0].sCP[0].sCPR[152].nSPOffsetLek= 2668; 	
sT[0].sCP[0].sCPR[153].nDCStart =520;   sT[0].sCP[0].sCPR[153].nDCNum =1;    sT[0].sCP[0].sCPR[153].nSCStart= 521;   sT[0].sCP[0].sCPR[153].nAckStart=522;	 sT[0].sCP[0].sCPR[153].nAckNum =1;   sT[0].sCP[0].sCPR[153].nSPOffsetCS=2683; sT[0].sCP[0].sCPR[153].nSPOffsetLek= 2684; 	
sT[0].sCP[0].sCPR[154].nDCStart =523;   sT[0].sCP[0].sCPR[154].nDCNum =1;    sT[0].sCP[0].sCPR[154].nSCStart= 524;   sT[0].sCP[0].sCPR[154].nAckStart=525;	 sT[0].sCP[0].sCPR[154].nAckNum =1;   sT[0].sCP[0].sCPR[154].nSPOffsetCS=2699; sT[0].sCP[0].sCPR[154].nSPOffsetLek= 2700; 	
sT[0].sCP[0].sCPR[155].nDCStart =526;   sT[0].sCP[0].sCPR[155].nDCNum =1;    sT[0].sCP[0].sCPR[155].nSCStart= 527;   sT[0].sCP[0].sCPR[155].nAckStart=528;	 sT[0].sCP[0].sCPR[155].nAckNum =1;   sT[0].sCP[0].sCPR[155].nSPOffsetCS=2715; sT[0].sCP[0].sCPR[155].nSPOffsetLek= 2716; 	
sT[0].sCP[0].sCPR[156].nDCStart =529;   sT[0].sCP[0].sCPR[156].nDCNum =1;    sT[0].sCP[0].sCPR[156].nSCStart= 530;   sT[0].sCP[0].sCPR[156].nAckStart=531;	 sT[0].sCP[0].sCPR[156].nAckNum =1;   sT[0].sCP[0].sCPR[156].nSPOffsetCS=2731; sT[0].sCP[0].sCPR[156].nSPOffsetLek= 2732; 	
sT[0].sCP[0].sCPR[157].nDCStart =532;   sT[0].sCP[0].sCPR[157].nDCNum =1;    sT[0].sCP[0].sCPR[157].nSCStart= 533;   sT[0].sCP[0].sCPR[157].nAckStart=534;	 sT[0].sCP[0].sCPR[157].nAckNum =1;   sT[0].sCP[0].sCPR[157].nSPOffsetCS=2747; sT[0].sCP[0].sCPR[157].nSPOffsetLek= 2748; 	
sT[0].sCP[0].sCPR[158].nDCStart =535;   sT[0].sCP[0].sCPR[158].nDCNum =1;    sT[0].sCP[0].sCPR[158].nSCStart= 536;   sT[0].sCP[0].sCPR[158].nAckStart=537;	 sT[0].sCP[0].sCPR[158].nAckNum =1;   sT[0].sCP[0].sCPR[158].nSPOffsetCS=2763; sT[0].sCP[0].sCPR[158].nSPOffsetLek= 2764; 	
sT[0].sCP[0].sCPR[159].nDCStart =538;   sT[0].sCP[0].sCPR[159].nDCNum =1;    sT[0].sCP[0].sCPR[159].nSCStart= 539;   sT[0].sCP[0].sCPR[159].nAckStart=540;	 sT[0].sCP[0].sCPR[159].nAckNum =1;   sT[0].sCP[0].sCPR[159].nSPOffsetCS=2779; sT[0].sCP[0].sCPR[159].nSPOffsetLek= 2780; 	
sT[0].sCP[0].sCPR[160].nDCStart =541;   sT[0].sCP[0].sCPR[160].nDCNum =1;    sT[0].sCP[0].sCPR[160].nSCStart= 542;   sT[0].sCP[0].sCPR[160].nAckStart=543;	 sT[0].sCP[0].sCPR[160].nAckNum =1;   sT[0].sCP[0].sCPR[160].nSPOffsetCS=2795; sT[0].sCP[0].sCPR[160].nSPOffsetLek= 2796; 	
sT[0].sCP[0].sCPR[161].nDCStart =544;   sT[0].sCP[0].sCPR[161].nDCNum =1;    sT[0].sCP[0].sCPR[161].nSCStart= 545;   sT[0].sCP[0].sCPR[161].nAckStart=546;	 sT[0].sCP[0].sCPR[161].nAckNum =1;   sT[0].sCP[0].sCPR[161].nSPOffsetCS=2811; sT[0].sCP[0].sCPR[161].nSPOffsetLek= 2812; 	

sT[0].sCP[0].sCPR[162].nDCStart =547;   sT[0].sCP[0].sCPR[162].nDCNum =1;    sT[0].sCP[0].sCPR[162].nSCStart= 548;   sT[0].sCP[0].sCPR[162].nAckStart=549;	 sT[0].sCP[0].sCPR[162].nAckNum =1;   sT[0].sCP[0].sCPR[162].nSPOffsetCS=2827; sT[0].sCP[0].sCPR[162].nSPOffsetLek= 2828; 	
sT[0].sCP[0].sCPR[163].nDCStart =550;   sT[0].sCP[0].sCPR[163].nDCNum =1;    sT[0].sCP[0].sCPR[163].nSCStart= 551;   sT[0].sCP[0].sCPR[163].nAckStart=552;	 sT[0].sCP[0].sCPR[163].nAckNum =1;   sT[0].sCP[0].sCPR[163].nSPOffsetCS=2843; sT[0].sCP[0].sCPR[163].nSPOffsetLek= 2844; 	
sT[0].sCP[0].sCPR[164].nDCStart =553;   sT[0].sCP[0].sCPR[164].nDCNum =1;    sT[0].sCP[0].sCPR[164].nSCStart= 554;   sT[0].sCP[0].sCPR[164].nAckStart=555;	 sT[0].sCP[0].sCPR[164].nAckNum =1;   sT[0].sCP[0].sCPR[164].nSPOffsetCS=2859; sT[0].sCP[0].sCPR[164].nSPOffsetLek= 2860; 	
sT[0].sCP[0].sCPR[165].nDCStart =556;   sT[0].sCP[0].sCPR[165].nDCNum =1;    sT[0].sCP[0].sCPR[165].nSCStart= 557;   sT[0].sCP[0].sCPR[165].nAckStart=558;	 sT[0].sCP[0].sCPR[165].nAckNum =1;   sT[0].sCP[0].sCPR[165].nSPOffsetCS=2875; sT[0].sCP[0].sCPR[165].nSPOffsetLek= 2876; 	
sT[0].sCP[0].sCPR[166].nDCStart =559;   sT[0].sCP[0].sCPR[166].nDCNum =1;    sT[0].sCP[0].sCPR[166].nSCStart= 560;   sT[0].sCP[0].sCPR[166].nAckStart=561;	 sT[0].sCP[0].sCPR[166].nAckNum =1;   sT[0].sCP[0].sCPR[166].nSPOffsetCS=2891; sT[0].sCP[0].sCPR[166].nSPOffsetLek= 2892; 	
sT[0].sCP[0].sCPR[167].nDCStart =562;   sT[0].sCP[0].sCPR[167].nDCNum =1;    sT[0].sCP[0].sCPR[167].nSCStart= 563;   sT[0].sCP[0].sCPR[167].nAckStart=564;	 sT[0].sCP[0].sCPR[167].nAckNum =1;   sT[0].sCP[0].sCPR[167].nSPOffsetCS=2907; sT[0].sCP[0].sCPR[167].nSPOffsetLek= 2908; 	
sT[0].sCP[0].sCPR[168].nDCStart =565;   sT[0].sCP[0].sCPR[168].nDCNum =1;    sT[0].sCP[0].sCPR[168].nSCStart= 566;   sT[0].sCP[0].sCPR[168].nAckStart=567;	 sT[0].sCP[0].sCPR[168].nAckNum =1;   sT[0].sCP[0].sCPR[168].nSPOffsetCS=2923; sT[0].sCP[0].sCPR[168].nSPOffsetLek= 2924; 	
sT[0].sCP[0].sCPR[169].nDCStart =568;   sT[0].sCP[0].sCPR[169].nDCNum =1;    sT[0].sCP[0].sCPR[169].nSCStart= 569;   sT[0].sCP[0].sCPR[169].nAckStart=570;	 sT[0].sCP[0].sCPR[169].nAckNum =1;   sT[0].sCP[0].sCPR[169].nSPOffsetCS=2939; sT[0].sCP[0].sCPR[169].nSPOffsetLek= 2940; 	
sT[0].sCP[0].sCPR[170].nDCStart =571;   sT[0].sCP[0].sCPR[170].nDCNum =1;    sT[0].sCP[0].sCPR[170].nSCStart= 572;   sT[0].sCP[0].sCPR[170].nAckStart=573;	 sT[0].sCP[0].sCPR[170].nAckNum =1;   sT[0].sCP[0].sCPR[170].nSPOffsetCS=2955; sT[0].sCP[0].sCPR[170].nSPOffsetLek= 2956; 	
sT[0].sCP[0].sCPR[171].nDCStart =574;   sT[0].sCP[0].sCPR[171].nDCNum =1;    sT[0].sCP[0].sCPR[171].nSCStart= 575;   sT[0].sCP[0].sCPR[171].nAckStart=576;	 sT[0].sCP[0].sCPR[171].nAckNum =1;   sT[0].sCP[0].sCPR[171].nSPOffsetCS=2971; sT[0].sCP[0].sCPR[171].nSPOffsetLek= 2972; 	
sT[0].sCP[0].sCPR[172].nDCStart =577;   sT[0].sCP[0].sCPR[172].nDCNum =1;    sT[0].sCP[0].sCPR[172].nSCStart= 578;   sT[0].sCP[0].sCPR[172].nAckStart=579;	 sT[0].sCP[0].sCPR[172].nAckNum =1;   sT[0].sCP[0].sCPR[172].nSPOffsetCS=2987; sT[0].sCP[0].sCPR[172].nSPOffsetLek= 2988; 	
sT[0].sCP[0].sCPR[173].nDCStart =580;   sT[0].sCP[0].sCPR[173].nDCNum =1;    sT[0].sCP[0].sCPR[173].nSCStart= 581;   sT[0].sCP[0].sCPR[173].nAckStart=582;	 sT[0].sCP[0].sCPR[173].nAckNum =1;   sT[0].sCP[0].sCPR[173].nSPOffsetCS=3003; sT[0].sCP[0].sCPR[173].nSPOffsetLek= 3004; 	
sT[0].sCP[0].sCPR[174].nDCStart =583;   sT[0].sCP[0].sCPR[174].nDCNum =1;    sT[0].sCP[0].sCPR[174].nSCStart= 584;   sT[0].sCP[0].sCPR[174].nAckStart=585;	 sT[0].sCP[0].sCPR[174].nAckNum =1;   sT[0].sCP[0].sCPR[174].nSPOffsetCS=3019; sT[0].sCP[0].sCPR[174].nSPOffsetLek= 3020; 	

sT[0].sCP[0].sCPR[175].nDCStart =586;   sT[0].sCP[0].sCPR[175].nDCNum =4;    sT[0].sCP[0].sCPR[175].nSCStart= 591;   sT[0].sCP[0].sCPR[175].nAckStart=590;	 sT[0].sCP[0].sCPR[175].nAckNum =1;   sT[0].sCP[0].sCPR[175].nSPOffsetCS=3056; sT[0].sCP[0].sCPR[175].nSPOffsetLek= 3057; 	

sT[0].sCP[0].sCPR[176].nDCStart =592;   sT[0].sCP[0].sCPR[176].nDCNum =1;    sT[0].sCP[0].sCPR[176].nSCStart= 593;   sT[0].sCP[0].sCPR[176].nAckStart=594;	 sT[0].sCP[0].sCPR[176].nAckNum =1;   sT[0].sCP[0].sCPR[176].nSPOffsetCS=3072; sT[0].sCP[0].sCPR[176].nSPOffsetLek= 3073; 	
sT[0].sCP[0].sCPR[177].nDCStart =595;   sT[0].sCP[0].sCPR[177].nDCNum =1;    sT[0].sCP[0].sCPR[177].nSCStart= 596;   sT[0].sCP[0].sCPR[177].nAckStart=597;	 sT[0].sCP[0].sCPR[177].nAckNum =1;   sT[0].sCP[0].sCPR[177].nSPOffsetCS=3088; sT[0].sCP[0].sCPR[177].nSPOffsetLek= 3089;
sT[0].sCP[0].sCPR[178].nDCStart =598;   sT[0].sCP[0].sCPR[178].nDCNum =1;    sT[0].sCP[0].sCPR[178].nSCStart= 599;   sT[0].sCP[0].sCPR[178].nAckStart=600;	 sT[0].sCP[0].sCPR[178].nAckNum =1;   sT[0].sCP[0].sCPR[178].nSPOffsetCS=3104; sT[0].sCP[0].sCPR[178].nSPOffsetLek= 3105; 	

sT[0].sCP[0].sCPR[179].nDCStart =601;   sT[0].sCP[0].sCPR[179].nDCNum =4;    sT[0].sCP[0].sCPR[179].nSCStart= 605;   sT[0].sCP[0].sCPR[179].nAckStart=  0;	 sT[0].sCP[0].sCPR[179].nAckNum =0;   sT[0].sCP[0].sCPR[179].nSPOffsetCS=3122; sT[0].sCP[0].sCPR[179].nSPOffsetLek= 3123; 	

sT[0].sCP[0].sCPR[180].nDCStart =606;   sT[0].sCP[0].sCPR[180].nDCNum =1;    sT[0].sCP[0].sCPR[180].nSCStart= 607;   sT[0].sCP[0].sCPR[180].nAckStart=608;	 sT[0].sCP[0].sCPR[180].nAckNum =1;   sT[0].sCP[0].sCPR[180].nSPOffsetCS=3138; sT[0].sCP[0].sCPR[180].nSPOffsetLek= 3139; 	

sT[0].sCP[0].sCPR[181].nDCStart =609;   sT[0].sCP[0].sCPR[181].nDCNum =1;    sT[0].sCP[0].sCPR[181].nSCStart= 610;   sT[0].sCP[0].sCPR[181].nAckStart=611;	 sT[0].sCP[0].sCPR[181].nAckNum =1;   sT[0].sCP[0].sCPR[181].nSPOffsetCS=3154; sT[0].sCP[0].sCPR[181].nSPOffsetLek= 3155; 	

sT[0].sCP[0].sCPR[182].nDCStart =612;   sT[0].sCP[0].sCPR[182].nDCNum =1;    sT[0].sCP[0].sCPR[182].nSCStart= 613;   sT[0].sCP[0].sCPR[182].nAckStart=614;	 sT[0].sCP[0].sCPR[182].nAckNum =1;   sT[0].sCP[0].sCPR[182].nSPOffsetCS=3170; sT[0].sCP[0].sCPR[182].nSPOffsetLek= 3171; 	

sT[0].sCP[0].sCPR[183].nDCStart =615;   sT[0].sCP[0].sCPR[183].nDCNum =4;    sT[0].sCP[0].sCPR[183].nSCStart= 620;   sT[0].sCP[0].sCPR[183].nAckStart=619;	 sT[0].sCP[0].sCPR[183].nAckNum =1;   sT[0].sCP[0].sCPR[183].nSPOffsetCS=3207; sT[0].sCP[0].sCPR[183].nSPOffsetLek= 3208; 	
sT[0].sCP[0].sCPR[184].nDCStart =0  ;   sT[0].sCP[0].sCPR[184].nDCNum =0;    sT[0].sCP[0].sCPR[184].nSCStart= 621;   sT[0].sCP[0].sCPR[184].nAckStart=0;	 sT[0].sCP[0].sCPR[184].nAckNum =0;   sT[0].sCP[0].sCPR[184].nSPOffsetCS=3214; sT[0].sCP[0].sCPR[184].nSPOffsetLek= 3215; 	
sT[0].sCP[0].sCPR[185].nDCStart =622;   sT[0].sCP[0].sCPR[185].nDCNum =4;    sT[0].sCP[0].sCPR[185].nSCStart= 627;   sT[0].sCP[0].sCPR[185].nAckStart=0;	 sT[0].sCP[0].sCPR[185].nAckNum =0;   sT[0].sCP[0].sCPR[185].nSPOffsetCS=3251; sT[0].sCP[0].sCPR[185].nSPOffsetLek= 3252; 	
sT[0].sCP[0].sCPR[186].nDCStart =628;   sT[0].sCP[0].sCPR[186].nDCNum =1;    sT[0].sCP[0].sCPR[186].nSCStart= 629;   sT[0].sCP[0].sCPR[186].nAckStart=630;	 sT[0].sCP[0].sCPR[186].nAckNum =1;   sT[0].sCP[0].sCPR[186].nSPOffsetCS=3267; sT[0].sCP[0].sCPR[186].nSPOffsetLek= 3268; 	
sT[0].sCP[0].sCPR[187].nDCStart =631;   sT[0].sCP[0].sCPR[187].nDCNum =4;    sT[0].sCP[0].sCPR[187].nSCStart= 635;   sT[0].sCP[0].sCPR[187].nAckStart=0;	 sT[0].sCP[0].sCPR[187].nAckNum =0;   sT[0].sCP[0].sCPR[187].nSPOffsetCS=3285; sT[0].sCP[0].sCPR[187].nSPOffsetLek= 3286; 	

sT[0].sCP[0].sCPR[188].nDCStart =636;   sT[0].sCP[0].sCPR[188].nDCNum =4;    sT[0].sCP[0].sCPR[188].nSCStart= 641;   sT[0].sCP[0].sCPR[188].nAckStart=640;	 sT[0].sCP[0].sCPR[188].nAckNum =1;   sT[0].sCP[0].sCPR[188].nSPOffsetCS=3322; sT[0].sCP[0].sCPR[188].nSPOffsetLek= 3323; 	
sT[0].sCP[0].sCPR[189].nDCStart =642;   sT[0].sCP[0].sCPR[189].nDCNum =4;    sT[0].sCP[0].sCPR[189].nSCStart= 646;   sT[0].sCP[0].sCPR[189].nAckStart=0;	 sT[0].sCP[0].sCPR[189].nAckNum =0;   sT[0].sCP[0].sCPR[189].nSPOffsetCS=3340; sT[0].sCP[0].sCPR[189].nSPOffsetLek= 3341; 	

sT[0].sCP[0].sCPR[190].nDCStart =647;   sT[0].sCP[0].sCPR[190].nDCNum =1;    sT[0].sCP[0].sCPR[190].nSCStart= 648;   sT[0].sCP[0].sCPR[190].nAckStart=649;	 sT[0].sCP[0].sCPR[190].nAckNum =1;   sT[0].sCP[0].sCPR[190].nSPOffsetCS=3356; sT[0].sCP[0].sCPR[190].nSPOffsetLek= 3357; 	

sT[0].sCP[0].sCPR[191].nDCStart =650;   sT[0].sCP[0].sCPR[191].nDCNum =4;    sT[0].sCP[0].sCPR[191].nSCStart= 654;   sT[0].sCP[0].sCPR[191].nAckStart=0;	 sT[0].sCP[0].sCPR[191].nAckNum =0;   sT[0].sCP[0].sCPR[191].nSPOffsetCS=3374; sT[0].sCP[0].sCPR[191].nSPOffsetLek= 3375; 	
sT[0].sCP[0].sCPR[192].nDCStart =655;   sT[0].sCP[0].sCPR[192].nDCNum =4;    sT[0].sCP[0].sCPR[192].nSCStart= 659;   sT[0].sCP[0].sCPR[192].nAckStart=0;	 sT[0].sCP[0].sCPR[192].nAckNum =0;   sT[0].sCP[0].sCPR[192].nSPOffsetCS=3392; sT[0].sCP[0].sCPR[192].nSPOffsetLek= 3393; 	
sT[0].sCP[0].sCPR[193].nDCStart =660;   sT[0].sCP[0].sCPR[193].nDCNum =4;    sT[0].sCP[0].sCPR[193].nSCStart= 664;   sT[0].sCP[0].sCPR[193].nAckStart=0;	 sT[0].sCP[0].sCPR[193].nAckNum =0;   sT[0].sCP[0].sCPR[193].nSPOffsetCS=3410; sT[0].sCP[0].sCPR[193].nSPOffsetLek= 3411; 	

sT[0].sCP[0].sCPR[194].nDCStart =665;   sT[0].sCP[0].sCPR[194].nDCNum =1;    sT[0].sCP[0].sCPR[194].nSCStart= 666;   sT[0].sCP[0].sCPR[194].nAckStart=0;	 sT[0].sCP[0].sCPR[194].nAckNum =0;   sT[0].sCP[0].sCPR[194].nSPOffsetCS=3426; sT[0].sCP[0].sCPR[194].nSPOffsetLek= 3427; 	
sT[0].sCP[0].sCPR[195].nDCStart =668;   sT[0].sCP[0].sCPR[195].nDCNum =1;    sT[0].sCP[0].sCPR[195].nSCStart= 669;   sT[0].sCP[0].sCPR[195].nAckStart=0;	 sT[0].sCP[0].sCPR[195].nAckNum =0;   sT[0].sCP[0].sCPR[195].nSPOffsetCS=3442; sT[0].sCP[0].sCPR[195].nSPOffsetLek= 3443; 	
 
sT[0].sCP[0].sCPR[196].nDCStart =671;   sT[0].sCP[0].sCPR[196].nDCNum =4;    sT[0].sCP[0].sCPR[196].nSCStart= 675;   sT[0].sCP[0].sCPR[196].nAckStart=0;	 sT[0].sCP[0].sCPR[196].nAckNum =0;   sT[0].sCP[0].sCPR[196].nSPOffsetCS=3460; sT[0].sCP[0].sCPR[196].nSPOffsetLek= 3461; 	

sT[0].sCP[0].sCPR[197].nDCStart =685;   sT[0].sCP[0].sCPR[197].nDCNum =4;    sT[0].sCP[0].sCPR[197].nSCStart= 690;   sT[0].sCP[0].sCPR[197].nAckStart=689;	 sT[0].sCP[0].sCPR[197].nAckNum =1;   sT[0].sCP[0].sCPR[197].nSPOffsetCS=3497; sT[0].sCP[0].sCPR[197].nSPOffsetLek= 3498; 	

sT[0].sCP[0].sCPR[198].nDCStart =691;   sT[0].sCP[0].sCPR[198].nDCNum =1;    sT[0].sCP[0].sCPR[198].nSCStart= 692;   sT[0].sCP[0].sCPR[198].nAckStart=0;	 sT[0].sCP[0].sCPR[198].nAckNum =0;   sT[0].sCP[0].sCPR[198].nSPOffsetCS=3514; sT[0].sCP[0].sCPR[198].nSPOffsetLek= 3515; 	
sT[0].sCP[0].sCPR[199].nDCStart =694;   sT[0].sCP[0].sCPR[199].nDCNum =1;    sT[0].sCP[0].sCPR[199].nSCStart= 695;   sT[0].sCP[0].sCPR[199].nAckStart=0;	 sT[0].sCP[0].sCPR[199].nAckNum =0;   sT[0].sCP[0].sCPR[199].nSPOffsetCS=3530; sT[0].sCP[0].sCPR[199].nSPOffsetLek= 3531; 	
sT[0].sCP[0].sCPR[200].nDCStart =697;   sT[0].sCP[0].sCPR[200].nDCNum =1;    sT[0].sCP[0].sCPR[200].nSCStart= 698;   sT[0].sCP[0].sCPR[200].nAckStart=0;	 sT[0].sCP[0].sCPR[200].nAckNum =0;   sT[0].sCP[0].sCPR[200].nSPOffsetCS=3546; sT[0].sCP[0].sCPR[200].nSPOffsetLek= 3547; 	

sT[0].sCP[0].sCPR[201].nDCStart =700;   sT[0].sCP[0].sCPR[201].nDCNum =1;    sT[0].sCP[0].sCPR[201].nSCStart= 701;   sT[0].sCP[0].sCPR[201].nAckStart=0;	 sT[0].sCP[0].sCPR[201].nAckNum =0;   sT[0].sCP[0].sCPR[201].nSPOffsetCS=3562; sT[0].sCP[0].sCPR[201].nSPOffsetLek= 3563; 	

sT[0].sCP[0].sCPR[202].nDCStart =703;   sT[0].sCP[0].sCPR[202].nDCNum =1;    sT[0].sCP[0].sCPR[202].nSCStart= 704;   sT[0].sCP[0].sCPR[202].nAckStart=0;	 sT[0].sCP[0].sCPR[202].nAckNum =0;   sT[0].sCP[0].sCPR[202].nSPOffsetCS=3578; sT[0].sCP[0].sCPR[202].nSPOffsetLek= 3579; 	
sT[0].sCP[0].sCPR[203].nDCStart =706;   sT[0].sCP[0].sCPR[203].nDCNum =1;    sT[0].sCP[0].sCPR[203].nSCStart= 707;   sT[0].sCP[0].sCPR[203].nAckStart=0;	 sT[0].sCP[0].sCPR[203].nAckNum =0;   sT[0].sCP[0].sCPR[203].nSPOffsetCS=3594; sT[0].sCP[0].sCPR[203].nSPOffsetLek= 3595; 	

sT[0].sCP[0].sCPR[204].nDCStart =709;   sT[0].sCP[0].sCPR[204].nDCNum =1;    sT[0].sCP[0].sCPR[204].nSCStart= 710;   sT[0].sCP[0].sCPR[204].nAckStart=0;	 sT[0].sCP[0].sCPR[204].nAckNum =0;   sT[0].sCP[0].sCPR[204].nSPOffsetCS=3610; sT[0].sCP[0].sCPR[204].nSPOffsetLek= 3611; 	
sT[0].sCP[0].sCPR[205].nDCStart =712;   sT[0].sCP[0].sCPR[205].nDCNum =1;    sT[0].sCP[0].sCPR[205].nSCStart= 713;   sT[0].sCP[0].sCPR[205].nAckStart=0;	 sT[0].sCP[0].sCPR[205].nAckNum =0;   sT[0].sCP[0].sCPR[205].nSPOffsetCS=3626; sT[0].sCP[0].sCPR[205].nSPOffsetLek= 3627; 	

sT[0].sCP[0].sCPR[206].nDCStart =715;   sT[0].sCP[0].sCPR[206].nDCNum =1;    sT[0].sCP[0].sCPR[206].nSCStart= 716;   sT[0].sCP[0].sCPR[206].nAckStart=0;	 sT[0].sCP[0].sCPR[206].nAckNum =0;   sT[0].sCP[0].sCPR[206].nSPOffsetCS=3642; sT[0].sCP[0].sCPR[206].nSPOffsetLek= 3643; 	
sT[0].sCP[0].sCPR[207].nDCStart =718;   sT[0].sCP[0].sCPR[207].nDCNum =1;    sT[0].sCP[0].sCPR[207].nSCStart= 719;   sT[0].sCP[0].sCPR[207].nAckStart=0;	 sT[0].sCP[0].sCPR[207].nAckNum =0;   sT[0].sCP[0].sCPR[207].nSPOffsetCS=3658; sT[0].sCP[0].sCPR[207].nSPOffsetLek= 3659; 	
sT[0].sCP[0].sCPR[208].nDCStart =721;   sT[0].sCP[0].sCPR[208].nDCNum =1;    sT[0].sCP[0].sCPR[208].nSCStart= 722;   sT[0].sCP[0].sCPR[208].nAckStart=0;	 sT[0].sCP[0].sCPR[208].nAckNum =0;   sT[0].sCP[0].sCPR[208].nSPOffsetCS=3674; sT[0].sCP[0].sCPR[208].nSPOffsetLek= 3675; 	
sT[0].sCP[0].sCPR[209].nDCStart =724;   sT[0].sCP[0].sCPR[209].nDCNum =1;    sT[0].sCP[0].sCPR[209].nSCStart= 725;   sT[0].sCP[0].sCPR[209].nAckStart=0;	 sT[0].sCP[0].sCPR[209].nAckNum =0;   sT[0].sCP[0].sCPR[209].nSPOffsetCS=3690; sT[0].sCP[0].sCPR[209].nSPOffsetLek= 3691; 	

sT[0].sCP[0].sCPR[210].nDCStart =727;   sT[0].sCP[0].sCPR[210].nDCNum =1;    sT[0].sCP[0].sCPR[210].nSCStart= 728;   sT[0].sCP[0].sCPR[210].nAckStart=0;	 sT[0].sCP[0].sCPR[210].nAckNum =0;   sT[0].sCP[0].sCPR[210].nSPOffsetCS=3706; sT[0].sCP[0].sCPR[210].nSPOffsetLek= 3707; 	
sT[0].sCP[0].sCPR[211].nDCStart =730;   sT[0].sCP[0].sCPR[211].nDCNum =1;    sT[0].sCP[0].sCPR[211].nSCStart= 731;   sT[0].sCP[0].sCPR[211].nAckStart=0;	 sT[0].sCP[0].sCPR[211].nAckNum =0;   sT[0].sCP[0].sCPR[211].nSPOffsetCS=3722; sT[0].sCP[0].sCPR[211].nSPOffsetLek= 3723; 	

sT[0].sCP[0].sCPR[212].nDCStart =733;   sT[0].sCP[0].sCPR[212].nDCNum =1;    sT[0].sCP[0].sCPR[212].nSCStart= 734;   sT[0].sCP[0].sCPR[212].nAckStart=0;	 sT[0].sCP[0].sCPR[212].nAckNum =0;   sT[0].sCP[0].sCPR[212].nSPOffsetCS=3738; sT[0].sCP[0].sCPR[212].nSPOffsetLek= 3739; 	
sT[0].sCP[0].sCPR[213].nDCStart =736;   sT[0].sCP[0].sCPR[213].nDCNum =1;    sT[0].sCP[0].sCPR[213].nSCStart= 737;   sT[0].sCP[0].sCPR[213].nAckStart=0;	 sT[0].sCP[0].sCPR[213].nAckNum =0;   sT[0].sCP[0].sCPR[213].nSPOffsetCS=3754; sT[0].sCP[0].sCPR[213].nSPOffsetLek= 3755; 	

sT[0].sCP[0].sCPR[214].nDCStart =0;     sT[0].sCP[0].sCPR[214].nDCNum =0;    sT[0].sCP[0].sCPR[214].nSCStart= 739;   sT[0].sCP[0].sCPR[214].nAckStart=0;	 sT[0].sCP[0].sCPR[214].nAckNum =0;   sT[0].sCP[0].sCPR[214].nSPOffsetCS=3761; sT[0].sCP[0].sCPR[214].nSPOffsetLek= 3762; 	
sT[0].sCP[0].sCPR[215].nDCStart =0;     sT[0].sCP[0].sCPR[215].nDCNum =0;    sT[0].sCP[0].sCPR[215].nSCStart= 740;   sT[0].sCP[0].sCPR[215].nAckStart=0;	 sT[0].sCP[0].sCPR[215].nAckNum =0;   sT[0].sCP[0].sCPR[215].nSPOffsetCS=3768; sT[0].sCP[0].sCPR[215].nSPOffsetLek= 3769; 	
sT[0].sCP[0].sCPR[216].nDCStart =0;     sT[0].sCP[0].sCPR[216].nDCNum =0;    sT[0].sCP[0].sCPR[216].nSCStart= 741;   sT[0].sCP[0].sCPR[216].nAckStart=0;	 sT[0].sCP[0].sCPR[216].nAckNum =0;   sT[0].sCP[0].sCPR[216].nSPOffsetCS=3775; sT[0].sCP[0].sCPR[216].nSPOffsetLek= 3776; 	
sT[0].sCP[0].sCPR[217].nDCStart =0;     sT[0].sCP[0].sCPR[217].nDCNum =0;    sT[0].sCP[0].sCPR[217].nSCStart= 742;   sT[0].sCP[0].sCPR[217].nAckStart=0;	 sT[0].sCP[0].sCPR[217].nAckNum =0;   sT[0].sCP[0].sCPR[217].nSPOffsetCS=3782; sT[0].sCP[0].sCPR[217].nSPOffsetLek= 3783; 	
sT[0].sCP[0].sCPR[218].nDCStart =0;     sT[0].sCP[0].sCPR[218].nDCNum =0;    sT[0].sCP[0].sCPR[218].nSCStart= 743;   sT[0].sCP[0].sCPR[218].nAckStart=0;	 sT[0].sCP[0].sCPR[218].nAckNum =0;   sT[0].sCP[0].sCPR[218].nSPOffsetCS=3789; sT[0].sCP[0].sCPR[218].nSPOffsetLek= 3790; 	
sT[0].sCP[0].sCPR[219].nDCStart =0;     sT[0].sCP[0].sCPR[219].nDCNum =0;    sT[0].sCP[0].sCPR[219].nSCStart= 744;   sT[0].sCP[0].sCPR[219].nAckStart=0;	 sT[0].sCP[0].sCPR[219].nAckNum =0;   sT[0].sCP[0].sCPR[219].nSPOffsetCS=3796; sT[0].sCP[0].sCPR[219].nSPOffsetLek= 3797; 	
sT[0].sCP[0].sCPR[220].nDCStart =745;   sT[0].sCP[0].sCPR[220].nDCNum =4;    sT[0].sCP[0].sCPR[220].nSCStart= 749;   sT[0].sCP[0].sCPR[220].nAckStart=0;	 sT[0].sCP[0].sCPR[220].nAckNum =0;   sT[0].sCP[0].sCPR[220].nSPOffsetCS=3833; sT[0].sCP[0].sCPR[220].nSPOffsetLek= 3834; 	



/* TMOK jelszámok inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
	sT[0].sMOT[nI].nIEC_SP_NUM = 14;
	sT[0].sMOT[nI].nIEC_DP_NUM  = 1;
	sT[0].sMOT[nI].nNMNum      = 3;
	
	/* Biztonsagi ellenorzes*/
	if (sT[0].sCP[0].sCPR[nI].nAckNum>4)
	{
		sT[0].sCP[0].sCPR[nI].nAckNum = 1;
	}	
}


/* 71-73  -----------------------------------------------------------*/	
sT[0].sTI[0].nType = TYP_TMOK;

	sT[0].sMOT[0].nIEC_SP				= 10;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_DP				= 10;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_NM				= 10;		/* Mérések IEC kezdõcíme */

/* 34-05  -----------------------------------------------------------*/	
sT[0].sTI[1].nType = TYP_TMOK;

	sT[0].sMOT[1].nIEC_SP				= 26;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_DP				= 11;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_NM				= 13;		/* Mérések IEC kezdõcíme */


/* 34-22  -----------------------------------------------------------*/	
sT[0].sTI[2].nType = TYP_TMOK;

	sT[0].sMOT[2].nIEC_SP				= 42;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_DP				= 12;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_NM				= 16;		/* Mérések IEC kezdõcíme */

/* 31-51  -----------------------------------------------------------*/	
sT[0].sTI[3].nType = TYP_TMOK;

	sT[0].sMOT[3].nIEC_SP				= 58;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_DP				= 13;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_NM				= 19;		/* Mérések IEC kezdõcíme */

/* 31-73  -----------------------------------------------------------*/	
sT[0].sTI[4].nType = TYP_TMOK;

	sT[0].sMOT[4].nIEC_SP				= 74;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_DP				= 14;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_NM				= 22;		/* Mérések IEC kezdõcíme */

/* 31-23  -----------------------------------------------------------*/	
sT[0].sTI[5].nType = TYP_TMOK;

	sT[0].sMOT[5].nIEC_SP				= 90;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_DP				= 15;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_NM				= 25;		/* Mérések IEC kezdõcíme */

/* 48-571  -----------------------------------------------------------*/	
sT[0].sTI[6].nType = TYP_TMOK;

	sT[0].sMOT[6].nIEC_SP				= 106;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_DP				= 16;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_NM				= 28;		/* Mérések IEC kezdõcíme */

/* 47-027  -----------------------------------------------------------*/	
sT[0].sTI[7].nType = TYP_TMOK;

	sT[0].sMOT[7].nIEC_SP				= 122;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_DP				= 17;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_NM				= 31;		/* Mérések IEC kezdõcíme */

/* 48-646  -----------------------------------------------------------*/	
sT[0].sTI[8].nType = TYP_TMOK;

	sT[0].sMOT[8].nIEC_SP				= 138;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_DP				= 18;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_NM				= 34;		/* Mérések IEC kezdõcíme */

/* 91-46  -----------------------------------------------------------*/	
sT[0].sTI[9].nType = TYP_TMOK;

	sT[0].sMOT[9].nIEC_SP				= 154;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[9].nIEC_DP				= 19;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[9].nIEC_NM				= 37;		/* Mérések IEC kezdõcíme */

/* 91-47  -----------------------------------------------------------*/	
sT[0].sTI[10].nType = TYP_TMOK;

	sT[0].sMOT[10].nIEC_SP				= 170;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_DP				= 20;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_NM				= 40;		/* Mérések IEC kezdõcíme */

/* 91-48  -----------------------------------------------------------*/	
sT[0].sTI[11].nType = TYP_TMOK;

	sT[0].sMOT[11].nIEC_SP				= 186;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_DP				= 21;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_NM				= 43;		/* Mérések IEC kezdõcíme */

/* 74-49  -----------------------------------------------------------*/	
sT[0].sTI[12].nType = TYP_TMOK;

	sT[0].sMOT[12].nIEC_SP				= 202;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_DP				= 22;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_NM				= 46;		/* Mérések IEC kezdõcíme */

/* 44-08  -----------------------------------------------------------*/	
sT[0].sTI[13].nType = TYP_TMOK;

	sT[0].sMOT[13].nIEC_SP				= 218;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_DP				= 23;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_NM				= 49;		/* Mérések IEC kezdõcíme */

/* 41-58  -----------------------------------------------------------*/	
sT[0].sTI[14].nType = TYP_TMOK;

	sT[0].sMOT[14].nIEC_SP				= 234;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_DP				= 24;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_NM				= 52;		/* Mérések IEC kezdõcíme */

/* 45-07  -----------------------------------------------------------*/	
sT[0].sTI[15].nType = TYP_TMOK;

	sT[0].sMOT[15].nIEC_SP				= 250;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_DP				= 25;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_NM				= 55;		/* Mérések IEC kezdõcíme */

/* 41-98  -----------------------------------------------------------*/	
sT[0].sTI[16].nType = TYP_TMOK;

	sT[0].sMOT[16].nIEC_SP				= 266;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_DP				= 26;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_NM				= 58;		/* Mérések IEC kezdõcíme */

/* 40-67  -----------------------------------------------------------*/	
sT[0].sTI[17].nType = TYP_TMOK;

	sT[0].sMOT[17].nIEC_SP				= 282;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[17].nIEC_DP				= 27;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[17].nIEC_NM				= 61;		/* Mérések IEC kezdõcíme */

/* 41-15  -----------------------------------------------------------*/	
sT[0].sTI[18].nType = TYP_TMOK;

	sT[0].sMOT[18].nIEC_SP				= 298;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[18].nIEC_DP				= 28;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[18].nIEC_NM				= 64;		/* Mérések IEC kezdõcíme */

/* 92-42  -----------------------------------------------------------*/	
sT[0].sTI[19].nType = TYP_TMOK;

	sT[0].sMOT[19].nIEC_SP				= 314;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[19].nIEC_DP				= 29;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[19].nIEC_NM				= 67;		/* Mérések IEC kezdõcíme */

/* 92-19  -----------------------------------------------------------*/	
sT[0].sTI[20].nType = TYP_TMOK;

	sT[0].sMOT[20].nIEC_SP				= 330;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[20].nIEC_DP				= 30;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[20].nIEC_NM				= 70;		/* Mérések IEC kezdõcíme */

/* 70-47  -----------------------------------------------------------*/	
sT[0].sTI[21].nType = TYP_TMOK;

	sT[0].sMOT[21].nIEC_SP				= 346;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[21].nIEC_DP				= 31;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[21].nIEC_NM				= 73;		/* Mérések IEC kezdõcíme */

/* 71-79  -----------------------------------------------------------*/	
sT[0].sTI[22].nType = TYP_TMOK;

	sT[0].sMOT[22].nIEC_SP				= 362;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_DP				= 32;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_NM				= 76;		/* Mérések IEC kezdõcíme */

/* 91-74  -----------------------------------------------------------*/	
sT[0].sTI[23].nType = TYP_TMOK;

	sT[0].sMOT[23].nIEC_SP				= 378;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_DP				= 33;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_NM				= 79;		/* Mérések IEC kezdõcíme */

/* 45-15  -----------------------------------------------------------*/	
sT[0].sTI[24].nType = TYP_TMOK;

	sT[0].sMOT[24].nIEC_SP				= 394;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_DP				= 34;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_NM				= 82;		/* Mérések IEC kezdõcíme */

/* 92-61  -----------------------------------------------------------*/	
sT[0].sTI[25].nType = TYP_TMOK;

	sT[0].sMOT[25].nIEC_SP				= 410;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_DP				= 35;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_NM				= 85;		/* Mérések IEC kezdõcíme */

/* 92-83  -----------------------------------------------------------*/	
sT[0].sTI[26].nType = TYP_TMOK;

	sT[0].sMOT[26].nIEC_SP				= 426;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[26].nIEC_DP				= 36;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[26].nIEC_NM				= 88;		/* Mérések IEC kezdõcíme */

/* 70-30  -----------------------------------------------------------*/	
sT[0].sTI[27].nType = TYP_TMOK;

	sT[0].sMOT[27].nIEC_SP				= 442;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_DP				= 37;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_NM				= 91;		/* Mérések IEC kezdõcíme */

/* 92-79  -----------------------------------------------------------*/	
sT[0].sTI[28].nType = TYP_TMOK;

	sT[0].sMOT[28].nIEC_SP				= 458;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_DP				= 38;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_NM				= 94;		/* Mérések IEC kezdõcíme */

/* 42-61  -----------------------------------------------------------*/	
sT[0].sTI[29].nType = TYP_TMOK;

	sT[0].sMOT[29].nIEC_SP				= 474;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_DP				= 39;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_NM				= 97;		/* Mérések IEC kezdõcíme */

/* 40-99  -----------------------------------------------------------*/	
sT[0].sTI[30].nType = TYP_TMOK;

	sT[0].sMOT[30].nIEC_SP				= 490;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_DP				= 40;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_NM				= 100;		/* Mérések IEC kezdõcíme */
  
/* 35-25  -----------------------------------------------------------*/	
sT[0].sTI[31].nType = TYP_TMOK;

	sT[0].sMOT[31].nIEC_SP				= 506;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[31].nIEC_DP				= 41;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[31].nIEC_NM				= 103;		/* Mérések IEC kezdõcíme */
	
/* 15-05  -----------------------------------------------------------*/	
sT[0].sTI[32].nType = TYP_TMOK;

	sT[0].sMOT[32].nIEC_SP				= 522;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[32].nIEC_DP				= 42;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[32].nIEC_NM				= 106;		/* Mérések IEC kezdõcíme */
/* 12-64  -----------------------------------------------------------*/	
sT[0].sTI[33].nType = TYP_TMOK;

	sT[0].sMOT[33].nIEC_SP				= 538;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[33].nIEC_DP				= 43;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[33].nIEC_NM				= 109;		/* Mérések IEC kezdõcíme */
/* 14-10  -----------------------------------------------------------*/	
sT[0].sTI[34].nType = TYP_TMOK;

	sT[0].sMOT[34].nIEC_SP				= 554;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[34].nIEC_DP				= 44;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[34].nIEC_NM				= 112;		/* Mérések IEC kezdõcíme */
/* 30-15  -----------------------------------------------------------*/	
sT[0].sTI[35].nType = TYP_TMOK;

	sT[0].sMOT[35].nIEC_SP				= 570;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_DP				= 45;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_NM				= 115;		/* Mérések IEC kezdõcíme */
/* 30-18  -----------------------------------------------------------*/	
sT[0].sTI[36].nType = TYP_TMOK;

	sT[0].sMOT[36].nIEC_SP				= 586;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_DP				= 46;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_NM				= 118;		/* Mérések IEC kezdõcíme */
/* 35-58  -----------------------------------------------------------*/	
sT[0].sTI[37].nType = TYP_TMOK;

	sT[0].sMOT[37].nIEC_SP				= 602;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[37].nIEC_DP				= 47;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[37].nIEC_NM				= 121;		/* Mérések IEC kezdõcíme */
/* 32-12  -----------------------------------------------------------*/	
sT[0].sTI[38].nType = TYP_TMOK;

	sT[0].sMOT[38].nIEC_SP				= 618;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[38].nIEC_DP				= 48;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[38].nIEC_NM				= 124;		/* Mérések IEC kezdõcíme */
/* 31-48  -----------------------------------------------------------*/	
sT[0].sTI[39].nType = TYP_TMOK;

	sT[0].sMOT[39].nIEC_SP				= 634;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[39].nIEC_DP				= 49;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[39].nIEC_NM				= 127;		/* Mérések IEC kezdõcíme */
/* 34-17  -----------------------------------------------------------*/	
sT[0].sTI[40].nType = TYP_TMOK;

	sT[0].sMOT[40].nIEC_SP				= 650;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_DP				= 50;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_NM				= 130;		/* Mérések IEC kezdõcíme */
/* 31-97  -----------------------------------------------------------*/	
sT[0].sTI[41].nType = TYP_TMOK;

	sT[0].sMOT[41].nIEC_SP				= 666;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_DP				= 51;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_NM				= 133;		/* Mérések IEC kezdõcíme */
/* 30-64  -----------------------------------------------------------*/	
sT[0].sTI[42].nType = TYP_TMOK;

	sT[0].sMOT[42].nIEC_SP				= 682;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_DP				= 52;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_NM				= 136;		/* Mérések IEC kezdõcíme */
/* 34-20  -----------------------------------------------------------*/	
sT[0].sTI[43].nType = TYP_TMOK;

	sT[0].sMOT[43].nIEC_SP				= 698;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[43].nIEC_DP				= 53;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[43].nIEC_NM				= 139;		/* Mérések IEC kezdõcíme */
/* 86-61  -----------------------------------------------------------*/	
sT[0].sTI[44].nType = TYP_TMOK;

	sT[0].sMOT[44].nIEC_SP				= 714;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[44].nIEC_DP				= 54;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[44].nIEC_NM				= 142;		/* Mérések IEC kezdõcíme */
/* 86-80  -----------------------------------------------------------*/	
sT[0].sTI[45].nType = TYP_TMOK;

	sT[0].sMOT[45].nIEC_SP				= 730;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_DP				= 55;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_NM				= 145;		/* Mérések IEC kezdõcíme */
/* 85-21  -----------------------------------------------------------*/	
sT[0].sTI[46].nType = TYP_TMOK;

	sT[0].sMOT[46].nIEC_SP				= 746;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_DP				= 56;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_NM				= 148;		/* Mérések IEC kezdõcíme */
/* xx-xx  -----------------------------------------------------------*/	
sT[0].sTI[47].nType = TYP_TMOK;

	sT[0].sMOT[47].nIEC_SP				= 762;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_DP				= 57;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_NM				= 151;		/* Mérések IEC kezdõcíme */
/* 85-99  -----------------------------------------------------------*/	
sT[0].sTI[48].nType = TYP_TMOK;

	sT[0].sMOT[48].nIEC_SP				= 778;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_DP				= 58;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_NM				= 154;		/* Mérések IEC kezdõcíme */
/* 86-90  -----------------------------------------------------------*/	
sT[0].sTI[49].nType = TYP_TMOK;

	sT[0].sMOT[49].nIEC_SP				= 794;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_DP				= 59;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_NM				= 157;		/* Mérések IEC kezdõcíme */
/* 85-17  -----------------------------------------------------------*/	
sT[0].sTI[50].nType = TYP_TMOK;

	sT[0].sMOT[50].nIEC_SP				= 810;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_DP				= 60;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_NM				= 160;		/* Mérések IEC kezdõcíme */
/* 20-05  -----------------------------------------------------------*/	
sT[0].sTI[51].nType = TYP_TMOK;

	sT[0].sMOT[51].nIEC_SP				= 826;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[51].nIEC_DP				= 61;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[51].nIEC_NM				= 163;		/* Mérések IEC kezdõcíme */
/* 85-28  -----------------------------------------------------------*/	
sT[0].sTI[52].nType = TYP_TMOK;

	sT[0].sMOT[52].nIEC_SP				= 842;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[52].nIEC_DP				= 62;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[52].nIEC_NM				= 166;		/* Mérések IEC kezdõcíme */

/* Szombathely, MÁV Igazgatóság  -----------------------------------------------------------*/	
sT[0].sTI[53].nType = TYP_MOT;	
	
	sT[0].sMOT[53].nIEC_SP				= 858;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[53].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[53].nIEC_DP				= 63;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[53].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[53].nIEC_NM				= 169;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[53].nNMNum				= 4;		/* Analóg mérések száma*/
/* Szombathely, Moldin  -----------------------------------------------------------*/	
sT[0].sTI[54].nType = TYP_MOT;	
	
	sT[0].sMOT[54].nIEC_SP				= 876;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[54].nIEC_DP				= 71;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[54].nIEC_NM				= 173;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[54].nNMNum				= 4;		/* Analóg mérések száma*/
/* Szombathely, Paraktiker  -----------------------------------------------------------*/	
sT[0].sTI[55].nType = TYP_MOT;	
	
	sT[0].sMOT[55].nIEC_SP				= 892;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[55].nIEC_DP				= 79;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[55].nIEC_NM				= 177;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[55].nNMNum				= 4;		/* Analóg mérések száma*/
/* Szombathely, Tesco  -----------------------------------------------------------*/	
sT[0].sTI[56].nType = TYP_MOT;	
	
	sT[0].sMOT[56].nIEC_SP				= 908;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[56].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[56].nIEC_DP				= 87;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[56].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[56].nIEC_NM				= 181;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[56].nNMNum				= 4;		/* Analóg mérések száma*/
/* 85-18  -----------------------------------------------------------*/	
sT[0].sTI[57].nType = TYP_TMOK;

	sT[0].sMOT[57].nIEC_SP				= 924;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[57].nIEC_DP				= 95;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[57].nIEC_NM				= 185;		/* Mérések IEC kezdõcíme */
/* 86-98  -----------------------------------------------------------*/	
sT[0].sTI[58].nType = TYP_TMOK;

	sT[0].sMOT[58].nIEC_SP				= 940;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_DP				= 96;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_NM				= 188;		/* Mérések IEC kezdõcíme */
/* 86-26  -----------------------------------------------------------*/	
sT[0].sTI[59].nType = TYP_TMOK;

	sT[0].sMOT[59].nIEC_SP				= 956;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_DP				= 97;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_NM				= 191;		/* Mérések IEC kezdõcíme */
/* 86-21  -----------------------------------------------------------*/	
sT[0].sTI[60].nType = TYP_TMOK;

	sT[0].sMOT[60].nIEC_SP				= 972;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_DP				= 98;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_NM				= 194;		/* Mérések IEC kezdõcíme */
/* 85-94  -----------------------------------------------------------*/	
sT[0].sTI[61].nType = TYP_TMOK;

	sT[0].sMOT[61].nIEC_SP				= 988;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_DP				= 99;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_NM				= 197;		/* Mérések IEC kezdõcíme */
/* 81-28  -----------------------------------------------------------*/	
sT[0].sTI[62].nType = TYP_TMOK;

	sT[0].sMOT[62].nIEC_SP				= 1004;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_DP				= 100;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_NM				= 200;		/* Mérések IEC kezdõcíme */
/* 85-51  -----------------------------------------------------------*/	
sT[0].sTI[63].nType = TYP_TMOK;

	sT[0].sMOT[63].nIEC_SP				= 1020;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[63].nIEC_DP				= 101;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[63].nIEC_NM				= 203;		/* Mérések IEC kezdõcíme */
/* 85-47  -----------------------------------------------------------*/	
sT[0].sTI[64].nType = TYP_TMOK;

	sT[0].sMOT[64].nIEC_SP				= 1036;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[64].nIEC_DP				= 102;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[64].nIEC_NM				= 206;		/* Mérések IEC kezdõcíme */
/* 20-21  -----------------------------------------------------------*/	
sT[0].sTI[65].nType = TYP_TMOK;

	sT[0].sMOT[65].nIEC_SP				= 1052;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[65].nIEC_DP				= 103;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[65].nIEC_NM				= 209;		/* Mérések IEC kezdõcíme */
/* 80-50  -----------------------------------------------------------*/	
sT[0].sTI[66].nType = TYP_TMOK;

	sT[0].sMOT[66].nIEC_SP				= 1068;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[66].nIEC_DP				= 104;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[66].nIEC_NM				= 212;		/* Mérések IEC kezdõcíme */
/* 82-50  -----------------------------------------------------------*/	
sT[0].sTI[67].nType = TYP_TMOK;

	sT[0].sMOT[67].nIEC_SP				= 1084;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_DP				= 105;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_NM				= 215;		/* Mérések IEC kezdõcíme */
/* 80-69  -----------------------------------------------------------*/	
sT[0].sTI[68].nType = TYP_TMOK;

	sT[0].sMOT[68].nIEC_SP				= 1100;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_DP				= 106;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_NM				= 218;		/* Mérések IEC kezdõcíme */
/* 30-41  -----------------------------------------------------------*/	
sT[0].sTI[69].nType = TYP_TMOK;

	sT[0].sMOT[69].nIEC_SP				= 1116;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[69].nIEC_DP				= 107;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[69].nIEC_NM				= 221;		/* Mérések IEC kezdõcíme */
/* 37-16  -----------------------------------------------------------*/	
sT[0].sTI[70].nType = TYP_TMOK;

	sT[0].sMOT[70].nIEC_SP				= 1132;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[70].nIEC_DP				= 108;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[70].nIEC_NM				= 224;		/* Mérések IEC kezdõcíme */
/* 30-88  -----------------------------------------------------------*/	
sT[0].sTI[71].nType = TYP_TMOK;

	sT[0].sMOT[71].nIEC_SP				= 1148;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[71].nIEC_DP				= 109;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[71].nIEC_NM				= 227;		/* Mérések IEC kezdõcíme */

/* Tatabánya, Magnum  -----------------------------------------------------------*/	
sT[0].sTI[72].nType = TYP_MOT;	
	
	sT[0].sMOT[72].nIEC_SP				= 1164;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[72].nIEC_DP				= 110;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[72].nIEC_NM				= 230;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[72].nNMNum				= 4;		/* Analóg mérések száma*/

/* Szombathely, Erdei iskola  -----------------------------------------------------------*/	
sT[0].sTI[73].nType = TYP_MOT;	
	
	sT[0].sMOT[73].nIEC_SP				= 1182;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[73].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[73].nIEC_DP				= 118;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[73].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[73].nIEC_NM				= 234;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[73].nNMNum				= 4;		/* Analóg mérések száma*/
/* Szombathely, Puskás  -----------------------------------------------------------*/	
sT[0].sTI[74].nType = TYP_MOT;	
	
	sT[0].sMOT[74].nIEC_SP				= 1200;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[74].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[74].nIEC_DP				= 126;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[74].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[74].nIEC_NM				= 238;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[74].nNMNum				= 4;		/* Analóg mérések száma*/
/* Szombathely, METRO  -----------------------------------------------------------*/	
sT[0].sTI[75].nType = TYP_MOT;	
	
	sT[0].sMOT[75].nIEC_SP				= 1218;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[75].nIEC_DP				= 134;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[75].nIEC_NM				= 242;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[75].nNMNum				= 4;		/* Analóg mérések száma*/
/* Bük, Nestlé  -----------------------------------------------------------*/	
sT[0].sTI[76].nType = TYP_MOT;	
	
	sT[0].sMOT[76].nIEC_SP				= 1287;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_SP_NUM			= 32;		/* Egybites értékek száma*/
	sT[0].sMOT[76].nIEC_DP				= 142;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[76].nIEC_NM				= 246;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[76].nNMNum				= 4;		/* Analóg mérések száma*/
/* Kemenesmagasi, eromu -----------------------------------------------------------*/
sT[0].sTI[77].nType = TYP_TAL;

		sT[0].sTAL[77].nIEC_SP       		= 1250;
		sT[0].sTAL[77].nIEC_OsszevontHiba	= 1282;
		sT[0].sTAL[77].nIEC_MT_KommHiba		= 1283;
		sT[0].sTAL[77].nIEC_DP       		= 150;
		sT[0].sTAL[77].nIEC_DP_FSZ1  		= 154;
		sT[0].sTAL[77].nIEC_NM				= 250;
		sT[0].sTAL[77].nNMNum		  		= 11;
		sT[0].sTAL[77].nKommStatusNum		= 2;

/* Ostfyasszonyfa, biogaz -----------------------------------------------------------*/
sT[0].sTI[78].nType = TYP_TAL;

		sT[0].sTAL[78].nIEC_SP       		= 1321;
		sT[0].sTAL[78].nIEC_OsszevontHiba	= 1353;
		sT[0].sTAL[78].nIEC_MT_KommHiba		= 1354;
		sT[0].sTAL[78].nIEC_DP       		= 158;
		sT[0].sTAL[78].nIEC_DP_FSZ1  		= 162;
		sT[0].sTAL[78].nIEC_NM				= 261;
		sT[0].sTAL[78].nNMNum		  		= 11;
		sT[0].sTAL[78].nKommStatusNum		= 2;

/* Szombathely, HEMO -----------------------------------------------------------*/
sT[0].sTI[79].nType = TYP_TAL;

		sT[0].sTAL[79].nIEC_SP       		= 1358;
		sT[0].sTAL[79].nIEC_OsszevontHiba	= 1390;
		sT[0].sTAL[79].nIEC_MT_KommHiba		= 1391;
		sT[0].sTAL[79].nIEC_DP       		= 166;
		sT[0].sTAL[79].nIEC_DP_FSZ1  		= 170;
		sT[0].sTAL[79].nIEC_NM				= 272;
		sT[0].sTAL[79].nNMNum		  		= 4;
		sT[0].sTAL[79].nKommStatusNum		= 2;
		
		sT[0].sTAL[79].nIEC_DP_2BIT1 		= 174;
		sT[0].sTAL[79].nIEC_DP_2BIT_KINT1	= 913;
		sT[0].sTAL[79].nIEC_DP_2BIT_BENT1	= 912;
		
		sT[0].sTAL[79].nIEC_DP_12BIT1		= 175;
		sT[0].sTAL[79].nIEC_DP_2BIT_BK1		= 920;
		
/* Nagyszentjános, biogáz -----------------------------------------------------------*/
sT[0].sTI[80].nType = TYP_TAL;

		sT[0].sTAL[80].nIEC_SP       		= 1395;
		sT[0].sTAL[80].nIEC_OsszevontHiba	= 1427;
		sT[0].sTAL[80].nIEC_MT_KommHiba		= 1428;
		sT[0].sTAL[80].nIEC_DP       		= 176;
		sT[0].sTAL[80].nIEC_DP_FSZ1  		= 180;
		sT[0].sTAL[80].nIEC_NM				= 276;
		sT[0].sTAL[80].nNMNum		  		= 11;
		sT[0].sTAL[80].nKommStatusNum		= 2;
/* 31-37  -----------------------------------------------------------*/	
sT[0].sTI[81].nType = TYP_TMOK;

	sT[0].sMOT[81].nIEC_SP				= 1432;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_DP				= 184;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_NM				= 287;		/* Mérések IEC kezdõcíme */
/* Szõny, Dunalys  -----------------------------------------------------------*/	
sT[0].sTI[82].nType = TYP_MOT;	
	
	sT[0].sMOT[82].nIEC_SP				= 1448;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[82].nIEC_DP				= 185;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[82].nIEC_NM				= 290;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[82].nNMNum				= 4;		/* Analóg mérések száma*/
/* 43-18  -----------------------------------------------------------*/	
sT[0].sTI[83].nType = TYP_TMOK;

	sT[0].sMOT[83].nIEC_SP				= 1466;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[83].nIEC_DP				= 193;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[83].nIEC_NM				= 750;		/* Mérések IEC kezdõcíme */   
	sT[0].sMOT[83].nNMNum				= 4;		/* Analóg mérések száma*/
	
/* 43-19  -----------------------------------------------------------*/	
sT[0].sTI[84].nType = TYP_TMOK;

	sT[0].sMOT[84].nIEC_SP				= 1482;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[84].nIEC_DP				= 194;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[84].nIEC_NM				= 758;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[84].nNMNum				= 4;		/* Analóg mérések száma*/

/* 43-14  -----------------------------------------------------------*/	
sT[0].sTI[85].nType = TYP_TMOK;

	sT[0].sMOT[85].nIEC_SP				= 1498;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[85].nIEC_DP				= 195;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[85].nIEC_NM				= 300;		/* Mérések IEC kezdõcíme */
/* 31-32  -----------------------------------------------------------*/	
sT[0].sTI[86].nType = TYP_TMOK;

	sT[0].sMOT[86].nIEC_SP				= 1514;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[86].nIEC_DP				= 196;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[86].nIEC_NM				= 303;		/* Mérések IEC kezdõcíme */
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
/* Szentgotthárd, Allison  -----------------------------------------------------------*/	
sT[0].sTI[87].nType = TYP_MOT;	
	
	sT[0].sMOT[87].nIEC_SP				= 1530;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[87].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[87].nIEC_DP				= 197;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[87].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[87].nIEC_NM				= 306;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[87].nNMNum				= 4;		/* Analóg mérések száma*/

/* Tata, Güntner -----------------------------------------------------------*/	
sT[0].sTI[88].nType = TYP_MOT;	
	
	sT[0].sMOT[88].nIEC_SP				= 1548;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[88].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[88].nIEC_DP				= 449;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[88].nIEC_DP_NUM			= 16;   		/* Két bites értékek száma*/
	sT[0].sMOT[88].nIEC_NM				= 310;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[88].nNMNum				= 4;		/* Analóg mérések száma*/

/* 31-32  -----------------------------------------------------------*/	
sT[0].sTI[89].nType = TYP_TMOK;

	sT[0].sMOT[89].nIEC_SP				= 1566;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[89].nIEC_DP				= 213;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[89].nIEC_NM				= 314;		/* Mérések IEC kezdõcíme */

/* 51-96  -----------------------------------------------------------*/	
sT[0].sTI[90].nType = TYP_TMOK;

	sT[0].sMOT[90].nIEC_SP				= 1582;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_DP				= 214;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_NM				= 317;		/* Mérések IEC kezdõcíme */

/* Kõszárhegy átjátszó ---------------------------------------------*/
sT[0].sTI[91].nType = TYP_MOT;

	sT[0].sMOT[91].nIEC_SP				= 1598;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[91].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[91].nIEC_DP_NUM			= 0;
	sT[0].sMOT[91].nNMNum      			= 0;

/* 41-57  -----------------------------------------------------------*/	
sT[0].sTI[92].nType = TYP_TMOK;

	sT[0].sMOT[92].nIEC_SP				= 1605;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_DP				= 215;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_NM				= 320;		/* Mérések IEC kezdõcíme */

/* Ikervár, vízierõmû -----------------------------------------------------------*/
sT[0].sTI[93].nType = TYP_TAL;

		sT[0].sTAL[93].nIEC_SP       		= 1621;
		sT[0].sTAL[93].nIEC_OsszevontHiba	= 1653;
		sT[0].sTAL[93].nIEC_MT_KommHiba		= 1654;
		sT[0].sTAL[93].nIEC_DP       		= 216;
		sT[0].sTAL[93].nIEC_DP_FSZ1  		= 220;
		sT[0].sTAL[93].nIEC_NM				= 323;
		sT[0].sTAL[93].nNMNum		  		= 11;
		sT[0].sTAL[93].nKommStatusNum		= 2;

/* Tatabánya , kiserõmû -----------------------------------------------------------*/
sT[0].sTI[94].nType = TYP_TAL;

		sT[0].sTAL[94].nIEC_SP       		= 1658;
		sT[0].sTAL[94].nIEC_OsszevontHiba	= 1690;
		sT[0].sTAL[94].nIEC_MT_KommHiba		= 1691;
		sT[0].sTAL[94].nIEC_DP       		= 241;
		sT[0].sTAL[94].nIEC_DP_FSZ1  		= 245;
		sT[0].sTAL[94].nIEC_NM				= 334;
		sT[0].sTAL[94].nNMNum		  		= 11;
		sT[0].sTAL[94].nKommStatusNum		= 2;

		sT[0].sTAL[94].nIEC_DP_2BIT1 		= 249;
		sT[0].sTAL[94].nIEC_DP_2BIT_KINT1	= 920;
		sT[0].sTAL[94].nIEC_DP_2BIT_BENT1	= 913;
		
/* Kisbér , biogáz -----------------------------------------------------------*/
sT[0].sTI[95].nType = TYP_TAL;

		sT[0].sTAL[95].nIEC_SP       		= 1695;
		sT[0].sTAL[95].nIEC_OsszevontHiba	= 1727;
		sT[0].sTAL[95].nIEC_MT_KommHiba		= 1728;
		sT[0].sTAL[95].nIEC_DP       		= 232;
		sT[0].sTAL[95].nIEC_DP_FSZ1  		= 236;
		sT[0].sTAL[95].nIEC_NM				= 345;
		sT[0].sTAL[95].nNMNum		  		= 11;
		sT[0].sTAL[95].nKommStatusNum		= 2;

		sT[0].sTAL[95].nIEC_DP_2BIT1 		= 240;
		sT[0].sTAL[95].nIEC_DP_2BIT_KINT1	= 920;
		sT[0].sTAL[95].nIEC_DP_2BIT_BENT1	= 913;

/* 21-89  -----------------------------------------------------------*/	
sT[0].sTI[96].nType = TYP_TMOK;

	sT[0].sMOT[96].nIEC_SP				= 1732;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[96].nIEC_DP				= 250;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[96].nIEC_NM				= 356;		/* Mérések IEC kezdõcíme */
 /* 48-648  -----------------------------------------------------------*/	
sT[0].sTI[97].nType = TYP_TMOK;

	sT[0].sMOT[97].nIEC_SP				= 1748;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[97].nIEC_DP				= 251;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[97].nIEC_NM				= 359;		/* Mérések IEC kezdõcíme */
 /* 42-59  -----------------------------------------------------------*/	
sT[0].sTI[98].nType = TYP_TMOK;

	sT[0].sMOT[98].nIEC_SP				= 1764;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_DP				= 252;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_NM				= 362;		/* Mérések IEC kezdõcíme */
 /* 71-51  -----------------------------------------------------------*/	
sT[0].sTI[99].nType = TYP_TMOK;

	sT[0].sMOT[99].nIEC_SP				= 1780;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_DP				= 253;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_NM				= 365;		/* Mérések IEC kezdõcíme */
 /* 91-15  -----------------------------------------------------------*/	
sT[0].sTI[100].nType = TYP_TMOK;

	sT[0].sMOT[100].nIEC_SP				= 1796;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_DP				= 254;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_NM				= 368;		/* Mérések IEC kezdõcíme */
	
 /* 12-70  -----------------------------------------------------------*/	
sT[0].sTI[101].nType = TYP_TMOK;

	sT[0].sMOT[101].nIEC_SP				= 1812;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_DP				= 255;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_NM				= 371;		/* Mérések IEC kezdõcíme */
 /* 30-04  -----------------------------------------------------------*/	
sT[0].sTI[102].nType = TYP_TMOK;

	sT[0].sMOT[102].nIEC_SP				= 1828;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_DP				= 256;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_NM				= 374;		/* Mérések IEC kezdõcíme */
 /* 34-62  -----------------------------------------------------------*/	
sT[0].sTI[103].nType = TYP_TMOK;

	sT[0].sMOT[103].nIEC_SP				= 1844;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_DP				= 257;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_NM				= 377;		/* Mérések IEC kezdõcíme */
 /* 34-93  -----------------------------------------------------------*/	
sT[0].sTI[104].nType = TYP_TMOK;

	sT[0].sMOT[104].nIEC_SP				= 1860;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[104].nIEC_DP				= 258;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[104].nIEC_NM				= 380;		/* Mérések IEC kezdõcíme */
 /* 36-23  -----------------------------------------------------------*/	
sT[0].sTI[105].nType = TYP_TMOK;

	sT[0].sMOT[105].nIEC_SP				= 1876;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[105].nIEC_DP				= 259;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[105].nIEC_NM				= 383;		/* Mérések IEC kezdõcíme */
 /* 35-29  -----------------------------------------------------------*/	
sT[0].sTI[106].nType = TYP_TMOK;

	sT[0].sMOT[106].nIEC_SP				= 1892;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[106].nIEC_DP				= 260;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[106].nIEC_NM				= 386;		/* Mérések IEC kezdõcíme */
 /* 91-19  -----------------------------------------------------------*/	
sT[0].sTI[107].nType = TYP_TMOK;

	sT[0].sMOT[107].nIEC_SP				= 1908;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[107].nIEC_DP				= 261;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[107].nIEC_NM				= 389;		/* Mérések IEC kezdõcíme */
 /* 99-317  -----------------------------------------------------------*/	
sT[0].sTI[108].nType = TYP_TMOK;

	sT[0].sMOT[108].nIEC_SP				= 1924;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_DP				= 262;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_NM				= 392;		/* Mérések IEC kezdõcíme */
 /* 92-81  -----------------------------------------------------------*/	
sT[0].sTI[109].nType = TYP_TMOK;

	sT[0].sMOT[109].nIEC_SP				= 1940;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[109].nIEC_DP				= 263;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[109].nIEC_NM				= 395;		/* Mérések IEC kezdõcíme */
 /* 93-04  -----------------------------------------------------------*/	
sT[0].sTI[110].nType = TYP_TMOK;

	sT[0].sMOT[110].nIEC_SP				= 1956;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[110].nIEC_DP				= 264;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[110].nIEC_NM				= 398;		/* Mérések IEC kezdõcíme */
 /* 93-20  -----------------------------------------------------------*/	
sT[0].sTI[111].nType = TYP_TMOK;

	sT[0].sMOT[111].nIEC_SP				= 1972;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[111].nIEC_DP				= 265;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[111].nIEC_NM				= 401;		/* Mérések IEC kezdõcíme */
 /* 45-06  -----------------------------------------------------------*/	
sT[0].sTI[112].nType = TYP_TMOK;

	sT[0].sMOT[112].nIEC_SP				= 1988;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[112].nIEC_DP				= 266;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[112].nIEC_NM				= 404;		/* Mérések IEC kezdõcíme */
 /* 42-51  -----------------------------------------------------------*/	
sT[0].sTI[113].nType = TYP_TMOK;

	sT[0].sMOT[113].nIEC_SP				= 2004;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_DP				= 267;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_NM				= 407;		/* Mérések IEC kezdõcíme */
 /* 21-45  -----------------------------------------------------------*/	
sT[0].sTI[114].nType = TYP_TMOK;

	sT[0].sMOT[114].nIEC_SP				= 2020;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[114].nIEC_DP				= 268;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[114].nIEC_NM				= 410;		/* Mérések IEC kezdõcíme */
 /* 21-33  -----------------------------------------------------------*/	
sT[0].sTI[115].nType = TYP_TMOK;

	sT[0].sMOT[115].nIEC_SP				= 2036;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_DP				= 269;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_NM				= 413;		/* Mérések IEC kezdõcíme */
 /* 82-88  -----------------------------------------------------------*/	
sT[0].sTI[116].nType = TYP_TMOK;

	sT[0].sMOT[116].nIEC_SP				= 2052;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[116].nIEC_DP				= 270;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[116].nIEC_NM				= 416;		/* Mérések IEC kezdõcíme */
 /* 82-02  -----------------------------------------------------------*/	
sT[0].sTI[117].nType = TYP_TMOK;

	sT[0].sMOT[117].nIEC_SP				= 2068;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[117].nIEC_DP				= 271;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[117].nIEC_NM				= 419;		/* Mérések IEC kezdõcíme */
 /* 80-03  -----------------------------------------------------------*/	
sT[0].sTI[118].nType = TYP_TMOK;

	sT[0].sMOT[118].nIEC_SP				= 2084;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_DP				= 272;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_NM				= 422;		/* Mérések IEC kezdõcíme */
 /* 80-04  -----------------------------------------------------------*/	
sT[0].sTI[119].nType = TYP_TMOK;

	sT[0].sMOT[119].nIEC_SP				= 2100;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[119].nIEC_DP				= 273;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[119].nIEC_NM				= 425;		/* Mérések IEC kezdõcíme */
 /* 80-05  -----------------------------------------------------------*/	
sT[0].sTI[120].nType = TYP_TMOK;

	sT[0].sMOT[120].nIEC_SP				= 2116;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[120].nIEC_DP				= 274;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[120].nIEC_NM				= 428;		/* Mérések IEC kezdõcíme */
/* 40-06  -----------------------------------------------------------*/	
sT[0].sTI[121].nType = TYP_TMOK;

	sT[0].sMOT[121].nIEC_SP				= 2132;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[121].nIEC_DP				= 275;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[121].nIEC_NM				= 431;		/* Mérések IEC kezdõcíme */
/* 42-52  -----------------------------------------------------------*/	
sT[0].sTI[122].nType = TYP_TMOK;

	sT[0].sMOT[122].nIEC_SP				= 2148;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[122].nIEC_DP				= 276;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[122].nIEC_NM				= 434;		/* Mérések IEC kezdõcíme */
/* 42-53  -----------------------------------------------------------*/	
sT[0].sTI[123].nType = TYP_TMOK;

	sT[0].sMOT[123].nIEC_SP				= 2164;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[123].nIEC_DP				= 277;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[123].nIEC_NM				= 437;		/* Mérések IEC kezdõcíme */
/* 42-97  -----------------------------------------------------------*/	
sT[0].sTI[124].nType = TYP_TMOK;

	sT[0].sMOT[124].nIEC_SP				= 2180;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[124].nIEC_DP				= 278;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[124].nIEC_NM				= 440;		/* Mérések IEC kezdõcíme */
/* 85-66  -----------------------------------------------------------*/	
sT[0].sTI[125].nType = TYP_TMOK;

	sT[0].sMOT[125].nIEC_SP				= 2196;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[125].nIEC_DP				= 279;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[125].nIEC_NM				= 443;		/* Mérések IEC kezdõcíme */
/* 89-172  -----------------------------------------------------------*/	
sT[0].sTI[126].nType = TYP_TMOK;

	sT[0].sMOT[126].nIEC_SP				= 2212;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[126].nIEC_DP				= 280;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[126].nIEC_NM				= 446;		/* Mérések IEC kezdõcíme */
/* 74-11  -----------------------------------------------------------*/	
sT[0].sTI[127].nType = TYP_TMOK;

	sT[0].sMOT[127].nIEC_SP				= 2228;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[127].nIEC_DP				= 281;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[127].nIEC_NM				= 449;		/* Mérések IEC kezdõcíme */

/* Szombathely, Nádasdy  -----------------------------------------------------------*/	
sT[0].sTI[128].nType = TYP_MOT;	
	
	sT[0].sMOT[128].nIEC_SP				= 2244;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[128].nIEC_SP_NUM			= 18;		/* Egybites értékek száma*/
	sT[0].sMOT[128].nIEC_DP				= 282;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[128].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[128].nIEC_NM				= 452;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[128].nNMNum				= 4;		/* Analóg mérések száma*/

/* Tatabánya, Velencei  -----------------------------------------------------------*/	
sT[0].sTI[129].nType = TYP_MOT;	
	
	sT[0].sMOT[129].nIEC_SP				= 2262;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[129].nIEC_SP_NUM			= 18;		/* Egybites értékek száma*/
	sT[0].sMOT[129].nIEC_DP				= 290;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[129].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[129].nIEC_NM				= 456;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[129].nNMNum				= 4;		/* Analóg mérések száma*/
	
/* 80-59  -----------------------------------------------------------*/	
sT[0].sTI[130].nType = TYP_TMOK;

	sT[0].sMOT[130].nIEC_SP				= 2280;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[130].nIEC_DP				= 298;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[130].nIEC_NM				= 460;		/* Mérések IEC kezdõcíme */

/* 34-07  -----------------------------------------------------------*/	
sT[0].sTI[131].nType = TYP_TMOK;

	sT[0].sMOT[131].nIEC_SP				= 2296;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[131].nIEC_DP				= 299;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[131].nIEC_NM				= 463;		/* Mérések IEC kezdõcíme */

/* Mosonmagyaróvár , Futura -----------------------------------------------------------*/
sT[0].sTI[132].nType = TYP_TAL;

		sT[0].sTAL[132].nIEC_SP       		= 2312;
		sT[0].sTAL[132].nIEC_OsszevontHiba	= 2344;
		sT[0].sTAL[132].nIEC_MT_KommHiba	= 2345;
		sT[0].sTAL[132].nIEC_DP       		= 300;
		sT[0].sTAL[132].nIEC_DP_FSZ1  		= 304;
		sT[0].sTAL[132].nIEC_NM				= 466;
		sT[0].sTAL[132].nNMNum		  		= 4;
		sT[0].sTAL[132].nKommStatusNum		= 2;

		sT[0].sTAL[132].nIEC_DP_2BIT1 		= 308;
		sT[0].sTAL[132].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[132].nIEC_DP_2BIT_BENT1	= 913;

/* 30-36  -----------------------------------------------------------*/	
sT[0].sTI[133].nType = TYP_TMOK;

	sT[0].sMOT[133].nIEC_SP				= 2349;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[133].nIEC_DP				= 309;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[133].nIEC_NM				= 470;		/* Mérések IEC kezdõcíme */

/* 70-20  -----------------------------------------------------------*/	
sT[0].sTI[134].nType = TYP_TMOK;

	sT[0].sMOT[134].nIEC_SP				= 2365;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[134].nIEC_DP				= 310;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[134].nIEC_NM				= 473;		/* Mérések IEC kezdõcíme */

/* 93-22  -----------------------------------------------------------*/	
sT[0].sTI[135].nType = TYP_TMOK;

	sT[0].sMOT[135].nIEC_SP				= 2381;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[135].nIEC_DP				= 311;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[135].nIEC_NM				= 476;		/* Mérések IEC kezdõcíme */

/* 43-41  -----------------------------------------------------------*/	
sT[0].sTI[136].nType = TYP_TMOK;

	sT[0].sMOT[136].nIEC_SP				= 2397;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[136].nIEC_DP				= 312;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[136].nIEC_NM				= 479;		/* Mérések IEC kezdõcíme */

/* 82-07  -----------------------------------------------------------*/	
sT[0].sTI[137].nType = TYP_TMOK;

	sT[0].sMOT[137].nIEC_SP				= 2413;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[137].nIEC_DP				= 313;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[137].nIEC_NM				= 482;		/* Mérések IEC kezdõcíme */

/* 93-21  -----------------------------------------------------------*/	
sT[0].sTI[138].nType = TYP_TMOK;

	sT[0].sMOT[138].nIEC_SP				= 2429;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[138].nIEC_DP				= 314;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[138].nIEC_NM				= 485;		/* Mérések IEC kezdõcíme */

/* 35-03  -----------------------------------------------------------*/	
sT[0].sTI[139].nType = TYP_TMOK;

	sT[0].sMOT[139].nIEC_SP				= 2445;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[139].nIEC_DP				= 315;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[139].nIEC_NM				= 488;		/* Mérések IEC kezdõcíme */

/* 32-70  -----------------------------------------------------------*/	
sT[0].sTI[140].nType = TYP_TMOK;

	sT[0].sMOT[140].nIEC_SP				= 2461;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[140].nIEC_DP				= 316;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[140].nIEC_NM				= 491;		/* Mérések IEC kezdõcíme */

/* 12-12  ------------------------------------------------------*/	
sT[0].sTI[141].nType = TYP_TMOK;

	sT[0].sMOT[141].nIEC_SP				= 2477;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[141].nIEC_DP				= 317;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[141].nIEC_NM				= 494;		/* Mérések IEC kezdõcíme */

/* 82-64  -----------------------------------------------------------*/	
sT[0].sTI[142].nType = TYP_TMOK;

	sT[0].sMOT[142].nIEC_SP				= 2493;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[142].nIEC_DP				= 318;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[142].nIEC_NM				= 497;		/* Mérések IEC kezdõcíme */
	
/* 30-55  -----------------------------------------------------------*/	
sT[0].sTI[143].nType = TYP_TMOK;

	sT[0].sMOT[143].nIEC_SP				= 2509;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[143].nIEC_DP				= 319;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[143].nIEC_NM				= 500;		/* Mérések IEC kezdõcíme */
	
/* 92-56  -----------------------------------------------------------*/	
sT[0].sTI[144].nType = TYP_TMOK;

	sT[0].sMOT[144].nIEC_SP				= 2525;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[144].nIEC_DP				= 320;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[144].nIEC_NM				= 503;		/* Mérések IEC kezdõcíme */
	
/* 85-14  -----------------------------------------------------------*/	
sT[0].sTI[145].nType = TYP_TMOK;

	sT[0].sMOT[145].nIEC_SP				= 2541;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[145].nIEC_DP				= 321;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[145].nIEC_NM				= 506;		/* Mérések IEC kezdõcíme */
	
/* 30-69  -----------------------------------------------------------*/	
sT[0].sTI[146].nType = TYP_TMOK;

	sT[0].sMOT[146].nIEC_SP				= 2557;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[146].nIEC_DP				= 322;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[146].nIEC_NM				= 509;		/* Mérések IEC kezdõcíme */
	
/* 41-91  -----------------------------------------------------------*/	
sT[0].sTI[147].nType = TYP_TMOK;

	sT[0].sMOT[147].nIEC_SP				= 2573;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[147].nIEC_DP				= 323;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[147].nIEC_NM				= 512;		/* Mérések IEC kezdõcíme */
	
/* 85-07  -----------------------------------------------------------*/	
sT[0].sTI[148].nType = TYP_TMOK;

	sT[0].sMOT[148].nIEC_SP				= 2589;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[148].nIEC_DP				= 324;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[148].nIEC_NM				= 515;		/* Mérések IEC kezdõcíme */
	
/* 41-47  -----------------------------------------------------------*/	
sT[0].sTI[149].nType = TYP_TMOK;

	sT[0].sMOT[149].nIEC_SP				= 2605;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[149].nIEC_DP				= 325;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[149].nIEC_NM				= 518;		/* Mérések IEC kezdõcíme */
	
/* 30-89  -----------------------------------------------------------*/	
sT[0].sTI[150].nType = TYP_TMOK;

	sT[0].sMOT[150].nIEC_SP				= 2621;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[150].nIEC_DP				= 326;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[150].nIEC_NM				= 521;		/* Mérések IEC kezdõcíme */
	
/* 92-72  -----------------------------------------------------------*/	
sT[0].sTI[151].nType = TYP_TMOK;

	sT[0].sMOT[151].nIEC_SP				= 2637;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[151].nIEC_DP				= 327;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[151].nIEC_NM				= 524;		/* Mérések IEC kezdõcíme */
	
/* 40-83  -----------------------------------------------------------*/	
sT[0].sTI[152].nType = TYP_TMOK;

	sT[0].sMOT[152].nIEC_SP				= 2653;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[152].nIEC_DP				= 328;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[152].nIEC_NM				= 527;		/* Mérések IEC kezdõcíme */
	
/* 41-37  -----------------------------------------------------------*/	
sT[0].sTI[153].nType = TYP_TMOK;

	sT[0].sMOT[153].nIEC_SP				= 2669;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[153].nIEC_DP				= 329;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[153].nIEC_NM				= 530;		/* Mérések IEC kezdõcíme */
	
/* 34-41  -----------------------------------------------------------*/	
sT[0].sTI[154].nType = TYP_TMOK;

	sT[0].sMOT[154].nIEC_SP				= 2685;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[154].nIEC_DP				= 330;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[154].nIEC_NM				= 533;		/* Mérések IEC kezdõcíme */
	
/* 92-06  -----------------------------------------------------------*/	
sT[0].sTI[155].nType = TYP_TMOK;

	sT[0].sMOT[155].nIEC_SP				= 2701;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[155].nIEC_DP				= 331;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[155].nIEC_NM				= 536;		/* Mérések IEC kezdõcíme */
	
/* 35-23  ----------------------------------------------------------*/	
sT[0].sTI[156].nType = TYP_TMOK;

	sT[0].sMOT[156].nIEC_SP				= 2717;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[156].nIEC_DP				= 332;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[156].nIEC_NM				= 539;		/* Mérések IEC kezdõcíme */
	
/* 30-65  -----------------------------------------------------------*/	
sT[0].sTI[157].nType = TYP_TMOK;

	sT[0].sMOT[157].nIEC_SP				= 2733;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[157].nIEC_DP				= 333;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[157].nIEC_NM				= 542;		/* Mérések IEC kezdõcíme */
	
/* 32-54  -----------------------------------------------------------*/	
sT[0].sTI[158].nType = TYP_TMOK;

	sT[0].sMOT[158].nIEC_SP				= 2749;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[158].nIEC_DP				= 334;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[158].nIEC_NM				= 545;		/* Mérések IEC kezdõcíme */
	
/* 32-53  -----------------------------------------------------------*/	
sT[0].sTI[159].nType = TYP_TMOK;

	sT[0].sMOT[159].nIEC_SP				= 2765;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[159].nIEC_DP				= 335;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[159].nIEC_NM				= 548;		/* Mérések IEC kezdõcíme */
	
/* 85-27  -----------------------------------------------------------*/	
sT[0].sTI[160].nType = TYP_TMOK;

	sT[0].sMOT[160].nIEC_SP				= 2781;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[160].nIEC_DP				= 336;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[160].nIEC_NM				= 551;		/* Mérések IEC kezdõcíme */
	
/* 32-22  -----------------------------------------------------------*/	
sT[0].sTI[161].nType = TYP_TMOK;

	sT[0].sMOT[161].nIEC_SP				= 2797;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[161].nIEC_DP				= 337;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[161].nIEC_NM				= 554;		/* Mérések IEC kezdõcíme */

/* 74-27---------------------------------------------------------*/	
sT[0].sTI[162].nType = TYP_TMOK;

	sT[0].sMOT[162].nIEC_SP				= 2813;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[162].nIEC_DP				= 338;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[162].nIEC_NM				= 557;		/* Mérések IEC kezdõcíme */
	
/* 35-48  -----------------------------------------------------------*/	
sT[0].sTI[163].nType = TYP_TMOK;

	sT[0].sMOT[163].nIEC_SP				= 2829;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[163].nIEC_DP				= 339;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[163].nIEC_NM				= 560;		/* Mérések IEC kezdõcíme */
	
/* 35-49  -----------------------------------------------------------*/	
sT[0].sTI[164].nType = TYP_TMOK;

	sT[0].sMOT[164].nIEC_SP				= 2845;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[164].nIEC_DP				= 340;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[164].nIEC_NM				= 563;		/* Mérések IEC kezdõcíme */
	
/* 37-77  -----------------------------------------------------------*/	
sT[0].sTI[165].nType = TYP_TMOK;

	sT[0].sMOT[165].nIEC_SP				= 2861;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[165].nIEC_DP				= 341;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[165].nIEC_NM				= 566;		/* Mérések IEC kezdõcíme */
	
/* 32-93  -----------------------------------------------------------*/	
sT[0].sTI[166].nType = TYP_TMOK;

	sT[0].sMOT[166].nIEC_SP				= 2877;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[166].nIEC_DP				= 342;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[166].nIEC_NM				= 569;		/* Mérések IEC kezdõcíme */
	
/* 37-28  -----------------------------------------------------------*/	
sT[0].sTI[167].nType = TYP_TMOK;

	sT[0].sMOT[167].nIEC_SP				= 2893;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[167].nIEC_DP				= 343;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[167].nIEC_NM				= 572;		/* Mérések IEC kezdõcíme */
	
/* 81-29  -----------------------------------------------------------*/	
sT[0].sTI[168].nType = TYP_TMOK;

	sT[0].sMOT[168].nIEC_SP				= 2909;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[168].nIEC_DP				= 344;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[168].nIEC_NM				= 575;		/* Mérések IEC kezdõcíme */
	
/* 93-25  -----------------------------------------------------------*/	
sT[0].sTI[169].nType = TYP_TMOK;

	sT[0].sMOT[169].nIEC_SP				= 2925;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[169].nIEC_DP				= 345;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[169].nIEC_NM				= 578;		/* Mérések IEC kezdõcíme */
	
/* 32-26  -----------------------------------------------------------*/	
sT[0].sTI[170].nType = TYP_TMOK;

	sT[0].sMOT[170].nIEC_SP				= 2941;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[170].nIEC_DP				= 346;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[170].nIEC_NM				= 581;		/* Mérések IEC kezdõcíme */
	
/* 45-12  -----------------------------------------------------------*/	
sT[0].sTI[171].nType = TYP_TMOK;

	sT[0].sMOT[171].nIEC_SP				= 2957;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[171].nIEC_DP				= 347;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[171].nIEC_NM				= 584;		/* Mérések IEC kezdõcíme */
	
/* 41-00  -----------------------------------------------------------*/	
sT[0].sTI[172].nType = TYP_TMOK;

	sT[0].sMOT[172].nIEC_SP				= 2973;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[172].nIEC_DP				= 348; 		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[172].nIEC_NM				= 587;		/* Mérések IEC kezdõcíme */
	
/* 32-83  -----------------------------------------------------------*/	
sT[0].sTI[173].nType = TYP_TMOK;

	sT[0].sMOT[173].nIEC_SP				= 2989;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[173].nIEC_DP				= 349;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[173].nIEC_NM				= 590;		/* Mérések IEC kezdõcíme */
	
/* 32-77  -----------------------------------------------------------*/	
sT[0].sTI[174].nType = TYP_TMOK;

	sT[0].sMOT[174].nIEC_SP				= 3005;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[174].nIEC_DP				= 350;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[174].nIEC_NM				= 593;		/* Mérések IEC kezdõcíme */
	
	
/* Zalaegerszeg, Depo -----------------------------------------------------------*/
sT[0].sTI[175].nType = TYP_TAL;

		sT[0].sTAL[175].nIEC_SP       		= 3021;
		sT[0].sTAL[175].nIEC_OsszevontHiba	= 3053;
		sT[0].sTAL[175].nIEC_MT_KommHiba	= 3054;
		sT[0].sTAL[175].nIEC_DP       		= 351;
		sT[0].sTAL[175].nIEC_DP_FSZ1  		= 355;
		sT[0].sTAL[175].nIEC_NM				= 596;
		sT[0].sTAL[175].nNMNum		  		= 11;
		sT[0].sTAL[175].nKommStatusNum		= 2;

	
/* 93-26  -----------------------------------------------------------*/	
sT[0].sTI[176].nType = TYP_TMOK;

	sT[0].sMOT[176].nIEC_SP				= 3058;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[176].nIEC_DP				= 359;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[176].nIEC_NM				= 607;		/* Mérések IEC kezdõcíme */	
	
/* 43-54  -----------------------------------------------------------*/	
sT[0].sTI[177].nType = TYP_TMOK;

	sT[0].sMOT[177].nIEC_SP				= 3074;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[177].nIEC_DP				= 360;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[177].nIEC_NM				= 610;		/* Mérések IEC kezdõcíme */
	
/* 42-00  -----------------------------------------------------------*/	
sT[0].sTI[178].nType = TYP_TMOK;

	sT[0].sMOT[178].nIEC_SP				= 3090;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[178].nIEC_DP				= 361;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[178].nIEC_NM				= 613;		/* Mérések IEC kezdõcíme */

/* Szombathely, LUK  -----------------------------------------------------------*/	
sT[0].sTI[179].nType = TYP_MOT;	
	
	sT[0].sMOT[179].nIEC_SP				= 3106;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[179].nIEC_SP_NUM			= 18;		/* Egybites értékek száma*/
	sT[0].sMOT[179].nIEC_DP				= 362;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[179].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[179].nIEC_NM				= 616;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[179].nNMNum				= 4;		/* Analóg mérések száma*/

/* 40-61  -----------------------------------------------------------*/	
sT[0].sTI[180].nType = TYP_TMOK;

	sT[0].sMOT[180].nIEC_SP				= 3124;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[180].nIEC_DP				= 370;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[180].nIEC_NM				= 620;		/* Mérések IEC kezdõcíme */
	
/* 40-61  -----------------------------------------------------------*/	
sT[0].sTI[181].nType = TYP_TMOK;

	sT[0].sMOT[181].nIEC_SP				= 3140;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[181].nIEC_DP				= 371;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[181].nIEC_NM				= 623;		/* Mérések IEC kezdõcíme */

/* 37-26  -----------------------------------------------------------*/	
sT[0].sTI[182].nType = TYP_TMOK;

	sT[0].sMOT[182].nIEC_SP				= 3156;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[182].nIEC_DP				= 372;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[182].nIEC_NM				= 626;		/* Mérések IEC kezdõcíme */

/* Székesfehérvár, Csala -----------------------------------------------------------*/
sT[0].sTI[183].nType = TYP_TAL;

		sT[0].sTAL[183].nIEC_SP       		= 3172;
		sT[0].sTAL[183].nIEC_OsszevontHiba	= 3204;
		sT[0].sTAL[183].nIEC_MT_KommHiba	= 3205;
		sT[0].sTAL[183].nIEC_DP       		= 373;
		sT[0].sTAL[183].nIEC_DP_FSZ1  		= 377;
		sT[0].sTAL[183].nIEC_NM				= 629;
		sT[0].sTAL[183].nNMNum		  		= 11;
		sT[0].sTAL[183].nKommStatusNum		= 2;

/*  Mór átjátszó -----------------------------------------------------------*/	
sT[0].sTI[184].nType = TYP_MOT;	

	sT[0].sMOT[184].nIEC_SP			= 3209;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[184].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/	
	sT[0].sMOT[184].nIEC_DP_NUM		= 0;
	sT[0].sMOT[184].nNMNum      	= 0;

/* Tatabanya, AVE -----------------------------------------------------------*/
sT[0].sTI[185].nType = TYP_TAL;

		sT[0].sTAL[185].nIEC_SP       		= 3216;
		sT[0].sTAL[185].nIEC_OsszevontHiba	= 3248;
		sT[0].sTAL[185].nIEC_MT_KommHiba	= 3249;
		sT[0].sTAL[185].nIEC_DP       		= 381;
		sT[0].sTAL[185].nIEC_DP_FSZ1  		= 385;
		sT[0].sTAL[185].nIEC_NM				= 640;
		sT[0].sTAL[185].nNMNum		  		= 4;
		sT[0].sTAL[185].nKommStatusNum		= 2;

/* 80-21  -----------------------------------------------------------*/	
sT[0].sTI[186].nType = TYP_TMOK;

	sT[0].sMOT[186].nIEC_SP				= 3253;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[186].nIEC_DP				= 389;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[186].nIEC_NM				= 644;		/* Mérések IEC kezdõcíme */
	
/* Tatabanya, Ovaros  -----------------------------------------------------------*/	
sT[0].sTI[187].nType = TYP_MOT;	
	
	sT[0].sMOT[187].nIEC_SP				= 3269;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[187].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[187].nIEC_DP				= 390;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[187].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[187].nIEC_NM				= 647;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[187].nNMNum				= 4;		/* Analóg mérések száma*/

/* Szombathely, Depónia -----------------------------------------------------------*/
sT[0].sTI[188].nType = TYP_TAL;

		sT[0].sTAL[188].nIEC_SP       		= 3287;
		sT[0].sTAL[188].nIEC_OsszevontHiba	= 3319;
		sT[0].sTAL[188].nIEC_MT_KommHiba	= 3320;
		sT[0].sTAL[188].nIEC_DP       		= 398;
		sT[0].sTAL[188].nIEC_DP_FSZ1  		= 402;
		sT[0].sTAL[188].nIEC_NM				= 651;
		sT[0].sTAL[188].nNMNum		  		= 11;
		sT[0].sTAL[188].nKommStatusNum		= 2;
    sT[0].sTAL[188].nSP_EXTRA_OFFSET		= 3835;
  	sT[0].sTAL[188].nSP_EXTRA_NUM		= 2;

	
/* Székesfehérvár, Attila út  -----------------------------------------------------------*/	
sT[0].sTI[189].nType = TYP_MOT;	
	
	sT[0].sMOT[189].nIEC_SP				= 3324;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[189].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[189].nIEC_DP				= 406;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[189].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[189].nIEC_NM				= 662;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[189].nNMNum				= 4;		/* Analóg mérések száma*/

/* 34-46  -----------------------------------------------------------*/	
sT[0].sTI[190].nType = TYP_TMOK;

	sT[0].sMOT[190].nIEC_SP				= 3342;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[190].nIEC_DP				= 414;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[190].nIEC_NM				= 666;		/* Mérések IEC kezdõcíme */

/* Tatabánya, újváros 1.  -----------------------------------------------------------*/	
sT[0].sTI[191].nType = TYP_MOT;	
	
	sT[0].sMOT[191].nIEC_SP				= 3358;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[191].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[191].nIEC_DP				= 415;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[191].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[191].nIEC_NM				= 669;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[191].nNMNum				= 4;		/* Analóg mérések száma*/

/* Tatabánya, újváros 29/A  -----------------------------------------------------------*/	
sT[0].sTI[192].nType = TYP_MOT;	
	
	sT[0].sMOT[192].nIEC_SP				= 3376;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[192].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[192].nIEC_DP				= 423;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[192].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[192].nIEC_NM				= 673;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[192].nNMNum				= 4;		/* Analóg mérések száma*/

/* Tatabánya, újváros 23.  -----------------------------------------------------------*/	
sT[0].sTI[193].nType = TYP_MOT;	
	
	sT[0].sMOT[193].nIEC_SP				= 3394;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[193].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[193].nIEC_DP				= 431;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[193].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[193].nIEC_NM				= 677;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[193].nNMNum				= 4;		/* Analóg mérések száma*/

/* 86-22  -----------------------------------------------------------*/	
sT[0].sTI[194].nType = TYP_TMOK;

	sT[0].sMOT[194].nIEC_SP				= 3412;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[194].nIEC_DP				= 439;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[194].nIEC_NM				= 681;		/* Mérések IEC kezdõcíme */

/* 86-01  -----------------------------------------------------------*/	
sT[0].sTI[195].nType = TYP_TMOK;

	sT[0].sMOT[195].nIEC_SP				= 3428;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[195].nIEC_DP				= 440;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[195].nIEC_NM				= 684;		/* Mérések IEC kezdõcíme */

/* Székesfehérvár, Móri ltp..  -----------------------------------------------------------*/	
sT[0].sTI[196].nType = TYP_MOT;	
	
	sT[0].sMOT[196].nIEC_SP				= 3444;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[196].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[196].nIEC_DP				= 441;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[196].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[196].nIEC_NM				= 687;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[196].nNMNum				= 4;		/* Analóg mérések száma*/


/* Székesfehérvár, Denso -----------------------------------------------------------*/
sT[0].sTI[197].nType = TYP_TAL;

		sT[0].sTAL[197].nIEC_SP       		= 3462;
		sT[0].sTAL[197].nIEC_OsszevontHiba	= 3494;
		sT[0].sTAL[197].nIEC_MT_KommHiba	= 3495;
		sT[0].sTAL[197].nIEC_DP       		= 465;
		sT[0].sTAL[197].nIEC_DP_FSZ1  		= 469;
		sT[0].sTAL[197].nIEC_NM				= 0;
		sT[0].sTAL[197].nNMNum		  		= 0;
		sT[0].sTAL[197].nKommStatusNum		= 2;
		
		sT[0].sTAL[197].nIEC_DP_12BIT1		= 473;
		sT[0].sTAL[197].nIEC_DP_2BIT_BK1	= 926;

/* 12-25  -----------------------------------------------------------*/	
sT[0].sTI[198].nType = TYP_TMOK;

	sT[0].sMOT[198].nIEC_SP				= 3500;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[198].nIEC_DP				= 474;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[198].nIEC_NM				= 691;		/* Mérések IEC kezdõcíme */

/* 12-57  -----------------------------------------------------------*/	
sT[0].sTI[199].nType = TYP_TMOK;

	sT[0].sMOT[199].nIEC_SP				= 3516;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[199].nIEC_DP				= 475;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[199].nIEC_NM				= 694;		/* Mérések IEC kezdõcíme */


/* 40-60  -----------------------------------------------------------*/	
sT[0].sTI[200].nType = TYP_TMOK;

	sT[0].sMOT[200].nIEC_SP				= 3532;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[200].nIEC_DP				= 476;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[200].nIEC_NM				= 697;		/* Mérések IEC kezdõcíme */

/* 20-60  -----------------------------------------------------------*/	
sT[0].sTI[201].nType = TYP_TMOK;

	sT[0].sMOT[201].nIEC_SP				= 3548;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[201].nIEC_DP				= 477;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[201].nIEC_NM				= 700;		/* Mérések IEC kezdõcíme */

/* 21-34  -----------------------------------------------------------*/	
sT[0].sTI[202].nType = TYP_TMOK;

	sT[0].sMOT[202].nIEC_SP				= 3564;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[202].nIEC_DP				= 478;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[202].nIEC_NM				= 703;		/* Mérések IEC kezdõcíme */

/* 21-38  -----------------------------------------------------------*/	
sT[0].sTI[203].nType = TYP_TMOK;

	sT[0].sMOT[203].nIEC_SP				= 3580;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[203].nIEC_DP				= 479;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[203].nIEC_NM				= 706;		/* Mérések IEC kezdõcíme */

/* 85-01  -----------------------------------------------------------*/	
sT[0].sTI[204].nType = TYP_TMOK;

	sT[0].sMOT[204].nIEC_SP				= 3596;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[204].nIEC_DP				= 480;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[204].nIEC_NM				= 709;		/* Mérések IEC kezdõcíme */

/* 85-23  -----------------------------------------------------------*/	
sT[0].sTI[205].nType = TYP_TMOK;

	sT[0].sMOT[205].nIEC_SP				= 3612;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[205].nIEC_DP				= 481;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[205].nIEC_NM				= 712;		/* Mérések IEC kezdõcíme */

/* 85-00  -----------------------------------------------------------*/	
sT[0].sTI[206].nType = TYP_TMOK;

	sT[0].sMOT[206].nIEC_SP				= 3628;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[206].nIEC_DP				= 482;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[206].nIEC_NM				= 754;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[206].nNMNum      		= 4;

/* 85-83  -----------------------------------------------------------*/	
sT[0].sTI[207].nType = TYP_TMOK;

	sT[0].sMOT[207].nIEC_SP				= 3644;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[207].nIEC_DP				= 483;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[207].nIEC_NM				= 718;		/* Mérések IEC kezdõcíme */

/* 21-57  -----------------------------------------------------------*/	
sT[0].sTI[208].nType = TYP_TMOK;

	sT[0].sMOT[208].nIEC_SP				= 3660;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[208].nIEC_DP				= 484;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[208].nIEC_NM				= 721;		/* Mérések IEC kezdõcíme */

/* 21-58  -----------------------------------------------------------*/	
sT[0].sTI[209].nType = TYP_TMOK;

	sT[0].sMOT[209].nIEC_SP				= 3676;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[209].nIEC_DP				= 485;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[209].nIEC_NM				= 724;		/* Mérések IEC kezdõcíme */

/* 86-57  -----------------------------------------------------------*/	
sT[0].sTI[210].nType = TYP_TMOK;

	sT[0].sMOT[210].nIEC_SP				= 3692;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[210].nIEC_DP				= 486;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[210].nIEC_NM				= 727;		/* Mérések IEC kezdõcíme */

/* 86-38  -----------------------------------------------------------*/	
sT[0].sTI[211].nType = TYP_TMOK;

	sT[0].sMOT[211].nIEC_SP				= 3708;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[211].nIEC_DP				= 487;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[211].nIEC_NM				= 730;		/* Mérések IEC kezdõcíme */

/* 80-96  -----------------------------------------------------------*/	
sT[0].sTI[212].nType = TYP_TMOK;

	sT[0].sMOT[212].nIEC_SP				= 3724;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[212].nIEC_DP				= 488;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[212].nIEC_NM				= 733;		/* Mérések IEC kezdõcíme */

/* 80-97  -----------------------------------------------------------*/	
sT[0].sTI[213].nType = TYP_TMOK;

	sT[0].sMOT[213].nIEC_SP				= 3740;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[213].nIEC_DP				= 489;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[213].nIEC_NM				= 736;		/* Mérések IEC kezdõcíme */


/* Celldömölk DAC -----------------------------------------------------*/
sT[0].sTI[214].nType = TYP_MOT;

	sT[0].sMOT[214].nIEC_SP			= 3756;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[214].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[214].nIEC_DP_NUM		= 0;
	sT[0].sMOT[214].nNMNum      	= 0;

/* Szombathely szõlõs DAC -----------------------------------------------------*/
sT[0].sTI[215].nType = TYP_MOT;

	sT[0].sMOT[215].nIEC_SP			= 3763;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[215].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[215].nIEC_DP_NUM		= 0;
	sT[0].sMOT[215].nNMNum      	= 0;

/* Tatabánya Galla DAC -----------------------------------------------------*/
sT[0].sTI[216].nType = TYP_MOT;

	sT[0].sMOT[216].nIEC_SP			= 3770;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[216].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[216].nIEC_DP_NUM		= 0;
	sT[0].sMOT[216].nNMNum      	= 0;

/* Zalaegerszeg városi DAC -----------------------------------------------------*/
sT[0].sTI[217].nType = TYP_MOT;

	sT[0].sMOT[217].nIEC_SP			= 3777;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[217].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[217].nIEC_DP_NUM		= 0;
	sT[0].sMOT[217].nNMNum      	= 0;

/* KÖFÉM DAC -----------------------------------------------------*/
sT[0].sTI[218].nType = TYP_MOT;

	sT[0].sMOT[218].nIEC_SP			= 3784;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[218].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[218].nIEC_DP_NUM		= 0;
	sT[0].sMOT[218].nNMNum      	= 0;

/* Lenti DAC -----------------------------------------------------*/
sT[0].sTI[219].nType = TYP_MOT;

	sT[0].sMOT[219].nIEC_SP			= 3791;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[219].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[219].nIEC_DP_NUM		= 0;
	sT[0].sMOT[219].nNMNum      	= 0;

/* Szentgotthárd, vízierõmû -----------------------------------------------------------*/
sT[0].sTI[220].nType = TYP_TAL;

		sT[0].sTAL[220].nIEC_SP       		= 3798;
		sT[0].sTAL[220].nIEC_OsszevontHiba	= 3830;
		sT[0].sTAL[220].nIEC_MT_KommHiba	= 3831;
		sT[0].sTAL[220].nIEC_DP       		= 490;
		sT[0].sTAL[220].nIEC_DP_FSZ1  		= 494;
		sT[0].sTAL[220].nIEC_NM				= 739;
		sT[0].sTAL[220].nNMNum		  		= 11;
		sT[0].sTAL[220].nKommStatusNum		= 2;
		


/* Front end A -----------------------------------------------------------*/
sT[0].sTI[221].nType = TYP_FRONTEND;

/* Front end C -----------------------------------------------------------*/
sT[0].sTI[222].nType = TYP_FRONTEND;

/* Front end G -----------------------------------------------------------*/
sT[0].sTI[223].nType = TYP_FRONTEND;

/* Redundancia A -----------------------------------------------------------*/
sT[0].sTI[224].nType = TYP_FRONTEND;

} /* end fnSetDataPar()*/

