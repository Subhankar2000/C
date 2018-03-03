#include <stdio.h>
int main()
{
	int i, j;
	int arr[3][3];
	arr[2][0] = 0;
	arr[2][1] = 0;
	arr[2][2] = 0;
	for (i=0; i < 2; i++)
	{
		for (j=0; j < 3; j++)
		{
			printf ("Enter a number : ");
			scanf("%d", &arr[i][j]);
		}
	}
	for (i=0; i < 2; i++)
	{
		arr[2][0] = arr[2][0] + arr[i][0];
		arr[2][1] = arr[2][1] + arr[i][1];
		arr[2][2] = arr[2][2] + arr[i][2];
	}
	
	for (i=0; i < 3; i++)
	{
		for (j=0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

Row-wise sum of the content in a matrix

	for (i=0; i < 3; i++)
	{
		for (j=0; j < 3; j++)
		{
			printf ("Enter a number : ");
			scanf("%d", &arr[i][j]);
		}
	}
	for (i=0; i < 3; i++)
	{
		sum = 0;
		for (j=0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
			sum = sum + arr[i][j];
		}

		printf (" : %d \n", sum);
	}
}
