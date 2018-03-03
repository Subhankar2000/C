// sort an array with Bubble sort method
#include <stdio.h>
#include <stdlib.h>;
int main()
{
     // Create a pre defined array
     int arr[10]={89, 56, 67, 5, 45, 34 ,54, 79, 21, 79};
     // Define other variables
     int p, q, l, t;
     // Compute the dimension of array
     l = sizeof(arr)/sizeof(int);
     // Sort process
     for(p = l-1; p >= 0; p-- ) // Outer loop
     {
         for(q = 1; q <= p; q++) // Inner loop for comparison
         { 
             if (arr[q-1] < arr[q]) // swap the values in the q-1th and qth position
             {
                 t = arr[q];
                 arr[q] = arr[q-1];
                 arr[q-1] = t;
             }
         }
      }
      // Print the array
      for (p = 0; p < l; p++)
      printf("%d\n", arr[p]);
}
