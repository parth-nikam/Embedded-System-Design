//Parth Nikam | 20070123120 | E&TC - B3
#include<lpc21xx.h>
char read(void);
void tx(char);
int main(){
	PINSEL0=0x00000005;
	U0LCR=0x8F;
	U0DLL=0xc3;
	U0DLM=0x00;
	U0LCR=0x0F;

	while(1){
		char b;
		b=read();
		if((b>=0x41 && b<=0x5A) | (b>=0x61 && b<=0x7A) | (b>=0 && b<=9) ){
			tx(b);
		}
	}
}

char read(void){
	char a;
	while (!(U0LSR & 0x01));
		a= U0RBR;
	return (a);
}
void tx(char a){
	while (!(U0LSR & 0x20));
		U0THR = a;
}