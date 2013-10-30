/* Function to calculate fibonacci sequence to a user-requested number of terms */
#include <stdio.h>

void fibonacci(int num)
{
    long long int num0 = 0, num1 = 1;
    if (num < 3) {
        switch (num) {
        case 0:
            break;
        case 1:
            printf ("0\n");
            break;
        case 2:
            printf ("0 1\n");
            break;
        default:
            break;
        }
        return;
    } else {
        printf ("0 1 ");
        num -= 2;
        while (num) {
            long long int fib = num0 + num1;
            num0 = num1;
            num1 = fib;
            printf ("%lld ", fib);
            num--;
        }
    }
}

int main (void)
{
    int num;
    printf ("\nEnter length of Fibonacci sequence required : ");
    scanf ("%d", &num);
    fibonacci (num);
    printf ("\n");
    return 0;
}
