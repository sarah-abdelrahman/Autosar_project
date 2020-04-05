#include "STD_TYPES_H.h"
#include "LeftDoorApp.h"
#include "RightDoorApp.h"
#include "Lighting.h"
#include "Dimmer.h"
#include <avr/delay.h>
void main(void) {
E_status local_error;

local_error |=Lighting_Init();
local_error |=LeftDoor_Init();
local_error |=RightDoor_Init();
	while(1)
	{
        RightDoor_GetStatus();
        LeftDoor_GetStatus();
		Dimmer_update();
		Lighting_Control();
		_delay_ms(5);
	}
}
