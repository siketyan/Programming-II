#include <stdio.h>

#define LINE_BREAK 0x0A
#define TO_UPPERCASE 0x20

int main()
{
    puts("小文字を入れて");

    char moji = getchar();
    putchar(moji - TO_UPPERCASE);
    putchar(LINE_BREAK);

    return 0;
}

