/* starsrch.c -- использование функции strncmp() */
#include <stdio.h>
#include <string.h>
#define LISTSIZE 6
int main()
{
    const char * list[LISTSIZE] =
    { 
        "астрономия", "астатизм",
        "астрофизика", "остракизм",
        "астеризм", "астролябия"
    };
    int count = 0;
    int i;

    for (i = 0; i < LISTSIZE; i++)
        if (strncmp(list[i],"astro", 5) == 0)
        {
            printf("Найдено: %s\n", list[i]);
            count++;
        }
    printf("Количество слов в списке,"
           " начинающихся с астро: %d\n", count);

    return 0;
}

