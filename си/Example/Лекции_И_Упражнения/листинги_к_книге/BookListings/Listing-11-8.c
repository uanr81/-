/* fgets2.c -- использование функций fgets() и fputs() */
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];

    puts("Введите строки (или пустую строку для выхода из программы):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
        fputs(words, stdout);
    puts("Готово.");

    return 0;
}

