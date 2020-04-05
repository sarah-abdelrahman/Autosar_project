#include "STD_TYPES_H.h"
#include "RightDoorApp.h"
#include "rte2Ecus.h"

E_status RightDoor_Init(void)
{

    return Rte_RightDoorInit();
}

E_status RightDoor_GetStatus(void)
{
	E_status local_error;
	u8 RightDoor_Status;
	local_error |=Rte_Call_RightDoorGetStatus(&RightDoor_Status);

	local_error |=Rte_write_RightDoorStatus(RightDoor_Status);
    return local_error ;
}
