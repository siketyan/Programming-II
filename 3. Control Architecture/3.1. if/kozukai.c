#include <stdio.h>

#define DEFAULT_MONEY 10000
#define MARK_BORDER 80
#define ADD_MONEY 5000
#define REMOVE_MONEY 2000

int main()
{
    int money, mark;
    money = DEFAULT_MONEY;
    scanf("%d", &mark);
    
    if (mark >= MARK_BORDER)
    {
        money += ADD_MONEY;
        puts("ごほうびだよ");
    }
    else
    {
        money -= REMOVE_MONEY;
        puts("次はがんばってね");
    }
    
    printf("今月のおこずかいは%d円です．", money);
    return 0;
}

