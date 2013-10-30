/* Write a function to find factorial of a given number */

#include <stdio.h>

long int factorial (int num)
{
    int i;
    long int result=1;
    for (i = 1 ; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}

int main (void)
{
    /* Testing */
    int i;
    for (i=0;i<10;i++)
    {
        printf ("Factorial of %d is %ld\n", i, factorial(i));
    }
    return 0;
}

