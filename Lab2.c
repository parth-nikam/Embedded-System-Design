//Parth NIkam E&TC B3 20070123120
#include<lpc21xx.h>
void Delay();
int main(){

	PINSEL0 = 0x00000000;
	IODIR0 = 0x000000FF;
while(1){
	IOSET0 = 0x00000001;
		Delay();
		
		for(int a=0; a<7;a++){
		IOSET0 = IOSET0<<1;
			Delay();
		}

	IOCLR0 = 0x0000000FF;	
	
		Delay();
	}
	
}

void Delay()
{
	unsigned long Timing, Loop;
	for(Loop = 0; Loop< 900000; Loop++){
	}
		
}
