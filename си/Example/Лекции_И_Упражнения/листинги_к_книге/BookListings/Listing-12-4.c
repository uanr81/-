/* global.c  -- использование внешней переменной */
#include <stdio.h>
int units = 0;         /* внешняя переменная */
void critic(void);
int main(void)
{
    extern int units;  /* необязательное повторное объявление */

    printf("Сколько фунтов весит маленький бочонок масла?\n");
    scanf("%d", &units);
    while (units != 56)
        critic();
    printf("Вы знали это!\n");

    return 0;
}

void critic(void)
{
    /* необязательное повторное объявление опущено */
    printf("Вам не повезло. Попробуйте еще раз.\n");
    scanf("%d", &units);
}

