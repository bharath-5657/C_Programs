#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;

long Binary2decimal(string bits)
{
	long number=0;
	long n=1;
	for(int i=bits.length()-1;i>=0;i--)
	{
			if(bits[i] == '1' | bits[i] == '0')
			{
				if(bits[i]=='1')
				{
					number=number+n;
				}
			    n=n*2;
			}
			else{
				printf("enter proper binary number(1/0)");
				exit(0);
			}
			
	}
	return number;
}
int main()
{
	string bits;
	printf("enter the binary number to convert into Decimal:");
	cin>>bits;
	long number = Binary2decimal(bits);
	printf("Decimal number=%ld\n",number);
	return 0;
}