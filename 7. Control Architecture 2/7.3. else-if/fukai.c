#include <stdio.h>

int main()
{
    float d, t, u;
    
    puts("Temperature?");
    scanf("%f", &t);
    
    puts("Humidity?");
    scanf("%f", &u);
    
    d = 0.81 * t + 0.01 * u * (0.99 * t - 14.3) + 46.3;
    
    puts(
        d >= 85.0 ? "暑くてたまらない" :
        d >= 80.0 ? "暑くて汗がでる" :
        d >= 75.0 ? "やや暑い" :
                    "それほど暑くない"
    );
    
    return 0;
}

