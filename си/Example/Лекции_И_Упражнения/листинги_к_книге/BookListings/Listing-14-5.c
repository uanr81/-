/* funds1.c -- передача членов структуры в качестве аргументов */
#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum(double, double);

int main(void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };

    printf("Общая сумма на счетах у Стэна составляет $%.2f.\n",
           sum(stan.bankfund, stan.savefund) );
    return 0;
}

/* суммирование двух чисел типа double */
double sum(double x, double y)
{
    return(x + y);
}

