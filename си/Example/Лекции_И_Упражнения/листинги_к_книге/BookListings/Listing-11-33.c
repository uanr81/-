/* strcnvt.c -- использование функции strtol() */
#include <stdio.h>
#include <stdlib.h>
#define LIM 30
char * s_gets(char * st, int n);

int main()
{
    char number[LIM];
    char * end;
    long value;

    puts("Введите число (или пустую строку для выхода из программы):");
    while(s_gets(number, LIM) && number[0] != '\0')
    {
        value = strtol(number, &end, 10); /* по основанию 10 */
        printf("десятичный ввод, десятичный вывод: %ld, прекращен на %s (%d)\n",
               value, end, *end);
        value = strtol(number, &end, 16); /* по основанию 16 */
        printf("шестнадцатеричный ввод, шестнадцатеричный вывод: %ld, прекращен на %s (%d)\n",
               value, end, *end);
        puts("Следующее число:");
    }
    puts("Программа завершена.\n");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else  // требуется наличие words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

