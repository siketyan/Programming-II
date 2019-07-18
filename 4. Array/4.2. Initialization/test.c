#include <stdio.h>

int main()
{
    int ary[3][4];

    printf("%d", sizeof(ary[0]) / sizeof(int));
    return 0;
}

