/* while2.c -- правильно расставляйте точки с запятой */
#include <stdio.h>
int main(void)
{
    int n = 0;

    while (n++ < 3);                /* строка 7 */
        printf("n равно %d\n", n);  /* строка 8 */
    printf("Это все, что делает данная программа.\n");

    return 0;
}
