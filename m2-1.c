// Code challenge
// Modify the program to use pow() function to replace sqrt() function
#include <stdio.h>
#include <math.h>
int main()
{
	float num, root;
	printf("Enter a number: ");
	scanf("%f", &num);
	// Computes the square root of num and stores in root.
	root = pow( num , 0.5 ) ;
	printf("Square root of %.2f = %.2f", num,root);
	return 0;
}
