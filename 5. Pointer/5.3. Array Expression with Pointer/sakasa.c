#include <stdio.h>
#include <string.h>

#define string char*

int main()
{
    string str = "computer";

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        putchar(str[i]);
    }

    return 0;
}

