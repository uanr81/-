// addresses.c -- адреса строк
#define MSG "Я особенный."

#include <stdio.h>
int main()
{
    char ar[] = MSG;
    const char *pt = MSG;

    printf("адрес \"Я особенный.\": %p \n", "Я особенный.");
    printf("              адрес ar: %p\n", ar);
    printf("              адрес pt: %p\n", pt);
    printf("             адрес MSG: %p\n", MSG);
    printf("адрес \"Я особенный.\": %p \n", "Я особенный.");

    return 0;
}

