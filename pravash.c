#include<stdio.h>
main()
{
int r,c, a[3][3], b[3][3],sum[3][3],i,j;
printf("enter the no.of rows:");
scanf("%d",&r);
printf("enter the no.of columns");
scanf("%d",&c);
printf("\n enter the element 1st  matrix:\n ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
//printf("enter the element a[%d][%d]",a[i][j]);
scanf("%d",&a[i][j]);
}
}
printf("enter the element 2nd matrix:\n  ");
//printf("\n enter the element 1st  matrix:\n ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
//printf("enter the element b[%d][%d]",i+1,j+1);
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum[i][j]=a[i][j]+b[i][j];
}
}
printf("\n sum of two matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",sum[i][j]);
//if(i==c-1)
//printf("\n\n");
}
printf("\n");
}
}