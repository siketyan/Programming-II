#include "warizan.h"

int main()
{
    int x, y, quot, rem;
    
    puts("Put two numbers to divide below (e.g. `x y` -> x/y)");
    scanf("%d%d", &x, &y);
    waru(x, y, &quot, &rem);
    printf("%d / %d = %d ... %d", x, y, quot, rem);
    
    return 0;
}

void waru(int x, int y, int* quot, int* rem)
{
    *quot = 0;
    
    while (x >= y)
    {
        x -= y;
        (*quot)++;
    }
    
    *rem = x;
}

