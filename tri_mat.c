// Matrix assumed is of 4,4 dimension
#include<stdio.h>
int main()
{
	int a[4][4],i,j;
	printf("Enter Matrix A Values\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Lower Matrix Triangle Values :\n");
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<=i;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Upper Matrix Triangle Values :\n");
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			if(j>=i)
			printf("%d\t",a[i][j]);
			else
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
