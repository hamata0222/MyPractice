#include <stdio.h>

#define MAX_VALUE 100

int main (void)
{
    int i;

    for (i = 0; i < MAX_VALUE; i++)
    {
        if ((i % 15) == 0)
        {
            printf ("FizzBuzz\n");
        }
        else if ((i % 5) == 0)
        {
            printf ("Buzz\n");
        }
        else if ()
        {
            printf ("Fizz\n");
        }
        else
        {
            printf ("%d\n", i);
        }
    }
}

