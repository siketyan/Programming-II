#include "music.h"

int main()
{
    char* music[] = {
        "pops",
        "rock",
        "jazz",
        "classic",
        SUFFIX
    };
    
    disp(music);
    
    return 0;
}

void disp(char* p[])
{
    while (*p != SUFFIX)
    {
        puts(*p++);
    }
}

