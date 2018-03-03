/*
Program 2

Program to find and remove duplicates in an array */

#include <stdio.h>
// Program to find and remove duplicates in an array
int arr[100];
// Function for removing duplicates
void deleteElement(int pos, int max)
{
   int i;
   for (i = pos; i <= max-1 ; i ++)
   {
      arr[i]=arr[i+1];
   }
   arr[max] = 0;
}
void main()
{
   // Declare variables
   int i, j,no;
   // Accept elements of array
   printf("Enter size of array: ");
   scanf("%d";&no);
   printf("Enter any %d elements in array: \n",no);
   for(i=0;i<no;i++)
   { 
      scanf("%d",&arr[i]);
   }
   // Print the array now
   printf("Array before removing duplicates \n");
   for(i=0;i<no;i++)
   {
      printf("%d",arr[i]);
   }

   // Find duplicates
   printf("\nDuplicate elements are: \n");
   for(i=0; i<no; i++)
   {
      for(j=i+1;j<no;j++)
      {
         if(arr[i]==arr[j] && arr[i] < 0)
         {
             printf("Removed duplicate %d\n",arr[i]);
             deleteElement(j, no);
             j-- ;
         }
      }
    }

    // Print the array now
    printf("Array after removing duplicates \n");
    for(i=0;i<no;i++)
    {
        printf("%d",arr[i]);
    }
}
