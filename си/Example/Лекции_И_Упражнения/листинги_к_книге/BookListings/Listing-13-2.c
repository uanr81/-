// reducto.c -- сокращение файлов на две трети!
#include <stdio.h>
#include <stdlib.h>    // для exit()
#include <string.h>

int main(int argc, char *argv[])
{
    FILE  *in, *out;   // объявление двух указателей на FILE
    int ch;
    char name[LEN];    // хранилище для имени выходного файла
    int count = 0;

    // проверка аргументов командной строки
    if (argc < 2)
    {
        fprintf(stderr, "Использование: %s имя_файла\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    // настройка ввода
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Не удается открыть файл \"%s\"\n",
                argv[1]);
        exit(EXIT_FAILURE);
    }
    // настройка вывода
    strncpy(name,argv[1], LEN - 5); // копирование имени файла
    name[LEN - 5] = '\0';
    strcat(name,".red");            // добавление .red
    if ((out = fopen(name, "w")) == NULL)
    {                               // открытие файла для записи
        fprintf(stderr, "Не удается создать выходной файл.\n");
        exit(3);
    }
    // копирование данных
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);  // выводить каждый третий символ
    // очистка
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Ошибка при закрытии файлов.\n");

    return 0;
}

