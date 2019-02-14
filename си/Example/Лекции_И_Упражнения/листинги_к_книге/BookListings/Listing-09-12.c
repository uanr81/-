/* loccheck.c -- проверка для выяснения, где хранятся переменные */
#include <stdio.h>
void mikado(int);                       /* объявление функции */
int main(void)
{
    int pooh = 2, bah = 5;              /* локальные для main() */

    printf("Внутри main() pooh = %d и &pooh = %p\n",
            pooh, &pooh);
    printf("Внутри main() bah = %d и &bah = %p\n",
            bah, &bah);
    mikado(pooh);

    return 0;
}

void mikado(int bah)                    /* определение функции */
{
    int pooh = 10;                      /* локальная для mikado() */
    printf("Внутри mikado() pooh = %d и &pooh = %p\n",
            pooh, &pooh);
    printf("Внутри mikado() bah = %d и &bah = %p\n",
            bah, &bah);
}
