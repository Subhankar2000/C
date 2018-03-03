// linear search and array for a number
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10]={89, 56, 67, 5, 45, 34 ,54, 79, 21, 79};
    int i, sv, p = 0;
    printf("Enter a number for searching : ");
    scanf("%d", &sv);
    for (i = 0; i < 10; i++)
    {
       if (sv == arr[i])
       {
          p = i+1;
          break;
       }
    }
    if (p > 0)
    printf("Position : %d", p);
    else
    printf("Search failed");
    return 0;
}
