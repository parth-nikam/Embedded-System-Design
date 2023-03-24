

#include<lpc21xx.h>
int main()
{

	unsigned int value;
	PINSEL1=0x04000000;
	ADCR=0x00210404;

	
	while((ADDR & 0x80000000) !=0x80000000){
		value=ADDR & 0X0000FFC0;
	    value=value>>6;
	
	}

}