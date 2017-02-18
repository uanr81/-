// power.c -- Возводит числа в целые степени  
#include <stdio.h>
double power(double n, int p); // ANSI прототип 
int main(void)
{
    double x, xpow;
    int exp;
    
    printf("Введите число и положительную степень,");
    printf(" в которую \nчисло будет возведено. Для завершения программы");
    printf(" введите q.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x,exp);   // вызов функции
        printf("%.3g в степени %d равно %.5g\n", x, exp, xpow);
        printf("Введите следующую пару чисел или q для завершения.\n");
    }
    printf("Надеемся, что вы оценили это упражнение -- до свидания!\n");
    
    return 0;
}

double power(double n, int p)  // определение функции
{
    double pow = 1;
    int i;
    
    for (i = 1; i <= p; i++)
        pow *= n;
    
    return pow;                // возвратить значение pow
}
