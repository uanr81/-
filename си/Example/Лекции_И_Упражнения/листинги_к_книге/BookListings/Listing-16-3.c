/* subst.c -- подстановка в строке */
#include <stdio.h>
#define PSQR(x) printf("Квадрат " #x " равен %d.\n",((x)*(x)))
int main(void)
{
    int y = 5;

    PSQR(y);
    PSQR(2 + 4);

    return 0;
}
