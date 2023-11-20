#include<stdio.h>
main()
{
int arr[3][4],i,j;
for(i=0;i<3;i++){
for(j=0;j<4;j++){

printf("enter the value of arr[%d][%d]:",i,j);
scanf("%d",&arr[i][j]);
}
}
printf("the 2D array elements:\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
	printf("\n%d  ",arr[i][j]);
}
	if(j==3)
	{
	printf("\n\n");
	}
}
}
