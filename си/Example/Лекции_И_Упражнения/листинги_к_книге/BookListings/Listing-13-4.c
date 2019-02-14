/* reverse.c -- отображение содержимого файла в обратном порядке */
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'   /* маркер конца файла в текстовых файлах DOS */
#define SLEN 81
int main(void)
{
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;

    puts("Введите имя файла для обработки:");
    scanf("%80s", file);
    if ((fp = fopen(file,"rb")) == NULL)
    {                                /* режим только для чтения          */
        printf("reverse не удается открыть %s\n", file);
        exit(EXIT_FAILURE);
    }

    fseek(fp, 0L, SEEK_END);         /* перейти в конец файла            */
    last = ftell(fp);
    for (count = 1L; count <= last; count++)
    {
        fseek(fp, -count, SEEK_END); /* двигаться в обратном направлении */
        ch = getc(fp);
        if (ch != CNTL_Z && ch != '\r')  /* файлы MS-DOS */
            putchar(ch);
    }
    putchar('\n');
    fclose(fp);

    return 0;
}

