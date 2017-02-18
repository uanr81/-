// when.c -- когда цикл завершается?
#include <stdio.h>
int main(void)
{
    int n = 5;
    
    while (n < 7)                    // line 7
    {
        printf("n = %d\n", n);
        n++;                         // line 10
        printf("Теперь n = %d\n", n);   // line 11
    }
    printf("Цикл завершен.\n");
    
    return 0;
}
