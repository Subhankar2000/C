// Program prints the counts of even and odd digits in a number.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	// Problem : Find the counts of even and odd digits in a number
	// Variable declaration
	int n, d, ec = 0, oc = 0;
	// Accept the number
	printf("Enter a multidigit number : ");
	scanf("%d", &n);
	// Find the counts
	while(n > 0)
	{
		d = n % 10;
		printf("%d\n",d);
		if (d % 2 == 0)
		ec++;
		else
		oc++;
		n = n / 10;
	}
	printf("Count of even digits %d\n Count of odd digits %d\n", ec, oc);
	return 0;
}
