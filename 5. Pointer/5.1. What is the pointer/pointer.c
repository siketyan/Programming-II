#include <stdio.h>

int main()
{
    int tokuten;
    int* p;

    p = &tokuten;
    *p = 90;

    printf("%d", tokuten);
    return 0;
}

