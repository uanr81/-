// boolean.c -- использование переменной типа _Bool 
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;
    
    printf("Введите целое число для последущюего суммирования ");
    printf("(введите q для завершения программы): ");
    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good)
    {
        sum = sum + num;
        printf("Введите следующее целое число (или q для завершения программы): ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("Сумма введенных целых чисел равна %ld.\n", sum);
    
    return 0;
}
