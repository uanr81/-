/* usehotel.c -- программа определения стоимости номеров */
/* компилируется вместе с листингом 9.10                 */
#include <stdio.h>
#include "hotel.h" /* определяет константы, объявляет функции */

int main(void)
{
    int nights;
    double hotel_rate;
    int code;

    while ((code = menu()) != QUIT)
    {
        switch(code)
        {
        case 1 : hotel_rate = HOTEL1;
                 break;
        case 2 : hotel_rate = HOTEL2;
                 break;
        case 3 : hotel_rate = HOTEL3;
                 break;
        case 4 : hotel_rate = HOTEL4;
                 break;
        default: hotel_rate = 0.0;
                 printf("Ошибка!\n");
                 break;
        }
        nights = getnights();
        showprice(hotel_rate, nights);
    }
    printf("Благодарим за использование и желаем успехов.\n");

    return 0;
}
