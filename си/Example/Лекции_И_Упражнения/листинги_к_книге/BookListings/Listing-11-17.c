/* test_fit.c -- использование функции укорачивания строк */
#include <stdio.h>
#include <string.h>  /* содержит прототипы строковых функций */
void fit(char *, unsigned int);

int main(void)
{
    char mesg[] = "Все должно быть максимально простым,"
    " но не более.";

    puts(mesg);
    fit(mesg, 35);
    puts(mesg);
    puts("Рассмотрим еще несколько строк.");
    puts(mesg + 36);

    return 0;
}

void fit(char *string, unsigned int size)
{
    if (strlen(string) > size)
        string[size] = '\0';
}

