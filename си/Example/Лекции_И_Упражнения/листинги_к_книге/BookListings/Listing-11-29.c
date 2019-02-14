/* sort_str.c -- считывает строки и сортирует их */
#include <stdio.h>
#include <string.h>
#define SIZE 81          /* лимит на длину строки, включая \0      */
#define LIM 20           /* максимальное количество читаемых строк */
#define HALT ""          /* нулевая строка для прекращения ввода   */
void stsrt(char *strings[], int num);  /* функция сортировки строк */
char * s_gets(char * st, int n);

int main(void)
{
    char input[LIM][SIZE];     /* массив для сохранения входных данных */
    char *ptstr[LIM];          /* массив переменных типа указателя     */
    int ct = 0;                /* счетчик ввода                        */
    int k;                     /* счетчик вывода                       */

    printf("Введите до %d строк, и они будут отсортированы.\n",LIM);
    printf("Чтобы остановить ввод, нажмите клавишу Enter в начале строки.\n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL
           && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];  /* установка указателей на строки */
        ct++;
    }
    stsrt(ptstr, ct);           /* сортировщик строк              */
    puts("\nОтсортированный список:\n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);         /* отсортированные указатели      */
        
    return 0;
}

/* функция сортировки указателей на строки */
void stsrt(char *strings[], int num)
{
    char *temp;
    int top, seek;

    for (top = 0; top < num-1; top++)
        for (seek = top + 1; seek < num; seek++)
            if (strcmp(strings[top],strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
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

