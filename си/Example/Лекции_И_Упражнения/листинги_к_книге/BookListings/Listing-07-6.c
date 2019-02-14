// chcount.c -- использование логической операции "И"
#include <stdio.h>
#define PERIOD '.'
int main(void)
{
    char ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '"' && ch != '\'')
            charcount++;
    }
    printf("Здесь имеется %d символов, отличных от кавычек.\n", charcount);

    return 0;
}
