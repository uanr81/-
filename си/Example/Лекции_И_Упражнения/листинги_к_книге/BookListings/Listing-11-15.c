/* put2.c -- выводит строку и подсчитывает символы */
#include <stdio.h>
int put2(const char * string)
{
    int count = 0;

    while (*string)         /* общепринятый подход */
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');          /* символ новой строки не учитывается */

    return(count);
}

