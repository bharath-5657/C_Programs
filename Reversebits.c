#include<stdio.h>
#define bits (sizeof(unsigned long long)*8)-1

unsigned long long bitreverse(unsigned long long A)
{
	int i=0;//LSB bit
	int j=0;//MSB bit
	/*logic to take MSB position*/
	unsigned long long n=A/2;
	while(n!=0){
		n=n/2;
		j++;
	}
	while(i<j)
	{
		if(((A>>i)&1)!=((A>>j)&1))
		{
			long long bit = (1L<<i)|(1L<<j);
		    A ^= bit;
		}
		i++;
		j--;
	}
	return A;

}
int main()
{
	unsigned long long number;
	printf("enter the number:");
	scanf("%lld",&number);
	number = bitreverse(number);
	printf("Reversed number is %lld",number);

	return 0;

}