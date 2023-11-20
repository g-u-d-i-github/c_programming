#include<stdio.h>
main()
{
	int a,i,b,c,j;
	for(b=1;b<=5;b++)
	{ 
	printf("I\n\n");
	}
	for(a=1;a<=5;a++){
		for(i=1;i<=5;i++){
			if(i==1||a==5){
				printf("\tL");
			}
			else{
				printf("");
			}
            }
			printf("\n\n\n");
	}
	for(c=1;c<=5;c++){
		for(j=1;j<=5;j++){
			if(c==5){
				printf("\t\tU");
				}
			else if(j==1||j==5){
				printf("\t\tU");
			}
			else{
				printf("\t\t");
			}
            }
			printf("\n\n\n");
	}
	{
		printf("\t\t\***@@GUDI@@***\n");
	}
	
}
