/* fgets1.c -- использование функций fgets() и fputs() */
#include <stdio.h>
#define STLEN 15
int main(void)
{
    char words[STLEN];

    puts("Введите строку.");
    fgets(words, STLEN, stdin);
    printf("Ваша строка, выведенная дважды (с помощью puts(), а затем fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Введите еще одну строку.");
    fgets(words, STLEN, stdin);
    printf("Ваша строка, выведенная дважды (с помощью puts(), а затем fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Готово.");

    return 0;
}

