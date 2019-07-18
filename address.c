#include <stdio.h>

void printChar(void* p, int index, char* format)
{
    printf(format, ((char*)p)[index]);
}

void printInt(void* p, int index, char* format)
{
    printf(format, ((int*)p)[index]);
}

void printFloat(void* p, int index, char* format)
{
    printf(format, ((float*)p)[index]);
}

void printDouble(void* p, int index, char* format)
{
    printf(format, ((double*)p)[index]);
}

void show(void *p, int size, int length, char* format, char* type, void (*fn)(void*, int, char*))
{
    puts(type);

    void* previous = NULL;

    for (int i = 0; i < length / size; i++)
    {
        void* current = p + i * size;

        printf("\t%p\t", current);
        (*fn)(p, i, format);

        if (previous != NULL)
        {
            printf("\t%d", current - previous);
        }

        previous = current;

        putchar('\n');
    }
}

int main()
{
    char data1[]= { 'a', 'b', 'c' };
    char* p1 = data1;
    show(p1, sizeof(char), sizeof(data1), "%c", "char", printChar);

    int data2[] = { 10, 20, 30 };
    int* p2 = data2;
    show(p2, sizeof(int), sizeof(data2), "%d", "int", printInt);

    float data3[] = { 1.1, 2.2, 3.3 };
    float* p3 = data3;
    show(p3, sizeof(float), sizeof(data3), "%f", "float", printFloat);

    double data4[] = { 7.7, 8.8, 9.9 };
    double* p4 = data4;
    show(p4, sizeof(double), sizeof(data4), "%f", "double", printDouble);

    return 0;
}

