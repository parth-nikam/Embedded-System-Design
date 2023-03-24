#include<lpc21xx.h>
void Delay();
int main(){
	PINSEL0 = 0x00000000;
	IODIR0 = 0x000001F0;

while(1){
	IOSET0 = 0x000001F0;
		Delay();
	IOCLR0 = 0x000001F0;	
		Delay();
	}
}
void Delay()
{
	unsigned long Timing, Loop;
	for(Loop = 0; Loop< 100000; Loop++)	{
	}
		
}