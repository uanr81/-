// glue.c -- использование операции ##
#include <stdio.h>
#define XNAME(n) x ## n
#define PRINT_XN(n) printf("x" #n " = %d\n", x ## n);

int main(void)
{
    int XNAME(1) = 14;  // превращается в int x1 = 14;
    int XNAME(2) = 20;  // превращается в int x2 = 20;
    int x3 = 30;

    PRINT_XN(1);        // превращается в printf("x1 = %d\n", x1);
    PRINT_XN(2);        // превращается в printf("x2 = %d\n", x2);
    PRINT_XN(3);        // превращается в printf("x3 = %d\n", x3);

    return 0;
}
