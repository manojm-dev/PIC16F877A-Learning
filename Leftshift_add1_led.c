#include<pic.h>
void main()
{TRISB=0X00;
 ANSEL=ANSELH=0X00;
 PORTB=0X01;
 	while(1)
	{delay();
	 PORTB=PORTB<<1;
	 PORTB=PORTB+1;
	 delay();
	 if(PORTB==0XFF)
	 PORTB=0X01;
	}
}
delay()
{
unsigned int i;
for(i=0;i<=3000;i++);
}