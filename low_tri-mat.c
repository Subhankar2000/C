#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],sum1=0,sum2=0;
	int i,j,m,n;
	printf("Enter Order of Matrix : ");
	scanf("%d%d",&m,&n);
	if(m!=n)
	{
		printf("Not a Square Matrix : ");
		exit(0);
	}
	printf("Enter Elements : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<;m;i++)
	{
		for(j=0;j<;n;j++)
		{
			if(i+j<m-1)
			{
				sum1+=a[i][j];
			}
		}
	}
	printf("\n Sum of Upper Triangle is : %d",sum1);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
	
			if(i+j>m-1)
			{
				sum2+=a[i][j];
			}
		}
	}
	printf("\n Sum of Lower Triangle is : %d",sum2);
	return 0;
}
