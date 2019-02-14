/* lethead2.c */
#include <stdio.h>
#include <string.h>  /* для strlen() */
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
    int spaces;
    show_n_char('*', WIDTH);     /* использование констант в качестве аргументов */
    putchar('\n');
    show_n_char(SPACE, 12);      /* использование констант в качестве аргументов */
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(ADDRESS)) / 2;
                                 /* позволить программе вычислить,                */
                                 /* сколько пробелов нужно вывести                */
    show_n_char(SPACE, spaces);  /* использование переменной в качестве аргумента */
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
                                 /* использование выражения в качестве аргумента  */
    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');

    return 0;
}

/* определение функции show_n_char() */
void show_n_char(char ch, int num)
{
    int count;

    for (count = 1; count <= num; count++)
        putchar(ch);
}
