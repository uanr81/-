/* assert.c -- использование assert() */
#include <stdio.h>
#include <math.h>
#include <assert.h>
int main()
{
    double x, y, z;

    puts("Введите пару чисел (0 0 для завершения): ");
    while (scanf("%lf%lf", &x, &y) == 2
                && (x != 0 || y != 0))
    {
        z = x * x - y * y;  /* должно быть + */
        assert(z >= 0);
        printf("результатом является %f\n", sqrt(z));
        puts("Введите следующую пару чисел: ");
    }
    puts("Программа завершена.");

    return 0;
}
