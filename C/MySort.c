#include <stdio.h>

#define Num 6
#define Max 20
#define Min 0

int main (void)
{
    static int a[] = {15, 4, 20, 8, 17, 2};
    int i, order[Max+2];
    
    for (i=Min; i<=Max; i++)
        order[i] = 0;
    
    for (i=0; i<=Num; i++)
        order[a[i]]++;
    
    order[Max+1] = 1;
    for (i=Max; i>=Min; i--)
        order[i] = order[i] + order[i+1];
    
    printf ("  Score / Rank\n");
    for (i=0; i<Num; i++)
    {
        printf ("%6d%6d\n", a[i], order[a[i]+1]);
    }
}
