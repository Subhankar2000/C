/*
* C program to find accept a matrix of order M x N and find
* the sum of the main diagonal and off diagonal elements
*/
#include <stdio.h>
int main ()
{
	static int array[10][10];
	int i, j, m, n, a = 0, sum = 0;
	printf("Enter the order of the matix \n");
	scanf("%d %d", &m, &n);
	if (m == n )
	{
		printf("Enter the elements of the matrix\n");
		for (i = 0; i < m; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				scanf("%d", &array[i][j]);
			}
		}
		printf("The given matrix is \n");
		for (i = 0; i < m; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				printf(" %d", array[i][j]);
			}
			printf("\n");
		}
		for (i = 0; i < m; ++i)
		{
			sum = sum + array[i][i];
			a = a + array[i][m - i - 1];
		}
		printf("\nThe sum of the main diagonal elements is = %d\n", sum);
		printf("The sum of the off diagonal elemets is = %d\n", a);
	}
	else
	printf("The given order is not square matrix\n");

	return 0;
}
