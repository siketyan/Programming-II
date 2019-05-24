#include <stdio.h>

int main()
{
    int year = 1;
    for (float balance = 10000.0; (balance *= 1.03) <= 15000.0; year++);
    printf("%d年後\n", year);
}

