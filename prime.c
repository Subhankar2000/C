/*Program 1
Check for Prime Number using function*/

#include <stdio.h>

#include <stdlib.h>

int isPrime(int n)

{

     int i;

     for(i = 2; i <= n-1; i++)

    {

          if (n % i == 0)

          return 0;

    }

    return 1;

}

int main()

{

       int n;

       // Ask for a number
        printf ("Enter a number : ");

       scanf("%d", &n);

       if (isPrime(n))

       printf("%d is Prime number", n);

       else

       printf("%d is not Prime number", n);

       return 0;

}
