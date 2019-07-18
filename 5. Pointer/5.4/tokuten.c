#include <stdio.h>

int main()
{
    int mark[2][4] = {
        { 50, 60, 70, 80 },
        { 70, 80, 90, 100 }
    };

    int* p = mark[1];
    
    for (int i = 0; i < sizeof(mark[1]) / sizeof(int); i++)
    {
        printf("%d ", p[i]);
    }

    return 0;
}

