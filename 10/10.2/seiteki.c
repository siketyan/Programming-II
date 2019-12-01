#include <stdio.h>
#include <string.h>

void test()
{
           int jido = 0;
    static int sei  = 0;
    
    printf(
        "(自動変数: %d) (静的変数: %d)\n",
        ++jido,
        ++sei
    );
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        test();
    }
    
    return 0;
}

