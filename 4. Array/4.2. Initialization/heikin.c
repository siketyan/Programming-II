#include <stdio.h>

int main()
{
    int tokuten[] = { 82, 78, 95, 88, 75, 92 };

    int sum = 0;
    int length = sizeof(tokuten) / sizeof(int);
    for (int i = 0; i < length; sum += tokuten[i++]);

    printf("平均点は%dです．", sum / length);
    return 0;
}

