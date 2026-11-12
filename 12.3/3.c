#include <stdio.h>
#include <stddef.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "RUS");
    int x = 5;
    int* pa = &x;

    printf("До:       pa = %p, *pa = %d\n", pa, *pa);

pa++;
printf("После ++: pa = %p\n", pa);

pa--;
printf("После --: pa = %p, *pa = %d\n", pa, *pa);
    
    char   c = 1;  char* pc = &c;
    short  s = 1;  short* ps = &s;
    double d = 1;  double* pd = &d;
   
    printf("\nСмещение указателя при ++ (в байтах):\n");
    printf("char*               = %zu\n", sizeof(char));
    printf("short*              = %zu\n", sizeof(short));
    printf("int*                = %zu\n", sizeof(int));
    printf("double*             = %zu\n", sizeof(double));

    return 0;
}
