/* put1.c -- выводит строку без добавления символа \n */
#include <stdio.h>
void put1(const char * string)  /* строка не изменяется */
{
    while (*string != '\0')
        putchar(*string++);
}

