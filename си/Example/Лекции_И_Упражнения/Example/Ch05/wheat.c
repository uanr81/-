/* wheat.c -- экспоненциальный рост */
#include <stdio.h>
#define SQUARES 64             // количество клеток шахматной доски
int main(void)
{
    const double CROP = 2E16;  // мировой урожай пшеницы в зернах       
    double current, total;
    int count = 1;
    
    printf("квадрат    добавленно   итого     ");
    printf("процент от  \n");
    printf("           зерен        зерен     ");
    printf("мирового урожая\n");
    total = current = 1.0; /* начинаем с одного зернышка   */
    printf("%4d %13.2e %12.2e %12.2e\n", count, current,
           total, total/CROP);
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;
        /* удвоить количество зерен не следующей клетке */
        total = total + current;     /* обновить итоговую сумму */
        printf("%4d %13.2e %12.2e %12.2e\n", count, current,
               total, total/CROP);
    }
    printf("Вот и всё.\n");
    
    return 0;
}
