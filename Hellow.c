//Parth Nikam | 20070123120 | E&TC - B3

#include<lpc21xx.h>
void uart_data(unsigned char d)
{
U0THR = d;
while((U0LSR & 0x20) != 0x20);
}

void uart_string(unsigned char *data)
{
while(*data != '\0')
{
uart_data(*data);
 data++;
}
}

int main()
{
PINSEL0=0x00000005;
U0LCR=0x8F;
U0DLL=0xc3;
U0DLM=0x00;
U0LCR=0x0F;
//while(1)
//{
  uart_data('1');
uart_data('\n');
uart_string("Hello World");
uart_data('\n');
//}
} 