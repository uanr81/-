/* scan_str.c -- использование функции scanf() */
#include <stdio.h>
int main(void)
{
    char name1[11], name2[11];
    int count;
    
    printf("Введите два имени.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("Прочитано %d имени: %s и %s.\n",
           count, name1, name2);
    
    return 0;
}

