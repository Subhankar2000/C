// Declare array of dimension 20, assign odd numbers into it and print the sum.
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int arr[20], i, n = 1, s = 0;
   for (i = 0; i < 20; i++)
   {
      arr[i] = n;
      s = s + arr[i];
      n += 2;
   }
   for (i = 0; i < 20; i++)
   {
       printf("%d\n", arr[i]);
   }
   printf("Sum : %d\n", s);
   return 0;
}
