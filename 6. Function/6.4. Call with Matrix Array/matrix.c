#include "matrix.h"

int main()
{
    int data[WIDTH][HEIGHT];

    unit(data);

    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            printf("%2d", data[x][y]);
        }

        putchar('\n');
    }

    return 0;
}

void unit(int x[WIDTH][HEIGHT])
{
    for (int t = 0; t < HEIGHT; t++)
    {
        for (int s = 0; s < WIDTH; s++)
        {
            x[s][t] = (int) s == t;
        }
    }
}


