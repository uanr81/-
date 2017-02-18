/* pound.c -- определяет функцию с аргументом   */
#include <stdio.h>
void pound(int n);   // ANSI стандарт объявление прототипа функции
int main(void)
{
    int times = 5;
    char ch = '!';   // ASCII-код равен 33
    float f = 6.0f;
    
    pound(times);    // аргумент тмпа int 
    pound(ch);       //эквивалентно pound((int)ch);
    pound(f);        // эквивалентно pound((int)f);
    
    return 0;
}

void pound(int n)    // ANSI-стиль , заголовок функции, который указывает,
{                    // что функция принимает один аргумент int
    while (n-- > 0)
        printf("#");
    printf("\n");
}
