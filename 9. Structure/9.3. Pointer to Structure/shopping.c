#include <stdio.h>

typedef struct shopping
{
    char* name;
    int price;
}
shopping_t;

int main()
{
    shopping_t* p;
    shopping_t my_list[3] = {
        {"aaa", 123},
        {"bbb", 456},
        {"ccc", 789}
    };
    
    p = my_list;
    
    for (int i = 0; i < 3; i++)
    {
        printf("購入物品%sは，%d円です．\n", p->name, p->price);
        p++;
    }
    
    return 0;
}

