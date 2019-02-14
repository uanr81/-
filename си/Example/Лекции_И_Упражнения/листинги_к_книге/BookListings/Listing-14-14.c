/* booksave.c -- сохранение содержимого структуры в файле */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10               /* максимальное количество книг */
char * s_gets(char * st, int n);
struct book {                   /* определение шаблона book */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS]; /* массив структур */
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof (struct book);
    if ((pbooks = fopen("book.dat", "a+b")) == NULL)
    {
        fputs("Не удается открыть файл book.dat\n",stderr);
        exit(1);
    }

    rewind(pbooks);             /* переход в начало файла */
    while (count < MAXBKS && fread(&library[count], size,
                                   1, pbooks) == 1)
    {
        if (count == 0)
            puts("Текущее содержимое файла book.dat:");
        printf("%s авторства %s: $%.2f\n",library[count].title,
               library[count].author, library[count].value);
        count++;
    }
    filecount = count;
    if (count == MAXBKS)
    {
        fputs("Файл book.dat заполнен.", stderr);
        exit(2);
    }

    puts("Введите названия новых книг.");
    puts("Нажмите [enter] в начале строки, чтобы закончить ввод.");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
           && library[count].title[0] != '\0')
    {
        puts("Теперь введите имя автора.");
        s_gets(library[count].author, MAXAUTL);
        puts("Теперь введите цену книги.");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;           /* очистить входную строку */
        if (count < MAXBKS)
            puts("Введите название следующей книги.");
    }

    if (count > 0)
    {
        puts("Каталог ваших книг:");
        for (index = 0; index < count; index++)
            printf("%s авторства %s: $%.2f\n",library[index].title,
                   library[index].author, library[index].value);
        fwrite(&library[filecount], size, count - filecount,
                   pbooks);
    }
    else
        puts("Вообще нет книг? Очень плохо.\n");

    puts("Программа завершена.\n");
    fclose(pbooks);

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');    // поиск новой строки
        if (find)                   // если адрес не равен NULL,
            *find = '\0';           // поместить туда нулевой символ
        else
            while (getchar() != '\n')
                continue;           // отбросить остаток строки
    }
    return ret_val;
}

