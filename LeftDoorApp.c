#include "STD_TYPES_H.h"
#include "LeftDoorApp.h"
#include "rte2Ecus.h"

E_status LeftDoor_Init(void)
{

    return Rte_LeftDoorInit();
}

E_status LeftDoor_GetStatus(void)
{
	E_status local_error;
	u8 LeftDoor_Status;
	local_error |=Rte_Call_LeftDoorGetStatus(&LeftDoor_Status);

	local_error |=Rte_write_LeftDoorStatus(LeftDoor_Status);
    return local_error ;
}
