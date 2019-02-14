/* byebye.c -- пример применения atexit() */
#include <stdio.h>
#include <stdlib.h>
void sign_off(void);
void too_bad(void);

int main(void)
{
    int n;

    atexit(sign_off);     /* регистрация функции sign_off() */
    puts("Введите целое число:");
    if (scanf("%d",&n) != 1)
    {
        puts("Это не целое число!");
        atexit(too_bad);  /* регистрация функции too_bad() */
        exit(EXIT_FAILURE);
    }
    printf("%d является %s.\n", n,  (n % 2 == 0)? "четным" : "нечетным");

    return 0;
}

void sign_off(void)
{
    puts("Завершение работы очередной замечательной программы от");
    puts("SeeSaw Software!");
}

void too_bad(void)
{
    puts("SeeSaw Software приносит искренние соболезнования");
    puts("в связи с отказом программы.");
}
