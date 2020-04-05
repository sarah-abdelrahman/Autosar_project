/*Lighting SWC.c*/
#include "STD_TYPES_H.h"
#include "rte2Ecus.h"
#include "DIO_interface.h"


E_status Lighting_Init(void)
{
	if( Rte_LampInit() && Rte_Call_LampOFF())
	{
		return E_OK;
	}
	else
	{
		return E_NOK;
	}
}

E_status Lighting_Control(void)
{
	
	E_status local_error;
	u8 *Data;
	local_error |= Rte_Read_LampStatus(Data);
	if(Data == LIGHT_ON )
	{
		local_error |= Rte_Call_LampON();
	}
	else {
		local_error |= Rte_Call_LampOFF();

	}
	return local_error;
}
