/* complit.c -- составные литералы */
#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {           // шаблон структуры: book - дескриптор
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book readfirst;
    int score;

    printf("Введите рейтинг: ");
    scanf("%d",&score);

    if(score >= 84)
        readfirst = (struct book) {"Преступление и наказание",
                                   "Федор Достоевский",
                                   11.25};
    else
        readfirst = (struct book) {"Красивая шляпа мистера Баунси",
                                   "Фред Уинсом",
                                    5.99};
    printf("Назначенные вами рейтинги:\n");
    printf("%s by %s: $%.2f\n",readfirst.title,
           readfirst.author, readfirst.value);

    return 0;
}

