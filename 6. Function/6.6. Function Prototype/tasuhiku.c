#include "tasuhiku.h"

int main()
{
    int a, b;
    
    scanf("%d%d", &a, &b);
    printf("a + b = %d\n", tasu(a, b));
    printf("a - b = %d\n", hiku(a, b));
    
    return 0;
}

int tasu(int a, int b)
{
    return a + b;
}

int hiku(int a, int b)
{
    return a - b;
}

