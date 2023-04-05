#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a_row,a_col,b_row,b_col;
	printf("enter matrix-1 order (rowsXcolumns):\n");
	scanf("%d",&a_row);
	scanf("%d",&a_col);
	printf("enter matrix-2 order (rowsXcolumns):\n");
	scanf("%d",&b_row);
	scanf("%d",&b_col);

	if(a_col!=b_row)
	{
		printf("Matrix Multiplication not possible column of matrix-1 should be equal to row of matrix-2");
		exit(0);
	}

	int a[a_row][a_col];
	int b[b_row][b_col];

	printf("Enter matrix-1 elements:\n");
	for(int i=0;i<a_row;i++)
	{
		for(int j=0;j<a_col;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter matrix-2 elements:\n");
	for(int i=0;i<b_row;i++)
	{
		for(int j=0;j<b_col;j++){
			scanf("%d",&b[i][j]);
		}
	}

	int result[a_row][b_col];

	
	for(int i=0;i<a_row;i++)
	{
		for(int j=0;j<b_col;j++)
		{
			result[i][j]=0;

			for(int k=0;k<a_col;k++)
			{
				result[i][j]+=(a[i][k]*b[k][j]);
			}
		}
	}
	printf("Result Matrix:\n");
	for(int i=0;i<a_row;i++)
	{
		for(int j=0;j<b_col;j++){
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return 0;

}