/* break.c -- использование оператора break для выхода из цикла */
#include <stdio.h>
int main(void)
{
    float length, width;

    printf("Введите длину прямоугольника:\n");
    while (scanf("%f", &length) == 1)
    {
        printf("Длина = %0.2f:\n", length);
        printf("Введите ширину прямоугольника:\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("Ширина = %0.2f:\n", width);
        printf("Площадь = %0.2f:\n", length * width);
        printf("Введите длину прямоугольника:\n");
    }
    printf("Программа завершена.\n");

    return 0;
}
