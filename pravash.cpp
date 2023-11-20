#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],arr3[3][3],i,j,k,sum=0;
	printf("Enter the 1st matrix:");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)	
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter the second matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		sum=0;
		for(k=0;k<3;k++)
		{
			sum=sum+(arr1[i][k]*arr2[k][j]);
		}
		arr3[i][j]=sum;
	}
	}
	printf("after multiplication of matrix is:\n ");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("%d\t",arr3[i][j]);
	}
	printf("\n");
	}
		
return 0;
}
