#include <stdio.h>

#define sqr(x) ((x) * (x))

int main()
{
	int value;

	puts("整数を入れて");
	scanf("%d", &value);
	printf("二乗の値は %d です．\n", sqr(value));

	return 0;
}
