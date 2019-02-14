/* two_func.c -- программа, в которой используются две функции в одном файле */
#include <stdio.h>
void butler(void);      /* прототип функции в стандарте ISO/ANSI C */
int main(void)
{
    printf("Я вызываю дворецкого.\n");
    butler();
    printf("Да. Принесите мне чай и записываемые DVD-диски.\n");
    return 0;
}

void butler(void) /* начало определения функции */
{
    printf("Вы звонили, сэр?\n");
}
