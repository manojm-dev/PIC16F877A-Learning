#include<pic.h>
void delay();
unsigned char arr[6]={0X81,0X42,0X24,0X18,0X24,0X42};
unsigned char count=0;
int main()
{
 TRISB=0X00;
 ANSEL=ANSELH=0X00;
 	while(1)
	{
     delay();
	 PORTB=arr[count];
     count++;
	 		if(count==6)
	 		count=0;
 	} 	
}
void delay()
{
unsigned int i;
for(i=0;i<=500000;i++);
}