/***************************************************************************************************************************************************/
/*AUTHOR   : MOHAMED OSAMA                                                                                                                          */
/*DATE     : 13 FEB 2019                                                                                                                            */
/*VERSION  : V01                                                                                                                                    */
/***************************************************************************************************************************************************/
/* DESCRIPTION                                                                                                                                      */
/*------------                                                                                                                                      */
/* this filedefines the implementation of both private and public functions                                                                         */
/***************************************************************************************************************************************************/

#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "SSD_interface.h"
#include "SSD_config.h"
#include "SSD_private.h"
#define FIRST  0
#define SECOND 1
#define THIRD  2
#define  FOURTH 3
u8 SSD_u8DisplayOn(u8 Copy_u8SSD_ID)
{
	
	u8 Local_u8ErrorState =0;
	if ( Copy_u8SSD_ID >= SSD_u8_MAX_SSD_NB  )
	{
		Local_u8ErrorState =1;
	}else
	{
		Local_u8ErrorState =0;
		
	}	
	
	if (SSD_u8SSD_Types [Copy_u8SSD_ID  ] == u8_COMMON_CATHODE )
	{
	
	DIO_u8SetPinValue (SSD_u8SSD_Enable_Pin [Copy_u8SSD_ID ] , INPUT_LOW );
	}else
	{
     
	DIO_u8SetPinValue (SSD_u8SSD_Enable_Pin [Copy_u8SSD_ID ] , INPUT_HIGH );

	}
	
	
	return Local_u8ErrorState;
	
}	



u8 SSD_u8DisplayOff(u8 Copy_u8SSD_ID)
{
	
	u8 Local_u8ErrorState =0;
	if ( Copy_u8SSD_ID >= SSD_u8_MAX_SSD_NB  )
	{
		Local_u8ErrorState =1;
	}else
	{
		Local_u8ErrorState =0;
		
	}	
	
	if (SSD_u8SSD_Types [Copy_u8SSD_ID ] == u8_COMMON_CATHODE )
	{
	
	DIO_u8SetPinValue (SSD_u8SSD_Enable_Pin [Copy_u8SSD_ID ] , INPUT_HIGH );
	}else
	{
     
	DIO_u8SetPinValue (SSD_u8SSD_Enable_Pin [Copy_u8SSD_ID ] , INPUT_LOW );

	}
	
	
	return Local_u8ErrorState;
	
}	


u8 SSD_u8WriteNumber(u8 Copy_u8SSD_ID, u8 Copy_u8NB)
{
	
	u8 Local_u8ErrorState =0;
	
	if ( Copy_u8SSD_ID >= SSD_u8_MAX_SSD_NB  )
	{
		Local_u8ErrorState =1;
	}else if (   Copy_u8NB >=  u8_MAX_NB )
	{
		Local_u8ErrorState =1;
		
	}else
    {
          Local_u8ErrorState =0;

    }
	
	
	if (SSD_u8SSD_Types [Copy_u8SSD_ID ] == u8_COMMON_CATHODE )
	{
	
		DIO_u8SetPortValue (SSD_u8SSD_Port  [ Copy_u8SSD_ID] , SSD_u8SSD_Cathode_Pattern [Copy_u8NB  ]);
	 
	}else
	{
     
		DIO_u8SetPortValue (SSD_u8SSD_Port  [ Copy_u8SSD_ID] , SSD_u8SSD_Anode_Pattern [Copy_u8NB  ]);

	}
	
	return  Local_u8ErrorState ;
	
	
	
}	


u8 SSD_u8WriteChar(u8 Copy_u8SSD_ID,u8 Copy_u8Char)
{
	
	u8 Local_u8ErrorState =0;
	
	if ( Copy_u8SSD_ID >= SSD_u8_MAX_SSD_NB  )
	{
		Local_u8ErrorState =1;
	}else
	{
		Local_u8ErrorState =0;
		
	}
	
	
	if (SSD_u8SSD_Types [Copy_u8SSD_ID ] == u8_COMMON_CATHODE )
	{
	    switch ( Copy_u8Char)
		{
			case 'a' :
			DIO_u8SetPortValue (SSD_u8SSD_Port  [ Copy_u8SSD_ID] , SSD_u8SSD_Cathode_Char_Pattern [ FIRST]);
			break;
			case 'b' :
			DIO_u8SetPortValue (SSD_u8SSD_Port  [ Copy_u8SSD_ID] , SSD_u8SSD_Cathode_Char_Pattern [ SECOND]);
			break;
			case 'c' :
			DIO_u8SetPortValue (SSD_u8SSD_Port  [ Copy_u8SSD_ID] , SSD_u8SSD_Cathode_Char_Pattern [ THIRD]);
			break;
			case 'd' :
			DIO_u8SetPortValue (SSD_u8SSD_Port  [ Copy_u8SSD_ID] , SSD_u8SSD_Cathode_Char_Pattern [ FOURTH]);
			break;
		}	
			
				

		
	
	 
	}else
	{
     
		switch ( Copy_u8Char)
		{
			case 'a' :
			DIO_u8SetPortValue (SSD_u8SSD_Port  [ Copy_u8SSD_ID] , SSD_u8SSD_Anode_Char_Pattern [ FIRST]);
			break;
			case 'b' :
			DIO_u8SetPortValue (SSD_u8SSD_Port  [ Copy_u8SSD_ID] , SSD_u8SSD_Anode_Char_Pattern [ SECOND]);
			break;
			case 'c' :
			DIO_u8SetPortValue (SSD_u8SSD_Port  [ Copy_u8SSD_ID] , SSD_u8SSD_Anode_Char_Pattern [ THIRD]);
			break;
			case 'd' :
			DIO_u8SetPortValue (SSD_u8SSD_Port  [ Copy_u8SSD_ID] , SSD_u8SSD_Anode_Char_Pattern [ FOURTH]);
			break;
		}	

	}
	
	return  Local_u8ErrorState ;
	
	
	
	
}	