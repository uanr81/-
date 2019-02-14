/* addaword.c -- использование fprintf(), fscanf() и rewind() */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void)
{
    FILE *fp;
    char words[MAX];

    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout, "Не удается открыть файл \"wordy\".\n");
        exit(EXIT_FAILURE);
    }

    puts("Введите слова для добавления в файл; для завершения");
    puts("введите символ # в начале строки.");
    while ((fscanf(stdin,"%40s", words) == 1)  && (words[0] != '#'))
        fprintf(fp, "%s\n", words);

    puts("Содержимое файла:");
    rewind(fp);           /* возврат в начало файла */
    while (fscanf(fp,"%s",words) == 1)
        puts(words);
    puts("Готово!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Ошибка при закрытии файла\n");

    return 0;
}

