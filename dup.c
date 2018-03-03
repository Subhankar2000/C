#include <stdio.h>

// Program to find duplicates in an array

void main()
{
    // Declare variables
    int i,arr[100],j,no;
    // Accept elements of array
    printf("Enter size of array: ");
    scanf("%d",&no);
    printf("Enter any %d elements in array: \n",no);
    for(i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Find duplicates
    printf("Duplicate elements are: \n");
    for(i=0; i<no; i++)
    {
        for(j=i+1;j<no;j++)
        {
            if(arr[i]==arr[j])
            {
                  printf("%d\n",arr[i]);
            }
        }
    }
}
