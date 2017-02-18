/* post_pre.c -- постфиксная и префиксная формы */
#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;
    
    a_post = a++;  // значение a++ во время присваивания  
    pre_b = ++b;   // значение ++b во время присваивания  
    printf("a  a_post   b   pre_b \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
    
    return 0;
}
