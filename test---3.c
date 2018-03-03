#include <stdio.h>
#include<stdlib.h>
int main()
{
      // Declare a string
     char st[100];
     char wd[50];
     int i = 0;
     int k = 0;
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
        printf("%s\n",wd);
        // increase i when the string is till not read
        if (st[i]!='\0')
        i++;
     }// End of outer loop
     return 0;
}
