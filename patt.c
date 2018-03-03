#include <stdio.h>
#include <stdlib.h>
int main()
{
	// Problem : Print the pattern 2
	// Variable declaration
	int i, j,k=1;
	// Print Pattern 2
	for(i = 1; i <= 5; i++) // for number of rows
	{
		for(j = 1; j <= i; j++) // for columns
		{
			printf("%d ", k);k++;
		}
		printf("\n");
	}
	return 0;
}
