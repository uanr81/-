/* swap1.c -- первая попытка создания функции обмена значениями */
#include <stdio.h>
void interchange(int u, int v); /* объявление функции */

int main(void)
{
    int x = 5, y = 10;

    printf("Первоначально x = %d и y = %d.\n", x , y);
    interchange(x, y);
    printf("Теперь x = %d и y = %d.\n", x, y);

    return 0;
}

void interchange(int u, int v) /* определение функции */
{
    int temp;

    temp = u;
    u = v;
    v = temp;
}
