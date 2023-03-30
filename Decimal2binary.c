#include<stdio.h>

void Decimal2binary(long number)
{
	/*to know msb position of number*/
	long num=number/2;
	int msb=0;
	while(num!=0)
	{
		num = num/2;
		msb++;
	}
	/*printing each bit*/
	while(msb>=0)
	{
		int bit=(number>>msb)&1;
		printf("%d",bit);
		msb--;
	}
}
int main()
{
	long number;
	printf("enter the number to convert it to binary:");
	scanf("%ld",&number);
	Decimal2binary(number);
	return 0;
}