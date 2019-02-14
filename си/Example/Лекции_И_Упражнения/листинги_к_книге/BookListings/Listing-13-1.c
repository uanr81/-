/* count.c -- использование стандартного ввода-вывода */
#include <stdio.h>
#include <stdlib.h> // прототип exit()

int main(int argc, char *argv[])
{
    int ch;         // место для хранения каждого символа по мере чтения
    FILE *fp;       // "указатель файла"
    unsigned long count = 0;
    if (argc != 2)
    {
        printf("Использование: %s имя_файла\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Не удается открыть %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch,stdout);  // то же, что и putchar(ch);
        count++;
    }
    fclose(fp);
    printf("Файл %s содержит %lu символов\n", argv[1], count);

    return 0;
}

