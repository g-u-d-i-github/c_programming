#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],mul[3][3];
	int i,j,k;
	printf("enter element of first matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
		printf("enter element of second matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",b[i][j]);
		}
	}
	printf("multiplication matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(i=0;i<3;i++)
			{
				mul[i][j]=a[i][j]*b[i][j];
			}
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
		
	}
}