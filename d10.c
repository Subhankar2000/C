//Get numbers into an array of dimension 10
// Print numbers in an array of dimension 10
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
