#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[20], i, n = 1, s = 0;
	int *ptr = arr;
	for (i = 0; i < 20; i++)
	{
		*(ptr + i) = n;

		s = s + *(ptr + i);
		n += 2;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d\n", *(ptr + i));
	}
	printf("Sum : %d\n", s);
	return 0;
}
