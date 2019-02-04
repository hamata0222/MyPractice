#include <stdio.h>

#define MAX_VALUE 100;

int main (void)
{
    int i;

    for (i = 0; i < MAX_VALUE; i++)
    {
        if ((i % 15) == 0)
        {
            printf ("FizzBuzz");
        }
        else if ((i % 5) == 0)
        {
            printf ("Buzz");
        }
        else if ()
        {
            printf ("Fizz");
        }
        else
        {
            printf ("%d", i);
        }
    }
}

