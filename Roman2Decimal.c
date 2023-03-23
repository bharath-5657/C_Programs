#include<stdio.h>
#include <stdbool.h>
int value(char val)
{
	int value=0;
	switch(val)
	{
	case 'I':value = 1;break;
	case 'V':value = 5;break;
	case 'X':value = 10;break;
	case 'L':value = 50;break;
	case 'C':value = 100;break;
	case 'D':value = 500;break;
	case 'M':value = 1000;break;
	default:0;break;
	}
	return value;
}
int main()
{
	char roman[10];
	bool y=true;
	int val1,val2;
	do{
	int number=0;
	printf("Enter Roman number(valid: I/V/X/L/C/D/M):");
	scanf("%s",roman);
	for(int i=0;i<strlen(roman);i++)
	{
		if(roman[i]!=NULL)
		{
			val1=value(roman[i]);
			val2=value(roman[i+1]);
			if((value(roman[0])==1)&&(value(roman[1])>=50)){
			    printf("Enter valid Roman number");
			    break;
			}
			if((value(roman[0])==5)&&(value(roman[1])>=10)){
			    printf("Enter valid Roman number");
			    break;
			}
			if((value(roman[0])==10)&&(value(roman[1])>=100)){
			    printf("Enter valid Roman number");
			    break;
			}
			if((value(roman[0])==50)&&(value(roman[1])>=100)){
			    printf("Enter valid Roman number");
			    break;
			}
			if((value(roman[0])==500)&&(value(roman[1])>=1000)){
			    printf("Enter valid Roman number");
			    break;
			}
			if(val1<value(roman[i+2])){
			    printf("Enter valid Roman number");
			    break;
			}
			
			if(val1>=val2)
			{
				number =number+val1;
			}
			else
			{
				number =number+(val2-val1);
				i++;
			}
		}
		
	}
	printf("\nDecimal value=%d\n",number);
	char opt;
	printf("\nContinue(y/n):");
	scanf("%s",&opt);
	if(opt=='y'||opt=='Y')
	{
	    y=true;
	}
	else y=false;
	}while(y);
	
}