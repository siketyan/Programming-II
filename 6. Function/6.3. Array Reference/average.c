#include "average.h"

int main()
{
    int a[] = { 65, 80, 70, 90, 85, EOA };
    int avg = heikin(a);

    printf("The average of score is %d", avg);

    return 0;
}

int heikin(int a[])
{
    int sum = 0;
    int count = 0;

    while (*a != EOA)
    {
        sum += *a++;
        count++;
    }

    return sum / count;
}

