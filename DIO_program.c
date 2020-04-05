#include "BIT_MATH.h"
#include "STD_TYPES_H.h"
#include "DIO_interface.h"
#include "DIO_register.h"
#include "DIO_private.h"
#include "DIO_config.h"

void SetPortValue (u8 port, u8 Val)
{
	switch (port)
	{
		case 'A':
		PORTA=Val;
		break;
		case 'B':
		PORTB=Val;
		break;
		case 'C':
		PORTC=Val;
		break;
		case 'D':
		PORTD=Val;
		break;
	}

}
/*void SetPortDir (u8 port, u8 Dir)
{
	switch (port)
	{
		case 'A':
		if (Dir ==0)
		{
			DDRA&=0;
		}
		else
		{
			DDRA|=255;
		}
		break;
		case 'B':
		if (Dir ==0)
		{
			DDRB&=0;
		}
		else
		{
			DDRB|=255;
		}
		break;
		case 'C':
		if (Dir ==0)
		{
			DDRC&=0;

		}
		else
		{
			DDRC|=255;
		}
		break;
		case 'D':
		if (Dir ==0)
		{
			DDRD&=0;

		}
		else
		{
			DDRD|=255;

		}
		break;
	}

}*/
void SetPinDir (u8 port, u8 pin, u8 Dir)
{
	switch (port)
	{
		case 'A':
		if (Dir ==0)
		{
			CLR_BIT(DDRA,pin);
		}
		else
		{			
			SET_BIT(DDRA,pin);
		}
		break;
		case 'B':
		if (Dir ==0)
		{
			CLR_BIT(DDRB,pin);
		}
		else
		{
			SET_BIT(DDRB,pin);
		}
		break;
		case 'C':
		if (Dir ==0)
		{
			CLR_BIT(DDRC,pin);
		}
		else
		{
			SET_BIT(DDRC,pin);
		}
		break;
		case 'D':
		if (Dir ==0)
		{
			CLR_BIT(DDRD,pin);
		}
		else
		{
			SET_BIT(DDRD,pin);
		}
		break;
	}

}

void SetPinValue (u8 port, u8 pin, u8 Val)
{
	switch (port)
	{
		case 'A':
		if (Val ==0)
		{
			CLR_BIT(PORTA,pin);
		}
		else
		{
			SET_BIT(PORTA,pin);
		}
		break;
		case 'B':
		if (Val ==0)
		{
			CLR_BIT(PORTB,pin);
		}
		else
		{
			SET_BIT(PORTB,pin);
		}
		break;
		case 'C':
		if (Val ==0)
		{
			CLR_BIT(PORTC,pin);
		}
		else
		{
			SET_BIT(PORTC,pin);
		}
		break;
		case 'D':
		if (Val ==0)
		{
			CLR_BIT(PORTD,pin);
		}
		else
		{
			SET_BIT(PORTD,pin);
		}
		break;
	}
}



u8 GetPinValue (u8 port, u8 pin)
{
  switch (port)
  {
    case 'A':
      return GET_BIT(PINA,pin);
    case 'B':
      return GET_BIT(PINB,pin);
    case 'C':
      return GET_BIT(PINC,pin);
    case 'D':
      return GET_BIT(PIND,pin);
  }
  return -1;
}
