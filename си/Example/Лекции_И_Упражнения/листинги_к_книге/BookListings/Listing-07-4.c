// electric.c -- подсчитывает сумму дл¤ счета за электроэнергию
#include <stdio.h>
#define RATE1 0.13230         // тариф за первые 360 к¬т/ч
#define RATE2 0.15040         // тариф за следующие 108 к¬т/ч
#define RATE3 0.30025         // тариф за следующие 252 к¬т/ч
#define RATE4 0.34025         // тариф, когда расход превышает 720 к¬т/ч
#define BREAK1 360.0          // перва¤ точка разрыва тарифов
#define BREAK2 468.0          // втора¤ точка разрыва тарифов
#define BREAK3 720.0          // треть¤ точка разрыва тарифов
#define BASE1 (RATE1 * BREAK1)
// стоимость 360 к¬т/ч
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
// стоимость 468 к¬т/ч
#define BASE3 (BASE1 + BASE2 + (RATE3 *(BREAK3 - BREAK2)))
// стоимость 720 к¬т/ч
int main(void)
{
    double kwh;               // израсходованные киловатт-часы
    double bill;              // сумма к оплате

    printf("¬ведите объем израсходованной электроэнергии в к¬т/ч.\n");
    scanf("%lf", &kwh);       // %lf дл¤ типа double
    if (kwh <= BREAK1)
        bill = RATE1 * kwh;
    else if (kwh <= BREAK2)   // количество к¬т/ч в промежутке от 360 до 468
        bill = BASE1 + (RATE2 * (kwh - BREAK1));
    else if (kwh <= BREAK3)   // количество к¬т/ч в промежутке от 468 до 720
        bill = BASE2 + (RATE3 * (kwh - BREAK2));
    else                      // количество к¬т/ч превышает 680
        bill = BASE3 + (RATE4 * (kwh - BREAK3));
    printf("—умма к оплате за %.1f к¬т/ч составл¤ет $%1.2f.\n", kwh, bill);

    return 0;
}
