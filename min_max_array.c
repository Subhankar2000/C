// Declare array of 20, accept numbers to assign into array, find the minimum and maximum and print them.
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int arr[20], i, min, max; // The array and variables are declared
   printf("Enter a number :");
   scanf("%d", &arr[0]); // accept the first element of array
   min = max = arr[0]; // min and max is assigned with first element of the array
   for (i = 1; i < 20; i++) // here you accept all the rest elements
   {
      printf("Enter a number : ");
      scanf("%d", &arr[i]); // accept next element
      if (min > arr[i]) // if min is greater than the new element
      min = arr[i]; // then store the new element in min

      if (max < arr[i]) // if max is less than the new element
      max = arr[i]; // then store thge new element in max
   }
   // We are printing the array elements
   for (i = 0; i < 20; i++)
   {
      printf("%d\n", arr[i]);
   }
  // We are printing the min and max
  printf("Min : %d Max : %d\n", min, max);
  return 0;
}
