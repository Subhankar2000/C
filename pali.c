/*
Program 2
Check if a number is a palindrome using function */

#include <stdio.h>

#include <stdlib.h>

int isPalindrome(int n)

{

       int t = n, d, r = 0;

       // Reverse n into r

       while (t > 0)

       {

             d = t % 10;

             r = r * 10 + d;

             t = t / 10;

       }

       if (n == r)

       return 1;

       else

       return 0;

}

 

int main()

{

        int n;

        // Ask for a number

       printf ("Enter a number : ");

       scanf("%d", &n);

       if (isPalindrome(n))

       printf("%d is Palindrome ", n);

       else

       printf("%d is not Palindrome ", n);

       return 0;

}
