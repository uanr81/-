// pnt_add.c -- сложение указателей
#include <stdio.h>
#define SIZE 4
int main(void)
{
    short dates [SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
    
    pti = dates;    // присваивание указателю адреса масива
    ptf = bills;
    printf("%23s %15s\n", "short", "double");
    for (index = 0; index < SIZE; index ++)
        printf("указатели + %d: %10p %10p\n",
               index, pti + index, ptf + index);
    
    return 0;
}
