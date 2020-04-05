/*Includes*/
#include "STD_TYPES_H.h"
#include "DIO_interface.h"
#include "rte2Ecus.h"
#include "rte2Ecus_config.h"

/*RTE enumuration*/
#define OUTPUT	1
#define INPUT	0

/*RTE Variables*/

static u8 Rte_RightDoor = DOOR_OPEN;
static u8 Rte_LeftDoor = DOOR_OPEN;
static u8 Rte_DoorsStatus = DOOR_OPEN;
static u8 Rte_LampStatus = LIGHT_ON;

E_status Rte_RightDoorInit(void)
{
	SetPinDir (RIGHTDOOR_PORT, RIGHTDOOR_PIN, INPUT);
	return E_OK;
}


E_status Rte_LeftDoorInit(void)
{
	SetPinDir (LEFTDOOR_PORT, LEFTDOOR_PIN, INPUT);
	return E_OK;

}


E_status Rte_LampInit(void)
{
	SetPinDir (LAMP_PORT, LAMP_PIN, OUTPUT);
	return E_OK;

}


E_status Rte_write_RightDoorStatus(u8 Data)
{
	Rte_RightDoor = Data;
	return E_OK;
}



E_status Rte_write_LeftDoorStatus(u8 Data)
{
	Rte_LeftDoor = Data;
	return E_OK;
}

E_status Rte_Read_RightDoorStatus(u8 *Data)
{
	*Data = Rte_RightDoor;
	return E_OK;
}

E_status Rte_Read_LeftDoorStatus(u8 *Data)
{
	*Data = Rte_LeftDoor;
	return E_OK;
}

E_status Rte_write_DoorsStatus(u8 Data)
{
	Rte_DoorsStatus = Data;
	return E_OK;
}

E_status Rte_Read_DoorsStatus(u8 *Data)
{
	*Data = Rte_DoorsStatus;
	return E_OK;
}

E_status Rte_Write_LampStatus(u8 Data)
{
	Rte_LampStatus = Data;
	return E_OK;
}

E_status Rte_Read_LampStatus(u8 *Data)
{
	*Data = Rte_LampStatus;
	return E_OK;
}



/*client-Server RTE Ports*/

E_status Rte_Call_RightDoorGetStatus(u8* val)

{
	*val= GetPinValue (RIGHTDOOR_PORT, RIGHTDOOR_PIN);
	 return E_OK;
}

E_status Rte_Call_LeftDoorGetStatus(u8* val)
{
		*val= GetPinValue (LEFTDOOR_PORT, LEFTDOOR_PIN);
		 return E_OK;
}


E_status Rte_Call_LampON()
{
	  SetPinValue (LAMP_PORT, LAMP_PIN, LIGHT_ON);
	  return E_OK;
}

E_status Rte_Call_LampOFF()
{
	  SetPinValue (LAMP_PORT, LAMP_PIN, LIGHT_ON);
	  return E_OK;
}
