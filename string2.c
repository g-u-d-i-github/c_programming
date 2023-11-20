#include<stdio.h>
int main()
{
char string[100],v[]="aeiouAEIOU";
int i,j,count=0;
printf("enter a string::");
gets(string);
for(i=0;string[i];i++)
for(j=0;v[j];j++)
{
	if(string[i]==v[j])
	{
		count++;
		break;
	}
}
printf("total vowels in %s is %d",string,count);
}