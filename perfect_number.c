/* Write a program which uses a function to check if a number is a perfect number. 
A perfect number is a number that equal to the sum, when you add it’s factors. 
For example Factors of 6 are 1, 2 and 3. 
When you add them you get 6 again  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPerfect(int n)
{
	int s=0, i;
	// Find sum of factors
	for(i = 1; i < n; i++)
	{
		if(n%i == 0)
		s += i;
	}
	//Check for Perfect Number
	if (s == n)
	return 1;
	else
	return 0;
}

int main()
{
	int n;
	// Ask for a number
	printf ("Enter a number : ");
	scanf("%d", &n);
	
	if (isPerfect(n))
	printf("%d is Perfect Number ", n);
	else
	printf("%d is not Perfect Number ", n);
	return 0;
}
