#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
     // Declare a string
     char st[100]; // Variable to store the sentence
     char wd[50]; // Variable to store each word
     int i = 0;
     int k = 0;
     int c = 0;

     // Get a string from user
    printf("Enter a string : ");
    scanf("%[^\n]s", st);
    // Read the string
    while (st[i]!='\0')
    {
         k=0;
         // Check for the word
         while(st[i]!=' ' && st[i]!='\0')
         {
               wd[k]=st[i];
               k++;
               i++;
         } // End of inner loop
         wd[k]='\0';
         c++; // counting how many words
         if (c%2 == 1)
         printf("%s\n",wd);
         if (st[i]!='\0')
         i++;
     }// End of outer loop
    return 0;
}
