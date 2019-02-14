// mall.c -- использует интерфейс Queue
// компилировать вместе с queue.c
#include <stdio.h>
#include <stdlib.h>    // для rand() и srand()
#include <time.h>      // для time()
#include "queue.h"     // измените определение типа Item
#define MIN_PER_HR 60.0

bool newcustomer(double x);   // имеется новый клиент?
Item customertime(long when); // установка параметров клиента

int main(void)
{
    Queue line;
    Item temp;                // данные о новом клиенте
    int hours;                // количество часов моделирования
    int perhour;              // среднее количество прибывающих клиентов в час
    long cycle, cyclelimit;   // счетчик и граничное значение цикла
    long turnaways = 0;       // количество отказов из-за переполненной очереди
    long customers = 0;       // количество клиентов присоединившихся к очереди
    long served = 0;          // количество клиентов, обслуженных за время моделирования
    long sum_line = 0;        // накопительное значение длины очереди
    int wait_time = 0;        // время до освобождения Зигмунда
    double min_per_cust;      // среднее время между прибытиями клиентов
    long line_wait = 0;       // накопительное значение времени в очереди

    InitializeQueue(&line);
    srand((unsigned int) time(0)); // случайная инициализация rand()
    puts("Учебный пример: консультационный киоск Зигмунда Ландера");
    puts("Введите длительность моделирования в часах:");
    scanf("%d", &hours);
    cyclelimit = MIN_PER_HR * hours;
    puts("Введите среднее количество клиентов, прибывающих за час:");
    scanf("%d", &perhour);
    min_per_cust = MIN_PER_HR / perhour;

    for (cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))
        {
            if (QueueIsFull(&line))
                turnaways++;
            else
            {
                customers++;
                temp = customertime(cycle);
                EnQueue(temp, &line);
            }
        }
        if (wait_time <= 0 && !QueueIsEmpty(&line))
        {
            DeQueue (&temp, &line);
            wait_time = temp.processtime;
            line_wait += cycle - temp.arrive;
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line += QueueItemCount(&line);
    }

    if (customers > 0)
    {
        printf("     принятых клиентов: %ld\n", customers);
        printf("  обслуженных клиентов: %ld\n", served);
        printf("               отказов: %ld\n", turnaways);
        printf(" средняя длина очереди: %.2f\n",
               (double) sum_line / cyclelimit);
        printf("среднее время ожидания: %.2f мин\n",
               (double) line_wait / served);
    }
    else
        puts("Клиенты отсутствуют!");
    EmptyTheQueue(&line);
    puts("Программа завершена.");

    return 0;
}

// x - среднее время между прибытием клиентов в минутах
// возвращает true, если клиент появляется в течение данной минуты
bool newcustomer(double x)
{
    if (rand() * x / RAND_MAX < 1)
        return true;
    else
        return false;
}

// when - время прибытия клиента
// функция возвращает структуру Item со временем прибытия,
// установленным в when, и временем обслуживания, 
// установленным в случайное значение из диапазона от 1 до 3
Item customertime(long when)
{
    Item cust;

    cust.processtime = rand() % 3 + 1;
    cust.arrive = when;

    return cust;
}

