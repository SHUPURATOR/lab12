#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(void) {
    setlocale(LC_CTYPE, "RUS");
    float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10 };

    float* ptr_a;

    printf("4.1:\n");
    printf("%p\n", array);
    printf("%p\n", &array[0]);
    printf("%p\n\n", &array);

    printf("4.2:\n");
    ptr_a = array;

    ptr_a++;
    printf("%p : %g\n", ptr_a, *ptr_a);

    ptr_a = ptr_a + 4;
    printf("%p : %g\n", ptr_a, *ptr_a);

    ptr_a = ptr_a - 2;
    printf("%p : %g\n\n", ptr_a, *ptr_a);

    printf("4.3:\n");
    for (ptr_a = array; ptr_a < array + 10; ptr_a += 2) {
        printf("%g ", *ptr_a);
    }
    printf("\n\n");

    printf("4.4:\n");
    for (ptr_a = array + 9; ptr_a >= array; ptr_a--) {
        printf("%g ", *ptr_a);
    }
    printf("\n\n");

    return 0;
}