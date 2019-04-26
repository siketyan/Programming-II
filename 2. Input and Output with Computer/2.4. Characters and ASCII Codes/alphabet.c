#include <stdio.h>

int main()
{
    puts("小文字を入れて");

    char lowercase;
    scanf("%c", &lowercase);
    printf("大文字は%cです。", lowercase - 32);

    return 0;
}

