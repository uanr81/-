// scores_in.c -- использование циклов для обработки массивов
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;
    
    printf("Введите %d результатов игры в гольф:\n", SIZE);
    for (index = 0; index < SIZE; index++)
        scanf("%d", &score[index]);  // чтение 10 результатов игры в гольф
    printf("Введены следущие результаты:\n");
    for (index = 0; index < SIZE; index++)
        printf("%5d", score[index]); // проверка введенной информации
    printf("\n");
    for (index = 0; index < SIZE; index++)
        sum += score[index];         // сложение результатов
    average = (float) sum / SIZE;    // проверенный временем метод
    printf("Сумма результатов = %d, среднее значение = %.2f\n", sum, average);
    printf("Полученный гандикап равен %.0f.\n", average - PAR);
    
    return 0;
}
