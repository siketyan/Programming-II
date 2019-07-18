#include <stdio.h>

int main()
{
    char* sports[] = {
        "baseball",
        "soccer",
        "tennis"
    };

    for (int i = 0; i < sizeof(sports) / sizeof(char*); i++)
    {
        puts(sports[i]);
    }

    return 0;
}

