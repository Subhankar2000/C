// sort an array with Selection sort method
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
int main()
{
    int arr[10]={89, 56, 67, 5, 45, 34 ,54, 79, 21, 79};
    int p, q, s, sp, l, t;
    l = sizeof(arr)/sizeof(int);
    for(p = 0; p < l-1; p++)
    {
        s = arr[p];
        sp = p;
        for(q = p+1; q < l; q++)
        {
           if (s > arr[q])
           {
               s = arr[q];
               sp = q;
           }
        }
        if (sp != p)
        {
           t = arr[sp];
           arr[sp] = arr[p];
           arr[p] = t;
        }
    }
    for (p = 0; p < l; p++)
    printf("%d\n", arr[p]);
}
