/* mac_arg.c -- макросы с аргументами */
#include <stdio.h>
#define SQUARE(X) X*X
#define PR(X) printf("Результат: %d.\n", X)
int main(void)
{
    int x = 5;
    int z;

    printf("x = %d\n", x);
    z = SQUARE(x);
    printf("Вычисление SQUARE(x): ");
    PR(z);
    z = SQUARE(2);
    printf("Вычисление SQUARE(2): ");
    PR(z);
    printf("Вычисление SQUARE(x+2): ");
    PR(SQUARE(x+2));
    printf("Вычисление 100/SQUARE(2): ");
    PR(100/SQUARE(2));
    printf("x = %d.\n", x);
    printf("Вычисление SQUARE(++x): ");
    PR(SQUARE(++x));
    printf("После инкрементирования x = %x.\n", x);

    return 0;
}
