#include <stdio.h>
#include <stdlib.h>

int main()
{
	char inst[200] , pnm[200];
	int ph , yoe ;
	
	printf("Enter Name of the institution : ");
	gets(inst);
	printf("Enter Name of the Principal : ");
	gets(pnm);
	printf("Enter phone number : ");
	scanf("%d",&ph);
	printf("Enter the year of establishment : ");
	scanf("%d",&yoe);
	
	printf("Name of Institution : %s\n",inst);
	printf("Name of the principal : %s\n",pnm);
	printf("Phone Number : %d\n",ph);
	printf("Year of Establishment : %d\n",yoe);
	
	return 0 ;
}
