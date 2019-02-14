/* proto.c -- использует прототипы функции */
#include <stdio.h>
int imax(int, int);        /* прототип */
int main(void)
{
    printf("Наибольшим значением из %d и %d является %d.\n",
            3, 5, imax(3));
    printf("Наибольшим значением из %d и %d является %d.\n",
            3, 5, imax(3.0, 5.0));
    return 0;
}

int imax(int n, int m)
{
    return (n > m ? n : m);
}
