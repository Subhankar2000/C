#include <stdio.h>

int main()

{

    int n = 423, d, e = 0;

    while(n > 0)

    {

        d = n % 10;

        e = e + d;

        n = n / 10;

    }

   printf("%d", e);

}
