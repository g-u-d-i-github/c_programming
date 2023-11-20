#include<stdio.h>
int main()
{
	char name[23],clgname[23],address[43];
	printf("enter your name:-");
//	scanf("%s",name);
	gets(name);
	printf("enter your clg name:-");
//	scanf("%s\n",clgname);
	gets(clgname);
	printf("enter yoour address:-");
//	scanf("%s\n",address);
//	printf("%s\n",name);
	//printf("%s\n",clgname);
	//printf("%s\n",address);
//	gets(address);
	puts(name);
	puts(clgname);
	puts(address);
}

