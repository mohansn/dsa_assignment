#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
{
    if (argc != 2) {
        fprintf (stderr, "Usage: %s <year>\n", argv[0]);
        exit(1);
    }
    int year = atoi(argv[1]);
    if ((year % 400)==0 ||
        ((year % 100 != 0) && (year % 4) == 0)) {
        printf ("%d is a leap year\n", year);
    } else {
        printf ("%d is not a leap year\n", year);
    }
    return 0;
}
