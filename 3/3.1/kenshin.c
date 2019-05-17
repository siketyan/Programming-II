#include <stdio.h>

#define bool _Bool
#define DEFAULT_PRICE 5000
#define DISCOUNT -2000

int main()
{
    puts("年齢を入れて");

    int age;
    scanf("%d", &age);

    int money = DEFAULT_PRICE;
    int divided = age / 10;
    bool isInRange = divided == 1 || divided == 3;
    printf(isInRange ? "特別" : "通常");
    money += DISCOUNT * isInRange;

    printf("料金だよ\n料金は%d円です．", money);
    return 0;
}

