#include <stdio.h>
int main()
{
    int i , j , arr_2D[3][3] ;
    printf("ENTER MATRIX ELEMENTS ( ROW WISE ) : ") ;
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
            scanf("%d" , &arr_2D[i][j]) ;
    }
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++)
            printf("%d ", arr_2D[i][j]) ;
    printf("\n") ;
    }
    return 0 ;
}
