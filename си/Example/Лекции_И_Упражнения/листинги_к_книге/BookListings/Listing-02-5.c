/* stillbad.c -- программа с устраненными синтаксическими ошибками */
#include <stdio.h>
int main(void)
{
    int n, n2, n3;

    /* В этой программе есть семантическая ошибка */
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n в квадрате = %d, n в кубе = %d\n", n, n2, n3);

    return 0;
}
