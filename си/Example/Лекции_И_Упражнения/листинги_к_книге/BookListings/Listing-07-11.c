/* animals.c -- использование оператора switch */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("Дайте мне букву алфавита, и я укажу вам ");
    printf("название животного,\nначинающееся с этой буквы.\n");
    printf("Введите букву или # для завершения.\n");
    while ((ch = getchar()) != '#')
    {
        if('\n' == ch)
            continue;
        if (islower(ch)) /* только строчные буквы */
            switch (ch)
            {
            case 'а' :
                printf("архар, дикий горный азиатский баран\n");
                break;
            case 'б' :
                printf("бабирусса, дикая малайская свинья\n");
                break;
            case 'к' :
                printf("коати, носуха обыкновенная\n");
                break;
            case 'в' :
                printf("выхухоль, водоплавающее существо\n");
                break;
            case 'е' :
                printf("ехидна, игольчатый муравьед\n");
                break;
            case 'р' :
                printf("рыболов, светло-коричневая куница\n");
                break;
                default :
                printf("Вопрос озадачил!\n");
            }           /* конец оператора выбора */
        else
            printf("Распознаются только строчные буквы.\n");
        while (getchar() != '\n')
            continue;   /* пропустить оставшуюся часть входной строки */
        printf("Введите следующую букву или # для завершения.\n");
    }                   /* конец цикла while */
    printf("До свидания.\n");

    return 0;
}
