#include "bit.h"

int main()
{
    int x;
    
    puts("正の整数を入れて");
    scanf("%d", &x);
    puts(dec2bin(x));
    
    return 0;
}

char* dec2bin(int dec)
{
    int size = sizeof(dec) * 8;
    char* bin = malloc(size);
    
    for (int i = 0; i < size; i++)
    {
        bin[size - i - 1] = ((dec >> i) & 0x1) ? '1' : '0';
    }
    
    return bin;
}

