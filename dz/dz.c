#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stddef.h>

int main(void) {
    setlocale(LC_CTYPE, "RUS");

    char ch[2] = { 0 };
    short int sh[2] = { 0 };
    unsigned short int ush[2] = { 0 };
    int num[2] = { 0 };
    unsigned char uch[2] = { 0 };
    wchar_t wch[2] = { 0 };
    long long int ll[2] = { 0 };
    size_t szt[2] = { 0 };
    float fl[2] = { 0 };
    double db[2] = { 0 };
    signed int si[2] = { 0 };

    printf("Тип данных             | Размер в байтах\n");
    printf("char                   | %zu\n", (size_t)((unsigned char*)(ch + 1) - (unsigned char*)ch));
    printf("short int              | %zu\n", (size_t)((unsigned char*)(sh + 1) - (unsigned char*)sh));
    printf("unsigned short int     | %zu\n", (size_t)((unsigned char*)(ush + 1) - (unsigned char*)ush));
    printf("int                    | %zu\n", (size_t)((unsigned char*)(num + 1) - (unsigned char*)num));
    printf("unsigned char          | %zu\n", (size_t)((unsigned char*)(uch + 1) - (unsigned char*)uch));
    printf("wchar_t                | %zu\n", (size_t)((unsigned char*)(wch + 1) - (unsigned char*)wch));
    printf("long long int          | %zu\n", (size_t)((unsigned char*)(ll + 1) - (unsigned char*)ll));
    printf("size_t                 | %zu\n", (size_t)((unsigned char*)(szt + 1) - (unsigned char*)szt));
    printf("float                  | %zu\n", (size_t)((unsigned char*)(fl + 1) - (unsigned char*)fl));
    printf("double                 | %zu\n", (size_t)((unsigned char*)(db + 1) - (unsigned char*)db));
    printf("signed int             | %zu\n", (size_t)((unsigned char*)(si + 1) - (unsigned char*)si));

 
    return 0;
}