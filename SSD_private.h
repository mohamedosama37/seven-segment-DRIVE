/*******************************************************************************************************************************/
/*AUTHOR   : MOHAMED OSAMA                                                                                                    */
/*DATE     : 13 FEB 2019                                                                                                       */
/*VERSION  : V01                                                                                                              */
/******************************************************************************************************************************/
/* DESCRIPTION                                                                                                                */
/*------------                                                                                                                */


/*********************************************************************************************************************************/

#ifndef SSD_private_h
#define SSD_private_h


     u8 SSD_u8SSD_Cathode_Pattern [u8_MAX_NB  ] = {0b00111111,  0b00000110, 0b01011011 ,0b01001111, 0b01100110 ,0b01101101 , 0b01111101 ,0b00000111 ,0b01111111 , 0b01101111};
     u8 SSD_u8SSD_Anode_Pattern [u8_MAX_NB  ]   = {0b11000000,  0b11111001, 0b10100100, 0b10110000, 0b10011001 ,0b10010010 , 0b10000010 ,0b11111000 ,0b10000000 , 0b10010000};
	 u8 SSD_u8SSD_Cathode_Char_Pattern [ u8_MAX_CHAR] ={ 0b00000001 , 0b00000010,0b00000100,0b00001000};
	 u8 SSD_u8SSD_Anode_Char_Pattern [ u8_MAX_CHAR]   ={ 0b11111110 ,0b11111101,0b11111011,0b00010000};
	 
	 


#endif