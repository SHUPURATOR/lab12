#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "RUS");
    char   c = 'A';
    int    i = 5;
    double d = 2.1;

    char* pc = &c;
    int* pi = &i;
    double* pd = &d;

    printf("Размер указателя char*   = %zu байт\n", sizeof(pc));
    printf("Размер указателя int*    = %zu байт\n", sizeof(pi));
    printf("Размер указателя double* = %zu байт\n", sizeof(pd));

    printf("Размер значения char   = %zu байт\n", sizeof(c));
    printf("Размер значения int    = %zu байт\n", sizeof(i));
    printf("Размер значения double = %zu байт\n", sizeof(d));

    return 0;
}