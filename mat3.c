#include 
int main()
{
      int i, j;
      int arr[3][3];
      for (i=0; i<3 ; i++) {
           arr[i][2] = 0;
           for (j=0; j<2 ; j++)           {
                printf ("Enter a number : ");
                scanf("%d", &arr[i][j]);
                arr[i][2]=arr[i][2] + arr[i][j];
            }
      }
     for (i=0; i < 3>    {
         for (j=0; j < 3>         {
                  printf("%d", arr[i][j]);
          }
         printf("\n");
     }
}
