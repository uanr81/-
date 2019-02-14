/* manydice.c -- бросание множества костей                           */
/* компилировать вместе с diceroll.c                                 */
#include <stdio.h>
#include <stdlib.h>              /* для библиотечной функции srand() */
#include <time.h>                /* для функции time()               */
#include "diceroll.h"            /* для функции roll_n_dice()        */
                                 /* и для переменной roll_count      */
int main(void)
{
    int dice,roll;
    int sides;

    srand((unsigned int) time(0)); /* рандомизация начального числа */
    printf("Введите количество граней кости или 0 для завершения программы.\n");
    while (scanf("%d", &sides) == 1 && sides > 0 )
    {
        printf("Сколько костей?\n");
        if ((status =scanf("%d", &dice)) != 1)
        {
            if (status == EOF)
                break;             /* выход из цикла             */
            else
            {
                printf("Вы должны ввести целое число.");
                printf(" Давайте начнем с начала.\n");
                while (getchar() != '\n')
                    continue;     /* отбросить некорректный ввод */
                printf("Сколько граней? Для прекращения введите 0.\n");
                continue;         /* новая итерация цикла        */
             }
        }
        roll = roll_n_dice(dice, sides);
        printf("Вы бросали %d раз(а), используя %d кости с %d гранями.\n",
               roll, dice, sides);
        printf("Сколько граней? Для прекращения введите 0.\n");
    }
    printf("Функция rollem() была вызвана %d раз(а).\n",
           roll_count);           /* используется переменная extern */

    printf("Пусть удача не покидает вас!\n");

    return 0;
}

