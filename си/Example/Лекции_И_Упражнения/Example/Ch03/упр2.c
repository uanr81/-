#include <stdio.h>
int main(void)
{
  int number;
    
    printf("Введите значение кода ASCII : ");
    scanf("%d", &number);
    printf("Значению %d в ASCII коде, соответствует символ %c\n", number, number);
    
    return 0;
}
