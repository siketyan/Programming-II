#include <stdio.h>

int main()
{
    int a[20];
    int i;

    for (i = -1; ++i < 20; a[i] = i);
    for (i = -1; ++i < 20; printf("a[%d]=%d\n", i, a[i]));

    return 0;
}

