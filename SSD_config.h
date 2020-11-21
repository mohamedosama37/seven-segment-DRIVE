/***************************************************************************************************************************************************/
/*AUTHOR   : MOHAMED OSAMA                                                                                                                        */
/*DATE     : 13 FEB 2019                                                                                                                          */
/*VERSION  : V01                                                                                                                                */
/***********************************************************************************************************************************************/
/* DESCRIPTION                                                                                                                                */
/*------------                                                                                                                               */
/* this file defines the APIs corresponding to SSD                                                                                         */
/*******************************************************************************************************************************************/


/*comment :Header file guard                                                                                                                          */
#ifndef SSD_config_h
#define SSDD_config_h



#define  SSD_u8_MAX_SSD_NB                 1

#define  SSD_u8_SSD_0                      0

#define  u8_MAX_NB                         10

#define  u8_MAX_CHAR                       4


u8 SSD_u8SSD_Types [SSD_u8_MAX_SSD_NB  ]      =  { u8_COMMON_CATHODE };

u8 SSD_u8SSD_Port  [SSD_u8_MAX_SSD_NB  ]       =  { DIO_u8_PORT3       };

u8 SSD_u8SSD_Enable_Pin [SSD_u8_MAX_SSD_NB  ] =  { DIO_u8_PIN_23  };

#endif
