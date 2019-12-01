#include <stdio.h>

int main()
{
    int amount;
    int score;

    puts("Input the basic amount:");
    scanf("%d", &amount);

    puts("Input the score:");
    scanf("%d", &score);

    switch (score)
    {
        case 1:
        case 2:
            amount /= 2;
            break;

        case 3:
            break;

        case 4:
        case 5:
            amount *= 2;
            break;

        default:
            amount = 0;
    }
    
    printf("The final amount is %d JPY in this month", amount);
    
    return 0;
}

