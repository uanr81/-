// divisors.c -- вложенные операторы if отображают делители числа
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned long num;          // проверяемое число
    unsigned long div;          // потенциальные делители
    bool isPrime;               // флаг простого числа

    printf("Введите целое число для анализа; ");
    printf("для завершения введите q.\n");
    while (scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num)
                printf("%lu делится на %lu и %lu.\n",
                        num, div, num / div);
                else
                    printf("%lu делится на %lu.\n",
                            num, div);
                isPrime= false;  // число не является простым
            }
        }
        if (isPrime)
            printf("%lu является простым числом.\n", num);
        printf("Введите следующее число для анализа; ");
        printf("для завершения введите q.\n");
    }
    printf("До свидания.\n");

    return 0;
}
