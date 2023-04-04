#include<stdio.h>

void bubblesort(int *array, int length)
{
	for(int i=0;i<length-1;i++)
	{
		for(int j=i+1;j<length;j++)
		{
			if(array[i]>array[j]){
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("Sorted array: ");
	for(int i=0;i<length;i++)
		printf("%d,",array[i]);
}
int main()
{
	int length;
	printf("Enter length of array: ");
	scanf("%d",&length);
	int array[length];
	printf("Enter array elements: ");
	for(int i=0;i<length;i++)
	{
		scanf("%d",&array[i]);
	}
	bubblesort(array,length);
}