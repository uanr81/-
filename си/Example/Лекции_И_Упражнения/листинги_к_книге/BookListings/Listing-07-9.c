/* skippart.c -- использование оператора continue для пропуска части цикла */
#include <stdio.h>
int main(void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("Введите результат первой игры (или q для завершения): ");
    while (scanf("%f", &score) == 1)
    {
        if (score < MIN || score > MAX)
        {
            printf("%0.1f - недопустимое значение. Повторите попытку: ",
                    score);
            continue;  // переход к условию проверки цикла while
        }
        printf("Accepting %0.1f:\n", score);
        min = (score < min)? score: min;
        max = (score > max)? score: max;
        total += score;
        n++;
        printf("Введите результат следующей игры (или q для завершения): ");
    }
    if (n > 0)
    {
        printf("Среднее значение %d результатов равно %0.1f.\n", n, total / n);
        printf("Минимальное = %0.1f, максимальное = %0.1f\n", min, max);
    }
    else
        printf("Не было введено ни одного допустимого результата.\n");
    return 0;
}
