#include <stdio.h>
main() 
{
   unsigned int a = 60; /* 60 = 0011 1100 */
   unsigned int b = 13; /* 13 = 0000 1101 */

   int c = 0;
   c = a &lt;&lt; 2; /* 240 = 1111 0000 */
   printf(&quot;Line 1 - Value of c is %d\n&quot;, c );
   c = a &gt;&gt; 2; /* 15 = 0000 1111 */
   printf(&quot;Line 2 - Value of c is %d\n&quot;, c );
}
