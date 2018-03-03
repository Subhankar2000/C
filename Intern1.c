#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x , y ,i ;
	int temp=0 , count=0 ;
	
	printf("Enter the two numbers : ");
	scanf("%d%d",&x,&y);
	
	
	for(i=0 ;; i++)
	{
		temp=x-y;
		count++;
		x=temp ;
		if(temp<y)
		break ;
	}
	
	printf("The Numbers are %d and %d !\n",x,y);
	printf("Quotient is : %d\n",count) ;
	if(temp == 0)
	printf("There is no remainder !") ;
	else
	printf("The remainder is : %d\n" , temp);
	
	return 0 ;
}
