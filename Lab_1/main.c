/*
 * Project_1.c
 *
 * Created: 7/4/2024 3:32:14 PM
 * Author : Manal Nabil
 */ 

//#include <avr/io.h>
#define F_CPU  8000000UL
#include <util/delay.h>
#include "MemMap.h"
#include "Utils.h"
static char flag=0;
int main(void)
{
	ClearBit(DDRC,0);
	DDRA=0b11111111;
	SetBit(PORTC,0);
    while (1) 
    {
		if (ReadBit(PINC,0)==0)
		{	
			if (flag<9)
		{
			switch(flag)
			{
				case 0:SetBit(PORTA,0);break;
				case 1:SetBit(PORTA,1);ClearBit(PORTA,0);break;
				case 2:SetBit(PORTA,2);ClearBit(PORTA,1);break;
				case 3:SetBit(PORTA,3);ClearBit(PORTA,2);break;
				case 4:SetBit(PORTA,4);ClearBit(PORTA,3);break;
				case 5:SetBit(PORTA,5);ClearBit(PORTA,4);break;
				case 6:SetBit(PORTA,6);ClearBit(PORTA,5);break;
				case 7:SetBit(PORTA,7);ClearBit(PORTA,6);break;
				case 8:ClearBit(PORTA,7);
			}
			_delay_ms(500);
			flag++;
		}
		else if(flag>8)
		{
			flag=0;
		}
			
		}

		}

}
