/* put_out.c -- использование функции puts() */
#include <stdio.h>
#define DEF "Я - строка, определенная директивой #define."
int main(void)
{
    char str1[80] = "Массив был инициализирован моим значением.";
    const char * str2 = "Указатель был инициализирован моим значением.";

    puts("Я - аргумент функции puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2+4);

    return 0;
}

