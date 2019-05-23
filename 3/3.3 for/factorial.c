#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    for (int i = 1, fact = 1; i <= n; fact *= ++i)
    {
        printf("%2d!%11d\n", i, fact);
    }
}

