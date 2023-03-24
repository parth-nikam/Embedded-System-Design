//Parth Nikam | 20070123120 | E&TC - B3
#include<lpc21xx.h>
int main()
{
PINSEL0=0x00000005;
U0LCR=0x8F;
U0DLL=0xc3;
U0DLM=0x00;
U0LCR=0x0F;

//while(1)
//{
while(!(U0LSR & 0x20));
{
U0THR='s';
}
}
//}