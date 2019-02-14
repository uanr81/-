/* use_q.c -- тестирование интерфейса Queue с помощью драйвера */
/* компилировать вместе с queue.c                              */
#include <stdio.h>
#include "queue.h"  /* определение Queue, Item                 */

int main(void)
{
    Queue line;
    Item temp;
    char ch;

    InitializeQueue(&line);
    puts("Тестирование интерфейса Queue. Введите a, чтобы добавить значение,");
    puts("введите d, чтобы удалить значение, или введите q для выхода из программы.");
    while ((ch = getchar()) != 'q')
    {
        if (ch != 'a' && ch != 'd')   /* игнорировать другие вводимые данные */
            continue;
        if ( ch == 'a')
        {
            printf("Целое число для добавления: ");
            scanf("%d", &temp);
            if (!QueueIsFull(&line))
            {
                printf("Помещение %d в очередь\n", temp);
                EnQueue(temp,&line);
            }
           else
               puts("Очередь полна!");
        }
        else
        {
            if (QueueIsEmpty(&line))
                puts("Элементы для удаления отсутствуют!");
            else
            {
                 DeQueue(&temp,&line);
                 printf("Удаление %d из очереди\n", temp);
            }
        }
        printf("%d элемент(ов) в очереди\n", QueueItemCount(&line));
        puts("Введите a, чтобы добавить, d, чтобы удалить, или q для выхода из программы:");
    }
    EmptyTheQueue(&line);
    puts("Программа завершена.");

    return 0;
}

