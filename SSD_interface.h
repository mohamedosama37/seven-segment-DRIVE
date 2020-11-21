/***************************************************************************************************************************************************/
/*AUTHOR   : MOHAMED OSAMA                                                                                                                        */
/*DATE     : 13 FEB 2019                                                                                                                         */
/*VERSION  : V01                                                                                                                                */
/***********************************************************************************************************************************************/
/* DESCRIPTION                                                                                                                                */
/*------------                                                                                                                               */
/* this file defines the APIs corresponding to SSD                                                                                          */
/*******************************************************************************************************************************************/

#ifndef  SSD_interface_h
#define  SSD_interface_h


#define  u8_COMMON_ANODE                  1
#define  u8_COMMON_CATHODE                0





u8 SSD_u8DisplayOn(u8 Copy_u8SSD_ID);
u8 SSD_u8DisplayOff(u8 Copy_u8SSD_ID);
u8 SSD_u8WriteNumber(u8 Copy_u8SSD_ID,u8 Copy_u8NB);
u8 SSD_u8WriteChar(u8 Copy_u8SSD_ID,u8 Copy_u8Char);


#endif