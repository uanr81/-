/* mod_str.c -- модифицирует строку */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
    char line[LIMIT];
    char * find;

    puts("Введите строку:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n');  // поиск символа новой строки
    if (find)                   // если адрес не является NULL,
        *find = '\0';           // поместить туда нулевой символ
    ToUpper(line);
    puts(line);
    printf("Эта строка содержит %d знаков препинания.\n",
           PunctCount(line));
           
    return 0;
}

void ToUpper(char * str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char * str)
{
    int ct = 0;
    while (*str)
    {
        if (ispunct(*str))
            ct++;
        str++;
    }
    
    return ct;
}

