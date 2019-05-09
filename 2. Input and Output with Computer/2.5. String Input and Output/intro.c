#include <stdio.h>

int main()
{
    char name[25];
    printf("name ? ");
    scanf("%s", name);

    char address[30];
    printf("address ? ");
    scanf("%s", address);

    char hobby[20];
    printf("hobby ? ");
    scanf("%s", hobby);

    printf("Hello. My name is %s.\n", name);
    printf("I live in %s.\n", address);
    printf("My hobby is %s.\n", hobby);

    return 0;
}

