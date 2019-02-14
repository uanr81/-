/* names2.c -- передает и возвращает структуры */
#include <stdio.h>
#include <string.h>

#define NLEN 30
struct namect {
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(struct namect);
char * s_gets(char * st, int n);
int main(void)
{
    struct namect person;

    person = getinfo();
    person = makeinfo(person);
    showinfo(person);

    return 0;
}

struct namect getinfo(void)
{
    struct namect temp;
    printf("Введите свое имя.\n");
    s_gets(temp.fname, NLEN);
    printf("Введите свою фамилию.\n");
    s_gets(temp.lname, NLEN);
    return temp;
}

struct namect makeinfo(struct namect info)
{
    info.letters = strlen(info.fname) + strlen(info.lname);
    return info;
}
void showinfo(struct namect info)
{
    printf("%s %s, ваше имя и фамилия содержат %d букв.\n",
           info.fname, info.lname, info.letters);
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n'); // поиск новой строки
        if (find)                // если адрес не равен NULL,
            *find = '\0';        // поместить туда нулевой символ
        else
            while (getchar() != '\n')
                continue;        // отбросить остаток строки
    }
    return ret_val;
}

