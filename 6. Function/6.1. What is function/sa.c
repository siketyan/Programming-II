#include "sa.h"

int main()
{
    int a, b;

    puts("二つの整数を入れてください");
    scanf("%d%d", &a, &b);
    printf("差は %d です", hiku(a, b));

    return 0;
}

int hiku(int a, int b)
{
    return abs(a - b);
}

