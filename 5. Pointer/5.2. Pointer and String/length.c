#include <stdio.h>

int strlen(char* str)
{
    int length = 0;

    for (; *str++ != (long) NULL; length++);
    return length;
}

int main()
{
    char* str = "information";
    
    printf("文字列の長さは%dです", strlen(str));
    return 0;
}

