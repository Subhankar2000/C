#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, n, c = 0,k;
	for(k=1 ; k<=50 ; k++)
	{		c=0 ; 
			for(i = 1; i <= k; i++)
		{
			if(k%i == 0)
			c++;
		}
	if (c == 2)
	printf("%d ",k);
    }
	return 0;
}
