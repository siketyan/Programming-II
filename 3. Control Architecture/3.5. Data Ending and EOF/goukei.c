#include <stdio.h>

int main()
{
    int val, sum = 0;
    while (scanf("%d", &val) != EOF)
    {
        sum += val;
        printf("合計は%d\n", sum);
    }
}

