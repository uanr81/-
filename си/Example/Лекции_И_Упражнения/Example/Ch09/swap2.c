/* swap2.c -- исследование программы swap1.c */
#include <stdio.h>
void interchange(int u, int v);

int main(void)
{
    int x = 5, y = 10;
    
    printf("Первоначально x = %d и y = %d.\n", x , y);
    interchange(x, y);
    printf("Теперь x = %d и y = %d.\n", x, y);
    
    return 0;
}

void interchange(int u, int v)
{
    int temp;
    
    printf("Первоначально u = %d и v = %d.\n", u , v);
    temp = u;
    u = v;
    v = temp;
    printf("Теперь u = %d и v = %d.\n", u, v);
}
