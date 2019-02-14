/* compare.c -- эта программа будет работать */
#include <stdio.h>
#include <string.h>  // объявление strcmp()

#define ANSWER "Грант"
#define SIZE 40
char * s_gets(char * st, int n);

int main(void)
{
    char try[SIZE];

    puts("Кто похоронен в могиле Гранта?");
    s_gets(try, SIZE);
    while (strcmp(try,ANSWER) != 0)
    {
        puts("Неправильно! Попытайтесь еще раз.");
        s_gets(try, SIZE);
    }
    puts("Теперь правильно!");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else  // требуется наличие words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

