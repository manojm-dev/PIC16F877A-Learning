#include<pic.h>
void main()
{TRISB=0X00;
 ANSEL=ANSELH=0X00;
 	while(1)
	{PORTB=0X0F;
 	 delay();
	 PORTB=0XF0;
	 delay();
	}
}
delay()
{
unsigned int i;
for(i=0;i<=50000;i++);
}