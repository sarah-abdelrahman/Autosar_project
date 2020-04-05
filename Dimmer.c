/*
 * Dimmer.c
 *
 *  Created on: Apr 5, 2020
 *      Author: LENOVO.SXM1
 */

#include "STD_TYPES_H.h"
#include "rte2Ecus.h"
#include "DIO_interface.h"


E_status Dimmer_update(void)
{

	E_status local_error;
	u8 *LeftDoor_status;
	u8 *RightDoor_status;

	local_error |= Rte_Read_RightDoorStatus(RightDoor_status);
	local_error |=  Rte_Read_LeftDoorStatus(LeftDoor_status);

	if((*RightDoor_status && *LeftDoor_status)== DOOR_CLOSED )
	{
		local_error |= Rte_Write_LampStatus(LIGHT_ON);
	}
	else {
		local_error |= Rte_Write_LampStatus(LIGHT_OFF);

	}
	return local_error;
}

